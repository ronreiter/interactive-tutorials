Tutorial
--------

In CSS, every HTML element is treated as a rectangular box. The **Box Model** describes how the size of a box is calculated, including:

1. **Content** – The area where text or images appear.
2. **Padding** – Space between the content and the border.
3. **Border** – A line surrounding the padding (or content if no padding is set).
4. **Margin** – Space outside the border, separating elements.

The **total width** of an element is calculated as:

    Total Width = Content Width + Padding (Left + Right) + Border (Left + Right) + Margin (Left + Right)

The **total height** of an element is calculated similarly.

Here is a diagram of how these four layers nest inside one another:

    +---------------------------+
    |        Margin             |
    |  +---------------------+  |
    |  |     Border          |  |
    |  |  +-------------+    |  |
    |  |  |  Padding    |    |  |
    |  |  | +-------+   |    |  |
    |  |  | |Content|   |    |  |
    |  |  | +-------+   |    |  |
    |  |  |             |    |  |
    |  |  +-------------+    |  |
    |  +---------------------+  |
    +---------------------------+

You control all four layers with the `width`, `height`, `padding`, `border`, and `margin` CSS properties.

Exercise
--------

Modify the `<div class="box">` element so that it has:
- A width of `300px` and height of `100px`
- `20px` of padding
- A `5px` solid border
- A `15px` margin

Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <head>
            <title>Box Model</title>
        </head>
        <body>
            <div class="box" style="width: 300px; height: 100px; padding: 20px; border: 5px solid #d3d3d3; margin: 15px; background-color: #2a2c2f; color: #d3d3d3;">
                Hello, World!
            </div>
        </body>
    </html>

Expected Output
---------------

    <!DOCTYPE html>
    <html>
        <head>
            <title>Box Model</title>
        </head>
        <body>
            <div class="box" style="width: 300px; height: 100px; padding: 20px; border: 5px solid #d3d3d3; margin: 15px; background-color: #2a2c2f; color: #d3d3d3;">
                Hello, World!
            </div>
        </body>
    </html>

Solution
--------

    <!DOCTYPE html>
    <html>
        <head>
            <title>Box Model</title>
        </head>
        <body>
            <div class="box" style="width: 300px; height: 100px; padding: 20px; border: 5px solid #d3d3d3; margin: 15px; background-color: #2a2c2f; color: #d3d3d3;">
                Hello, World!
            </div>
        </body>
    </html>
