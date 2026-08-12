# Iterating on Generated Code

First-pass AI code is rarely perfect. Vibe coding works best as a loop:

1. Generate a draft.
2. Run or read it.
3. Ask for a specific fix.
4. Repeat until it works.

### Ask for targeted changes

Instead of "fix it", say what is wrong:

    The function should return 0 instead of an error when the list is empty.

### Add requirements one at a time

Build the code up step by step:

    Add a check that skips negative numbers.
    Now also return the count of skipped numbers.

### Point out the bug directly

If you spot a mistake, quote it back to the model:

    The loop uses i < arr.length but it should be i <= arr.length.

### Use the live panel

Try generating a small function, then refine it with follow-up prompts. Tiny models
need several rounds — that is normal and is exactly how real vibe coding works.

Next: [[Building Your First App]].
