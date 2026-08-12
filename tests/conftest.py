# -*- coding: utf-8 -*-
import os

# Deterministic host for tests.
os.environ["DEFAULT_DOMAIN"] = os.environ.get("DEFAULT_DOMAIN", "learnpython.org")

import pytest
import main


@pytest.fixture(scope="session")
def app():
    return main.app


@pytest.fixture(scope="session")
def client(app):
    return app.test_client()


@pytest.fixture(scope="session")
def tutorial_data():
    return main.tutorial_data
