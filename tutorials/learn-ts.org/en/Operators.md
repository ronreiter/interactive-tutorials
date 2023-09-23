### Operators in TypeScript

Tutorial
-------
Operators in TypeScript are fundamental elements that allow you to perform various operations on your data. This can range from simple arithmetic calculations to more complex logical evaluations and comparisons. Understanding these operators is essential to writing robust and efficient TypeScript code.

Arithmetic Operators
-------
Arithmetic operators allow you to perform mathematical operations between numbers.

- **Addition** (`+`): Adds two numbers.
    ```typescript
    let sum: number = 5 + 3;  // 8
    ```

- **Subtraction** (`-`): Subtracts one number from another.
    ```typescript
    let difference: number = 8 - 5;  // 3
    ```

- **Multiplication** (`*`): Multiplies two numbers.
    ```typescript
    let product: number = 4 * 7;  // 28
    ```

- **Division** (`/`): Divides one number by another.
    ```typescript
    let quotient: number = 20 / 4;  // 5
    ```

- **Modulus** (`%`): Returns the remainder of a division.
    ```typescript
    let remainder: number = 11 % 3;  // 2
    ```

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

Logical Operators
---------------------
Logical operators allow you to combine multiple conditions.

- **AND** (`&&`): Returns true if both conditions are true.
- **OR** (`||`): Returns true if at least one of the conditions is true.
- **NOT** (`!`): Reverses the truthiness of the condition.

Operators are vital tools in TypeScript that enable various operations. They offer great flexibility in processing and evaluating data, making your coding experience efficient and expressive. Familiarizing yourself with these operators will significantly boost your TypeScript proficiency.

Exercise
-------
Declare two variables: `a` initialized to 5 and `b` initialized to 7. Create a third variable `c` that stores the result of `(a + b) * 3`.

Tutorial Code
-------
    let a: number = 5;
    let b: number = 7;
    // write your code here

Expected Output
-------
36

Solution
-------
    let a: number = 5;
    let b: number = 7;
    // write your code here
    let c: number = (a + b) * 3;

