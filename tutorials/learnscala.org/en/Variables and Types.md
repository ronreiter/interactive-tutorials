Tutorial
--------

Scala is statically typed, so variable types are known at compile time. However, Scala also supports type inference in variable declaration.

The basic types in Scala are:

* `Byte`
* `Short`
* `Int`
* `Long`
* `Float`
* `Double`
* `Char`
* `String`
* `Boolean`

### Numbers

To declare and assign a number in Scala, you can use the following syntax:

    val myNumber: Int = 5

You can also use type inference:

    val myNumber = 5

For floating-point numbers an 'f' suffix is needed to specify that it is a float:

    val d: Double = 4.5
    val f: Float = 4.5f

### Characters

A character is defined using single quotes:

    val c: Char = 'g'

### Strings

A string is defined using double quotes:

    val s: String = "Hello, world!"

### Booleans

A boolean is defined as either `true` or `false`:

    val b: Boolean = true

### Val and Var

Variables in Scala are either declared using `val` or `var`.

Any variables declared using `val` are immutable and cannot be changed once assigned, but variables declared with `var` are mutable and can be changed after assignment.

In this case, the value of `pi` will not change, so we should declare it using `val`:
    
    val pi: Double = 3.14159

While in this case, the value of `counter` may change, so we should declare it with `var`:
    
    var counter: Int = 0


Exercise
--------

Define variables with the following values:

A string named `productName` equal to "Laptop".
An integer named `productYear` equal to 2023.
A double named `productPrice` equal to 999.99.


Tutorial Code
-------------
    object Main {
        def main(args: Array[String]): Unit = {
            // Define variables here

            // Test code
            println("productName: " + productName)
            println("productYear: " + productYear)
            println("productPrice: " + productPrice)
        }
    }
Expected Output
---------------
productName: Laptop
productYear: 2023
productPrice: 999.99

Solution
--------
    object Main {
        def main(args: Array[String]): Unit = {
            val productName: String = "Laptop"
            val productYear: Int = 2023
            val productPrice: Double = 999.99

            // Test code
            println("productName: " + productName)
            println("productYear: " + productYear)
            println("productPrice: " + productPrice)
        }
    }
