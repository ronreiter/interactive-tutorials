# Interactive Tutorials Enrichment + learnvibecoding.org — Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Enrich all 17 tutorial sites, add a learnvibecoding.org site with an in-browser WebGPU tiny model, harden `main.py`, and regenerate static multilingual translations — one PR per site plus one general PR.

**Architecture:** One Flask process per site (`main.py` + `DEFAULT_DOMAIN`). Tutorials are static Markdown at `tutorials/<site>/<language>/<Tutorial>.md`, parsed by a regex for `Tutorial / Tutorial Code / Expected Output / Solution`. Translations are static per-language folders — no runtime step. Per-site enrichment is delegated to parallel subagents following a shared playbook; the two code-heavy sub-projects (server hardening, learnvibecoding.org) are implemented inline.

**Tech Stack:** Python 3 + Flask, Markdown, pytest. learnvibecoding.org: `@huggingface/transformers` (WebGPU), `onnx-community/SmolLM2-360M-Instruct`.

## Global Constraints

- Tutorial `.md` files MUST follow the parseable format: `Tutorial` … `Exercise` … `Tutorial Code` … `Expected Output` … `Solution` heading blocks; code is indented 4 spaces.
- Expected Output assertions are EXECUTED server-side — never translate or alter `test_output_contains(...)` / `success_msg(...)` lines; only prose is translatable.
- Wiki-links use `[[Page Title]]` or `[[Page Title|display text]]`; page names are the tutorial file base-name (spaces → `_` in URLs).
- `Welcome.md` must be present in every language folder; `main.py` expects it first.
- One PR per site directory, one PR for learnvibecoding.org, one general PR for shared/server changes. All branch from `master`.
- Do NOT commit large model binaries; load the model from the HuggingFace hub at runtime in the browser.

---

### Task 1: Write the shared enrichment playbook

**Files:**
- Create: `docs/superpowers/playbooks/enrichment-playbook.md`

**Interfaces:**
- Consumes: the design spec (`docs/superpowers/specs/2026-08-11-tutorial-enrichment-design.md`).
- Produces: `docs/superpowers/playbooks/enrichment-playbook.md` — the single source of truth every per-site subagent follows. Its sections: Tutorial format (with the exact heading regex), Wiki-link rules, Welcome.md rules, Translation rules (file names match English; code + assertions untouched; only prose translated), Quality bar checklist, Site structure conventions.

- [ ] **Step 1: Write the playbook file** — author the sections listed above with concrete examples pulled from `tutorials/learnpython.org/en/Hello, World!.md`.
- [ ] **Step 2: Commit**

```bash
git add docs/superpowers/playbooks/enrichment-playbook.md
git commit -m "docs: add tutorial enrichment playbook"
```

---

### Task 2: Fix malformed/un-wired sites (general branch)

**Files:**
- Modify: `constants.py` (add `LEARNRUST_DOMAIN`, `LEARNASSEMBLY_DOMAIN`, `LEARNSOLIDITY_DOMAIN` + `DOMAIN_DATA` entries)
- Modify: `main.py` (skip malformed domain dirs gracefully)
- Rename: `tutorials/learnRust.org/` → `tutorials/learnrust.org/` (move `Hello World!.md`, `Welcome.md` into `tutorials/learnrust.org/en/`)
- Test: `tests/test_domain_loading.py`

**Interfaces:**
- Consumes: `constants.DOMAIN_DATA` structure (see `learnpython.org` entry).
- Produces: three new `DOMAIN_DATA` keys (`learnrust.org`, `learnassembly.org`, `learnsolidity.org`) that `init_tutorials()` can serve.

- [ ] **Step 1: Write the failing test**

```python
import constants

def test_unsupported_domains_wired():
    for d in ["learnrust.org", "learnassembly.org", "learnsolidity.org"]:
        assert d in constants.DOMAIN_DATA
```

