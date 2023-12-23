### Operators in TypeScript

Tutorial
-------
Operators in TypeScript are fundamental elements that allow you to perform various operations on your data. This can range from simple arithmetic calculations to more complex logical evaluations and comparisons. Understanding these operators is essential to writing robust and efficient TypeScript code.

Arithmetic Operators
-------
Arithmetic operators allow you to perform mathematical operations between numbers.

**Addition** (`+`): Adds two numbers.


    const sum: number = 5 + 3;  // 8


**Subtraction** (`-`): Subtracts one number from another.


    const difference: number = 8 - 5;  // 3


**Multiplication** (`*`): Multiplies two numbers.


    const product: number = 4 * 7;  // 28

**Division** (`/`): Divides one number by another.


    const quotient: number = 20 / 4;  // 5

**Modulus** (`%`): Returns the remainder of a division.


    const remainder: number = 11 % 3;  // 2


Logical Operators
---------------------
Logical operators allow you to combine multiple conditions.

- **AND** (`&&`): Returns true if both conditions are true.
- **OR** (`||`): Returns true if at least one of the conditions is true.
- **NOT** (`!`): Reverses the truthiness of the condition.

Logical operators allow you to create a complex boolean expression, for example:

    const isHome = true;
    const inPajamas = false;
    const wantsToEat = false;
    const isBored = false;

    // I should go outside if I am home, not in my pajamas, and 
    // either I want to eat or I am bored
    const shouldGoOutside = isHome && !inPajamas && (wantsToEat || isBored);

Operators are vital tools in TypeScript that enable various operations. They offer great flexibility in processing and evaluating data, making your coding experience efficient and expressive. Familiarizing yourself with these operators will significantly boost your TypeScript proficiency.


Comparison Operators
-------
Comparison operators allow you to compare two values.

- **Equal to** (`==`): Checks if two values are equal.
- **Not equal to** (`!=`): Checks if two values are not equal.
- **Strictly equal to** (`===`): Checks if two values are equal in value and type.
- **Strictly not equal to** (`!==`): Checks if two values are not equal in value and type.
- **Greater than** (`>`): Checks if the value on the left is greater than the value on the right.
- **Less than** (`<`): Checks if the value on the left is less than the value on the right.
- **Greater than or equal to** (`>=`): Checks if the value on the left is greater than or equal to the value on the right.
- **Less than or equal to** (`<=`): Checks if the value on the left is less than or equal to the value on the right.


For example, to check if a number is between 3 and 7, we can write:

    const number = 5;
    const between = number > 5 && number < 7;
    const numberIsNotZero = number !== 0;


Exercise
-------
Declare two variables: `a` initialized to 5 and `b` initialized to 7. Create a third variable `c` that stores the result of `(a + b) * 3`.

Tutorial Code
-------
    const a: number = 5;
    const b: number = 7;
    // write your code here

    console.log(c);

Expected Output
-------
    36

Solution
-------
    const a: number = 5;
    const b: number = 7;
    // write your code here
    const c: number = (a + b) * 3;

    console.log(c);
