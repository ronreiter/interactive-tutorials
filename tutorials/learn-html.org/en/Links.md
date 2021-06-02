Tutorial
--------

A link ("anchor") is a small span of text that will direct you to a different section in the page, or to a different 
page. To create a link, you will need to specify where you would like the user to be directed to when the link is 
clicked by specifying the `href` attribute.

For example:

    <a href="https://www.google.com">A link to Google</a>
    
To create a link to a different section in the same page, you will need to use a hash sign along with the element ID
to where you would like the browser to jump to. For example:

    <a href="#faq">Click here to read the Frequently Asked Questions</a>
    
The element ID is denoted using the `id` attribute:
    
    <h3 id="faq">Frequently asked questions</h3>
    <p>The first rule about fight club is that you do not talk about fight club.</p>
    
Let's try it out:


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
   

Exercise
--------

1. Mark the word `Go to google.` to a `link` to `https://www.google.com` .
2. Mark the word `Go to blue!` to an `anchor` and link it to element `<div id="blue">` , and so does ` Back to green!` .


Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <head>
        <style>
         div {
           width:60%;
           height:150px;
         }
        </style>
        </head>
        <body>
		
	<!--Start Your Code Under Here-->
	
	Go to google.
	
	<h3>I'm Green!</h3>
	
	Go to blue!
	
	<div id='green' style='background-color:#00A000'></div>
	
	<h3>I'm Blue!</h3>
	
	Back to green!
	
	<div id='blue' style='background-color:#0000A0'></div>
	
        </body>
    </html>
    
Expected Output
---------------
   <!DOCTYPE html>
    <html>
        <head>
	<style>
	   div {
	      width:60%;
	      height:150px;
	   }
	</style>
        </head>
        <body>
	<a href='https://www.google.com'>Go to google.</a>
	<h3>I'm Green!</h3>
	<a href='#blue'>Go to blue!</a>
	<div id='green' style='background-color:#00A000'></div>
	<h3>I'm Blue!</h3>
	<a href='#green'>Back to green!</a>
	<div id='blue' style='background-color:#0000A0'></div>
        </body>
    </html>
    

Solution
--------

     <!DOCTYPE html>
    <html>
        <head>
	<style>
	   div {
	      width:60%;
	      height:150px;
	   }
	</style>
        </head>
        <body>
	<a href='https://www.google.com'>Go to google.</a>
	<h3>I'm Green!</h3>
	<a href='#blue'>Go to blue!</a>
	<div id='green' style='background-color:#00A000'></div>
	<h3>I'm Blue!</h3>
	<a href='#green'>Back to green!</a>
	<div id='blue' style='background-color:#0000A0'></div>
        </body>
    </html>
    
