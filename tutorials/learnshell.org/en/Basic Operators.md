Tutorial
--------
Arithmetic Operators

Simple arithmetics on variables can be done using the arithmetic expression: $((expression))

    A=3
    B=$((100 * $A + 5)) # 305

The basic operators are:

**a + b**  addition (a plus b)

**a - b**  substraction (a minus b)

**a * b**  multiplication (a times b)

**a / b**  division (integer) (a divided by b)

**a % b**  modulo (the integer remainder of a divided by b)

**a** ****** **b** exponentiation (a to the power of b)

Exercise
--------
In this exercise, you will need to calculate to total cost (variable TOTAL) of a fruit basket, which contains 1 pineapple, 2 bananas and 3 watermelons. Don't forget to include the cost of the basket....

Tutorial Code
-------------
#!/bin/bash
COST_PINEAPPLE=50
COST_BANANA=4
COST_WATERMELON=23
COST_BASKET=1
TOTAL=
echo "Total Cost is $TOTAL"

Expected Output
---------------
Total Cost is 128

Solution
--------
#!/bin/bash
COST_PINEAPPLE=50
COST_BANANA=4
COST_WATERMELON=23
COST_BASKET=1
TOTAL=$(($COST_PINEAPPLE + $COST_BANANA + $COST_WATERMELON + $COST_BASKET))
echo "Total Cost is $TOTAL"
