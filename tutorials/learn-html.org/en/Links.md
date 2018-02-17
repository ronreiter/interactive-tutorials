Tutorial
--------

A link ("anchor") is a small span of text that will direct you to a different section in the page, or to a different 
page. To create a link, you will need to specify where you would like the user to be directed to when the link is 
clicked by specifying the `href` attribute.

For example:

    <a href="https://www.google.com">A link to Google</a>
    
To create a link to a different section in the same page, you will need to use a hash sign along with the element ID
to where you would like the browser to jump to. For example:

    <a href="#faq">Click here to read the Frequently Asked Questions</p>
    
The element ID is denoted using the `id` attribute:
    
    <h3 id="faq">Frequently asked questions</h3>
    <p>The first rule about fight club is that you do not talk about fight club.</p>

Exercise
--------

Create a site that has a ```<h1>``` header that says "My First Page", then make a link to ```#faq``` using the ```<a href="#faq">``` link tag. Next, make a ```<h3>``` tag that says "Frequently asked questions", then make two ```<p>``` paragraphs that says "The first rule about fight club is that you do not talk about fight club." and "However, if you do have questions, please e-mail me at foo@bar.com".

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

# My First Page
This is my first page.
[Click here to read the Frequently Asked Questions](file:///test.html#faq)

### Frequently asked questions

The first rule about fight club is that you do not talk about fight club.

However, if you do have questions, please e-mail me at foo@bar.com

Solution
--------
    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <body>
            <h1>My First Page</h1>
            <p>This is my first page.</p>
            <a href="#faq">Click here to read the Frequently Asked Questions</a>
            <hr/>
            <h3 id="faq">Frequently asked questions</h3>
            <p>The first rule about fight club is that you do not talk about fight club.</p>
            <p>However, if you do have questions, please e-mail me at foo@bar.com</p>
        </body>
    </html>
