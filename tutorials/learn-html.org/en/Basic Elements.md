Tutorial
--------

The basic elements of an HTML page are:

* A text header, denoted using the `<h1>`, `<h2>`, `<h3>`, `<h4>`, `<h5>`, `<h6>` tags.
* A paragraph, denoted using the `<p>` tag.
* A horizontal ruler, denoted using the `<hr>` tag.
* A link, denoted using the `<a>` (anchor) tag.
* A list, denoted using the `<ul>` (unordered list), `<ol>` (ordered list) and `<li>` (list element) tags.
* An image, denoted using the `<img>` tag
* A divider, denoted using the `<div>` tag
* A text span, denoted using the `<span>` tag

The next few pages will give an overview of these basic HTML elements.

Each element can also have attributes - each element has a different set of attributes relevant to the element. There
are a few global elements, the most common of them are:

* `id` - Denotes the unique ID of an element in a page. Used for locating elements by using links, JavaScript, and more.
* `class` - Denotes the CSS class of an element. Explained in the [[CSS Basics]] tutorial.
* `style` - Denotes the CSS styles to apply to an element. Explained in the [[CSS Basics]] tutorial.
* `data-x` attributes - A general prefix for attributes that store raw information for programmatic purposes. 
Explained in detailed in the [[Data Attributes]] section.

### Text headers and paragraphs

There are six different types of text header you can choose from, h1 being the topmost heading with the largest
text, and h6 being the most inner heading with the smallest text. In general, you should have only one h1 tag
with a page, since it should be the primary description of the HTML page.

As we've seen in the last example, a paragraph is a block of text separated from the rest of the text around it.

Let's see an example of the `<h1>`, `<h2>` and `<p>` tags in action:

    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <body>
            <h1>My First Page</h1>
            <p>This is my first page.</p>
            <h2>A secondary header.</h2>
            <p>Some more text.</p>
        </body>
    </html>

### Horizontal rulers

A horizontal ruler `<hr>` tag acts as a simple separator between page sections.

    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <body>
            <h1>My First Page</h1>
            <p>This is my first page.</p>
            <hr/>
            <p>This is the footer - all rights are reserved to me.</p>
        </body>
    </html>



Exercise
--------
1. Add an HTML `<h1>` tag with the text "I'm the most important!"
2. Add an HTML `<h2>` tag with the text "I'm less important!"
3. Add an HTML `<h6>` tag with the text "I'm the least important!"

Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <body>
        </body>
    </html>
    
Expected Output
---------------

    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <body>
            <h1>I'm the most important!</h1>
            <h2>I'm less important!</h2>
            <h6>I'm the least important!</h6>
        </body>
    </html>

Solution
--------

    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <body>
            <h1>I'm the most important!</h1>
            <h2>I'm less important!</h2>
            <h6>I'm the least important</h6>
        </body>
    </html>
