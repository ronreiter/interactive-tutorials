# -*- coding: utf-8 -*-
import json


def test_index_renders_welcome(client):
    r = client.get("/", headers={"Host": "localhost"})
    assert r.status_code == 200
    assert "Learn" in r.text


def test_signin_returns_501(client):
    r = client.get("/signin?email=a@b.com", headers={"Host": "localhost"})
    assert r.status_code == 501
    assert json.loads(r.data)["status"] == "error"


def test_signup_returns_501(client):
    r = client.get("/signup", headers={"Host": "localhost"})
    assert r.status_code == 501
    assert json.loads(r.data)["status"] == "error"
