Tutorial
--------

Functions in JavaScript run in a specific context, and using the `this` variable we have access to it. 

All standard functions in the browser run under the Window context. Functions defined under an object or a class (another function) will use the context of the object it was created in. However, we can also change the context of a function at runtime, either before or while executing the function.

### Binding a method to an object

To bind a function to an object and make it an object method, we can use the `bind` function. Here is a simple example:

    var person = {
        name : "John"
    };

    function printName()
    {
        console.log(this.name);
    }

Obviously, we are not able to call `printName()` without associating the function with the object `person`. To do this we must create a bound method of the function printName to person, using the following code:

    var boundPrintName = printName.bind(person);
    boundPrintName();    // prints out "John"

### Calling a function with a different context

We can use the `call` and `apply` functions to call a function as if it was bound to an object. The difference between the `call` and `apply` functions is only by how they receive their arguments - the `call` function receives the `this` argument first, and afterwards the arguments of the function, whereas the `apply` function receives the `this` argument first, and an array of arguments to pass on to the function as a second argument to the function.

For example, let's call `printName` with `person` as the context using the `call` method:

    printName.call(person);      // prints out "John"

Exercise
--------

Create bound copies of printFullName and printDetails to person called boundPrintFullName and boundPrintDetails.

Tutorial Code
-------------

var person = {
    firstName : "John",
    lastName : "Smith",
    age : 23
};

function printFullName()
{
    console.log(this.firstName + " " + this.lastName);
}

function printDetails()
{
    console.log(this.firstName + " is " + this.age + " years old");
}

// TODO: create bound copies of printFullName and printDetails.
var boundPrintFullName;
var boundPrintDetails;

boundPrintFullName();
boundPrintDetails();

Expected Output
---------------

John Smith
John is 23 years old

Solution
--------

var person = {
    firstName : "John",
    lastName : "Smith",
    age : 23
};

function printFullName()
{
    console.log(this.firstName + " " + this.lastName);
}

function printDetails()
{
    console.log(this.firstName + " is " + this.age + " years old");
}

// TODO: create bound copies of printFullName and printDetails.
var boundPrintFullName = printFullName.bind(person);
var boundPrintDetails = printDetails.bind(person);

boundPrintFullName();
boundPrintDetails();
