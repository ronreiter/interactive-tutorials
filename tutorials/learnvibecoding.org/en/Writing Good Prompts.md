# Writing Good Prompts

The quality of the code you get depends heavily on the prompt you write. A vague prompt
produces vague code. A precise prompt produces something closer to what you want.

### State the goal

Tell the model what the end result should do:

    Write a function that takes a list of numbers and returns only the even ones.

### Name the language and tools

Mention the language and any constraints:

    Write it in JavaScript, using modern syntax, no external libraries.

### Give an example (few-shot)

One concrete example makes a tiny model much more accurate:

    Given: "apple" -> "🍎"
    Convert: "banana"

### Keep it short

Tiny models have limited context. Long, rambling prompts push the model off track.
One clear sentence beats three paragraphs.

### Try it live

Use the panel at the bottom of this page. Compare these two prompts:

    Make a button
    Make a red button that says "Click me" and shows an alert when clicked.

Notice how much clearer the second one is.

Next: [[Iterating on Generated Code]].
