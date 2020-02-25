Tutorial
--------
Classes can have _properties_ in addition to fields and methods.  Properties allow variables to be protected and validated while keeping them simple to use.

Getters and Setters
-------------------
Programmers in other languages often write getter and setter methods to protect their data:

    public class Shape {
        private int Sides;
        
        public int GetSides() {
          return Sides;
        }
        
        public void SetSides(int value) {
           if (value > 2) Sides = value;
        }
    }    

Properties
----------
In C# we use properties with get and set _accessors_.  These accessors can protect and validate data, but we can use a property just like a variable. For example, if `Sides` and `SideLength` were properties of `Shape` then we would get and set their values just like fields:

    public class MainClass{
        public static void Main(){
            Shape shape = new Shape();
            shape.Sides = 3;
            shape.SideLength = 2;
            int perimeter = shape.Sides * shape.SideLength;
            //...
        }
    }

    [Modifiers (e.g. public or static)] [Type] [Name] { get {...} set {...} }

In the `get` block we return the value of the property. In the `set` block we receive the new value.  Inside the `set` block, the special name `value` represents the new value for the property.

Here is an example of a property named `Sides`:

    private int _sides = 3; // This is the "backing field"
    public int Sides { 
      get {
        return _sides;
      }
      set {
        if (value > 2) _sides = value;
      }
    }
    
In the example above, the property `Sides` stores its value in a private field `_sides`.  We say the property `Sides` _wraps_ the field `_sides`, and we call `_sides` the _backing field_.

Calculated Properties
---------------------
A property is not required to have a set accessor or a backing field.  For example, we can use a property to represent a calculated value like this:

    public int Area {
       get { return SideLength * SideLength; }
    }
    
However, a property without a set accessor cannot be assigned a value.  For the `Area` property above, we could write `double volume = shape.Area * 5`, but we could not write `shape.Area = 3`.

Default Properties
------------------
Sometimes we might want to create a property with minimal get and set accessors:

    private string _type;
    public string Type {
      get {
        return _type;
      }
      set {
        _type = value;
      }
    }
    
We can write this more easily with a _default property_. With default properties we do not have to create our own backing field.  We simply write:

    public string Type { get; set; }
    
One use for a default property is to provide read-only data by making the setter private:

    public string Type { get; private set; }
    
Exercise
--------
Make a class `Vehicle` with the properties `string Type` and `int NumTires`.  

When `Type` is set to `String.Empty`, print "The vehicle type cannot be empty" and keep the previous value.  When `NumTires` is set to a value less than 1, print "The vehicle must have at least one tire" and keep the previous value.

Tutorial Code
-------------

    using System;

    //Write Vehicle class here

    public class MainClass{
        public static void Main(){
            // Test code
            Vehicle myRide = new Vehicle();
            myRide.Type = "Motorcycle";
            myRide.NumTires = 2;
            Console.WriteLine(myRide.Type);
            Console.WriteLine(myRide.NumTires);
            myRide.Type = String.Empty;
            Console.WriteLine(myRide.Type);
            myRide.NumTires = 0;
            Console.WriteLine(myRide.NumTires);
      }
    }

Expected Output
---------------

    Motorcycle
    2
    The vehicle type cannot be empty
    Motorcycle
    The vehicle must have at least one tire
    2

Solution
--------

    using System;

    public class Vehicle {
      private string _type;
      public string Type {
        get { return _type; }
        set {
          if (value == String.Empty) {
            Console.WriteLine("The vehicle type cannot be empty");
          }
          else _type = value;
        }
      }

      private int _numTires;
      public int NumTires {
        get { return _numTires; }
        set { 
          if (value < 1) {
            Console.WriteLine("The vehicle must have at least one tire");
          }
          else _numTires = value;
        }
      }
    }

    public class MainClass {
        public static void Main() {
            // Test code
            Vehicle myRide = new Vehicle();
            myRide.Type = "Motorcycle";
            myRide.NumTires = 2;
            Console.WriteLine(myRide.Type);
            Console.WriteLine(myRide.NumTires);
            myRide.Type = String.Empty;
            Console.WriteLine(myRide.Type);
            myRide.NumTires = 0;
            Console.WriteLine(myRide.NumTires);
        }
    }
