Tutorial
--------

Callbacks in JavaScript are functions that are passed as arguments to other functions. This is a very important feature of asynchronous programming, and it enables the function that receives the callback to call our code when it finishes a long task, while allowing us to continue the execution of the code.

For example:

    var callback = function() {
        console.log("Done!");
    }

    setTimeout(callback, 5000);

This code waits 5 seconds and prints out "Done!" when the 5 seconds are up. Note that this code will not work in the interpreter because it is not designed for handling callbacks.

It is also possible to define callbacks as anonymous functions, like so:

    setTimeout(function() {
        console.log("Done!");
    }, 5000);

Like regular functions, callbacks can receive arguments and be executed more than once.

Exercise
--------

Define a function called `callback` which receives an argument and prints it out.

Tutorial Code
-------------

function useCallback(callback)
{
    callback(1);
    callback(2);
    callback(3);
}

function callback(sentence) {
    // TODO: print out sentence
}

// TODO: execute useCallback with the callback as the argument

Expected Output
---------------
1
2
3

Solution
--------
function useCallback(callback)
{
    callback(1);
    callback(2);
    callback(3);
}

function callback(sentence) {
    // TODO: print out sentence
    console.log(sentence);
}

// TODO: execute useCallback with the callback as the argument
useCallback(callback);
