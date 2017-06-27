Tutorial
--------

Web developers have been choosing Twitter Bootstrap as the leading framework for desining UI. As you might have
noticed, the default HTML styles are not appealing as the websites we see around every day. The Bootstrap framework
allows us to write plain HTML that looks much more modern and useful than the default HTML stylesheet.

To load Bootstrap, you would need to load it from somewhere. We can load the Bootstrap library from a CDN by running
the following `<link>` tag:

    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">

Loading items from a CDN is useful since CDNs (Content Delivery Networks) are already optimized for fast download
speeds from all around the world, and are highly available and reliant.

If you still want to load the Bootstrap files locally, then simply go to the website ([[https://getbootstrap.com]])
and download it from there. Then, use the same tag, only this time have the href attribute point to the local
copy of bootstrap.min.css.

After adding it to your HTML page, it would probably look like this:

    <!DOCTYPE html>
    <html>
    <head>
        <title>Hello, Bootstrap!</title>
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
    </head>
    <body>
        <p>Hello, Bootstrap!</p>
    </body>
    </html>
    
You will immediately notice that the default font has also changed from the default serif font to a sans-serif font.

Now that you know how to load Boostrap, let's play around with a simple example. Note that this is part of the 
official Bootstrap documentation showing a simple example of how buttons look like using Bootstrap.


    <!DOCTYPE html>
    <html>
    <head>
        <title>Hello, Bootstrap!</title>
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
    </head>
    <body>
        <button type="button" class="btn btn-default">Default</button>
        <button type="button" class="btn btn-primary">Primary</button>
        <button type="button" class="btn btn-success">Success</button>
        <button type="button" class="btn btn-info">Info</button>
        <button type="button" class="btn btn-warning">Warning</button>
        <button type="button" class="btn btn-danger">Danger</button>
        <button type="button" class="btn btn-link">Link</button>
    </body>
    </html>

This tutorial is incomplete. You are welcome to contribute one by sending me a pull request:  
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
