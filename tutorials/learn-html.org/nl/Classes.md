Tutorial
--------

CSS classes are commonly used to define a set of CSS styles and then apply them on an HTML element using selectors.
To define a class within a CSS stylesheet, use the dot selector, as follows:

    <style>
    .nice {
        font-family: sans-serif;
    }
    </style>
    
Each HTML element can have a set of classes, ordered in a specific order. Each class will potentially add a set of 
CSS definitions according to the styles that were defined in the page. In this piece of code we have defined a CSS 
rule that will be applied to every element that contains the "nice" class. This means that once this piece of code
has been defined inside the HTML page, the following HTML paragraph will have the style applied to it:

    <style>
    .nice {
        font-family: sans-serif;
    }
    </style>
    <p class="nice">This is a short sentence.</p>


### HTML5 classList API

HTML5 introduced a new way to edit the class list of an element using the `classList` collection. Each HTML element
returns the collection by accessing the `element.classList` member. The class list allows to add, remove, toggle
and to check if an element contains a specific class.

Let's see an example:

    <!DOCTYPE html>
    <html>
    <head>
        <style>
        .nice {
            font-family: sans-serif;
        }
        </style>
    </head>
    <body>
        <p id="mytext">My text</p>
        <script>
            var el = document.getElementById("mytext");
            el.classList.add("nice");    // adds the nice class to the paragraph
            el.classList.remove("nice"); // removes the nice class from the paragraph
            el.classList.toggle("nice"); // adds the nice class to the paragraph again, since it does not currently
                                         // contain the nice class.
                                         
            if (el.classList.contains("nice")) {
                alert("The element contains the 'nice' class.");
            }
        </script>
    </body>
    </html>

Since HTML5 is a relatively new standard, it is not supported on all browsers. It is safe enough to use today though.
Here is the compatibility table for the feature: [[http://caniuse.com/#search=classlist]]

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
