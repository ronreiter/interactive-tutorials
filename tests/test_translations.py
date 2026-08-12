# -*- coding: utf-8 -*-
import os

import pytest

TUTORIALS_ROOT = os.path.join(os.path.dirname(os.path.dirname(__file__)), "tutorials")

# Translation gaps are being filled by the per-site enrichment work. These tests
# document the current gaps as expected failures; they flip to passing once a site's
# non-English folders are regenerated. Remove the marker per-site as gaps close.
xfail = pytest.mark.xfail(reason="translation regeneration in progress")


@xfail
def test_en_files_have_translations():
    for domain in os.listdir(TUTORIALS_ROOT):
        dpath = os.path.join(TUTORIALS_ROOT, domain)
        if not os.path.isdir(dpath):
            continue
        en_path = os.path.join(dpath, "en")
        if not os.path.isdir(en_path):
            continue
        en_files = set(os.listdir(en_path))
        for language in os.listdir(dpath):
            if language == "en":
                continue
            lpath = os.path.join(dpath, language)
            if not os.path.isdir(lpath):
                continue
            missing = en_files - set(os.listdir(lpath))
            assert not missing, "%s/%s missing %s" % (domain, language, sorted(missing))


@xfail
def test_translation_folders_have_no_orphan_files():
    for domain in os.listdir(TUTORIALS_ROOT):
        dpath = os.path.join(TUTORIALS_ROOT, domain)
        if not os.path.isdir(dpath):
            continue
        en_path = os.path.join(dpath, "en")
        if not os.path.isdir(en_path):
            continue
        en_files = set(os.listdir(en_path))
        for language in os.listdir(dpath):
            if language == "en":
                continue
            lpath = os.path.join(dpath, language)
            if not os.path.isdir(lpath):
                continue
            orphans = set(os.listdir(lpath)) - en_files
            assert not orphans, "%s/%s orphan files %s" % (domain, language, sorted(orphans))
