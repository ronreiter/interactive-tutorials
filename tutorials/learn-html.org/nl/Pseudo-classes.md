Tutorial
--------

HTML provides pseudo-classes, classes that are defined by default and allow us to apply a style on either:
 
1. An element which is in a specific state.
2. A specific set of elements by their hierarchy, explained in detail in the [[Advanced Selectors]] section. 

We will discuss the former in this page, and give examples for each pseudo-class. Keep in mind that there is no
way of inlining pseudo-classes in CSS.

### Links

A link can either be in an unvisited state or a visited state. An unvisited link is a link that was not clicked on.
A visited link is a link that was clicked on.

    <style>
    a.special:link {
        color: green;
    }
    
    a.special:visited {
        color: red;
    }
    </style>
    
    <p><a href="#">This is a standard link, it will become purple when clicked</a></p>
    <p><a class="special" href="#">This is a special colored link and become red when clicked</a></p>
    

### Hover

The CSS :hover pseudo-class can be used to define styles for HTML elements which the user is hovering upon using 
the mouse.

    <style>
    p:hover {
        background-color: yellow;
    }
    </style>
    <p>Paragraphs now have a yellow background when hovering over them.</p>
     
### Active and Target

The CSS :active pseudo-class defines the styles to use for an element which is currently being clicked.

    <style>
    a:active {
        font-weight: bold;    
    }
    </style>
    <p>
        <a href="#first">First Section</a>
        <a href="#second">Second Section</a>
        <a href="#third">Third Section</a>
    </p>

Navigating to a specific section in the page also allows us to style the destination element.

    <style>
    p:target {
        font-weight: bold;    
    }
    </style>
    <p>
        <a href="#first">First Section</a>
        <a href="#second">Second Section</a>
        <a href="#third">Third Section</a>
    </p>
    <p id="first">This is the text of the first section.</p>
    <p id="second">This is the text of the second section.</p>
    <p id="third">This is the text of the third section.</p>


### Focus

The CSS :focus pseudo-class defines the styles to use for an element which is focused.

    <style>
    input:focus {
        font-weight: bold;    
    }
    </style>
    <form>
        <p><input type="text" value="First field"></p>
        <p><input type="text" value="Second field"></p>
        <p><input type="text" value="Third field"></p>        
    </form>
        
For more state-specific pseudo classes that relate to HTML form input elements, please visit [[Input Pseudo-classes]].

For advanced selectors that enable greater control on selecting specific elements, please visit [[Advanced Selectors]]. 
        
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
