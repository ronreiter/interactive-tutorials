Tutorial
--------

Java is an object oriented language (OOP). Java objects are part of so-called "Java classes".

Let's go over the Hello world program, which simply prints "Hello, World!" to the screen.

    public class Main {
        public static void main(String[] args) {
            System.out.println("This will be printed");
        }
    }

The first line defines a class called Main.

    public class Main {

In Java, every line of code that can actually run needs to be inside a class. This line declares a class named `Main`, which is `public`, that means that any other class can access it. This is not important for now, so don't worry. For now, we'll just write our code in a class called Main, and talk about objects later on.

Notice that when we declare a public class, we must declare it inside a file with the same name (Main.java), otherwise we'll get an error when compiling.

When running the examples on the site, we will not use the public keyword, since we write all our code in one file.

The next line is:

    public static void main(String[] args) {

This is the entry point of our Java program. the main method has to have this exact signature in order to be able to run our program.

* `public` again means that anyone can access it.
* `static` means that you can run this method without creating an instance of `Main`.
* `void` means that this method doesn't return any value.
* `main` is the name of the method.

The arguments we get inside the method are the arguments that we will get when running the program with parameters. It's an array of strings. We will use it in our next lesson, so don't worry if you don't understand it all now.

    System.out.println("This will be printed");

* `System` is a pre-defined class that Java provides us and it holds some useful methods and variables.
* `out` is a static variable within System that represents the output of your program (stdout).
* `println` is a method of out that can be used to print a line.

Exercise
--------

Print "Hello, World!" to the console.

Tutorial Code
-------------

public class Main {

    public static void main(String[] args) {

        System.out.println("Goodbye, World!");

    }

}

Expected Output
---------------

Hello, World!

Solution
--------

public class Main {

    public static void main(String[] args) {

        System.out.println("Hello, World!");

    }

}
