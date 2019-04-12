Tutorial
--------

Navigation bars are tools used to help users get from one location to another very quickly and easily. With bootstrap, many of the small details of the navigation bar have already been written by someone else and posted online, so you can just focus on getting the main bar to work and look the way you want it to.

In order to link to the bootstrap, you must call the bootstrap link using: 

&lt;link rel="stylesheet" href="link to bootstrap goes here"&gt; 

in the header section. For some of them, a Javascript source will also need to be called. 

To call the navbar, you will need to call &lt;nav class="navbar"&gt; (the class is called "navbar").

&lt;li&gt;, called lists, are sections of the navigation bar.

&lt;a href="link"&gt;, which are links to the other location(s), go inside the list. For example:

&lt;li&gt; &lt;a href="link"&gt; Link One &lt;/a&gt; &lt;/li&gt;

Exercise
--------

In this exercise, you will be adding three more sections to the navigation bar, and calling &lt;nav class="navbar"&gt; at the indicated space in order to call the bootstrap code.


Tutorial Code
-------------

    <!DOCTYPE html>
      <html>
        <head>
            <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.0/css/bootstrap.min.css"> <!--This is calling the Boostrap-->
            <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
            <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.0/js/bootstrap.min.js"></script> <!--This is the Javascript-->
        </head>
        <body>
         <!--This line of code should be calling the navigation bar | Type it in before this comment starts (before the "<!--")-->
            <div class="container-fluid">
              <ul class="nav navbar-nav">
                    <li><a href="#">Home</a></li> <!--The "li" are the lists of the navigation bar, or the sections of the navigation bar | Add three more lists/sections after this one also called "Home", each with the link set as a "#" (just like in the first example in this tutorial)-->
                 </ul>
             </div>
         </nav>
        </body>
    </html>
    
Expected Output
---------------
    <!DOCTYPE html>
      <html>
        <head>
            <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.0/css/bootstrap.min.css"> <!--This is calling the Boostrap-->
            <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
            <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.0/js/bootstrap.min.js"></script> <!--This is the Javascript-->
        </head>
        <body>
        <nav class="navbar"> <!--This line of code should be calling the navigation bar | Type it in before this comment starts (before the "<!--")-->
            <div class="container-fluid">
              <ul class="nav navbar-nav">
                    <li><a href="#">Home</a></li> <!--The "li" are the lists of the navigation bar, or the sections of the navigation bar | Add three more lists/sections after this one also called "Home", each with the link set as a "#" (just like in the first example in this tutorial)-->
                    <li><a href="#">Home</a></li>
                    <li><a href="#">Home</a></li>
                    <li><a href="#">Home</a></li>
                 </ul>
             </div>
         </nav>
        </body>
    </html>

Solution
--------

    <!DOCTYPE html>
      <html>
        <head>
            <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.0/css/bootstrap.min.css"> <!--This is calling the Boostrap-->
            <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
            <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.0/js/bootstrap.min.js"></script> <!--This is the Javascript-->
        </head>
        <body>
        <nav class="navbar"> <!--This line of code should be calling the navigation bar | Type it in before this comment starts (before the "<!--")-->
            <div class="container-fluid">
              <ul class="nav navbar-nav">
                    <li><a href="#">Home</a></li> <!--The "li" are the lists of the navigation bar, or the sections of the navigation bar | Add three more lists/sections after this one also called "Home", each with the link set as a "#" (just like in the first example in this tutorial)-->
                    <li><a href="#">Home</a></li>
                    <li><a href="#">Home</a></li>
                    <li><a href="#">Home</a></li>
                 </ul>
             </div>
         </nav>
        </body>
    </html>
