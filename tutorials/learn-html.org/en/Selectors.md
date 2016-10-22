Tutorial
--------

CSS Selectors are extremely useful for defining a query on a subset of the elements on a page. Querying allows us
to do one of two things - declare a style to apply on the set of elements in a CSS stylesheet, 
or receive a list of HTML elements programatically according to the query, using the `querySelector` method.

Here is an example - if we would want to color all paragraphs in the document blue, we can simply write:

    <style>
    p {
        color: blue;
    }
    </style>
    <p>I am blue</p>
    <p class="example">I am also blue</p>
    <p id="last" class="example">I am blue as well</p>
    
The CSS selector "p" will select all "p" (paragraphs) in the page.

We can add constraints on the query and apply a different CSS to some elements using a more specific selector. 
Let's color all "p" elements that have the "example" class with green. Note that in this example, the order of the
CSS definitions does not matter since the second selector is more specific - therefore it will override the less
specific CSS definition.

    <style>
    p.example {
        color: green;
    }

    p {
        color: blue;
    }    
    </style>
    <p>I am blue</p>
    <p class="example">I am green now</p>
    <p id="last" class="example">I am also green now</p>

We can repeat the same process but this time adding an ID selector instead of the class selector.

    <style>
    p#last {
        color: red;    
    }
    
    p.example {
        color: green;
    }

    p {
        color: blue;
    }    
    </style>
    <p>I am blue</p>
    <p class="example">I am green now</p>
    <p id="last" class="example">And now I am red</p>

CSS selectors also support the comma tag, for applying the same style block to a number of elements. 
This example colors `h1`, `h2` and `h3` in blue and `h4`, `h5` and `h6` in red.

    <style>
    h1, h2, h3 {
        color: blue;
    }
   
    h4, h5, h6 {
        color: red;
    }
    </style>
    <h1>h1 title</h1>
    <h2>h2 title</h2>
    <h3>h3 title</h3>
    <h4>h4 title</h4>
    <h5>h5 title</h5>
    <h6>h6 title</h6>


### Descendant & Child Selectors

Apart from specifying an element type, an ID and/or a class name, we can also create selectors that select 
a specific child only if it is contained in a specific hierarchy. For example, let's say we want to color all
the `<strong>` tags in any paragraph that has the "strongblue" class.

    <style>
    .strongblue strong {
        color: blue;    
    }
    </style>
    <p>This is the <strong>first</strong> sentence.</p>
    <p class="strongblue">This is the <strong>second</strong> sentence.</p>

There are two types of child selectors - an ancestor selector like this one, and a direct child selector that only
selects the first level of hierarchy from the parent element that was selected. Here is the same code but with 
a direct child selector:

    <style>
    .strongblue > strong {
        color: blue;    
    }
    </style>
    <p>This is the <strong>first</strong> sentence.</p>
    <p class="strongblue">This is the <strong>second</strong> sentence.</p>

If the `<strong>` element would have been encapsulated within a link, then this selector will not work since it 
relies on a direct parent-child relationship between `.strongblue` and the `strong` element.

    <style>
    .strongblue > strong {
        color: blue;    
    }
    </style>
    <p>This is the <strong>first</strong> sentence.</p>
    <p class="strongblue">This is the <a><strong>second</strong></a> sentence.</p>


### querySelector and querySelectorAll methods

HTML5 introduced the new `document.querySelector` and `document.querySelectorAll` methods which allows us to run
the same selectors and receive the first element that corresponds to the selector, or a list of elements, 
depending on the method you use.

Let's see an example:

    <p class="nice">This is a nice paragraph.</p>
    <p class="nice">This is another nice paragraph.</p>
    <p>This is a standard paragraph.</p>
    
    <script>
        // this code colors the first nice paragraph in blue
        var firstNiceParagraph = document.querySelector(".nice");
        firstNiceParagraph.style.color = "blue";
    </script>

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
