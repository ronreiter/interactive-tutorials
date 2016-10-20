Tutorial
--------

Welcome to *Learn HTML*, the easiest way to learn HTML & CSS online, interactively.
    
Learning HTML & CSS is essential for any web developer, and does not require to know how to program using JavaScript.
 
Before you begin, I would recommend that you start out by downloading an HTML & CSS IDE. My personal preference
is to use an IDE by JetBrains. You can download the PyCharm Community Edition for free, which has really good HTML, 
CSS and JavaScript development support built-in, along with all the goodies that a good IDE provides - source code
integration, code refactoring, automatic indentation, syntax highlighting, comparison tool, etc. 

**Here is a list of HTML, CSS and JavaScript editors you can choose from:**

* JetBrains PyCharm Community Edition (free) - [[https://www.jetbrains.com/pycharm/download/]]
* JetBrains WebStorm (Commercial) - [[https://www.jetbrains.com/webstorm/]]
* Atom (Free) - [[https://atom.io/]]
* Sublime Text (Commercial) - [[https://www.sublimetext.com/]]
* Brackets - [[http://brackets.io/]]
* Notepad++ (Windows only) - [[https://notepad-plus-plus.org/download/v7.html]]

In this tutorial you won't actually need an IDE, because all coding is done online.

### Introduction

HTML (HyperText Markup Language) is a standard developed over the years to convey information over the internet by 
using "hyperlinks" - or just links as we know them today. As opposed to a PDF, an HTML page is much more dynamic in
nature, letting you browse the web by clicking on links and interacting with the page. Links could take you either
to a different location within the current page, or to a different page over the internet.

The last version of HTML is HTML 5.0, which has a LOT more capabilities than what the web originally had in mind.
HTML 5 is an extremely comprehensive platform that allows creating a high-end user interface together with the power
of CSS and JavaScript. HTML 5 is so powerful that it has managed to deprecate Adobe Flash, Microsoft's Silverlight,
and just about all HTML plugins such as video players, Java applets, and more. 

So what is the difference between HTML, CSS, and JavaScript? First of all, they can all be encapsulated within an 
HTML page, meaning that the browser starts by loading an HTML page, and only then it knows what to load from there.

* An **HTML page** is an HTML document that defines the content of the page by using a special markup similar to XML.
* A **CSS stylesheet** defines the style of the HTML elements in the page. It is either embeeded within an HTML page 
or loaded using the <link> tag.
* **JavaScript** is the programming language used to interact with the HTML page through an API called the DOM 
(Document Object Model) Bindings. In other words, the DOM Bindings are the glue between the programming language and
the HTML page that was initially loaded into the browser.

The basics of this tutorial cover HTML and CSS. The advanced sections also assume knowledge in programming and 
JavaScript. To learn JavaScript, go to https://www.learn-js.org.

We will be using a CSS framework called Bootstrap by Twitter, the most common CSS library out there 
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
a title - that thing that shows up in the title of the tab in your browser. The `<title>` element defines the title
of the HTML page.

The `<p>` element defines a "paragraph", a block of text that has a small amount of spacing in between its top and 
bottom.

Notice how the tags have a start tag and an end tag denoted with a slash (`</p>`). Everything in between is the content
of the tag. The content of a tag can usually have additional HTML tags within them.

    <!DOCTYPE html>
    <html>
        <head>
            <title>Example</title>
        </head>
        <body>
            <p>This is an example of a simple HTML page with one paragraph.</p>
        </body>
    </html>

You may also copy and paste this code into a new file in your text editor or IDE, and save the file as "index.html". The
"index.html" file is the default file that a web server will look for when accessing a website. After saving the file,
you can double click it to open it with your browser.

Now that we know the basic structure of an HTML page, let's try it out. 

Exercise
--------
1. Add an HTML `<title>` tag with the text "Hello, World!"
2. Add a paragraph (`<p>` tag) to the body with the text "Hello, World!"

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
