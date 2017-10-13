Tutorial
--------
An operator is the element affecting operands in a perl expression and causes perl to execute an operation on one of more operands. In the expression $a + 5, $a and 5 are the operans and + is the operation causing the addition operation. Perl supports many operator types. Following is a list of frequently used operators.

Perl programming can be accomplished by directly executing perl commands at the shell prompt or by storing them in a text file, and then executing it as a Perl script.

    Arithmetic Operators

    Comparison Operators

    Assignment Operators

    Bitwise Operators

    Logical Operators

    String Operators

    Miscellaneous Operators

Arithmetic Operators - manipulate numeric scalar values

	# scalar values for operator examples
	$x = 10;
	$y = 30;
	$z = 3;

Operator - Description e.g. Example

+   Addition - Add the operand values from either side of the operator e.g. $x + $y will give 40
-   Subtraction - Subtracts the right operand from the left operand e.g. $y - $x gives 20
-   Negation - When taking a single operand (unary), Calculates the negative value e.g. -$x gives -10.
*   Multiplication - Multiply the operand values from either side of the operator e.g. $x * $y will give 300
/   Division - Divide the left operand by the right operand e.g. $y / $x gives 3
%   Modulus - Divide the left operand by the right operandand returns remainder e.g. $x / $z gives 1
**  Exponent - calculates the left operand to the power of the right operand e.g. $x ** $z gives 1000

Comparison Operators - used to compare two scalar string or scalar numeric values

Comparison or relational operators are discussed in the Conditional Decisions section of this tutorial. Please review them in that section.

Assignment Operators - used to assign scalar or list data to a data structure

Operator - Description e.g. Example

=   Simple assignment - Assigns values from right side operands and operators to left side operand e.g. $a = $x + $y will assign $a with 40
+=  Addition and assign - add right operand to left operand and assign to left operand $x += $y assigns 40 to $x
-=  Substract and assign - substract right operand from left operand and assign to left operand $x -= $y assigns -20 to $x
*=  Multiply and assign - multiply right operand by left operand and assign to left operand $x *= $y assigns 300 to $x
/=  Divide and assign - divide left operand by right operand and assign to left operand $y /= $x assigns 3 to $y
%=  Modulus and assign - divide left operand by right operand and assign remainder to left operand $x /= $z assigns 1 to $x
**= Exponent and assign - calculates the left operand to the power of the right operand and assign to left operande.g. $x **= $z assigns 1000 to $x
++  Autoincrement - increases unary operand value by one e.g. $x++ or ++$x gives 11
--  Autodecrement - decreases unary operand value by one e.g. $x-- or --$x gives 9

Note that $x++ is considered post-autoincrement, and ++$x is considered pre-autoincrement: 
$a = $x++ will assign $a with 10 and $x with 11 (autoincrement $x after assigning value to $a)
$a = ++$x will assign $x with 11 then assign $a with 11 (autoincrement $x before assigning value to $a)

Similarly with -- Autodecrement:
$a = $x-- will assign $a with 10 and $x with 0 (autodecrement $x after assigning value to $a)
$a = --$x will assign $x with 9 then assign $a with 9 (autodecrement $x before assigning value to $a)

Bitwise Operators - manipulate numeric scalar values at the bit level

Bitwise operators treat numeric operands as binary numbers and perform bit by bit operation. Scalars can be assigned with decimal, binary (with prefix 0b) or hexadecimal (with prefix 0x).

	# Example of decimal, binary and hexadecimal assignments - all given the same value
	$d = 89;
	$b = 0b01011001;
	$h = 0x59;
	print "d=$d b=$b h=$h\n";

Operator - Description e.g. Example

