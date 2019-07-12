Box-Sizing Property
--------
Without any alterations, the size of a box is calcualted like this:
width + padding + border = actual width of an element
height + padding + border = actual height of an element

So when you set the size of an element, the image will often appear bigger, because the new sizings are added to the original. 
However, the element with the same sizing can appear differnet because of different paddings added to each element. 
The &lt;box-sizing&gt; property allows the padding and border to be included in the element's total width and height.
The &lt;box-sizing: border-box;&gt; allows the padding and border to be included in an element.

&lt;!DOCTYPE html&gt;
&lt;html&gt;
&lt;head&gt;
&lt;/head&gt;
&lt;style&gt;
&lt;box-sizing: border-box;&gt;
&lt;/style&gt;

To include the border you need to include the border code; border: size type color;

&lt;!DOCTYPE html&gt;
&lt;html&gt;
&lt;head&gt;
&lt;/head&gt;
&lt;style&gt;
&lt;border: 1px solid blue&gt;
&lt;box-sizing: border-box;&gt;
&lt;/style&gt;


Exercise
--------
1.Make a div called box1
2.Make the border 2px
3.Make the border solid
4.Make the border pink
5.Add box-sizing:border-box;

Tutorial Code
-------------

<!DOCTYPE html>
    <html>
        <head>
            <title>Hello, World!</title>
        </head>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>
    
Expected Output
---------------

    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <style>
        .box1 {
        border: 2px solid pink;
        box-sizing: border-box;
        }
        </style>
        <body>
        <div class="box1">
        Hello World!
        </div> 
        </body>
    </html>

Solution
--------

    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <style>
        .box1 {
        border: 2px solid pink;
        box-sizing: border-box;
        }
        </style>
        <body>
        <div class="box1">
        Hello World!
        </div> 
        </body>
    </html>
