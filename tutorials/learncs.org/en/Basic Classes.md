Tutorial
--------
In C#, everything is an object, made from a class. Classes are defined with curly brackets, like this:

    
    class myClass{
    }
    

The above example is a very basic class definition, containing no properties or methods. Now, we have a class, but how do we use it?
The answer is create an instance of that class. You can do this with the `new` keyword, like this:

    class myClass{
    }
    class MainClass{
      public static void Main(){
        myClass myObject = new myClass();
      }
    }

Now, the class doesn't do anything, so why use it? Next, we will give the class some properties like this:

    using System;
    class myClass{
      public string test = "This works!";
    }
    class MainClass{
      public static void Main(){
        myClass myObject = new myClass();
        Console.WriteLine(myObject.test);
      }
    }
The above code will print "This works!" to the screen. First, in `myClass`, we declare a string variable named "test" with the `public` modifier.
Until you learn more advanced programming, you will have to use to `public` modifier in separate classes. Then we make an instance of `myClass`.
Finally, we write out the value of `test` using the dot operator on the instance of `myClass`.
        
Exercise
--------
Here you will need to write the purpose of the exercise. Finishing the exercise correctly
must be accomplished using the new feature that you are explaning.

Tutorial Code
-------------
Write a code block that will appear on the interpreter window. For example, you may
write an empty function, which the user must complete in order to finish the exercise.

Expected Output
---------------
Write a code block that will describe the exact output expected from the modified code,
if it has been modified correctly.

Solution
--------
Write the solution code to the problem.