- [ ] **Step 2: Run to verify it fails** — `pytest tests/test_domain_loading.py -v` → FAIL.
- [ ] **Step 3: Add domain constants + DOMAIN_DATA entries** — for each: `language`, `language_id` (any, unused), `codemirror_mode`, `prism_mode`, `default_code` (a stub print), `namespace`, `full_url`, logos/favicon under `static/` (reuse a generic placeholder), `contact_email`/`support_email`.
- [ ] **Step 4: Rename learnRust folder** — `git mv` `tutorials/learnRust.org` → `tutorials/learnrust.org`, then move `.md` files into `tutorials/learnrust.org/en/`.
- [ ] **Step 5: Harden `init_tutorials`** — wrap the `tutorials.remove("Welcome.md")` and per-file logic so a domain with only root-level `.md` (not `en/`) logs a warning instead of crashing; skip gracefully.
- [ ] **Step 6: Run test to verify it passes** — `pytest tests/test_domain_loading.py -v` → PASS.
- [ ] **Step 7: Commit**

```bash
git add constants.py main.py tests/ tutorials/learnrust.org
git commit -m "fix: wire up learnrust/learnassembly/learnsolidity, harden domain loading"
```

---

### Task 3: Harden `main.py` (general branch)

**Files:**
- Modify: `main.py` (`cgi.escape` → `html.escape`; `signin`/`signup` stub; `error404` template context)
- Test: `tests/test_main.py`

**Interfaces:**
- Consumes: `Flask`, existing template `error404.html`.
- Produces: `signin`/`signup` routes return JSON `{"status": "error", "error": "not_implemented"}` with 501 instead of crashing on the undefined `users` object.

- [ ] **Step 1: Write the failing test**

```python
import json

def test_signin_returns_501(client):
    r = client.get("/signin?email=a@b.com")
    assert r.status_code == 501
    assert json.loads(r.data)["status"] == "error"
```

- [ ] **Step 2: Run to verify it fails** — FAIL (`users` undefined → 500).
- [ ] **Step 3: Implement** — replace the `users.findOne(...)` / `users.insert(...)` bodies with a guarded `not_implemented` 501 response; replace `cgi.escape` with `html.escape` (import `html`).
- [ ] **Step 4: Run to verify it passes** — PASS.
- [ ] **Step 5: Commit**

```bash
git add main.py tests/test_main.py
git commit -m "fix: harden main.py — stub signin/signup, drop deprecated cgi"
```

---

### Task 4: Add tests harness for tutorial parsing & translations

**Files:**
- Create: `tests/test_tutorial_parsing.py`, `tests/test_translations.py`, `tests/conftest.py`
- Modify: `pyproject.toml` (add pytest dev-dependency)

**Interfaces:**
- Consumes: `main.init_tutorials`, `main.wikify`, `main.untab`.
- Produces: assertions that every language folder has a `Welcome.md`, that every `.md` in `en/` has a matching file in each non-en language folder, and that `main.sections` parses a valid tutorial.

- [ ] **Step 1: Write tests**

```python
import os, main

TUT = "tutorials"

def test_every_language_has_welcome():
    for domain in os.listdir(TUT):
        for lang in os.listdir(os.path.join(TUT, domain)):
            if os.path.isdir(os.path.join(TUT, domain, lang)):
                assert "Welcome.md" in os.listdir(os.path.join(TUT, domain, lang))

def test_en_files_have_translations():
    for domain in os.listdir(TUT):
        dpath = os.path.join(TUT, domain)
        if not os.path.isdir(dpath): continue
        en_files = set(os.listdir(os.path.join(dpath, "en")))
        for lang in os.listdir(dpath):
            if lang == "en" or not os.path.isdir(os.path.join(dpath, lang)): continue
            missing = en_files - set(os.listdir(os.path.join(dpath, lang)))
            assert not missing, f"{domain}/{lang} missing {missing}"
```

- [ ] **Step 2: Run to verify they fail** — confirm current gaps are detected (translation folders are incomplete today).
- [ ] **Step 3: Commit tests**

```bash
git add tests/ pyproject.toml
git commit -m "test: add parsing + translation coverage harness"
```

---

### Task 5: learnvibecoding.org — domain wiring + custom template (own branch)

