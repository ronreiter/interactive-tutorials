Tutorial
--------
An operator is the element affecting operands in a Perl expression and causes Perl to execute an operation on one of more operands. In the expression `$a + 5`, `$a` and `5` are the operands and `+` is the operation causing the addition operation.

Perl programming can be accomplished by directly executing Perl commands at the shell prompt or by storing them in a text file with the `.pl` extension, and then executing it as a Perl script via `perl file.pl`.

Perl supports many operator types. Following is a list of frequently used operators.

### Arithmetic Operators

Manipulate numeric scalar values.

	# scalar values for operator examples
	$x = 10;
	$y = 30;
    $z = 3;

Operators:

- `+`   Addition - Adds the operand values from either side of the operator
- `-`   Subtraction - Subtracts the right operand from the left operand
- `-`   Negation - When taking a single operand (unary), it calculates the negative value
- `*`   Multiplication - Multiplies the operand values from either side of the operator
- `/`   Division - Divides the left operand by the right operand
- `%`   Modulus - Divides the left operand by the right operand and returns remainder
- `**`  Exponent - Calculates the left operand to the power of the right operand

### Comparison Operators

Used to compare two scalar string or scalar numeric values. Comparison or relational operators are discussed in the [[Conditional Decisions]] section of this tutorial. Please review them in that section.

### Assignment Operators

Used to assign scalar or array data to a data structure.

Operators:

- `=`   Simple assignment - assigns values from right side operands and operators to left side operand
- `+=`  Addition and assign - add right operand to left operand and assign to left operand
- `-=`  Substract and assign - substract right operand from left operand and assign to left operand
- `*=`  Multiply and assign - multiply right operand by left operand and assign to left operand
- `/=`  Divide and assign - divide left operand by right operand and assign to left operand
- `%=`  Modulus and assign - divide left operand by right operand and assign remainder to left operand
- `**=` Exponent and assign - calculates the left operand to the power of the right operand and assign to left operand
- `++`  Autoincrement - increases unary operand value by one. E.g. `$x++` or `++$x` gives 11
- `--`  Autodecrement - decreases unary operand value by one. E.g. `$x--` or `--$x` gives 9

Note that `$x++` is considered **post-autoincrement**, and `++$x` is considered **pre-autoincrement**:

- `$a = $x++` will assign `$a` with 10 and `$x` with 11 (autoincrement `$x` after assigning value to `$a`)
- `$a = ++$x` will assign `$x` with 11 then assign `$a` with 11 (autoincrement `$x` before assigning value to `$a`)

Similarly with `--` (autodecrement):

- `$a = $x--` will assign `$a` with 10 and `$x` with 0 (autodecrement `$x` after assigning value to `$a`)
- `$a = --$x` will assign `$x` with 9 then assign `$a` with 9 (autodecrement `$x` before assigning value to `$a`)

### Bitwise Operators

Manipulate numeric scalar values at the bit level.

Bitwise operators treat numeric operands as binary numbers and perform bit by bit operations. Scalars can be assigned with decimal, binary (with prefix `0b`) or hexadecimal (with prefix `0x`).

	# Example of decimal, binary and hexadecimal assignments - all will print the same value
	$d = 89;
	$b = 0b01011001;
	$h = 0x59;
	print "d=$d b=$b h=$h\n";     # d=89 b=89 h=89

Operators:

- `&`   AND - bitwise AND of the operand values from either side of the operator e.g. `$b & $mask` gives `0b1001`
- `|`   OR - bitwise OR of the operand values from either side of the operator e.g. `$b | $mask` gives `0b1111`
- `^`   XOR - bitwise XOR of the operand values from either side of the operator e.g. `$b & $mask` gives `0b1001`
- `~`   NOT - bitwise INVERT (unary operator) inverts each bit of the left operand e.g. `~$b` give `0b10100110`
- `<<`  SHIFT LEFT - bitwise SHIFT LEFT the left operand, right operand times e.g. `$b << 1` give `0b101001100`
- `>>`  SHIFT RIGHT - bitwise SHIFT RIGHT the left operand, right operand times e.g. `$b >> 1` give `0b01010011`

Examples:

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

### Logical Operators

Evaluate logical relations between operands.

Logical operators calculate a logical value - TRUE or FALSE, per the values of their operands.

- `and`  Logical AND operator - return TRUE if both the operands are true, otherwise FALSE
- `&&`   Logical AND operator - return TRUE if both the operands are true, otherwise FALSE
- `or`   Logical OR operator - return TRUE if either one of the operands is true, otherwise FALSE
- `||`   Logical OR operator - return TRUE if either one of the operands is true, otherwise FALSE
- `xor`  Logical XOR operator - return TRUE if one of the operands is true and the other is false, otherwise FALSE
- `not`  Logical NOT operator (unary operator)- return TRUE if the operand is false, otherwise FALSE
- `!`    Logical NOT operator (unary operator)- return TRUE if the operand is false, otherwise FALSE

Examples:

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

### String Operators

Manipulate string scalar values.

	$a = "world";
	$b = "hello";

- `.`  String concatenation operator - concatenate the left and right operands e.g. `$a . $b` gives "world hello"
- `x`  String repetition operator - return the left operand repeated the number of times specified by the right operator. E.g. `$b x 3` gives "hellohellohello"

Example:

	$a = "world";
	$b = "hello";
	print "Say to the " . $a . ": " . $b x 3 . "\n";

### Miscellaneous Operators

- `..`  The range operator - returns an array of values reflecting the sequential range beteen the two operands. For numeric operands, the values are incremented by 1 from the left operand to the right operand. For letters (lowercase or uppercase), the values are incremented in alphabetical order.

Example:

    @list_of_numbers = (3..10);
	print "@list_of_numbers\n";      # 3 4 5 6 7 8 9 10

    @list_of_letters = ('c'..'g');
	print "@list_of_letters\n";      # c d e f g

    @list_of_upper = ('R'..'V');
	print "@list_of_upper\n";        # R S T U V
    

Exercise
-------------
Follow these instructions and print the result after each step.

1. Assign scalar `$a` to a starting value of 5. Print value of `$a`.
1. Add 6 to the previous result. Print the new result.
1. Multiply the previous result by 2. Print the new result.
1. Autoincrement the previous result. Print the new result.
1. Substract 9 from the previous result. Print the new result.
1. Divide the previous result by 7. Print the new result.

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
$a = 5;
print $a . "\n";

$a += 6;
print $a . "\n";

$a *= 2;
print $a . "\n";

$a++;
print $a . "\n";

$a -= 9;
print $a . "\n";

$a /= 7;
print $a . "\n";