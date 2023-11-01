Tutorial
--------

We've already looked at if-else statements, and we've seen that we can cascade these statements, but is there a cleaner way to do that?

## switch statement

A switch statement is a shorter way to write a sequence of if - else statements. It runs the first case whose value is equal to the condition expression.

The general syntax is:

    switch name {
    case "Alice":
        // Code to be executed if name is Alice
    case "Bob":
        // Code to be executed if name is Bob 
    }

Optionally, we can add a default statement to handle situations where none of the conditions are met:

    switch name {
    case "Alice":
        fmt.Println("Hi Alice!")
    case "Bob":
        fmt.Println("Hi Bob!")
    default:
        fmt.Println("I don't know you!")
    }

Cases are evaluated from top to bottom, stopping at the first case that is met:

    x := 10
    switch x {
    case x == 0:
        // Since x is 10 in this example, this case will not execute
    case x > 5:
        // X is 10, which is greater than 5. This case will execute.
    case x > 0:
        // While this case is also true, because an earlier case is true, this case will not execute
    }

## Example
Let's write an example code to check if the user's name is `John` or not

    userName := "Alice"

    // prints Hi Alice!
    switch userName {
    case "Alice":
        fmt.Println("Hi Alice!")
    case "Bob":
        fmt.Println("Hi Bob!")
    default:
        fmt.Println("I don't know you!")
    }

    // let's change the username variable
    userName := "Bob"

    // prints Hi Bob!
    switch userName {
    case "Alice":
        fmt.Println("Hi Alice!")
    case "Bob":
        fmt.Println("Hi Bob!")
    default:
        fmt.Println("I don't know you!")
    }
        userName := "Bob"

    // let's change the username again
    userName := "Matthew"
    // prints I don't know you!
    switch userName {
    case "Alice":
        fmt.Println("Hi Alice!")
    case "Bob":
        fmt.Println("Hi Bob!")
    default:
        fmt.Println("I don't know you!")
    }
   
Just like an if statement, the switch statement also provides an option to initialize a variable and test the condition within the if statement. The general syntax in this case is

    switch <init>;<condition> {
    case:
        // code to execute if condition is true
    }

An example code is below:
    // Initializes x by setting it to 5, then checks if a is positive or negative
    switch x := 5; x {
    case a < 0:
        fmt.Println("A is negative")
    case a > 0:
        fmt.Println("A is positive")
    }

Exercise
--------
In a college course, a score below 70 is considered failing, a score of 70 to 90 is considered acceptable, and a score greater than 90 is considered outstanding. Write a switch statement to check the score variable. Print `"Failing"` if the score is below 70, `"Acceptable"` if the score is between 70-90 inclusive, and `"Outstanding"` if the score is more than 90. 

Tutorial Code
-------------
package main

import "fmt"

func main () {
    score := 85

    // Add your code here.
}

Expected Output
---------------
Acceptable

Solution
--------
package main

import "fmt"

func main () {
    score := 85
    switch score {
    case score > 90:
        fmt.Println("Outstanding")
    case score >= 70:
        fmt.Println("Acceptable")
    case score < 70:
        fmt.Println("Failing")
    }
}
