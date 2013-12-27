Tutorial
--------

Inheritence in Java allows you to reuse code from an existing class into another class, you can `derive` your new class from an existing class. Your new class is called `derived` class which inherits all the members from its superclass.

The inherited fields can be used directly, just like any other fields.
You can declare a field in the subclass with the same name as the one in the superclass, thus hiding it (not recommended).
You can declare new fields in the subclass that are not in the superclass.
The inherited methods can be used directly as they are.
You can write a new instance method in the subclass that has the same signature as the one in the superclass, thus overriding it.
You can write a new static method in the subclass that has the same signature as the one in the superclass, thus hiding it.
You can declare new methods in the subclass that are not in the superclass.
You can write a subclass constructor that invokes the constructor of the superclass, either implicitly or by using the keyword super.
A subclass does not inherit the private members of its parent class.


### An example of inheritence

Consider a class called Shape, Shape is the base class which is inherited by shapes like rectangle, square, circle etc.

  public class Shape{
    double area ();
  }
  
  
  Class `Shape` is inherited by Circle which is a Shape
  The method area is defined in the base class and has been inherited in the circle class and method `area` is available with the circle class which is redefined specific to circle
  
  
  class Circle extends Shape{
  
    private static final double PI = Math.PI;   // constant
    private double diameter; 
    
    public double area () {                    
     	double radius = diameter / 2.0;
	    return PI * radius * radius;
    }
  
  }
  
  

Exercise
--------

Create a rectangle class which inherits the Shape class and finds the area

Tutorial Code
-------------

 public class Shape{
    double area ();
  }


class Circle extends Shape {                 // class declaration
    Circle (double diameter) {                  // constructor
	this.diameter = diameter;
    }
    private static final double PI = Math.PI;   // constant
    private double diameter;                    // instance variable
    public double area () {                     // dynamic method
	double radius = diameter / 2.0;
	return PI * radius * radius;
    }

}


class Rectangle extends Shape {
  // Your code goes here

}


public class Main {
    public static void main(String[] args) {
       	Shape s1 = new Circle (5.0);
	Shape s2 = new Rectangle (5.0, 4.0);
	System.out.println (s1.area());
	System.out.println (s2.area());
    }
}

Expected Output
---------------

78.571
20.000

Solution
--------

  public class Shape{
      double area ();
  }

  class Circle extends Shape {                 // class declaration
    Circle (double diameter) {                  // constructor
	    this.diameter = diameter;
    }
    private static final double PI = Math.PI;   // constant
    private double diameter;                    // instance variable
    public double area () {                     
	    double radius = diameter / 2.0;
	    return PI * radius * radius;
    }
}

  class Rectangle extends Shape {
    Rectangle (double side1, double side2) {
	    this.side1 = side1;
	    this.side2 = side2;
    }
    private double side1;        // length of one side
    private double side2;        // length of the other side
    public double area () {
	    return side1 * side2;
    }

}

public class Main {
    public static void main(String[] args) {
       	Shape s1 = new Circle (5.0);
	Shape s2 = new Rectangle (5.0, 4.0);
	System.out.println (s1.area());
	System.out.println (s2.area());
    }
}