**Files:**
- Modify: `constants.py` (add `LEARNVIBECODING_DOMAIN` + `DOMAIN_DATA` entry with `is_browser_model: True`)
- Modify: `main.py` (route selects `index-vibecoding.html` when `domain_data["is_browser_model"]`)
- Create: `templates/index-vibecoding.html`, `static/js/vibecoding.js`, `static/css/vibecoding.css`
- Create: `tutorials/learnvibecoding.org/en/{Welcome, Prompting, Iterating, Shipping}.md`
- Modify: `Makefile`, `website_docker.conf` (deploy wiring)

**Interfaces:**
- Consumes: `constants.DOMAIN_DATA[domain]["is_browser_model"]`.
- Produces: a site where the tutorial page embeds a transformers.js WebGPU runner that loads `onnx-community/SmolLM2-360M-Instruct` from the HF hub and generates text from a prompt box.

- [ ] **Step 1: Add `learnvibecoding.org` to DOMAIN_DATA** with `language: "text"`, `default_code: ""`, `is_browser_model: True`, placeholder logos/favicon.
- [ ] **Step 2: Route branch in `index()`** — `"index-vibecoding.html" if domain_data.get("is_browser_model") else "index.html"`.
- [ ] **Step 3: Write `templates/index-vibecoding.html`** — extend `base.html`; include a prompt textarea, Run button, output `<pre>`, progress bar for model download; load `static/js/vibecoding.js`; disable the IDEOne "Run code" button.
- [ ] **Step 4: Write `static/js/vibecoding.js`** — `import { pipeline } from "@huggingface/transformers"` via an ESM import map; `const gen = await pipeline("text-generation", "onnx-community/SmolLM2-360M-Instruct", { device: "webgpu" })`; on Run: `await gen(prompt, { max_new_tokens: 200 })`; render output; catch WebGPU-unavailable error and show a friendly fallback.
- [ ] **Step 5: Write the 4 tutorials** per the playbook (no IDEOne execution; Expected Output section documents expected generated behavior in prose).
- [ ] **Step 6: Add deploy wiring** — Makefile target `run-vibecoding`; `website_docker.conf` note.
- [ ] **Step 7: Verify locally** — `DEFAULT_DOMAIN=learnvibecoding.org make build-local` and run; confirm the page loads and model code path is wired. Then commit.

```bash
git add constants.py main.py templates/index-vibecoding.html static/js/vibecoding.js static/css/vibecoding.css tutorials/learnvibecoding.org Makefile website_docker.conf
git commit -m "feat: add learnvibecoding.org with in-browser WebGPU tiny model"
```

---

### Task 6: Per-site enrichment orchestration (17 site branches → PRs)

**Files:**
- Per-site branch: `enrich-<site>`, touching only `tutorials/<site>/` + `courses.json` (if needed).

**Interfaces:**
- Consumes: the playbook (Task 1), the translation harness (Task 4) for verification.
- Produces: one branch + one PR per site with enriched English tutorials and regenerated translations in all existing language folders.

- [ ] **Step 1: Dispatch one subagent per site** (in parallel, `isolation: "worktree"`) — each instructed to: read the playbook; audit the site's `en/` tutorials; add missing popular topics/exercises; improve weak chapters; fix wiki-links; ensure `Welcome.md`; regenerate every non-en language folder from the enriched English set (only prose translated; code + assertions untouched); commit on `enrich-<site>`.
- [ ] **Step 2: Verification pass** — run `tests/test_translations.py` + `main.py` load for each site; fix gaps.
- [ ] **Step 3: Create PR per site** — `gh pr create` from each `enrich-<site>` branch → `master`, one per site.

---

### Task 7: General improvements PR

**Files:** the `general-server-hardening` branch (design doc + Tasks 2–4 changes).

- [ ] **Step 1: Run full test suite** — `pytest tests/ -v`; all pass.
- [ ] **Step 2: Create PR** — `gh pr create` from `general-server-hardening` → `master`.

---

## Self-Review Notes

- Spec coverage: per-site enrichment (Task 6), learnvibecoding (Task 5), main.py hardening (Tasks 2–3), translations (Task 6 + harness Task 4), deploy wiring (Task 5 step 6), PR strategy (Tasks 6–7).
- No placeholders; code blocks are concrete.
- Type consistency: `is_browser_model` flag introduced in Task 5 and consumed by the same task's route branch — no cross-task drift.
