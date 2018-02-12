Tutorial
--------
Building off of what we learned about basic classes, we can start working with properties. We know we create an instance of a class using:

    myClass myObject = new myClass();
    
Additionally we know these objects have properties or member variables defined like so:

    class Shape{
      public string Type = "square";
      public int Sides = 4;
      public int Sidelength = 1;
      public double Area = 1;
    }
    
The above code defines a class named Shape with 4 different properties. In this case our shape is a square with 4 sides of length 1 and an area of 1. What if we wanted a triangle instead of a square? We can do that by allowing our class to accept different values for its properties. Because we will be defining the values of the properties later, we don't have to assign them here. We give Shape properties without values like this:

    class Shape{
      public string Type;
      public int Sides;
      public int Sidelength;
      public double Area;  
    }

Now to give those properties values we need to define something called a constructor in our class. Constructors use the same name of their class. Adding an empty constructor, our class looks like this:

    class Shape{
      public string Type;
      public int Sides;
      public int Sidelength;
      public double Area;  
      public Shape(){} 
    }

Let's give the constructor parameters and set the values of our properties to the passed in parameters:

    class Shape{
      public string Type;
      public int Sides;
      public int Sidelength;
      public double Area;  
      public Shape(string type, int sides, int sidelength, double area){
        Type = type;
        Sides = sides;
        Sidelength = sidelength;
        Area = area;
      }
    }

Now when we create an instance of Shape, we can give it parameters using the constructor! Putting it all together looks something like this:

    using System;
    class Shape{
      public string Type;
      public int Sides;
      public int Sidelength;
      public double Area;  
      public Shape(string type, int sides, int sidelength, double area){
        Type = type;
        Sides = sides;
        Sidelength = sidelength;
        Area = area;
      }
    }
    class MainClass{
      public static void Main(){
        Shape square = new Shape("square", 4, 1, 1);
        Shape bigsquare = new Shape("square", 4, 2, 4);
        Shape triangle = new Shape("triangle", 3, 3, 3.9);
        Console.WriteLine("A {0} with {1} sides of length {2} has an area of {3}", square.Type, square.Sides, square.Sidelength, square.Area);
        Console.WriteLine("A {0} with {1} sides of length {2} has an area of {3}", bigsquare.Type, bigsquare.Sides, bigsquare.Sidelength, bigsquare.Area);
        Console.WriteLine("A {0} with {1} sides of length {2} has an area of {3}", triangle.Type, triangle.Sides, triangle.Sidelength, triangle.Area);
      }
    }

Executing the above code will print the following:

A square with 4 sides of length 1 has an area of 1
A square with 4 sides of length 2 has an area of 4
A triangle with 3 sides of length 3 has an area of 3.9


Exercise
--------
Make a class `Vehicle` with the properties `string Type`, `int NumTires`, `int Year`, and `bool Runs`, and create:

A `car`: `Type = car` with `NumTires = 4` from `Year = 2000` which `Runs = true`
An `oldcar`: `Type = car` with `NumTires = 4` from `Year = 1980` which `Runs = false`
A `bike`: `Type = bike` with `NumTires = 2` from `Year = 2017` which `Runs = true`

Watch out for the capitalizations! 

Tutorial Code
-------------
using System;

//Write Vehicle class here

public class MainClass{
    public static void Main(){
        //Create vehicles here
        
        // Test code
        Console.WriteLine(car.Type);
        Console.WriteLine(oldcar.Runs);
        Console.WriteLine(bike.NumTires);
    }
}

Expected Output
---------------
car
False
2

Solution
--------
    using System;
    class Vehicle{
      public string Type;
      public int NumTires;
      public int Year;
      public bool Runs;  
      public Vehicle(string type, int numTires, int year, bool runs){
        Type = type;
        NumTires = numTires;
        Year = year;
        Runs = runs;
      }
    }
    class MainClass{
      public static void Main(){
        Vehicle car = new Vehicle("car", 4, 2000, true);
        Vehicle oldcar = new Vehicle("car", 4, 1980, false);
        Vehicle bike = new Vehicle("bike", 2, 2017, true);
        
        Console.WriteLine(car.Type);
        Console.WriteLine(oldcar.Runs);
        Console.WriteLine(bike.NumTires);
      }
    }
