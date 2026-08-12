Tutorial
--------

A data structure is a way of organizing data so it can be used effectively. JavaScript provides several built-in data structures, each suited to different kinds of problems.

### Array

An **array** is an ordered list of values. You create one with square brackets, and you access elements by their numeric index:

    var fruits = ["apple", "banana", "cherry"];
    console.log(fruits[0]);       // apple
    console.log(fruits.length);   // 3

### Object

An **object** is a collection of key-value pairs. You can access values with dot notation or bracket notation:

    var person = { name: "John", age: 30 };
    console.log(person.name);   // John
    console.log(person["age"]); // 30

### Set

A **Set** stores unique values, so duplicates are automatically removed:

    var numbers = new Set();
    numbers.add(1);
    numbers.add(2);
    numbers.add(1);   // ignored, already present
    console.log(numbers.size);  // 2

### Map

A **Map** holds key-value pairs like an object, but keys can be any value (not just strings), and insertion order is preserved:

    var scores = new Map();
    scores.set("Alice", 90);
    scores.set("Bob", 85);
    console.log(scores.get("Alice"));  // 90

Exercise
--------

1. Create an array called `colors` with the strings `"red"`, `"green"`, and `"blue"`.
2. Create an object called `fruit` with a property `name` equal to `"mango"`.
3. Print the first color, and print the fruit name.

Tutorial Code
-------------

// TODO: create the colors array and the fruit object here

console.log(colors[0]);
console.log(fruit.name);

Expected Output
---------------
red
mango

Solution
--------

var colors = ["red", "green", "blue"];
var fruit = { name: "mango" };

console.log(colors[0]);
console.log(fruit.name);
