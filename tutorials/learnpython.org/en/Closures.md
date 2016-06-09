Closures
--------

A Closure is a function object that remembers values in enclosing scopes even if they are not present in memory. Let us get to it step by step

Firstly, a **Nested Function** is a function defined inside another function. Its very important to note that the nested functions can access the variables of the enclosing scope. However, at least in python, they are only readonly. However in Python 3, one can use the "nonlocal" keyword explicitly with these variables in order to modify them.
For example:
	
	
	def transmit_to_space(message):
		def data_transmitter() #Nested Finction
			print(message) #here message can be seen but not altered
		data_transmitter()
	transmit_to_space("Hello") #output: Hello	
	


This works well as the 'data_transmitter' function can access the 'message'. To demonstrate the use of the "nonlocal" keyword for Python 3, consider this 


	def print_msg(number)
		def printer():
			#"Here we are using the nonlocal keyword"
			nonlocal number =3 #nonlocal helps access and alter higher function contents
			print (number)
		printer()
		print (number) #parenthesis are required for the print function in Python 3
	print_msg(9)       

Without the nonlocal keyword (the exact code with out 'nonlocal'), the output would be 

		3
		9

Since number inside of printer() is being treated as a local variable.

However, with its usage, we get

		3
		3

That is the value of the "number" variable from the print_msg function gets modified.

Now, how about we return the function object rather than calling the nested function within. (Remember that functions are objects (Its Python!))

	def transmit_to_space(message):
		#"This is the enclosing function"
		def data_transmitter() #"The nested function"
			print(message)
		return data_transmitter

And we call the function as follows:

		fun1 = transmit_to_space("Hello")
		fun1()
		fun2 = transmit_to_space("Burn the Sun!")
		fun2()
		#prints: Hello
		#prints: Burn the Sun!

So in Python we can return a function!
In the above example we passed a string to the transmit_to_space() function and we received a function back.
Setting fun2 equal to that function makes fun2 act like the data_transmitter function.


We defined a higher-order function transmit_to_space() with a parameter message and a nested function data_transmitter(). The nested function data_transmitter() has read access to message, because data_transmitter() is in the lexical scope of message, even though message is not local to data_transmitter(). The function transmit_to_space() returns a closure containing the function data_transmitter(), which prints the value of message, and a reference to the variable message from this invocation of transmit_to_space(), so data_transmitter() will know where to find it once invoked.

Note that, as transmit_to_space() returns a function, the variables fun1 and fun2 is of function type. Invoking fun1() will print Hello, while invoking fun2() will print Burn the Sun!. While closure1 and closure2 refer to the same function data_transmitter(), the associated environments differ, and invoking the closures will bind the name message to two distinct variables with different values in the two invocations, thus evaluating the function to different results.


EXERCISE
---------

Make a nested function with a python closure to make functions that help creat multiple multiplication functions using closures. For example, using closures, you will be able to create the functions:

		multiply_with_5()
		# or
		multiply_with_4()

Tutorial Code
-------------

		def multiplier_of(y):
			#Enter your code here to create your nested function and closure
		
		multiply_with_5=multiplier_of(5)
		multiply_with_5(9)
		multiply_with_7=multiplier_of(7)
		multiply_with_7(2)
		

EXPECTED OUTPUT
---------------

		45
		14


SOLUTION 
--------

	def multiplier_of(y):
		def data_transmitter(x):
		print(x*y)
	return data_transmitter
		
	multiply_with_5=multiplier_of(5)
	multiply_with_5(9)
	multiply_with_7=multiplier_of(7)
	multiply_with_7(2)
		
	



	
