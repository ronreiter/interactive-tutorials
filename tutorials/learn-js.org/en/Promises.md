Tutorial
--------
Promises are the basics of asynchronous programming in JavaScript, and are very important to master.

### What is Asynchronous Programming?

Asynchronous programming, or in short, async programming, is a method of programming which enables different parts of code to run at changing times, instead of immediately.

This is mostly required when we want to fetch information from some remote server, and write code which does something with what the server returned:

    function getServerStatus() {
        const result = fetch("/server/status");

        // THIS WILL NOT WORK!
        console.log("The status from the server is: ", result.ok);
    }

In many programming languages such as Python, this approach would work, because functions are by default synchronous functions.

In JavaScript, most APIs which require waiting for a function to do something, are **asynchronous** by default which means that this code will not do what we think it will do, since the `fetch` function is asynchronous, and therefore will return something which is not exactly the result, but will _eventually_ be the result.

This "thing" which is returned from the `fetch` function is called a **Promise** in JavaScript.

To make the code above work, we will need to write the function in the following manner:

    function getServerStatus() {
        const result = fetch("/server/status");

        result.then(function(status) {
            console.log("The status from the server is: ", status.ok);
        });
    }

Notice that we used the `then` function here, which is one of the methods of a `Promise`.

### The Promise Object

A Promise is a native JavaScript object which has two traits:
1. It receives a single argument which is a function. This function needs to have two arguments,
a `resolve` function and a `reject` function. The code written inside the promise needs
to use one of these two functions.
2. It can be waited on using the `then` method (and other similar methods), or the `await` 
statement. (The async/await statements have a separate tutorial).

An asynchronous function is defined by a function, which instead of returning the value it was supposed to return, it returns a `Promise` object, which will eventually resolve and
give the user the answer.

For example, let's say that we would like to calculate the sum of two numbers, but by writing a function which returns a `Promise` and not the value.

    .exec
    function sumAsync(x, y) {
        const p = new Promise((resolve, reject) => {
            // this resolves the promise we just created with the output of x+y
            resolve(x + y);                        
        });

        // This returns the promise, not the value
        return p;
    }

    // let's use the function now
    sumAsync(5, 7).then((result) => {
        console.log("The result of the addition is:", result);
    });

When can this be very useful? When the calculation needs to happen indirectly, for example after waiting a while or when retrieving information from the server using the `fetch` command, for example.

Let's modify the example to resolve the solution only after a half a second:

    .exec
    function sumAsync(x, y) {
        console.log("1. sumAsync is executed");
        const p = new Promise((resolve, reject) => {
            // run this in 500ms from now
            setTimeout(() => {
                console.log("4. Resolving sumAsync's Promise with the result after 500ms");
                resolve(x + y);
            }, 500); 

            // we don't need to return anything
            console.log("2. sumAsync Promise is initialized");            
        });
        console.log("3. sumAsync has returned the Promise");
        return p;
    }

    // let's use the function now
    sumAsync(5, 7).then((result) => {
        console.log("5. The result of the addition is:", result);
    });

### Rejecting promises

In a synchronous flow, if we want to tell the user that something went wrong so he can catch an exception, we throw an exception using the `throw` argument. When using promises,
we need to trigger the `reject` function instead.

Let's say we want to write the same function, but with a rejection if a value is negative:

    .exec
    function sumAsync(x, y) {
        return new Promise((resolve, reject) => {
            // run this in 500ms from now
            setTimeout(() => {
                if (x < 0 || y < 0) {
                    reject("Negative values received");
                } else {
                    resolve(x + y);
                }
            }, 500); 

            // we don't need to return anything
        });
    }

    sumAsync(-5, 7).then((result) => {
        console.log("The result of the addition is:", result);
    }).catch((error) => {
        console.log("Error received:", error);
    });

Exercise
--------
Write a function which receives a string, and returns a Promise.

The promise should resolve with the uppercase version of the string, but should reject
if the string is null.

Tutorial Code
-------------
    function upperCaseAsync(s) {
        // write your code here
    }
    
    upperCaseAsync("steve").then(console.log);
    upperCaseAsync(null).catch((x) => {
        console.log("No string received!");
    });

Expected Output
---------------
    STEVE
    No string received!

Solution
--------
    function upperCaseAsync(s) {
        return new Promise((resolve, reject) => {
            if (s === null) {
                reject();
            } else {
                resolve(s.toUpperCase());
            }
        });
    }
    
    upperCaseAsync("steve").then(console.log);
    upperCaseAsync(null).catch((x) => {
        console.log("No string received!");
    });
