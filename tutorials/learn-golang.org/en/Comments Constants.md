# Go Tutorial: Comments, Constants, and iota

## Comments

In Go, comments are notes left by a programmer in the source code that are completely ignored by the compiler.
They are used to add explanations, make notes, or prevent code from running.

Go has two types of comments:

* **Single-line comments**: Start with `//`. Everything from the `//` to the end of the line is a comment.
* **Multi-line comments**: Start with `/*` and end with `*/`. They can span multiple lines.

### Examples

**Single-line Comment:**


    // This line prints a welcome message to the console. 
    fmt.Println("Welcome to Go!")


**Output:**

```text
    Welcome to Go!
```

**Multi-line Comment:**


    /*
    This is a multi-line comment.
    It can be used to write longer explanations
    or to comment out a block of code.
    */
    fmt.Println("Hello World!")


**Output:**

```text
Hello World!
```

---

## Constants (`const`)

In Go, the `const` keyword declares constants—values that are fixed at compile time and cannot be changed later.
They are perfect for defining configuration settings or mathematical constants.

### Example


    package main
    
    import "fmt"
    
    const (
        AppName    = "My Awesome App"
        Version    = "1.0.2"
        MaxRetries = 3
    )
    
    func main() {
        fmt.Println("Starting", AppName, "version", Version)
        fmt.Println("Maximum retries:", MaxRetries)
    }


**Output:**

```text
Starting My Awesome App version 1.0.2
Maximum retries: 3
```

---

## iota

`iota` is a special identifier used within a `const` block to create a sequence of related values.
It acts as a counter that starts at `0` and increments by one for each subsequent constant declaration.
This makes it incredibly useful for creating enumerations.

### Example

    
    package main
    
    import "fmt"
    
    const (
        Sunday = iota // Sunday = 0
        Monday        // Monday = 1 (implicitly iota)
        Tuesday       // Tuesday = 2 (implicitly iota)
    )
    
    func main() {
        fmt.Println("Sunday:", Sunday)
        fmt.Println("Monday:", Monday)
        fmt.Println("Tuesday:", Tuesday)
    }


**Output:**

```text
Sunday: 0
Monday: 1
Tuesday: 2
```

Exercise
--------

Create a Go program using `const` and `iota` to represent three **log levels**:  
- `Info`  
- `Warning`  
- `Error`  

Assign them values using `iota`, and then print them out.

---

### Expected Output Example

    Info: 0
    Warning: 1
    Error: 2



