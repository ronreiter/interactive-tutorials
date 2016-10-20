Tutorial
--------

HTML provides a way to create both an ordered list (with elements counting up, 1, 2, 3...) and an unordered list with
bullets instead of numbers. Lists are a good way to formalize a list of items and let the HTML styling do the work for
you.

### Ordered lists

Here is an example of how to create an ordered list:
    
    <p>Here is a list of ordered items:</p>
    <ol>
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ol>


Ordered lists have a "type" attribute which defines the numbering convention to use.

To count using numbers, use type="1":
      
    <p>Here is a list of ordered items:</p>
    <ol type="1">
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ol>

To count using uppercase letters, use type="A":
      
    <p>Here is a list of ordered items:</p>
    <ol type="A">
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ol>

To count using lowercase letters, use type="a":
      
    <p>Here is a list of ordered items:</p>
    <ol type="a">
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ol>

To count using uppercase roman numerals, use type="I":
      
    <p>Here is a list of ordered items:</p>
    <ol type="I">
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ol>

To count using lowercase roman numerals, use type="i":
      
    <p>Here is a list of ordered items:</p>
    <ol type="i">
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ol>

### Unordered lists

Here is an example of how to create an unordered list:
    
    <p>Here is a list of unordered items:</p>    
    <ul>
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ul>

To change the list style attributes, we can use the CSS attribute called `list-style-type`. The available types are:

* disc
* circle
* square
* none

Here is an example of the disc list style type:
    
    <p>Here is a list of unordered items:</p>    
    <ul style="list-style-type: disc">
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ul>

Here is an example of the circle list style type:
    
    <p>Here is a list of unordered items:</p>    
    <ul style="list-style-type: circle">
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ul>

Here is an example of the square list style type:
    
    <p>Here is a list of unordered items:</p>    
    <ul style="list-style-type: square">
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ul>

Here is an example of the none list style type:
    
    <p>Here is a list of unordered items:</p>    
    <ul style="list-style-type: none">
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
    </ul>




Exercise
--------

This page does not have an exercise yet. You are welcome to contribute one by sending me a pull request:

[[https://github.com/ronreiter/interactive-tutorials]]


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
            <title>Hello, World!</title>
        </head>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>

Solution
--------

    <!DOCTYPE html>
    <html>
        <head>
            <title>Hello, World!</title>
        </head>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>
