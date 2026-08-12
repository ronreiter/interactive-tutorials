# -*- coding: utf-8 -*-
import os

import main

TUTORIALS_ROOT = os.path.join(os.path.dirname(os.path.dirname(__file__)), "tutorials")


def test_welcome_parsed_for_loaded_domains(tutorial_data):
    for domain, langs in tutorial_data.items():
        for language, tutorials in langs.items():
            assert "Welcome" in tutorials, "%s/%s missing Welcome" % (domain, language)


def test_every_language_folder_has_welcome_file():
    for domain in os.listdir(TUTORIALS_ROOT):
        dpath = os.path.join(TUTORIALS_ROOT, domain)
        if not os.path.isdir(dpath):
            continue
        for language in os.listdir(dpath):
            lpath = os.path.join(dpath, language)
            if os.path.isdir(lpath):
                assert "Welcome.md" in os.listdir(lpath), "%s/%s missing Welcome.md" % (domain, language)


def test_wikify_wraps_links():
    html = main.wikify("See [[Hello, World!]] for details.", "en")
    assert "a href" in html
