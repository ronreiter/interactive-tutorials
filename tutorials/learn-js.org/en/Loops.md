Tutorial
--------

### The for statement

JavaScript has two methods for running the same code several times. It is mainly used for iterating over arrays or objects. Let's see an example:

    var i;
    for (i = 0; i < 3; i = i + 1)
    {
        console.log(i);
    }

This will print out the following:

    0
    1
    2

The `for` statement in JavaScript has the same syntax as in Java and C. It has three parts:

1. __Initialization__ - Initializes the iterator variable `i`. In this example, we initialize `i` to 0.
2. __Condition__ - As long as the condition is met, the loop continues to execute. In this example, we check that `i` is less than 3.
3. __Increment__ - A directive which increments the iterator. In our case, we increment it by 1 on every loop.

We can also write a shorter notation for the statement by inserting the variable definition inside the `for` loop and incrementing using the `++` operator.

    for (var i = 0; i < 3; i++)
    {
        console.log(i);
    }

To iterate over an array and print out all of its members, we usually use the `for` statement. Here's an example:

    var myArray = ["A", "B", "C"];
    for (var i = 0; i < myArray.length; i++)
    {
        console.log("The member of myArray in index " + i + " is " + myArray[i]);
    }

This prints out the contents of the array:

    The member of myArray in index 0 is A
    The member of myArray in index 1 is B
    The member of myArray in index 2 is C

Notice that we used the `length` property of an array, which returns the number of members in the array, so we know when to stop iterating.

### The while statement

The `while` statement is a more simple version of the `for` statement which checks if an expression evaluates to `true` and runs as long as it says `true`.

For example:

    var i = 99;
    while (i > 0)
    {
        console.log(i + " bottles of beer on the wall");
        i -= 1;
    }

### break and continue statements

The `break` statement allows to stop the execution of a loop. For example, we can create a loop that loops forever using `while(true)` and use the `break` statement to break inside the loop instead by checking that a certain condition was met.

    var i = 99;
    while (true)
    {
        console.log(i + " bottles of beer on the wall");
        i -= 1;
        if (i == 0)
        {
            break;
        }
    }

The `continue` statement skips the rest of the loop and jumps back to the beginning of the loop. For example, if we would want to print only odd numbers using a `for` statement, we can do the following:

    for (var i = 0; i < 100; i++)
    {
        // check that the number is even
        if (i % 2 == 0)
        {
             continue;
        }
        // if we got here, then i is odd.
        console.log(i + " is an odd number.");
    }

Exercise
--------

In this exercise, you must write a for loop that iterates on the myArray variable and prints out all of its members.

Tutorial Code
-------------

var myArray = ["What is the meaning of life?", "The meaning of life is", 42];

// TODO: modify this code
for ()
{
}


Expected Output
---------------

What is the meaning of life?
The meaning of life is
42

Solution
--------

var myArray = ["What is the meaning of life?", "The meaning of life is", 42];

//TODO: modify this code
for (var i = 0; i<=myArray.length; i++)
{
    console.log(myArray[i]);
}
