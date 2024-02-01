Tutorial
--------

The `async` and `await` keywords in JavaScript are used to make asynchronous programming easy, by introducing something called **coroutines**.
A coroutine is a function which can pause its execution and return control to the main loop until some event occurs. It is an alternative approach for using callback functions, which makes it easier to write, understand and maintain.

### The `await` keyword

The `await` keyword is a special command which tells JavaScript to stop the execution of the current function until a Promise resolves, and then return the promise's value.
It can be seen as an endless loop which checks if the promise has been resolved, and returns the value of the resolved promise when it does.

The `await` keyword only works inside `async` functions (which are coroutines, as explained before).

The tricky part about `async` functions is that they return a Promise, instead of a value. This means that every time we need to run an `async` function, we need to `await` on it if we want to get the return value.

Let's revisit the example of `sumAsync` from the Promises tutorial, but with using the sleep function instead of setTimeout, so we can implement `sumAsync` using `await` later on.
The sleep function will return a `Promise` which resolves after `ms` milliseconds, and uses setTimeout to work.

    .exec
    function sleep(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    function sumAsync(x, y) {
        return new Promise((resolve, reject) => {
            sleep(500).then(() => {
                resolve(x + y);
            });
        });
    }

    // let's use the function now
    sumAsync(5, 7).then((result) => {
        console.log("The result of the addition is:", result);
    });

We can make our code `sumAsync` much nicer by simply using `await` on the `sleep` function and then returning the result.

    .exec
    function sleep(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    async function sumAsync(x, y) {
        // this code waits here for 500 milliseconds
        await sleep(500);
        // done waiting. let's calculate and return the value
        return x+y;
    }

    // sumAsync is an async function, which means it returns a Promise.
    sumAsync(5, 7).then((result) => {
        console.log("The result of the addition is:", result);
    });

Since `sumAsync` is a an `async` function, it **implicitly** returns a `Promise`, just like the previous example which **explicitly** returns a `Promise`.

The two `sumAsync` functions are completely identical in their functionality, but the one which is defined using `async` is much easier to understand!

Exercise
--------

Write an async function which waits 500 milliseconds and then returns the uppercase of a given string. Use the `sleep` function provided.

Tutorial Code
-------------
    function sleep(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    async function uppercaseString(s) {
        // your code goes here
    }

    uppercaseString("edward").then(console.log);

Expected Output
---------------
EDWARD

Solution
--------
    function sleep(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    async function uppercaseString(s) {
        await sleep(500);
        return s.toUpperCase();
    }

    uppercaseString("edward").then(console.log);
