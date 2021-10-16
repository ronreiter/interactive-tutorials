Tutorial
--------

A variable is a name given to a storage area that the programs can manipulate. The name of a variable can be composed of letters, digits, and the underscore character. It must begin with either a letter or an underscore. 

The general code to declare a variable in golang is 

    var <name of variable> <type of variable>

### Numbers
Variables are arithmetic types and represent the following values throughout the program.
    a) integer types 
    b) floating point 

To define an integer, use the following syntax:

    var a int = 4
    var b, c int
    b = 5
    c = 10
    fmt.Println(a)
    fmt.Println(b + c)

To define a floating point number, use the following syntax:

    var d float64 = 9.14
    fmt.Println(d)

### Strings
Strings in Go are defined with double quotes.

    var s string = "This is string s"
    fmt.Println(s)
    
Single quotes are not used to enable the use of apostrophes in strings without having to escape.

    var s string = "Don't worry about apostrophes"
    fmt.Println(s)

We can also define multiple line strings wrapping the string in `` quotes.

    var s string = `This is a string spanning multiple lines
    This is the second line
    And this is the third`

    fmt.Println(s)

### Booleans
Golang supports boolean values with the keywords `true` and `false`

Boolean variables are declared in go as follows

    var b bool = true

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
    h := true

    fmt.Println(a)
    fmt.Println(b)
    fmt.Println(c)
    fmt.Println(d)
    fmt.Println(e)
    fmt.Println(f)
    fmt.Println(g)
    fmt.Println(h)



Exercise
--------

You must print out to the console the following:

    John Doe
    24
    154.61
    true


Tutorial Code
-------------

    package main
    import "fmt"
    func main() {
        name := "Chris Mien"
        age := 29
        weight := 200.21
        isMale := false
        fmt.Println(name)
        fmt.Println(age)
        fmt.Println(weight)
        fmt.Println(isMale)
    }


Expected Output
---------------

    John Doe
    24
    154.61
    true


Solution
--------

    package main
    import "fmt"
    func main() {
        name := "John Doe"
        age := 24
        weight := 154.61
        isMale := true
        fmt.Println(name)
        fmt.Println(age)
        fmt.Println(weight)
        fmt.Println(isMale)
    }
