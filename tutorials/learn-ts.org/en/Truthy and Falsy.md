### Truthy and Falsy

Tutorial
-------

TypeScript considers some values as "falsy". When evaluated inside a boolean expression, they
will act as `false`. Here are a few examples of falsy variables in TypeScript:

* `false`
* `0`
* `NaN` (the "not a number" value)
* `""` (empty string)
* `[]` (empty array)
* `null`
* `undefined`

All other values will be considered "truthy", meaning that when evaluated as a 
boolean expression, they will act as `true`.

The `||` (logical OR) operator can be used to select the first non-falsy value. For example:


    const bananas = 3;
    const apples = 0;

    // will be set to 3 since bananas is truthy
    const numberOfBananasOrApples = bananas || apples;

    const oranges = 0;
    const pears = 4;

    // will be set to 4 since oranges is falsy
    const numberOfBananasOrApples = oranges || pears;

Using the double not operator combination (`!!`)
-------
To force a variable into it's boolean representation from either truthy or falsy
to either `true` or `false`, use `!!` as follows:

For example:

    const bananas = 3;
    const apples = 0;

    // will be set to true because bananas is greater than zero
    const atLeastOne = !!bananas || !!apples;

The logical not operator forces TypeScript to turn the variable into a boolean value, and
using it twice will flip the condition to true if it is truthy and false otherwise.



The nullish coalescing operator (`??`)
-------

TypeScript allows to return a "fallback" value if the left side of the operator is 
either `null` or `undefined`. It is similar to using the logical OR operator `||`
but will choose the right value only if the left side is either `null` or `undefined`,
whereas the `||` operator will choose the left side only if the value is truthy.

    const apples = 0;
    const oranges = 3;

    // will be set to 0 since apples is a number
    const applesOrOranges = apples ?? oranges;

    // will be set to 3 since apples is falsy
    const numberOfApplesOrOranges = apples || oranges;


Exercise
-------
Select the first number from the variables `a`, `b`, and `c` which is not `null` or `undefined`.

Tutorial Code
-------
    const a = null;
    const b = undefined;
    const c = 7;
    // write your code here

    console.log(first);

Expected Output
-------
    7

Solution
-------
    const a = null;
    const b = undefined;
    const c = 7;
    // write your code here
    const first = a ?? b ?? c;

    console.log(first);
