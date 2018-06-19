Tutorial
--------

A variable is a name given to a storage area that the programs can manipulate. The name of a variable can be composed of letters, digits, and the underscore character. It must begin with either a letter or an underscore. 

### Numbers
They are arithmetic types and they represents following values throughout the program.
    a) integer types 
    b) floating point 

To define an integer, use the following syntax:

    package main
    import "fmt"
    func main() {
        var a int = 4
        var b, c int
        b = 5
        c = 10
        fmt.Println(a)
        fmt.Println(b + c)
    }

To define a floating point number, you may use one of the following notations:

    package main
    import "fmt"
    func main() {
        var d float64 = 9.14
        fmt.Println(d)
    }

### Strings
Like many programming languages, string is also one important kind of types in Go.
Strings are defined either with a single quote or a double quotes.

    package main
    import "fmt"
    func main() {
        var s string = 'This is string s'
        fmt.Println(s)
    }

The difference between the two is that using double quotes makes it easy to include apostrophes (whereas these would terminate the string if using single quotes)

    package main
    import "fmt"
    func main() {
        var s string = "Don't worry about apostrophes"
        fmt.Println(s)
    }

### Shorthand Declaration
The `:=` notation serves both as a declaration and as initialization.
``` foo := "bar" ``` is equivalent to ``` var foo string = "bar" ```

    package main
    import "fmt"
    func main() {
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
    }



Exercise
--------

You must print out to the console the following:
Jhon Doe
24
154.61


Tutorial Code
-------------

package main

import (
    "fmt"
)

func main() {
    name := "Chris Mien"
    age := 29
    weigth := 200.21

    fmt.Println(name)
    fmt.Println(age)
    fmt.Println(weigth)

}


Expected Output
---------------

Jhon Doe
24
154.61


Solution
--------

package main

import (
    "fmt"
)

func main() {
    name := "Jhon Doe"
    age := 24
    weigth := 154.61

    fmt.Println(name)
    fmt.Println(age)
    fmt.Println(weigth)

}