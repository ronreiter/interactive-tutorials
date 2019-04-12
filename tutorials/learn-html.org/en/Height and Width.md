Tutorial
--------
You can alter the height and width of an element in multiple different ways. You can either put it in your style section at the top of your page, as a tag insde of your code, or on a separate css page. The height and width properties are used to set the height and width of an element. You can set the height and width either to auto which lets the browser decide the dimensions of the element or you can specify it by using units like px, rem, or %. There is also a max-width/height and a min-width/height which set the maximum and minimum size of an element. To add a style tag you would do this, &lt;p style="height: 200px; width: 200px; background-color: red;"&gt;. To put it in your css, you would first have to open up your style. Then inside the style you would put this
.e1 {
background-color: green;
height: 200px;
width: 200px;
}



[[https://github.com/ronreiter/interactive-tutorials]]

Exercise
--------

This page does not have an exercise yet. You are welcome to contribute one by sending me a pull request:

[[https://github.com/ronreiter/interactive-tutorials]]


Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <head>
        <title> Hello World </title>
        <style>
        div {
        height: 300px;
        width: 400px;
        background-color: lightblue;
        font-size: 35px;
       }
        </head>
        </style>
        <body>
        <div> Hello, world!</div>
        </body>
    </html>
    
Expected Output
---------------

Create an element that has a height of 400px and a width of 300px with a background-color of green. Then create a different element with a width of auto and a height of 200px with a 2px solid black border. Put all the additions of your element in the style portion of the page.

Solution
--------

    <!DOCTYPE html>
    <html>
        <head>
        <style>
            <title>Hello, World!</title>
        .e1 {
        height: 400px;
        width: 300px;
        background-color: green;
        }
        .e2 {
        height: 200px;
        width: auto;
        border: 2px solid black;
        }
        </head>
        </style>
        <body>
        <div class="e1">Hello, world! </div>
        <div class="e2"> Hello, world! </div>
        </body>
    </html>
