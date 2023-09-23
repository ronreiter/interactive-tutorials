### Manipulating Arrays in TypeScript

Tutorial
-------
Arrays in TypeScript can hold specific types of data. This type safety ensures consistency throughout the application.

    let names: string[] = ["Alice", "Bob", "Charlie"];

Exercise
-------
Create an array of numbers called `ages`. Initialize it with three age values. Then add a new age at the beginning of the array and remove the last age.

Tutorial Code
-------

    let ages: number[] = [25, 30, 35];

Expected Output
-------

    [20, 25, 30]

Solution
-------

    let ages: number[] = [25, 30, 35];
    ages.unshift(20);
    ages.pop();