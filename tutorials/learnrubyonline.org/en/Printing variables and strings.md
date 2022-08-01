Tutorial
--------

Printing variables and strings

You've learned how to use and print variables and strings. But what if you wanted to print a phrase using variables and strings together?

In Ruby you can call a variable inside the string what you want to print.

To call the variable you neet to use `#{variable}`. For example:

	number = 8
	puts "I have #{number} oranges." # I have 8 oranges

You can even make math operations between variables inside it.

	first_number = 5
	second_number = 6
	
	puts "Multiplying #{first_number} by #{second_number} the result is #{first_number * second_number}"


Exercise
--------
Modifiy the code to print using the variables:
- How many apples each of the kids have;
- The sum of all the apples.

Tutorial Code
-------------
john = 5
mary = 3
will = 2

puts "John has  apples."
puts "Mary has  apples."
puts "Will has  apples."
puts "Together they have  apples."

Expected Output
---------------
John has 5 apples.
Mary has 3 apples.
Will has 2 apples.
Together they have 10 apples.


Solution
--------
john = 5
mary = 3
will = 2

puts "John has  apples."
puts "Mary has  apples."
puts "Will has  apples."
puts "Together they have  apples".