&   AND - bitwise AND of the operand values from either side of the operator e.g. $b & $mask gives 0b1001
|   OR - bitwise OR of the operand values from either side of the operator e.g. $b | $mask gives 0b1111
^   XOR - bitwise XOR of the operand values from either side of the operator e.g. $b & $mask gives 0b1001
~   NOT - bitwise INVERT (unary operator) inverts each bit of the left operand e.g. ~$b give 0b10100110
<<  SHIFT LEFT - bitwise SHIFT LEFT the left operand, right operand times e.g. $b << 1 give 0b101001100
>>  SHIFT RIGHT - bitwise SHIFT RIGHT the left operand, right operand times e.g. $b >> 1 give 0b01010011

	$b = 0b01011001;
	$mask = 0b1111;
	$bandm = $b & $mask;
 	$borm = $b | $mask;
	$bxorm = $b ^ $mask;
 	print "$b & $mask = $bandm\n";
	print "$b | $mask = $borm\n";
	print "$b ^ $mask = $bxorm\n";
	$bshl = $b << 1;
 	$bshr = $b >> 1;
 	print "$b << 1 = $bshl\n";
 	print "$b >> 1 = $bshr\n";

Logical Operators - evaluate logical relations between operands

Logical operators calculate a logical value - TRUE or FALSE, per the values of their operands.

Operator - Description e.g. Example

and  Logical AND operator - return TRUE if both the operands are true, otherwise FALSE
&&   Logical AND operator - return TRUE if both the operands are true, otherwise FALSE
or   Logical OR operator - return TRUE if either one of the operands is true, otherwise FALSE
||   Logical OR operator - return TRUE if either one of the operands is true, otherwise FALSE
xor  Logical XOR operator - return TRUE if one of the operands is true and the other is false, otherwise FALSE
not  Logical NOT operator (unary operator)- return TRUE if the operand is false, otherwise FALSE
!    Logical NOT operator (unary operator)- return TRUE if the operand is false, otherwise FALSE

     $a = 50;
     # TRUE
     if ( (10 > 5) and ($a == 50) ) {print "TRUE\n"} else {print "FALSE\n"}
     # TRUE
     if ( (10 > 5) && ($a == 50) ) {print "TRUE\n"} else {print "FALSE\n"}
     # TRUE
     if ( (10 > 999) or ($a == 50) ) {print "TRUE\n"} else {print "FALSE\n"}
     # TRUE
     if ( (10 > 5) || ($a == 999) ) {print "TRUE\n"} else {print "FALSE\n"}
     # FALSE
     if ( (10 > 5) xor ($a == 50) ) {print "TRUE\n"} else {print "FALSE\n"}
     # TRUE
     if ( (10 > 999) xor ($a == 50) ) {print "TRUE\n"} else {print "FALSE\n"}
     # TRUE
     if ( !(10 > 999) ) {print "TRUE\n"} else {print "FALSE\n"}

String Operators - manipulate string scalar values

Operator - Description e.g. Example

.  String concatenation operator - concatenate the left and right operands e.g. $a . $b gives "world hello"
x  String repetition operator - return the left operand repeated the number of times specified by the right operator e.g. $b x 3 fives "hellohellohello"

       	$a = "world";
	$b = "hello";
	print "Say to the " . $a . ": " . $b x 3 . "\n";

Miscellaneous Operators

Operator - Description e.g. Example

..  The range operator - returns a list (array) of values reflecting the sequential range beteen the two operands. For numeric operands, the values are incremented by 1 from the left operand to the right operand. For letters (lowercase or uppercase), the values are incremented in alphabetical order.

    @list_of_numbers = (3..10);
    @list_of_letters = ('c'..'g');
    @list_of_upper = ('R'..'V');
    print "@list_of_numbers\n";
    print "@list_of_letters\n";
    print "@list_of_upper\n";

Exercise
-------------
Follow these instructions and print the result after each step. 
1) Assign scalar $a to a starting value of 5. Print value of $a.
2) Add 6 to the previous result. print the new result.
3) Multiply the previous result by 2. print the new result.
4) Autoincrement the previous result. print the new result.
5) Substract 9 from the previous result. print the new result.
6) Divide the previous result by 7. print the new result.

Tutorial Code
-------------
	# code for instruction (1)
	$a = 5;
	print $a;
	# continue with code for next steps below

Expected Output
---------------
	5
	11
	22
	23
	14
	2

Solution
--------
