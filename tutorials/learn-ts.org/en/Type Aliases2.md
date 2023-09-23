### Type Aliases

Tutorial
-------
Type aliases allow you to create a new name for a type. It can be used to simplify complex types or to avoid repeating the same type definition over and over.

    type StringOrNumber = string | number;

Exercise
-------
Define a type alias for an object that can have a `name` (string) and `age` (optional number). Then, create a function that takes an array of these objects and filters out the ones without an age.

Tutorial Code
-------
    // Your type alias here
    
    function filterWithAge(arr: /* Your type alias array */): /* Your type alias array */ {
        // Your code here
        return [];
    }
    console.log(filterWithAge([{name: "Alice"}, {name: "Bob", age: 30}, {name: "Charlie", age: 25}]));

Expected Output
-------
    [{name: "Bob", age: 30}, {name: "Charlie", age: 25}]

Solution
-------
    type Person = {
        name: string;
        age?: number;
    };
    
    function filterWithAge(arr: Person[]): Person[] {
        return arr.filter(person => person.age !== undefined);
    }
    console.log(filterWithAge([{name: "Alice"}, {name: "Bob", age: 30}, {name: "Charlie", age: 25}]));
