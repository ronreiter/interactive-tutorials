
Background<br>
--------

The CSS background properties are used to define the background effects for elements.<br><br>

CSS background properties:<br>
1.background-color<br>
2.background-image<br>
3.background-repeat<br>
4.background-position<br>
<br><br>


Exercise<br>
--------

1.Background-color: The &lt;background-color&gt; property specifies the background color of an element.<br>




Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <style>
       body { }
       </style> 
        
        <body>
        </body>
    </html>
    
Expected Output
---------------

    <!DOCTYPE html>
    <html>
         <style>
       body {background-color: }
       </style>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>

* Background color can also be in &lt;p&gt;(paragraphs), &lt;h1&gt;(headings) and &lt;div&gt;(divs).<br><br>
<br>

 2. Background image: The &lt;background-image&gt; property specifies an image to use as the background of an element.<br>
 
 Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <style>
       body { }
       </style> 
        
        <body>
        </body>
    </html>
    
Expected Output
---------------

    <!DOCTYPE html>
    <html>
         <style>
       body {background-image: url(" "); }
       </style>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>
    
   <br><br>
   3. Background image repeat: the &lt;background-image&gt; property repeats an image both horizontally and vertically.<br><br>
   
 Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <style>
       body {background-image: url("gradient_bg.png");  }

       </style> 
        
        <body>
        </body>
    </html>
    
Expected Output
---------------

    <!DOCTYPE html>
    <html>
         <style>
       body {background-image: url("gradient_bg.png");background-repeat: repeat-x; } 
       </style>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>
    
    
    
  *Tip: To repeat an image vertically, set background-repeat: repeat-y;<br>
       To only show the image once, set background-repeat: no-repeat;<br>
      If you want your background image to cover the whole page, set {background-size: cover;} .<br><br>
<br>

4. Background image position:The position of the image is specified by the &lt;background-position&gt; property.<br>

 Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <style>
       body {background-image: url("img_tree.png"); 
       background-repeat: no-repeat;background-position:  ;} }

       </style> 
        
        <body>
        </body>
    </html>
    
Expected Output
---------------

    <!DOCTYPE html>
    <html>
         <style>
      body { background-image: url("img_tree.png"); background-repeat: no-repeat;background-position: right top;} 
       </style>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>


