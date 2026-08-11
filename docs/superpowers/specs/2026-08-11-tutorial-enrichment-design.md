# Design: Interactive Tutorials Enrichment + learnvibecoding.org

Date: 2026-08-11
Status: Approved (user granted autonomous execution; committed for review)

## 1. Overview

Enrich all 17 tutorial sites in `tutorials/`, add a new `learnvibecoding.org` site that
runs a tiny model in the browser (WebGPU), harden `main.py`, and regenerate static
multilingual translations. One pull request per site, plus one general PR for
server/shared improvements.

## 2. Architecture context (as-is)

- One Flask process per site (`main.py` + `DEFAULT_DOMAIN` env), gunicorn in production.
- Tutorials are static Markdown per site per language:
  `tutorials/<site>/<language>/<Tutorial>.md`, parsed by a regex in `main.py`
  (`Tutorial / Tutorial Code / Expected Output / Solution`).
- Translations are STATIC: each language is its own folder of translated `.md` files.
  There is no runtime or generation script today.
- `constants.py` `DOMAIN_DATA` wires each site to IDEOne (remote compile), editor modes,
  logos, analytics. `courses.json` holds per-site sponsored course listings.
- `templates/index.html` renders tutorials; `index-python.html` is the Python-specific variant.

### Findings that shape the plan
- 17 site folders; coverage ranges from learn-html (69) / learn-ts (43) down to
  learnassembly (1), learnscala (2), learnsolidity (2).
- `learnRust.org` is malformed: `.md` files sit in the root instead of `en/`.
- `learnassembly.org`, `learnRust.org`, `learnsolidity.org` are not wired into
  `DOMAIN_DATA` and are skipped at load.
- `main.py` bugs: `signin`/`signup` reference an undefined `users` object; `cgi` is
  deprecated (Python 3.13+).

## 3. Approach: central playbook + parallel subagents

One shared enrichment playbook defines the quality bar (tutorial format, wiki-link
conventions, translation rules). One subagent per site follows it on its own git branch
→ one PR per site. A verification/integration pass happens before each PR is created.

## 4. Sub-project 1 — Per-site enrichment (17 PRs)

Per site: review the existing tutorial set; fill missing popular topics/exercises;
improve weak chapters; fix `[[wiki-link]]` conventions; ensure a proper `Welcome.md`;
regenerate that site's non-English language folders from the enriched English set.

Structural fixes folded into the affected site PRs:
- Fix malformed `learnRust.org` (move files to `en/`).
- Wire `learnassembly.org`, `learnsolidity.org`, `learnrust.org` into `DOMAIN_DATA`.

## 5. Sub-project 2 — learnvibecoding.org (1 PR)

- New site. **WebGPU-only tiny model** via `@huggingface/transformers`, running
  `onnx-community/SmolLM2-360M-Instruct` (ONNX). Small enough to be "tiny", capable
  enough for a vibe-coding demo.
- Custom template: prompt box → in-browser generation → code/response output.
  Chapters teach prompting, iteration, and shipping a small app.
- Static model assets + JS runner under `static/`, new `DOMAIN_DATA` entry, custom
  template, plus gunicorn/nginx/Docker/Makefile deploy wiring.

## 6. Sub-project 3 — main.py hardening (1 general PR)

- Fix undefined `users` object.
- Harden domain loading / malformed-folder handling.
- Modernize deprecated `cgi` (use `html` module).
- Add basic tests (tutorial parsing, wiki-link resolution, translation folders).
- Include this design doc in this PR.

## 7. Sub-project 4 — Translations

Static regeneration into ALL existing language folders per site, folded into each
site's PR. No runtime translation step.

## 8. PR / branch strategy

- One branch + PR per site (17), one branch + PR for `learnvibecoding.org` (1), one
  branch + PR for general server improvements (1). All branch from `master`.

## 9. Verification

- Run `main.py` locally per domain (or `make build-local`) and confirm tutorial parsing
  loads without "not a tutorial" warnings.
- Validate wiki-links resolve; confirm translation folders parse; run added tests.
