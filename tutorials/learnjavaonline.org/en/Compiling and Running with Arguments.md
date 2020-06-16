Tutorial
--------

This section is used for you to use Java at home and understand the basics of how things are done.

After creating a simple application that prints something to the screen, you need to compile your code and run it.

It shouldn't really matter if you use Linux, Mac or Windows. You need to have a console and you need to have the following commands available in order to compile and run Java.

* java (or java.exe)
* javac (or javac.exe)

In order for those to be available you must download and install JDK (Java Development Kit).

If we take the code from the previous lesson and put it in a file called MyFirstClass.java, in order to compile it we need to run:

    javac MyFirstClass.java

This will create a file called MyFirstClass.class that holds the compiled java code.

To run it, we need to run java with the name of the class as the argument (Not the file!)

##### Wrong

    java MyFirstClass.class

##### Right!

    java MyFirstClass

### Arguments

The main methods get an array of strings as an argument, these are the command line arguments you may pass to your program.

Every array in java holds a variable called length that says how many elements are within that array.

We can go over the arguments with a simple for

    public class Arguments {
        public static void main(String[] args) {
            for (int i = 0; i < args.length; i++) {
                System.out.println(args[i]);
            }
        }
    }

And to compile and run it with arguments:

    javac Arguments.java
    java Arguments arg0 arg1 arg2

### Exercise

Create a program that prints the arguments of our program. Write one argument per line.

Tutorial Code
-------------

public class Main {
    public static void main(String[] args) {
        // write your code here

    }
}

Expected Output
---------------

// The following is sample terminal output that
// displays the contents of the .java file
// we have written (uses the cat command),
// compiles and runs it with arguments.

$ cat Arguments.java
public class Arguments {
    public static void main(String[] args) {
        for (int i = 0; i < args.length; i++) {
            System.out.println(args[i]);
        }
    }
}
$ javac Arguments.java
$ java Arguments arg0 arg1 arg2 
arg0
arg1
arg2
$ 

Solution
--------
public class Main {
    public static void main(String[] args) {
        // write your code here
	for (int i=0; i<args.length; i++)
    {
     System.out.println(args[i]);   
    }
    }
}
