import json
import re
import markdown
import os
import cgi
import urllib
import time
import functools
import logging

from flask import Flask, render_template, request, make_response, session
import sys

from ideone import Ideone

import constants


courses = json.load(open("courses.json"))

# Flask app
app = Flask(__name__)
app.secret_key = constants.SECRET_KEY

sections = re.compile(r"Tutorial\n[=\-]+\n+(.*)\n*Tutorial Code\n[=\-]+\n+(.*)\n*Expected Output\n[=\-]+\n+(.*)\n*Solution\n[=\-]+\n*(.*)\n*", re.MULTILINE | re.DOTALL)
WIKI_WORD_PATTERN = re.compile('\[\[([^]|]+\|)?([^]]+)\]\]')

current_domain = constants.LEARNPYTHON_DOMAIN

if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-d",
        "--domain",
        help="Default domain when running in development mode",
        default=constants.LEARNPYTHON_DOMAIN,
        required=True,
        choices=constants.DOMAIN_DATA.keys()
    )

    parser.add_argument("-p", "--port", help="port to listen to", default=5000, type=int)

    args = parser.parse_args()
    current_domain = args.domain

LANGUAGES = {
    "en": "English",
    "pl": "Polish",
    "fa": "Persian",
    "es": "Spanish",
    "it": "Italian",
    "de": "German",
    "cn": "Chinese",
    "fr": "French",
    "pt": "Portugese",
}

tutorial_data = {}


def run_code(code, language):
    ideone_api = Ideone(
        constants.IDEONE_USERNAME,
        constants.IDEONE_PASSWORD,
        api_url='http://ronreiter.compilers.sphere-engine.com/api/1/service.wsdl')

    code = ideone_api.create_submission(code, language_name=language, std_input="")["link"]
    result = None

    while True:
        time.sleep(1)
        result = ideone_api.submission_details(code)
        if result["status"] in [1,3]:
            continue

        break

    data = { "code" : code }
    if result["stderr"] or result["cmpinfo"]:
        data["output"] = "exception"
        if result["cmpinfo"]:
            data["text"] = result["cmpinfo"]
        elif result["stderr"]:
            data["text"] = result["stderr"]
    else:
        data["output"] = "text"
        data["text"] = result["output"]

    return data


def pageurl(value, language):
    if value.startswith("http"):
        return value
    else:
        return urllib.quote("/%s/%s" % (language, value.replace(' ', '_')))


def _wikify_one(language, pat):
    """
    Wikifies one link.
    """
    page_title = pat.group(2)
    if pat.group(1):
        page_name = pat.group(1).rstrip('|')
    else:
        page_name = page_title

    # interwiki
    if ':' in page_name and not page_name.startswith("http"):
        parts = page_name.split(':', 2)
        if page_name == page_title:
            page_title = parts[1]

    link = "<a href='%s'>%s</a>" % (pageurl(page_name, language), page_title)
    return link


def wikify(text, language):
    text, count = WIKI_WORD_PATTERN.subn(functools.partial(_wikify_one, language), text)
    return markdown.markdown(text.decode("utf-8")).strip()


def untab(text):
    lines = text.strip("\n").split("\n")
    if not all([x.startswith("    ") or x == "" for x in lines]):
        return "\n".join(lines)

    return "\n".join([x[4:] if len(x) >= 4 else "" for x in lines])


