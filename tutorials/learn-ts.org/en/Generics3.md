### Generics

Tutorial
-------
Generics provide a way to make components work with any data type and not restrict them to a single data type. They ensure type safety without compromising the performance or functionality.

    function identity<T>(arg: T): T {
        return arg;
    }

Exercise
-------
Define a generic function that reverses the elements in an array.

Tutorial Code
-------
    function reverse<T>(items: T[]): T[] {
        // Your code here
        return [];
    }
    console.log(reverse([1, 2, 3]));
    console.log(reverse(["a", "b", "c"]));

Expected Output
-------
    [3, 2, 1]
    ["c", "b", "a"]

Solution
-------
    function reverse<T>(items: T[]): T[] {
        return items.reverse();
    }
    console.log(reverse([1, 2, 3]));
    console.log(reverse(["a", "b", "c"]));
