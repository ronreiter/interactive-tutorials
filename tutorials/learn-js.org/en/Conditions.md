Tutorial
--------

### The `if` statement

The `if` statement allows us to check if an expression is equal to `true` or `false`, and execute different code according to the result.

For example, if we want ask the user whether his name is "John", we can use the `confirm` function.

    if (confirm("Are you John Smith?"))
    {
        console.log("Hello John, how are you?");
    } else {
        console.log("Then what is your name?");
    }

It is also possible to omit the `else` keyword if we only want to execute a block of code only if a certain expression is true.

To evaluate whether two variables are equal, the `==` operator is used. There is also another equality operator in JavaScript, `===`, which does a strict comparison. This means that it will be true only if the two things you are comparing are the same type as well as same content. 

    console.log("1" == 1); // true
    console.log("1" === 1); // false

For example:

    var myNumber = 42;
    if (myNumber == 42)
    {
        console.log("The number is correct.");
    }

Inequality operators can also be used to evaluate expressions. For example:

    var foo = 1;
    var bar = 2;

    if (foo < bar)
    {
        console.log("foo is smaller than bar.");
    }

Two or more expressions can be evaluated together using logical operators to check if two expressions evaluate to `true` together, or at least one of them. To check if two expressions both evaluate to `true`, use the AND operator `&&`. To check if at least one of the expressions evaluate to `true`, use the OR operator `||`.

    var foo = 1;
    var bar = 2;
    var moo = 3;

    if (foo < bar && moo > bar)
    {
        console.log("foo is smaller than bar AND moo is larger than bar.");
    }

    if (foo < bar || moo > bar)
    {
        console.log("foo is smaller than bar OR moo is larger than bar.");
    }

The NOT operator `!` can also be used likewise:

    var notTrue = false;
    if (!notTrue)
    {
        console.log("not not true is true!");
    }

### The `switch` statement

The `switch` statement is similar to the `switch` statement from the C programming language, but also supports strings. The `switch` statement is used to select between more than two different options, and to run the same code for more than one option. For example:

    var rank = "Commander";
    switch(rank)
    {
        case "Private":
        case "Sergeant":
            console.log("You are not authorized.");
            break;
        case "Commander":
            console.log("Hello commander! what can I do for you today?");
            break;
        case "Captain":
            console.log("Hello captain! I will do anything you wish.");
            break;
        default:
            console.log("I don't know what your rank is.");
            break;
    }

In this example, "Private" an "Sergeant" both trigger the first sentence, "Commander" triggers the second sentence and "Captain" triggers the third. If an unknown rank was evaulated, the `default` keyword defines the action for this case (optional). We must use the `break` statement between every code block to avoid the `switch` from executing the next code block.

Using the `switch` statement in general is not recommended, because forgetting the `break` keyword causes very confusing results.

Exercise
--------

In this exercise, you must construct an `if` inside the `checkNumber` function statement that checks if the number `myNumber` is equal to 42. If that is the case, the function must print out using `console.log` the word `correct`. If myNumber is not equal to 42, the function must print out using `console.log` the word `incorrect`.  You can name the argument passed to a function by supplying the name inside the parentheses.  For example, `function myFunction(myArgument)`.

Tutorial Code
-------------

function checkNumber()
{
    // TODO: write your code here
}

checkNumber(3);
checkNumber(7);
checkNumber(42);

Expected Output
---------------

incorrect
incorrect
correct

Solution
--------

function checkNumber(myNumber)
{
    // TODO: write your code here
    if (myNumber===42)
    {
        console.log("correct");
    }
    else
    {
        console.log("incorrect");
    }
}

checkNumber(3);
checkNumber(7);
checkNumber(42);
