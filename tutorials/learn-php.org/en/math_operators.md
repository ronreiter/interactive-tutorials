Tutorial
--------
We can use simple arithmetic operators to add, subtract, multiply, divide, exponentiate or concatenate between variables.

$x = 1;
$y = 2;
$sum = $x + $y;
echo $sum;       // prints out 3

$a = 2;
$b = 4;

$dif = $b - $a;
echo $dif;      // prints out 2

$multiply = $a * $b;
echo $multiply; //prints out 8

$div = $b / $a;  
echo $div;      //prints out 2

$exp = pow($b,$a);
echo $exp;      // prints out 16 (4^2)
POW is a function with two arguments pow(base, exp) and it returns the value of base raised to the power of exp. If both arguments 
are non-negative integers and the result can be represented as an integer, the result will be returned with integer type, otherwise it will be 
returned as a float.


Exercise
--------
Part 1

Define variables x and y and assigned values 5 and 7 to them.
Calculate their sum.

Part 2

Divide the sum by 2.

Part 3

Calculate the square of the result from Part 2.


Tutorial Code
-------------
<?php
//PART 1: define the x and y variables and assigned values 5 and 7 to them. Sum up the two variables you defined and put the result in 
//a variable called sum.

$x=
$y=

echo "The sum of $x and $y is $sum.\n";
//PART 2
//Divide the sum by 2 and put the result in a variable called div.

echo "The result of $sum divided by 2 is $div.\n";

//Part 3: Use the pow function to calculate the square of the result from Part 2

$exp=pow($div, );
echo "The square of $div is $exp.\n";

?>



Expected Output
---------------
The sum of 5 and 7 is 12.
The result of 12 divided by 2 is 6.
The square of 6 is 36.

Solution
--------
<?php
//PART 1: define the x and y variables and assigned values 5 and 7 to them. Sum up the two variables you defined and put the result in 
//a variable called sum.

$x=5;
$y=7;

//We declare a new variable and assign it the value of the sum of $x and $y
$sum=$x+$y;

echo "The sum of $x and $y is $sum.\n";
//PART 2
//Divide the sum by 2 and put the result in a variable called div.

//We declare a new variable called div that holds the value of the division of the sum by 2
$div=$sum/2;
echo "The result of $sum divided by 2 is $div.\n";

//Part 3: Use the pow function to calculate the square of the result from Part 2

//We declare variable $exp that is assigned the value of the square od $div. Also, in the pow function
//we need to add the second argument which is the exponent
$exp=pow($div, 2);
echo "The square of $div is $exp.\n";

?>
