Tutorial
--------

Welcome to *Learn HTML*, the easiest way to learn HTML & CSS online, interactively.
    
Learning HTML & CSS is essential for any web developer, and does not require to know how to program using JavaScript.
 
Before you begin, I would recommend that you start out by downloading an HTML & CSS IDE. My personal preference
is to use an IDE by JetBrains. You can download the PyCharm Community Edition for free, which has really good HTML, 
CSS and JavaScript development support built-in, along with all the goodies that a good IDE provides - source code
integration, code refactoring, automatic indentation, syntax highlighting, comparison tool, etc. 

**Here is a list of HTML & CSS editors you can choose from:**

* JetBrains PyCharm Community Edition (free) - https://www.jetbrains.com/pycharm/download/
* JetBrains WebStorm (Commercial) - https://www.jetbrains.com/webstorm/
* Atom (Free) - https://atom.io/
* Sublime Text (Commercial) - https://www.sublimetext.com/
* Brackets - http://brackets.io/
* Notepad++ (Windows only) - https://notepad-plus-plus.org/download/v7.html

In this tutorial you won't actually need an IDE, because all coding is done online.

In this tutorial, we will be using a CSS framework called Bootstrap by Twitter, the most common CSS library out there 
today. The basic principles of a CSS library is pretty much the same - they are all based on the "grid system", 
which is an easy way to define the layout of an HTML page - a methodology that was developed over the years in web 
development.

### Your first HTML Page

Let's start by creating a simple HTML page. An HTML page has the following basic layout:

    <!DOCTYPE html>
    <html>
        <head>
            <!-- head definitions go here -->
        </head>
        <body>
            <!-- the content goes here -->
        </body>
    </html>

Let's start by creating a simple page that contains the phrase "Hello, World!" in the body. The page will also have 
a title - that thing that shows up in the title of the tab in your browser.

    <!DOCTYPE html>
    <html>
        <head>
            <title>Hello, World!</title>
        </head>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>

Exercise
--------
1. Add an HTML &lt;title&gt; tag with the text "Hello, World!"
2. Add a paragraph to the body with the text "Hello, World!"
 
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
