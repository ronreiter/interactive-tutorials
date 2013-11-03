from flask import Flask, render_template, request, url_for, make_response
import json
import constants
import re
import markdown
import os
import cgi
import urllib

app = Flask(__name__)

sections = re.compile(r"Tutorial\n[=\-]+\n+(.*)\n*Tutorial Code\n[=\-]+\n+(.*)\n*Expected Output\n[=\-]+\n+(.*)\n*", re.MULTILINE | re.DOTALL)
WIKI_WORD_PATTERN = re.compile('\[\[([^]|]+\|)?([^]]+)\]\]')

tutorial_data = {}

def pageurl(value):
    if type(value) == unicode:
        value = value.encode('utf-8')
    elif type(value) != str:
        value = str(value)
    return '/' + urllib.quote(value.replace(' ', '_'))

def _wikify_one(pat):
    """
    Wikifies one link.
    """
    page_title = pat.group(2)
    if pat.group(1):
        page_name = pat.group(1).rstrip('|')
    else:
        page_name = page_title

    # interwiki
    if ':' in page_name:
        parts = page_name.split(':', 2)
        if page_name == page_title:
            page_title = parts[1]

    return '<a class="int" href="%s">%s</a>' % (pageurl(page_name), page_title)


def wikify(text):
    text, count = WIKI_WORD_PATTERN.subn(_wikify_one, text)
    return markdown.markdown(text.decode("utf-8")).strip()

def init_tutorials():
    for domain in os.listdir("tutorials"):
        tutorial_data[domain] = {}
        if not os.path.isdir(os.path.join(os.path.dirname(__file__), "tutorials", domain)):
            continue

        for tutorial_file in os.listdir(os.path.join(os.path.dirname(__file__), "tutorials", domain)):
            if not tutorial_file.endswith(".md"):
                continue

            tutorial = tutorial_file[:-3]
            if not tutorial in tutorial_data[domain]:
                tutorial_data[domain][tutorial] = {}

            tutorial_data[domain][tutorial]["text"] = open(os.path.join(os.path.dirname(__file__), "tutorials", domain, tutorial_file)).read().replace("\r\n", "\n")
            links = [x[1] for x in WIKI_WORD_PATTERN.findall(tutorial_data[domain][tutorial]["text"])]
            tutorial_data[domain][tutorial]["links"] = links

            tutorial_sections = sections.findall(tutorial_data[domain][tutorial]["text"])
            if tutorial_sections:
                text, code, output = tutorial_sections[0]
                tutorial_data[domain][tutorial]["page_title"] = tutorial
                tutorial_data[domain][tutorial]["text"] = wikify(text)
                tutorial_data[domain][tutorial]["code"] = code.replace("\t", "").strip()
                tutorial_data[domain][tutorial]["output"] = output.replace("\t", "").strip()
            else:
                tutorial_data[domain][tutorial]["page_title"] = ""
                tutorial_data[domain][tutorial]["text"] = wikify(tutorial_data[domain][tutorial]["text"])
                tutorial_data[domain][tutorial]["code"] = constants.DOMAIN_DATA[domain]["default_code"]

            for link in links:
                if not link in tutorial_data[domain]:
                    tutorial_data[domain][link] = {}

                if not "back_chapter" in tutorial_data[domain][link]:
                    tutorial_data[domain][link]["back_chapter"] = tutorial.decode("utf-8")
                else:
                    print "Warning! duplicate links to tutorial %s" % link

                num_links = len(links)
                page_index = links.index(link)
                if page_index > 0:
                    if not "previous_chapter" in tutorial_data[domain][link]:
                        tutorial_data[domain][link]["previous_chapter"] = links[page_index - 1].decode("utf-8")
                if page_index < (num_links - 1):
                    if not "next_chapter" in tutorial_data[domain][link]:
                        tutorial_data[domain][link]["next_chapter"] = links[page_index + 1].decode("utf-8")

init_tutorials()


def get_domain_data():
    host = request.host[4:] if request.host.startswith("www.") else request.host
    DEVELOPMENT = host in ["localhost:5000", "192.241.245.44"]
    return constants.DOMAIN_DATA[host] if not DEVELOPMENT else constants.DOMAIN_DATA[constants.LEARNPYTHON_DOMAIN]

def get_tutorial_data(tutorial_id):
    host = request.host[4:] if request.host.startswith("www.") else request.host
    DEVELOPMENT = host in ["localhost:5000", "192.241.245.44"]
    return tutorial_data[host][tutorial_id] if not DEVELOPMENT else tutorial_data[constants.LEARNPYTHON_DOMAIN][tutorial_id]

def get_tutorial(tutorial_id):
    tutorial_data = get_tutorial_data(tutorial_id)

    if not tutorial_data:
        return {
            "page_title" : cgi.escape(tutorial_id),
            "text" : "Page not found."
        }
    else:
        return tutorial_data

#app.add_url_rule('/favicon.ico', redirect_to=url_for('static/img/favicons', filename=get_domain_data()["favicon"]))
@app.route("/favicon.ico")
def favicon():
    return open(os.path.join(os.path.dirname(__file__), "static/img/favicons/" + get_domain_data()["favicon"]), "rb").read()

@app.route("/")
def default_index():
    return index("Welcome")

@app.route("/<title>")
def index(title):
    tutorial = title.replace("_", " ").encode("utf-8")
    tutorial_data = get_tutorial(tutorial)
    return make_response(render_template(
        "index.html",
        domain_data = get_domain_data(),
        domain_data_json = json.dumps(get_domain_data()),
        **tutorial_data
    ))

if __name__ == "__main__":
    app.run(debug=True)