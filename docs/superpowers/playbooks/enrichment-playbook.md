# Tutorial Enrichment Playbook

This is the single source of truth for every per-site enrichment subagent. Follow it
exactly. When enriching `tutorials/<site>/`, every change must conform to these rules.

## 1. Tutorial file format

Every tutorial is a Markdown file `tutorials/<site>/<language>/<Name>.md` whose body is
parsed by `main.py` via this regex:

```
Tutorial\n[=\-]+\n+(.*)\n*Tutorial Code\n[=\-]+\n+(.*)\n*Expected Output\n[=\-]+\n+(.*)\n*Solution\n[=\-]+\n*(.*)\n*
```

So a valid tutorial MUST have these heading blocks, in order:

```
Tutorial
--------
<intro prose; code examples indented 4 spaces>

Exercise
--------
<the exercise prompt>

Tutorial Code
-------------
<starter code, indented 4 spaces>

Expected Output
---------------
<test assertions; see §3>

Solution
--------
<correct code, indented 4 spaces>
```

- Code blocks are indented with **4 spaces** (markdown code). `main.py`'s `untab()`
  strips 4 leading spaces to produce the runnable code.
- A file WITHOUT these blocks is treated as a non-tutorial page (only `Welcome.md` is
  expected to be a non-tutorial page). Do not leave regular tutorials un-parsed.

## 2. Wiki-links

- Links use `[[Page Title]]` or `[[Page Title|display text]]`.
- The page name is the **exact tutorial file base-name** (minus `.md`). URLs replace
  spaces with `_` at render time, so keep the file name as the canonical key.
- `Welcome.md` lists chapters as bulleted `- [[Chapter Name]]` items under `###` headings.
- Any tutorial name referenced in a wiki-link must have a matching `.md` file in that
  language folder, or `main.py` creates an empty stub page (acceptable only for
  genuinely-orphan links; prefer real files).

## 3. Expected Output assertions

`Expected Output` is **executed by the server's runner**, not just displayed. Typical
form:

```
test_output_contains("some string")
success_msg('Great job!')
```

- NEVER alter `test_output_contains(...)` / `success_msg(...)` lines — they are code.
- In translations, keep these lines byte-for-byte identical to English.
- Only the surrounding prose is translatable.

## 4. Welcome.md

- Every language folder MUST have `Welcome.md`. `main.py` removes it from the list and
  places it first.
- Format: `# Welcome` heading, intro prose (may include raw HTML `<br>`, `<a>`), then
  `### Section` headings with bulleted `- [[Chapter]]` lists.

## 5. Translation rules (static per-language folders)

- Each language is its own folder of translated `.md` files. There is NO runtime step.
- A language folder is in sync when it has a file with the SAME base-name for every
  `en/` file, and NO extra files.
- When translating:
  - Keep the **file name identical** to English.
  - Keep all code blocks (indented 4-space lines) byte-for-byte identical.
  - Keep `Expected Output` assertion lines identical.
  - Keep wiki-link targets identical (`[[Same Name]]`) — page names are the English names.
  - Translate only prose (intro, exercise prompt, inline `inline code` labels if any).

## 6. Enrichment quality bar

For each site:
- **Audit**: list every `en/` tutorial; identify missing popular topics for that language.
- **Add** missing topics as full tutorials (format in §1), with real examples, an
  exercise, assertions, and a solution.
- **Improve** weak chapters: fix typos, add missing examples, complete the exercise.
- **Fix** wiki-links so every linked page exists.
- **Regenerate** all non-English language folders from the enriched English set per §5.
- **Preserve** the existing `default_code` / editor-mode conventions already in
  `constants.DOMAIN_DATA[site]` — do not change editor config unless required.

## 7. Branch / commit rules

- Work on the assigned branch (`enrich-<site>`), touching ONLY `tutorials/<site>/` and
  (if needed) `courses.json`.
- Commit with a clear message; one commit per logical change; end with
  `Co-Authored-By: Claude <noreply@anthropic.com>`.
- Do not commit model binaries, logs, or local artifacts.
