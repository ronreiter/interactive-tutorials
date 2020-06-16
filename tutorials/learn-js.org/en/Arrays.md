Tutorial
--------

JavaScript can hold an array of variables in an Array object. In JavaScript, an array also functions as a list, a stack or a queue. 

To define an array, either use the brackets notation or the Array object notation:

    var myArray = [1, 2, 3];
    var theSameArray = new Array(1, 2, 3);

### Addressing

We can use the brackets `[]` operator to address a specific cell in our array. Addressing uses zero-based indices, so for example, in `myArray` the 2nd member can be addressed with index 1. One of the benefits of using an array datastructure is that you have constant time look-up, if you already know the index of the element you are trying to access.

    console.log(myArray[1]);      // prints out 2

Arrays in JavaScript are sparse, meaning that we can also assign variables to random locations even though previous cells were undefined. For example:

    var myArray = []
    myArray[3] = "hello"
    console.log(myArray);

Will print out:

    [undefined, undefined, undefined, "hello"]

### Array Elements

Because JavaScript Arrays are just special kinds of objects, you can have elements of different types stored together in the same array. The example below is an array with a string, a number, and an empty object.

    var myArray = ["string", 10, {}]

Exercise
--------

You must define an array with the following three variables:

1. A string which has the value of "What is the meaning of life?"
2. A number which has a value of `42`
3. A boolean which has a value of `true`

Tutorial Code
-------------

// TODO: change myArray to contain the variables
var myArray = [];
console.log(myArray[0]);
console.log(myArray[1]);
console.log(myArray[2]);

Expected Output
---------------
What is the meaning of life?
42
true

Solution
--------
// TODO: change myArray to contain the variables
var myArray = ["What is the meaning of life?", 42, true];
console.log(myArray[0]);
console.log(myArray[1]);
console.log(myArray[2]);
