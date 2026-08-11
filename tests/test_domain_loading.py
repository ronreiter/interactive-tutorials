# -*- coding: utf-8 -*-
import os

import constants


def test_unsupported_domains_wired():
    for d in ["learnrust.org", "learnassembly.org", "learnsolidity.org"]:
        assert d in constants.DOMAIN_DATA


def test_learnrust_has_en_folder():
    import os
    path = os.path.join(os.path.dirname(os.path.dirname(__file__)), "tutorials", "learnrust.org", "en")
    assert os.path.isdir(path)


def test_domain_images_exist():
    for d in ["learnrust.org", "learnassembly.org", "learnsolidity.org", "learnvibecoding.org"]:
        assert os.path.exists("static/img/logos/%s.png" % d)
        assert os.path.exists("static/img/share-logos/%s.png" % d)
        assert os.path.exists("static/img/favicons/%s.ico" % d)