def init_tutorials():
    contributing_tutorials = wikify(open(os.path.join(os.path.dirname(__file__), "tutorials", "Contributing Tutorials.md")).read(), "en")

    for domain in os.listdir(os.path.join(os.path.dirname(__file__), "tutorials")):
        if domain.endswith(".md"):
            continue

        logging.info("loading data for domain: %s", domain)
        tutorial_data[domain] = {}
        if not os.path.isdir(os.path.join(os.path.dirname(__file__), "tutorials", domain)):
            continue

        if domain not in constants.DOMAIN_DATA:
            logging.warn("skipping domain %s beacause no domain data exists" % domain)
            continue

        for language in os.listdir(os.path.join(os.path.dirname(__file__), "tutorials", domain)):
            tutorial_data[domain][language] = {}

            tutorials_path = os.path.join(os.path.dirname(__file__), "tutorials", domain, language)
            if not os.path.isdir(tutorials_path):
                continue

            tutorials = os.listdir(tutorials_path)

            # place the index file first
            tutorials.remove("Welcome.md")
            tutorials = ["Welcome.md"] + tutorials
            for tutorial_file in tutorials:
                if not tutorial_file.endswith(".md"):
                    continue

                tutorial = tutorial_file[:-3]
                logging.debug("loading tutorial %s" % tutorial)

                if not tutorial in tutorial_data[domain][language]:
                    tutorial_data[domain][language][tutorial] = {}

                tutorial_dict = tutorial_data[domain][language][tutorial]

                try:
                    tutorial_dict["text"] = open(os.path.join(os.path.dirname(__file__), "tutorials", domain, language, tutorial_file)).read().replace("\r\n", "\n")
                except Exception, e:
                    tutorial_dict["text"] = "There was an error reading the tutorial. Exception: %s" % e.message

                # create links by looking at all lines that are not code lines
                stripped_text = "\n".join([x for x in tutorial_dict["text"].split("\n") if not x.startswith("    ")])
                links = [x[0].strip("|") if x[0] else x[1] for x in WIKI_WORD_PATTERN.findall(stripped_text)]
                tutorial_dict["links"] = links

                tutorial_sections = sections.findall(tutorial_dict["text"])
                if tutorial_sections:
                    text, code, output, solution = tutorial_sections[0]
                    tutorial_dict["page_title"] = tutorial.decode("utf8")
                    tutorial_dict["text"] = wikify(text, language)
                    tutorial_dict["code"] = untab(code)
                    tutorial_dict["output"] = untab(output)
                    tutorial_dict["solution"] = untab(solution)
                    tutorial_dict["is_tutorial"] = True
                else:
                    tutorial_dict["page_title"] = ""
                    tutorial_dict["text"] = wikify(tutorial_dict["text"], language)
                    tutorial_dict["code"] = constants.DOMAIN_DATA[domain]["default_code"]
                    tutorial_dict["is_tutorial"] = False

                for link in links:
                    if not link in tutorial_data[domain][language]:
                        tutorial_data[domain][language][link] = {
                            "page_title" : link.decode("utf8"),
                            "text": contributing_tutorials,
                            "code": ""
                        }

                    if not "back_chapter" in tutorial_data[domain][language][link]:
                        tutorial_data[domain][language][link]["back_chapter"] = tutorial.decode("utf-8").replace(" ", "_")
                    elif not link.startswith("http"):
                        logging.info("Warning! duplicate links to tutorial %s from tutorial %s/%s", link, language, tutorial)

                    num_links = len(links)
                    page_index = links.index(link)
                    if page_index > 0:
                        if not "previous_chapter" in tutorial_data[domain][language][link]:
                            tutorial_data[domain][language][link]["previous_chapter"] = links[page_index - 1].decode("utf-8").replace(" ", "_")
                    if page_index < (num_links - 1):
                        if not "next_chapter" in tutorial_data[domain][language][link]:
                            tutorial_data[domain][language][link]["next_chapter"] = links[page_index + 1].decode("utf-8").replace(" ", "_")


init_tutorials()


def get_languages():
    return sorted(tutorial_data[get_host()].keys())


def get_host():
    if is_development_mode():
        return current_domain

    return request.host[4:] if request.host.startswith("www.") else request.host


def is_development_mode():
    return "localhost" in request.host or "127.0.0.1" in request.host


def get_domain_data():
    data = constants.DOMAIN_DATA[get_host()]
    data["courses"] = courses.get(get_host())
    return data


def get_tutorial_data(tutorial_id, language="en"):
    logging.warn(tutorial_data[get_host()][language].keys())
    return tutorial_data[get_host()][language][tutorial_id]


def get_tutorial(tutorial_id, language="en"):
    td = get_tutorial_data(tutorial_id, language)

    if not td:
        return {
            "page_title": cgi.escape(tutorial_id),
            "text": "Page not found."
        }
    else:
        return td


