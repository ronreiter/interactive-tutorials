Tutorial
--------
PHP has an exception model similar to that of other programming languages.
An exception can be thrown, and caught ("catched") within PHP.
Code may be surrounded in a try block, to facilitate the catching of potential exceptions.
Each try must have at least one corresponding catch or finally block.

    try {
      echo 2 / 0;
    } catch (Exception $e) {
      echo "Caught exception: Division by zero!";
    }

Multiple catch blocks can be used to catch different classes of exceptions.
Normal execution (when no exception is thrown within the try block) will continue after
that last catch block defined in sequence. Exceptions can be thrown (or re-thrown) within a catch block.

    if (4/2 == 2) {
      echo "Right!";
    } else {
      throw new Exception("Wrong answer!");
    }

When an exception is thrown, code following the statement will not be executed,
and PHP will attempt to find the first matching catch block. If an exception is not caught,
a PHP Fatal Error will be issued with an "Uncaught Exception ..." message,
unless a handler has been defined with set_exception_handler().

## Finally Blocks

In PHP 5.5 and later, a finally block may also be specified after or instead of catch blocks.
Code within the finally block will **always be executed** after the try and catch blocks,
regardless of whether an exception has been thrown, and before normal execution resumes.

    try {
      echo 4/0;
    } catch (Exception $e) {
      echo "Divided by zero!";
    } finally {
      echo "This will be outputed even if exception will happen!";
    }


Exercise
--------
Use a try-catch-finally block to first catch the exception and print out `Exception caught!` and then finally print out `Done!`.
Your final output should look like:
```
Exception caught!
Done!
```

Tutorial Code
-------------

<?php
# This function will throw an exception!
function throw_exception() {
  throw new Exception("Exception!");
}

# Surround the statement in a try-catch-finally block!
throw_exception();
?>


Expected Output
---------------
Exception caught!
Done!

Solution
--------
<?php
# This function will throw an exception!
function throw_exception() {
  throw new Exception("Exception!");
}

# Surround the statement in a try-catch-finally block!
try {
  throw_exception();
} catch (Exception $e) {
  echo "Exception caught!\n";
} finally {
  echo "Done!";
}
?>
