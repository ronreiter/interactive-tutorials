Tutorial
--------

The CSS background properties are used to define the background effects for elements.

CSS background properties:

1. background-color
2. background-image
3. background-repeat
4. background-position



1.Background-color: The &lt;background-color&gt; property specifies the background color of an element.

    <!DOCTYPE html>
    <html>
         <style>
       body {background-color: }
       </style>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>

* Background color can also be in &lt;p&gt;(paragraphs), &lt;h1&gt;(headings) and &lt;div&gt;(divs).

2. Background image: The &lt;background-image&gt; property specifies an image to use as the background of an element.


    <!DOCTYPE html>
    <html>
         <style>
       body {background-image: url(" "); }
       </style>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>
       
3. Background image repeat: the &lt;background-image&gt; property repeats an image both horizontally and vertically.

    <!DOCTYPE html>
    <html>
         <style>
       body {background-image: url("gradient_bg.png");background-repeat: repeat-x; } 
       </style>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>
    
    
    
*Tip: To repeat an image vertically, set `background-repeat: repeat-y;`.

To only show the image once, set `background-repeat: no-repeat;`.

If you want your background image to cover the whole page, set `background-size: cover;`.


4. Background image position:The position of the image is specified by the &lt;background-position&gt; property.

    <!DOCTYPE html>
    <html>
         <style>
      body { background-image: url("img_tree.png"); background-repeat: no-repeat;background-position: right top;} 
       </style>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>



Exercise
--------

Tutorial Code
-------------

    
Expected Output
---------------

Solution
--------