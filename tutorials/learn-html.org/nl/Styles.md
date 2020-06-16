Tutorial
--------

CSS stands for Cascading Style Sheets, and is the visual language of the web. With it, we can design how HTML pages
look like. CSS allows us to separate between the data of the page, encoded within the HTML, and the styling of the 
page, encoded in the CSS of the page.

The reason that CSS is "Cascading" is because of the way it defines which styles to use. HTML elements inherit their 
styles in a "cascading" manner, according to a very specific set of priorities, from lowest to highest:

* The browser default
* Styles defined in the page 
* Some styles will inherit a style to their childs, for example which font to use
* The last rule to be defined in the loading order will be the one that will kick into effect
* The element selector (for example, styling all `<footer>` elements)
* The class selector (for example, styling all `.main` elements)
* The ID selector, used to select a specific element in the page
* Media type (explained in the [[Media Queries]] section)
* Defining element specific CSS using an HTML "style" attribute
* The `!important` CSS override directive (Use this directive only as a last resort)

In addition, there are relative "cascading" properties that can stack up relative to their parent, for example line
height and font size, for example the `rem` (relative em) CSS metric which is defined relative to the parent, or
the percentage unit.

### Defining CSS

CSS can be defined using four methods:
 
#### 1. Inline

To define a CSS style using the inline method, use the HTML `style` attribute:

    <p>This is the default serif font. It is commonly used in 
    printed media for better readability, since letters
    are more distinct in serif fonts.</p>

    <p style="font-family: sans-serif">This is a sans-serif font. 
    It is commonly used in screens because it is hard
    for screens to render letters with such great detail.</p>

#### 2. Using a CSS tag

Defining CSS inline is not recommended at all, avoid it as much as you can. You should always define a CSS stylesheet
and use selectors to apply the stylesheets. The [[Selectors]] tutorial will give a detailed tutorial on how to 
select HTML elements using CSS selectors.

Here is an example:

    <!DOCTYPE html>
    <head>
        <style>
            .nice {
                font-family: sans-serif;
            }
        </style>
    </head>
    <body>
        <p>This is the default serif font. It is commonly used in 
        printed media for better readability, since letters
        are more distinct in serif fonts.</p>
    
        <p class="nice">This is a sans-serif font. 
        It is commonly used in screens because it is hard
        for screens to render letters with such great detail.</p>

    </body>
    
#### 3. Using a different stylesheet

You can define a CSS stylesheet in an external file (usually noted with the .css extension) and load it.
 
Here is an example for defining the same CSS class defined in the previous example, but in a file called "style.css".
     
    .nice {
        font-family: sans-serif;
    }
     
To load the CSS file, we would need to use the `<link>` HTML tag in the following manner:
 
    <link rel="stylesheet" href="nice.css">
    
Please note that the stylesheet should be positioned properly relative to the HTML page. In this example, both the
HTML file and the CSS file would need to be in the same directory.

The link tag should be positioned inside the `<head>` section of the HTML page, like this:

    <!DOCTYPE html>
    <head>
        <link rel="stylesheet" href="nice.css">    
    </head>
    <body>
        <p>This is the default serif font. It is commonly used in 
        printed media for better readability, since letters
        are more distinct in serif fonts.</p>
    
        <p class="nice">This is a sans-serif font. 
        It is commonly used in screens because it is hard
        for screens to render letters with such great detail.</p>

    </body>

### 4. Programmatic access

HTML elements have the `style` attribute which you can use to add styles programmatically.
 
For example:

    <!DOCTYPE html>
    <body>
        <p id="serif-text">This is the default serif font. It is commonly used in 
        printed media for better readability, since letters
        are more distinct in serif fonts.</p>
    
        <p class="nice" id="sans-serif-text">This is a sans-serif font. 
        It is commonly used in screens because it is hard
        for screens to render letters with such great detail.</p>
        
        <script>
            var sansSerifText = document.getElementById("sans-serif-text");
            sansSerifText.style.fontFamily = "sans-serif";
        </script>
    </body>    

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
