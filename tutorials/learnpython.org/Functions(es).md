Tutorial
--------
###Que son las funciones?
Functions are a convenient way to divide your code into useful blocks,
allowing us to order our code, make it more readable, reuse it and save some time.
Also functions are a key way to define interfaces so programmers can share their code.

###Como escribes funciones dentro de Python ?
As we have seen on previous tutorials Python makes use of blocks.

A block is a area of code of written in the format of:
<p>
block_head: <br>
    the_1st_block_line <br>
    the_2nd_block_line <br>
    ... <br>
</p>
Where a block line is more Python code (even another block),
and the block head is of the following format:
<p>block_keyword block_name(argument1,argument2, ...)</p>
Block keywords you already know are "if", "for", and "while". 

Functions in python are defined using the block keyword "def", followed with the function's name as the block's name.<br>
For example:
<pre><code>def my_function():
    print "Hello From My Function!"
</code></pre>

Functions may also receive arguments (variables passed from the caller to the function)
For example:
<pre><code>def my_function_with_args(username, greeting):
    print "Hello, %s , From My Function!, I wish you %s"%(username, greeting) 
</code></pre>

Functions may return a value to the caller, using the keyword- 'return' .<br>
For example:
<pre><code>def sum_two_numbers(a, b):
    return a + b 
</code></pre>

###Como llamas a funciones dentro de Python ?
Simply write the function's name followed by (), placing any required arguments within the brackets.<br>
For example, lets call the functions written above (in the previous example):
<pre><code>
my_function() #print a simple greeting 
my_function_with_args("Or Weis", "a great year!") #prints - "Hello, Or Weis , From My Function!, I wish you a great year!"
x = sum_two_numbers(1,2)  #after this line x will hold the value 3 !
</code></pre>


### Ejercicio

In this exercise you'll use an existing function, and while adding your own create a fully functional program.
<p>
1. Add a function named list_benefits()- that returns the following list of strings:
    "More organized code", "More readable code",
    "Easier code reuse", "Allowing programmers to share and connect code together"
</p><p>
2. Add a function named build_sentence(info) which receives a single argument containing a string 
and returns a sentence starting with the given string and ending with the string " is a benefit of functions!"
</p><p>
3. Run and see all the functions work together!

Código del tutorial
-------------

	#Add your functions here (before the existing functions) 	

	def name_the_benefits_of_functions():
	    list_of_benefits = list_benefits()
	    for benefit in list_of_benefits:
	        print build_sentence(benefit)

	name_the_benefits_of_functions()


Salida esperada
---------------
	More organized code is a benefit of functions!
	More readable code is a benefit of functions!
	Easier code reuse is a benefit of functions!
	Allowing programmers to share and connect code together is a benefit of functions!