### Type Assertions in TypeScript

Tutorial
-------
Sometimes you might know a more specific type than TypeScript can infer. In these cases, you can use type assertions to specify the type you're confident about.

    let someValue: any = "This is a string";
    let strLength: number = (<string>someValue).length;
    // Or using as-syntax
    let strLengthAs: number = (someValue as string).length;

In general, type assertions should be avoided if possible. But sometimes it is impossible, especially
when dealing with JSON serialization and deserialization from a server, for example.

Exercise
-------
You are given a variable of type `any` that is supposed to contain a string. Write a function that takes this variable and returns the length of the string using type assertions.

Tutorial Code
-------
    let data: any = "Hello, TypeScript!";

    function getStringLength(value: any): number {
        // Your code here
        return 0;
    }

    console.log(getStringLength(data));

Expected Output
-------
    18

Solution
-------
    let data: any = "Hello, TypeScript!";

    function getStringLength(value: any): number {
        return (value as string).length;
    }

    console.log(getStringLength(data));
