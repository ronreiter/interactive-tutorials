Tutorial
--------

A variable is a name given to a storage area that the programs can manipulate. The name of a variable can be composed of letters, digits, and the underscore character. It must begin with either a letter or an underscore. 

### Numbers
They are arithmetic types and they represents following values throughout the program.
    a) integer types 
    b) floating point 

To define an integer, use the following syntax:


    var a int = 4
    var b, c int
    b = 5
    c = 10
    fmt.Println(a)
    fmt.Println(b + c)

To define a floating point number, you may use one of the following notations:

    var d float64 = 9.14
    fmt.Println(d)

### Strings
Strings in Go are defined with double quotes.

    var s string = "This is string s"
    fmt.Println(s)
    

The difference between the two is that using double quotes makes it easy to include apostrophes (whereas these would terminate the string if using single quotes)

    var s string = "Don't worry about apostrophes"
    fmt.Println(s)

### Shorthand Declaration
The `:=` notation serves both as a declaration and as initialization.
``` foo := "bar" ``` is equivalent to ``` var foo string = "bar" ```

    a := 9
    b := "golang"
    c := 4.17
    d := false
    e := "Hello"
    f := `Do you like golang, so far?`
    g := 'M'

    fmt.Println(a)
    fmt.Println(b)
    fmt.Println(c)
    fmt.Println(d)
    fmt.Println(e)
    fmt.Println(f)
    fmt.Println(g)



Exercise
--------

You must print out to the console the following:

    John Doe
    24
    154.61


Tutorial Code
-------------

    package main
    import "fmt"
    func main() {
        name := "Chris Mien"
        age := 29
        weight := 200.21
        fmt.Println(name)
        fmt.Println(age)
        fmt.Println(weight)
    }


Expected Output
---------------

    John Doe
    24
    154.61


Solution
--------

    package main
    import "fmt"
    func main() {
        name := "John Doe"
        age := 24
        weight := 154.61
        fmt.Println(name)
        fmt.Println(age)
        fmt.Println(weight)
    }
