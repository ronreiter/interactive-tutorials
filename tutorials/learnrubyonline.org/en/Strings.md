Tutorial
--------

A string is a collection of characters/symbols inside quotation marks. Strings are interpreted by the computer as raw text.

You can use single quotes or double quotes for strings - either one is acceptable.

    myFirstString = 'I am a string!' #single quotes
    mySecondString = "Me too!" #double quotes

The key difference between using single quotes and double quotes is that you can only perform interpolation if you use 


There are many things you can do with strings, using methods.
.length will give you the number of characters in a string.

    "Hi!".length #is 3

.reverse will flip the string around.

    "Hi!".reverse #is !iH

.upcase will make a string all caps.

    "Hi!".upcase #is HI!

and .downcase will make a string all lowercase.

    "Hi!".downcase #is hi!

There are many more methods, but I am not going to list them all.
You can also use many methods at once. They are solved from left to right.

    "Hi!".downcase.reverse #is !ih

Exercise
--------
Take the given string and use methods to make the code print out "!edoc ma i !ih".

Tutorial Code
-------------

myString = "Hi! I am code!" #In the next line, use methods to change it.
myNewString = myString
puts myNewString

Expected Output
---------------

!edoc ma i !ih

Solution
--------

myString = "Hi! I am code!" #In the next lines, use methods to change it.
myNewString = myString.reverse.downcase
puts myNewString
