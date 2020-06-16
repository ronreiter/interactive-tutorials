Tutorial
--------

Session Variables are a great way of getting and setting information when working with more than one web page.
Though cookies are one  way of accomplishing such a task, session variables do so without putting anything on
the user's computer. Because such variables are available between multiple web pages they are often referred to
as `global variables.`

The first thing one must do when working with session variables is to start the session. We do this with the
following simple PHP statement:

    session_start();

Once this is done we can work with our session variables. Let's try creating/setting some session variables
in one page that we would be able to access from another page.

    <?php
    session_start();
    $_SESSION["animal"] = "dog";
    $_SESSION["name"] = "fido";
    ?>

We have now set the variable `animal` to `dog`...and the variable `name` to `fido.` Let's see how we would access
those variables from a different web page.

    <?php
    session_start();
    echo "The animal is a " . $_SESSION["animal"] . "<br>";
    echo "Its name is " . $_SESSION["name"];
    ?>

Notice that whether we are setting or accessing the session variables, we must always use `session_start()` first.


Exercise
--------

Create a `color` session variable and set it to yellow. Then show the contents of the `color` variable using `echo`.
Don't forget to start the session before setting the variables.

Tutorial Code
-------------

<?php

?>

Expected Output
---------------

The color is yellow

Solution
--------

<?php
session_start();
$_SESSION["color"] = "yellow";
echo "The color is " . $_SESSION["color"];
?>
