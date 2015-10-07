Tutorial
--------
Perl conditional statements allows conditions to be evaluated or tested with a statement or statements to be executed per the condition value which can be either true or false.

Note that the number 0, the strings "0" and "", the empty array () and undef are considered false in the boolean context of condition evaluation.

Below are several types of conditional statements:
if (condition) statement
if (condition) {statement1; statement2; statement3}
if (condition) statement else statement
if (condition) elsif (condition) statement else statement
unless (condition) statement
unless (condition) statement else statement
unless (condition) elsif (condition) statement else statement

The ? : conditional operator, is a simplified method of if (condition) statement else statement. 
It has the general form of: (condition) ? statement1 : statement2

First the condition is evaluated. If tue, then statement1 is executed and becomes the value of the expression, otherwise, statement2 is executed and becomes the value of the expression.

Equality and Comparison Operators

These operators can be used to define conditions in conditional statements. Numeric values and string values are compared using different operators

Numeric values operators

Operator	Description
==      true if the value of the left operand is equal to the value of right operand, else false
!=	true if the value of the left operand is not equal to the value of right operand, else false
!	negates the boolean value of whatever comes after this in a conditional expression
<=>	Compares the values of two numeric values and returns -1, 0, or 1 if the left argument is numerically less than, equal to, or greater than the right argument, respectively
>	true if the value of the left operand is greater than the value of right operand, else false
<	true if the value of the left operand is lower than the value of right operand, else false
>=	true if the value of the left operand is greater or equal than the value of right operand, else false
<=	true if the value of the left operand is lower or equal than the value of right operand, else false

String values operators

Operator	Description
eq	true if the left argument is stringwise equal to the right argument
ne	true if the left argument is stringwise not equal to the right argument
gt	true if the left argument is stringwise greater than the right argument
lt	true if the left argument is stringwise less than the right argument
ge	true if the left argument is stringwise greater than or equal to the right argument
le	true if the left argument is stringwise less than or equal to the right argument
cmp	-1, 0, or 1 depending on whether the left argument is stringwise less than, equal to, or greater than the right argument, respectively

Example

	$x = 5;
	$y = 10;
        # if
	if ($x == 5) print "x is indeed 5\n";
        # if ... else
	if ($y == 5) print "y is indeed 5\n" else print "y is not 5\n";
        # if ... else using the ? : operator
	$my_result = ($y == 5) ? "y is indeed 5" : "y is not 5";
	print "My result is: $my_result\n";
        # if ... elsif ... else with multiple statements
	if ($x > $y) {
	  print "Result is:\n";
	  print "x ($x) is greater than y ($y)\n";
	} elsif ($my_result eq "y is not 5") {
	  print "Result is:\n";
	  print "I know that $my_result\n";
	} else {
	  print "Result is:\n";
	  print "x ($x) is not greater than y ($y)\n";
	}

Testing if a key value exists in a hash variable can be done using the 'exists' operator. For example the condition: exists($names_and_ages{'Bart'}) returns true if the key 'Bart' exists in hash %names_and_ages.

Exercise
-------------
An array holds a list of family member names. The first hash contains favorite shoe color per person name. The second hash contains shoe size per person name. Evaluate and print the favorite show color and show size per each family member. For shoe sizes 10 and above, add the word 'large' to the output line. Output lines should be in the format: "Homer wears large brown shoes size 12". Important Note - not all family members may be included in the hash variables, so you better conditionally check if they exist or not (using the 'exists' operator). If a name does not exist, add the key/value pair into the hash variables - for show color add: 'black'; for shoe size add: 99.

Tutorial Code
-------------

	@family = ('Homer', 'Moe', 'Maggie');
	%shoe_color = ('Lisa' => 'red', 'Homer' => 'brown', 'Maggie' => 'pink', 'Marge' => 'blue', 'Bart' => 'yellow');
	%shoe_size = ('Moe' => 9, 'Lisa' => 7, 'Homer' => 12, 'Bart' => 8, 'Maggie' => 4);
	# start your code here

Expected Output
---------------
	Homer wears large brown shoes size 12
	Moe wears black shoes size 9
	Maggie wears pink shoes size 4

Solution
--------
	
	
