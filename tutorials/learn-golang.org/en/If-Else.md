Tutorial
--------

In Golang we have if-else statements to check a condition and execute the relevant code.

## if statement

The if statement is used to check if a condition is met and execute the code inside the if block only if the condition is met.

The general syntax is

    if <condition> {
        // Code to be executed if the condition is met.
    }

Let us write a example code to test if we need to take an umbrella based on if it's raining or not outside.

    isRaining := true

    if isRaining {
        fmt.Println("It's raining, take an umbrella")
    }

## else statement

If the condition in a if statement is not met then we execute the else block if it is defined.

The syntax is 

    if <condition> {
        // code executes if condition is true
    } else {
        // code executes if condition is false
    }

One thing to remember here is the else statement should always be in the same line as the closing `}` of the if statement. 

    // below code doesn't work as else is not in the same line as if's closing }
    if <condition> {
        // code executes if condition is true
    } 
    else {
        // code executes if condition is false
    }

In the last module, we checked if it's raining and we gave a message if it is raining. But our code doesn't print anything if it is not raining. Let us fix it by adding an else statement and providing more information.

    isRaining := true

    if isRaining {
        fmt.Println("It's raining, take an umbrella")
    } else {
        fmt.Println("It's not raining. Umbrella not needed")
    }

## Example
Let's write an example code to check if the user's name is `John` or not.

    userName := "John"

    // prints You are John
    if userName == "John" {
        fmt.Println("You are John")
    } else {
        fmt.Println("You are not John")
    }

    // let's try again changing the username variable
    userName = "Mathew"

    // prints You are not John
    if userName == "John" {
        fmt.Println("You are John")
    } else {
        fmt.Println("You are not John")
    }

You can cascade if statement in an else statement to check for more conditions and run the relevant code. 

Now let's write some code to check if a user age is below 20 or between 20 and 60 or above 60.

    userAge := 26

    if userAge < 20 {
        fmt.Println("Below 20")
    } else if userAge >= 20 && userAge <= 60 {
        fmt.Println("Between 20 and 60")
    } else {
        fmt.Println("Above 60")
    }

The if statement also provides an option to initialize a variable and test the condition within the if statement. The general syntax in this case is

    if <init>;<condition> {
        // code to execute if condition is true
    }

An example code is given below.

    if userName := "Jeremy"; userName == "John" {
        fmt.Println("You are John")
    } else {
        fmt.Println("You are not John")
    }

Exercise
--------
In a country, a person is allowed to vote if his/her age is above or equal to 18. Check the userAge variable and print `"Eligible"` if the person is eligible to vote or `"Not Eligible"` if the person is not eligible. 

Tutorial Code
-------------
package main

import "fmt"

func main () {
    userAge := 22

    // Add your code here.
}

Expected Output
---------------
Eligible

Solution
--------
package main

import "fmt"

func main () {
    userAge := 22

    if userAge >= 18 {
        fmt.Println("Eligible")
    } else {
        fmt.Println("Not Eligible")
    }
}
