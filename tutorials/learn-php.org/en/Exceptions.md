Tutorial
--------
PHP has an exception model similar to that of other programming languages.
An exception can be thrown, and caught ("catched") within PHP.
Code may be surrounded in a try block, to facilitate the catching of potential exceptions.
Each try must have at least one corresponding catch or finally block.
```php
try {
echo 2 / 0;
} catch (Exception $e) {
echo "Caught exception: Division by zero!";
}
```
Multiple catch blocks can be used to catch different classes of exceptions.
Normal execution (when no exception is thrown within the try block) will continue after
that last catch block defined in sequence. Exceptions can be thrown (or re-thrown) within a catch block.
```php
if (4/2 == 2) {
echo "Right!";
} else {
throw new Exception("Wrong answer!");
}
```
When an exception is thrown, code following the statement will not be executed,
and PHP will attempt to find the first matching catch block. If an exception is not caught,
a PHP Fatal Error will be issued with an "Uncaught Exception ..." message,
unless a handler has been defined with set_exception_handler().
In PHP 5.5 and later, a finally block may also be specified after or instead of catch blocks.
Code within the finally block will always be executed after the try and catch blocks,
regardless of whether an exception has been thrown, and before normal execution resumes.
```php
try {
echo 4/0;
} catch (Exception $e) {
echo "Divided by zero!";
} finally {
echo "This will be outputed even if exception will happen!";
}
```

Exercise
--------
Learn how to cope with exceptions, by trying to fill the right words:

Tutorial Code
-------------
```php
try {
echo 10/(1-1);
} _____ (Exception __) {
echo "Exception caught!";
} final__ {
echo "Done!"_
}
```

Expected Output
---------------
Exception caught!
Done!

Solution
--------
```php
try {
echo 10/(1-1);
} catch (Exception $e) {
echo "Exception caught!";
} finally {
echo "Done!";
}
```
