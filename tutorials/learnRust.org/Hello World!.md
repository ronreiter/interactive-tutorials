Tutorial
--------

### Hello World! In Rust
Since this is an interactive tutorial, the best way to get started is to write a Hello World program in Rust which will give you an idea about the syntax of the language and how siliar it's to C++. 

We use .rs extension of Rust file.
Here is HelloWorld.rs

    fn main() {
        println!("Hello World!");
    }

Just like C++ a Rust program has a `main()` function. This function exectues first when you run the program.
In Rust functions are denoted by `fn` keyword followed by the name of the function.

the `println!` is what we call a macro in rust. This macro is responsible here for printing a line to `stdout`. We will visit more macros in future courses. For now treat them like functions. 

Code lines in Rust are terminated by a semicoln `;` just like C/C++. 

brackets `{}` contains code segments.  

Exercise
--------

Write a program that prints "Covid19 made me do this." and then quits.
hint: Rust can take emojis too, so be creative 😉 


Tutorial Code
-------------

    fn main() {
        //write your code here.
    }

Expected Output
---------------

    Covid19 made me do this.