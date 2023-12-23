### Variables and Types

Tutorial
-------
In TypeScript, variables are containers for storing data values. TypeScript enhances variables with type annotations, allowing you to enforce the type of data your variables can hold. This helps in catching type-related errors early in the development process, making your code more robust and maintainable. There are several basic types in TypeScript, including:

- `number`: For numeric values.
- `string`: For textual data.
- `boolean`: For true/false values.
- `any`: A wildcard type that can be anything.
- `arrays`: For collections of values, denoted by `Type[]` or `Array<Type>`.

Defining a variable is done in TypeScript can be done either using a type or omitting it.
If omitted, the interpreter will set the type according to the type of variable it was defined with.

    let name: string = "John";
    let age: number = 25;
    let hobbies: string[] = ["Basketball", "Hockey"];

    let stringOrNumber = "this is a string!";
    console.log(typeof stringOrNumber);  // string

TypeScript has a very strong typing system. One of the more useful features of it is that it
allows you to define a variable to hold a specific range of types.

For example, to create a variable that can hold either `null` or a number, use the following notation:

    let numberOrNull: number | null;

    // these assignments will work
    numberOrNull = 3;
    numberOrNull = null;

    // this is not allowed in TypeScript
    numberOrNull = "invalid assignment";

When declaring variables, TypeScript uses `let` and `const` keywords from modern JavaScript:

- `let`: Declares a block-scoped variable, optionally initializing it to a value. `let` variables can be reassigned.
- `const`: Declares a block-scoped constant. Once assigned, `const` variables cannot be reassigned.

#### Declaring Variables

**Using `let`**:

When you use `let`, you're telling TypeScript that the variable may change its value over time. For example:

    let age: number = 25;
    age = 26; // This is allowed with `let`.

**Using `const`**:

With `const`, the variable must be initialized at the time of declaration, and it cannot be reassigned later. This is useful for values that should not change throughout the application.

    const pi: number = 3.14;
    pi = 3.15; // This would be an error because `pi` is a constant.


#### Types

TypeScript is statically typed. This means that the type of a variable is known at compile time. This is different from JavaScript, where types are understood dynamically at runtime.

##### Basic Types

Here are some basic types in TypeScript:

**Number**: All numbers in TypeScript are floating-point values. These can be integers, decimals, etc.


    let decimal: number = 6;
    let hex: number = 0xf00d;
    let binary: number = 0b1010;
    let octal: number = 0o744;

**String**: Represents a sequence of characters. TypeScript, like JavaScript, uses double quotes (`"`) or single quotes (`'`) to surround string data.


    let color: string = "blue";
    color = 'red'; // Both single and double quotes are acceptable.

**Boolean**: The most basic datatype is the simple true/false value.


    let isDone: boolean = false;

**Any**: It can be any type of value. It is useful when you don't want to write a specific type, but its use should be limited to when you really don't know what type there will be.


    let notSure: any = 4;
    notSure = "maybe a string instead";
    notSure = false;


Understanding these basics will help you to declare variables and types effectively in TypeScript, leading to more predictable and error-resistant code.

Exercise
-------
Given the provided code, identify the errors in variable declarations based on TypeScript types and fix them.

Tutorial Code
-------

let count: number = "five";
const isActive: boolean = 1;
let items: number[] = 10;
console.log(count, isActive, items);


Expected Output
-------
5 true [ 10 ]

Solution
-------

let count: number = 5;
const isActive: boolean = true;
let items: number[] = [10];
console.log(count, isActive, items);


