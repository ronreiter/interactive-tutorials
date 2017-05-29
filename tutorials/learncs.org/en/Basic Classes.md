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
Make a class `car` with the properties `numTires = 4`, `year = 2000`, and `runs = true`, and create three instances of it: `car1`, `car2`, and `car3`.

Tutorial Code
-------------
using System;
public class MainClass{
    public static void Main(){
        
        // Test code
        Console.WriteLine(car1.numTires);
        Console.WriteLine(car2.year);
        Console.WriteLine(car3.runs);
    }
}
Expected Output
---------------
4
2000
True

Solution
--------
using System;
class car{
    public int numTires = 4;
    public int year = 2000;
    public bool runs = true;
}
public class MainClass{
    public static void Main(){
        car car1 = new car();
        car car2 = new car();
        car car3 = new car();
        // Test code
        Console.WriteLine(car1.numTires);
        Console.WriteLine(car2.year);
        Console.WriteLine(car3.runs);
    }
}
