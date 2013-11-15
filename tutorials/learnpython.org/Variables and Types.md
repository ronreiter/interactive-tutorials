Tutorial
--------

Python is completely object oriented, and not "statically typed". You do not need to declare variables before using them, or declare their type. Every variable in Python is an object.

This tutorial will go over a few basic types of variables.

### Numbers
Python supports two types of numbers - integers and floating point numbers. (It also supports complex numbers, which will not be explained in this tutorial).

To define an integer, use the following syntax:

	myint = 7

To define a floating point number, you may use one of the following notations:

	myfloat = 7.0
	myfloat = float(7)

### Strings

Strings are defined either with a single quote or a double quotes.

	mystring = 'hello'
	mystring = "hello"

The difference between the two is that using double quotes makes it easy to include apostrophes (whereas these would terminate the string if using single quotes)

        mystring = "Don't worry about apostrophes"

There are additional variations on defining strings that make it easier to include things such as carriage returns, backslashes and Unicode characters. These are beyond the scope of this tutorial, but are covered in the [Python documentation](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial"). 

Simple operators can be executed on numbers and strings:

	one = 1
	two = 2
	three = one + two

	hello = "hello"
	world = "world"
	helloworld = hello + " " + world

Assignments can be done on more than one variable "simultaneously" on the same line like this

	a, b = 3, 4

Mixing operators between numbers and strings is not supported:

	# This will not work!
	print one + two + hello


### Exercise

The target of this exercise is to create a string, an integer, and a floating point number. The string should be named mystring and should contain the word "hello". The floating point number should be named myfloat and should contain the number 10, and the integer should be named myint and should contain the number 20. 

Tutorial Code
-------------
	# change this code
	mystring = None
	myfloat = None
	myint = None

	# testing code
	if mystring == "hello":
	    print "String: %s" % mystring
	if isinstance(myfloat, float) and myfloat == 10.0:
	    print "Float: %d" % myfloat
	if isinstance(myint, int) and myint == 20:
	    print "Integer: %d" % myint

Expected Output
---------------
	String: hello
	Float: 10
	Integer: 20