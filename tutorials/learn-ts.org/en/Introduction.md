### Introduction to TypeScript

Tutorial
-------
TypeScript is a strict syntactical superset of JavaScript, adding optional static typing. Developed and maintained by Microsoft, it allows developers to use the latest ECMAScript features and compile the code to plain JavaScript, which can be run in any browser or Node.js environment.

The major advantage of using TypeScript is its static typing feature, which helps catch errors early during the development phase. This can be invaluable for larger projects where catching bugs early can save a significant amount of time and money.

Let's start with the most basic program: "Hello World". In TypeScript, just like JavaScript, this can be done with a simple `console.log()` statement.

    const message: string = "Hello World";
    console.log(message);

The `: string` is a type annotation that tells TypeScript that the `message` variable can only hold a string. This is one of the many features TypeScript adds to JavaScript.

TypeScript also supports formatting strings using the backtick operator. Here is an example:

    const name = "John";
    const message: string = `Hello ${name}`;
    console.log(message);

This prints "`Hello John`", because the `name` variable was formatted into the string right after the word `Hello`.

Exercise
-------
You are given a program that logs "Goodbye World" to the console. Modify the program so that it logs "Hello World" instead.

Tutorial Code
-------
    let farewellMessage: string = "Goodbye World";
    console.log(farewellMessage);

Expected Output
-------
    Hello World

Solution
-------
    let farewellMessage: string = "Hello World";
    console.log(farewellMessage);
