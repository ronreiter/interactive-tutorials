Tutorial
--------
The builtin `fmt` package provides many useful functions which are used to print to console or format to a string. Let's take a look at few of the most used functions.

## fmt.Println()

`fmt.Println()` is the basic print function golang has to offer. It prints the values given to it seperated by commas and adds a newline at the end.

    // fmt.Println() usage
    fmt.Println("Hello")                            // prints "Hello"

    // multiple arguments of different types can be given seperated by commas
    fmt.Println("Hello", 22, 98.3, true)            // prints "Hello 22 98.3 true"

    // you can also pass variables as arguments
    a := "Hello"
    b := "World"

    fmt.Println(a, b)                               // prints "Hello World"

## fmt.Printf()

`fmt.Printf()` is similar to `printf()` in C language. We give a string with keywords like `%d`, `%v` and give the other arguments which get formatted to these keywords.

    // fmt.Printf() usage
    fmt.Printf("%s is %d years old.", "Jon Snow", 30)   // prints "Jon Snow is 30 years old."

    // using %v for printing everything
    fmt.Printf("%v is %v years old.", "Jon Snow", 30)   // prints "Jon Snow is 30 years old."

    // let's try printing type of any variable
    name := "Jon Snow"
    fmt.Printf("%T is the type of %v", name, name)      // prints "string is the type of Jon Snow"

Common keywords that are used and what variables are formatted by them

`%d` - integers  
`%s` - strings  
`%f` - floating point number  
`%t` - boolean  


`%T` - prints the type of the variable given   
`%v` - prints any object of any type


## fmt.Sprintf()

`fmt.Sprintf()` works just like `fmt.Printf()` but instead of printing to the console it returns the formatted string. It's highly useful for creating formatted strings from variables in golang.

Let's see the function in action.

    // the function returns a formatted string.
    s := fmt.Sprintf("%s is the son of %s", "Harry", "Lily")  // returns a string "Harry is the son of Lily"

    // let's print the string s
    fmt.Println(s)                                            // prints "Harry is the son of Lily"

The same keywords that we used for formatting in `fmt.Printf()` apply here too.

Exercise
--------
Given two variables, a person's name and his favourite movie, format it and print it to console in the given format. For example the person is `Nolan` and his favourite movie is `Tenet`, your output string should be `Tenet is Nolan's favourite movie`. Use `fmt.Printf()`

Tutorial Code
-------------
package main

import "fmt"

func main() {
    name := "Leonardo"
    movie := "Lord of the Rings"

    // your code here
}

Expected Output
---------------
Tenet is Nolan's favourite movie

Solution
--------
package main

import "fmt"

func main() {
    name := "Nolan"
    movie := "Tenet"

    fmt.Printf("%s is %s's favourite movie", movie, name)
}