def error404():
    domain_data = get_domain_data()
    return make_response(render_template(
        "error404.html",
        domain_data=domain_data,
        all_data=constants.DOMAIN_DATA,
        language_code="en",
        languages=get_languages(),
    ), 404)


@app.route("/favicon.ico")
def favicon():
    return open(os.path.join(os.path.dirname(__file__), get_domain_data()["favicon"][1:]), "rb").read()

@app.route("/", methods=["GET", "POST"])
@app.route("/<language>/", methods=["GET", "POST"])
def default_index(language="en"):
    return index("Welcome", language)

@app.route("/about")
@app.route("/privacy")
@app.route("/tos")
def static_file():
    return make_response(render_template(
        request.path.strip("/") + ".html",
        domain_data=get_domain_data(),
        all_data=constants.DOMAIN_DATA,
        domain_data_json=json.dumps(get_domain_data()),
        language_code="en",
    ))

@app.route("/signin")
def signin():
    email = request.args.get("email", None)
    password = request.args.get("password", None)
    user = users.findOne({"email": email})

    if user:
        session["user_id"] = str(user._id)
        return make_response(json.dumps({"status": "error", "error": "no_user"}))

@app.route("/signup")
def signup():
    email = request.args.get("email", None)
    password = request.args.get("password", None)
    confirm = request.args.get("confirm", None)

    if not email or not password or not confirm:
        return make_response(json.dumps({"status": "error", "error": "missing_field"}))

    if not re.findall("^[_a-z0-9-]+(\.[_a-z0-9-]+)*@[a-z0-9-]+(\.[a-z0-9-]+)*(\.[a-z]{2,4})$", email):
        return make_response(json.dumps({"status": "error", "error": "invalid_email"}))

    if password != confirm:
        return make_response(json.dumps({"status": "error", "error": "passwords_dont_match"}))

    id = users.insert({
        "email": email,
        "password": password,
    })

    session["user_id"] = str(id)


@app.route("/<language>/progress")
def progress(language):
    return make_response(render_template(
        "progress.html",
        domain_data=get_domain_data(),
        all_data=constants.DOMAIN_DATA,
    ))

@app.route("/<title>", methods=["GET", "POST"])
@app.route("/<language>/<title>", methods=["GET", "POST"])
def index(title, language="en"):
    tutorial = title.replace("_", " ").encode("utf-8")
    try:
        current_tutorial_data = get_tutorial(tutorial, language)
    except KeyError:
        return error404()
    domain_data = get_domain_data()
    domain_data["language_code"] = language

    if request.method == "GET":
        title_suffix = "Learn %s - Free Interactive %s Tutorial" % (domain_data["language_uppercase"], domain_data["language_uppercase"])
        html_title = "%s - %s" % (title.replace("_", " "), title_suffix) if title != "Welcome" else title_suffix

        if not "uid" in session:
            session["uid"] = os.urandom(16).encode("hex")

        uid = session["uid"]

        return make_response(render_template(
            "index-python.html" if (language == "en" and domain_data["language"] == "python") else "index.html",
            tutorial_page=tutorial != "Welcome",
            domain_data=domain_data,
            all_data=constants.DOMAIN_DATA,
            tutorial_data=current_tutorial_data,
            tutorial_data_json=json.dumps(current_tutorial_data),
            domain_data_json=json.dumps(domain_data),
            html_title=html_title,
            language_code=language,
            language_name=LANGUAGES[language],
            languages=get_languages(),
            uid=uid,
            **current_tutorial_data
        ))

    # POST method handling
    data = run_code(request.json["code"], request.json["language"])

    if "output" in current_tutorial_data and current_tutorial_data["output"] == data["output"]:
        data["solved"] = True


    else:
        data["solved"] = False

    return make_response(json.dumps(data))


@app.route("/robots.txt")
def robots():
    return make_response("User-agent: *\nAllow: /")

if __name__ == "__main__":
    logging.info("listening on port %s", args.port)
    app.run(debug=True, port=args.port)
