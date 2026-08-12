Tutorial
--------

HTML defines the content of a page, but **CSS** (Cascading Style Sheets) defines how that content looks. With CSS you control colors, fonts, spacing, layout, and much more.

There are three ways to add CSS to a page:

* An **inline** style attribute directly on an element: `style="color: red;"`.
* A **`<style>` block** inside the `<head>` of the document.
* An **external stylesheet** loaded with a `<link>` tag.

A CSS rule consists of a *selector* and a *declaration block*. The selector chooses which elements the rule applies to, and the block contains the properties:

    h1 {
        color: red;
        font-size: 20px;
    }

Here the selector `h1` targets every `<h1>` element, and the declarations set its text color and font size. Declarations are written as `property: value;`, one per line.

There are many selectors, but three are especially useful:

* `element` – matches all elements of that type, e.g. `p`.
* `.class` – matches every element with that class, e.g. `.important`.
* `#id` – matches the single element with that id, e.g. `#header`.

You can also style an element through the `class` attribute, which lets many elements share the same look:

    <p class="important">This paragraph is highlighted.</p>

    .important {
        background-color: yellow;
        font-weight: bold;
    }

Exercise
--------

1. Add a `<style>` block in the `<head>` that makes every `h1` red.
2. Give the `<p>` element the class `important`, and style that class with a `yellow` background.

Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <head>
            <title>CSS Basics</title>
        </head>
        <body>
            <h1>Hello, World!</h1>
            <p>This paragraph is important.</p>
        </body>
    </html>

Expected Output
---------------

    <!DOCTYPE html>
    <html>
        <head>
            <title>CSS Basics</title>
            <style>
                h1 { color: red; }
                .important { background-color: yellow; }
            </style>
        </head>
        <body>
            <h1>Hello, World!</h1>
            <p class="important">This paragraph is important.</p>
        </body>
    </html>

Solution
--------

    <!DOCTYPE html>
    <html>
        <head>
            <title>CSS Basics</title>
            <style>
                h1 { color: red; }
                .important { background-color: yellow; }
            </style>
        </head>
        <body>
            <h1>Hello, World!</h1>
            <p class="important">This paragraph is important.</p>
        </body>
    </html>
