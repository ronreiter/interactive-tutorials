### Arrays in TypeScript


Tutorial
-------
Arrays serve as one of the primary data structures in TypeScript and JavaScript. In TypeScript, they offer the added advantage of type safety, ensuring that once an array is defined to hold a particular type of data, it will always maintain that type.


Defining Arrays
-------
Arrays can be defined in TypeScript using either the array type syntax or the generic array type:

    let names: string[] = ["Alice", "Bob", "Charlie"];
    let ids: Array<number> = [101, 102, 103];

Adding and Removing Elements
-------

Arrays offer several methods to add or remove items:

1. `push()`: Adds one or more elements to the end of an array.
2. `unshift()`: Inserts one or more elements at the beginning.
3. `pop()`: Removes the last element.
4. `shift()`: Removes the first element.


Example:

    let colors: string[] = ["red", "blue"];
    colors.push("yellow");       // ["red", "blue", "yellow"]
    colors.unshift("green");     // ["green", "red", "blue", "yellow"]
    colors.pop();                // ["green", "red", "blue"]
    colors.shift();              // ["red", "blue"]

Accessing and Modifying Elements
-------
Array elements can be accessed using their index, starting from 0. They can also be modified using their index.

    let fruits: string[] = ["apple", "orange", "grape"];
    console.log(fruits[1]);     // "orange"
    fruits[1] = "banana";       // ["apple", "banana", "grape"]

Finding Elements
-------
You can search for an element using `indexOf()` or check its existence with `includes()`.

    let pets: string[] = ["cat", "dog", "bird"];
    console.log(pets.indexOf("cat"));    // 0
    console.log(pets.indexOf("dog"));    // 1
    console.log(pets.includes("fish"));  // false

Notice that arrays in TypeScript, like in many other languages, have zero-based indices.

Array Length
-------
The `length` property provides the number of elements in an array.

    let digits: number[] = [1, 2, 3, 4, 5];
    console.log(digits.length);   // 5

Understanding and mastering array manipulations is essential for effective TypeScript programming. Whether you're handling data sets, managing lists, or storing configurations, arrays offer flexibility and efficiency.

Exercise
-------
Create an array of numbers named `ages`. Initialize it with three values: 25, 30, and 35. Add a new age, 20, to the start of the array. Finally, remove the last age from the array.


Tutorial Code
-------

    let ages: number[] = [25, 30, 35];
    // Your code here

    console.log(ages);


Expected Output
-------
    [ 20, 25, 30 ]


Solution
-------
    let ages: number[] = [25, 30, 35];
    ages.unshift(20);
    ages.pop();

    console.log(ages);
