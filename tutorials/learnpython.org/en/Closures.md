Closures
--------

A Closure is a function object that remembers values in enclosing scopes even if they are not present in memory. Let us get to it step by step. 

Firstly, a **Nested Function** is a function defined inside another function. Its very important to note that the nested functions can access the variables of the enclosing scope. However, atleast in python, they are only readonly. However, one can use the "nonlocal" keyword explicitly with these variables in order to modify them. For example:

	def transmit_to_space(message):
		"This is the enclosing function"
		def data_transmitter()
			"The nested function"
			print(message)
		data_transmitter()

This works well as the 'data_transmitter' function can access the 'message'. To demonstrate the use of the "nonlocal" keyword, consider this: 

	def print_msg(number)
		def printer():
			"Here we are using the nonlocal keyword"
			nonlocal number
			number=3
			print (number)
		printer()
		print (number)
	print_msg(9)       

Without the **nonlocal** keyword, the output would be 9. However, with its usage, we get 3, that is the value of the **number** variable gets modified.

Now, how about we return the function object rather than calling the nested function within. (Remember that everything is object in python).

	def transmit_to_space(message):
		## This is the enclosing function
		def data_transmitter()
			## The nested function
			print(message)
		return data_transmitter

And we call the function as follows:

	>>>fun2 = transmit_to_space("Burn the sun Suyash!")
	>>>fun2()
	>>>Burn the sun Suyash!

Even though the execution of the **transmit_to_space()** was completed, the message was rather preserved. This technique by which the data is attached to some code even after end of those other original functions is called as closures in python

**Advantage** : Closures can avoid use of global variables and provides some form of data hiding. Also, when there are one or two methods in a class, one can use closures instead (The exercise illustrates this best). Also, Decorators in Python make extensive use of closures.

Exercise
---------

Make a nested function and a python closure to make functions to get multiple multiplication functions using closures. That is using closures, one could make functions to create multiply_with_5() or multiply_with_4() functions using closures.

Tutorial Code
-------------

	## your code goes here
	## make a closure so that you pass the outer
	## function a number to multiply to and 
	## that function returns a function that
	## takes another no to multipy with.
	
	multiplywith5 = multiplier_of(5) #return a multiplier function to 5
	multiplywith5(9) #multiplying 5 and 9 

Expected Output
---------------

45

Solution
-------------

	def multipier_of(n):
		def multipler(number):
			return number*n
		return multiplier
