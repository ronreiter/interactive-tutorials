Tutorial
--------

Scala is somewhat similar to Java. In Scala, the main code construct is an object (versus a class in Java). Let's create an object called HelloWorld with a `main` function. The `main` function will simply print out some text.

    object Main {
        def main(args: Array[String]): Unit = {
            println("Some text")
        }
    }

Scala also has a REPL (read, execute, print, loop) interpreter so you can run the same thing from the scala command line.

Exercise
--------

Print "Hello, World!" to the console using println.

Tutorial Code
-------------
    object Main {
        def main(args: Array[String]): Unit = {
            println("Goodbye, World!")
        }
    }
Expected Output
---------------
Hello, World!

Solution
--------
    object Main {
        def main(args: Array[String]): Unit = {
            println("Hello, World!")
        }
    }
