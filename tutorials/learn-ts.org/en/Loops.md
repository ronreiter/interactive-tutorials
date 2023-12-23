### Loops in TypeScript

Tutorial
-------

Looping is a foundational concept in programming, allowing for repeated execution of a block of code. TypeScript, building upon JavaScript, offers a variety of loop constructs to handle different scenarios. This tutorial will delve into the primary loop mechanisms in TypeScript, discussing their syntax and use cases.

#### `for` Loop:
The traditional `for` loop is composed of an initializer, a condition, and an increment expression. It's perfect for cases where you know in advance how many iterations you need.

    for (let i = 0; i < 5; i++) {
        console.log(i);
    }

  This prints numbers 0 through 4.

#### `for...of` Loop

Ideal for iterating over elements in arrays or other iterable objects, the `for...of` loop offers simplicity.

    const fruits = ['apple', 'banana', 'cherry'];
    for (let fruit of fruits) {
        console.log(fruit);
    }

  This prints 'apple', 'banana', and 'cherry'.

#### `for...in` Loop

This loop iterates over the properties (keys) of an object, making it suitable for object property traversal.

    const person = {
        name: "John", 
        age: 30, 
        city: "New York"
    };
    
    for (let key in person) {
        console.log(key, person[key]);
    }

This prints 'name John', 'age 30', and 'city New York'.

#### `while` and `do...while` Loops

The `while` loop continues executing its block as long as its condition remains `true`. On the other hand, the `do...while` loop ensures the block gets executed at least once before checking the condition.

    let count = 0;
    while (count < 3) {
        console.log(count);
        count++;
    }

This prints numbers 0, 1, and 2.

Familiarizing yourself with these loop constructs is crucial for robust TypeScript programming.
They offer the versatility and power to address a broad range of iteration-based tasks and scenarios.

Exercise
-------
Given an object representing a collection of books, use the `for...in` loop to print out each book's title and author.


Tutorial Code
-------

    const books = {
        "TypeScript Basics": "T. Author",
        "Advanced TypeScript": "A. Expert",
        "TypeScript Projects": "P. Builder"
    };

    // Your code here


Expected Output
-------
    TypeScript Basics - T. Author
    Advanced TypeScript - A. Expert
    TypeScript Projects - P. Builder


Solution
-------

    const books = {
        "TypeScript Basics": "T. Author",
        "Advanced TypeScript": "A. Expert",
        "TypeScript Projects": "P. Builder"
    };

    // Your code here
    for (let title in books) {
        console.log(title, "-", books[title]);
    }
