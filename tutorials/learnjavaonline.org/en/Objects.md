Tutorial
--------

Everything in Java is within classes and objects. Java objects hold a state, state are variables which are saved together within an object, we call them fields or member variables.

Let start with an example:

    class Point {
        int x;
        int y;
    }

This class defined a point with x and y values.

In order to create an instance of this class, we need to use the keyword `new`.

    Point p = new Point();

In this case, we used a default constructor (constructor that doesn't get arguments) to create a Point. All classes that don't explicitly define a constructor has a default constructor that does nothing.

We can define our own constructor:

    class Point {
        int x;
        int y;
        
        Point(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

This means we can not longer use the default constructor `new Point()`. We can now only use the defined constructor `new Point(4, 1)`.

We can define more than one constructor, so `Point` can be created in several ways. Let's define the default constructor again.

    class Point {
        int x;
        int y;
        
        Point() {
            this(0, 0);
        }
        
        Point(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

Notice the usage of the `this` keyword here. We can use it within a constructor to call a different constructor (in order to avoid code duplication). It can only be the first line within the constructor.

We also used the `this` keyword as a reference of the current object we are running on.

After we defined `p` we can access `x` and `y`.

    p.x = 3;
    p.y = 6;

### Methods

We can now define methods on `Point`.

    class Point {
        ... // Our code previously
        void printPoint() {
            System.out.println("(" + x + "," + y + ")");
        }
        
        Point center(Point other) {
            // Returns the center between this point the other point
            // Notice we are using integer, we wan't get an accurate value
            return new Point((x + other.x) / 2, (y + other.y) / 2);
        }
    }

### Public and Private

Although we'll talk about modifiers later on, it's important to understand the different between private and public variables and methods.

When using the keyword `private` before a variable or a method, it means only the class itself can access the variable or method, when we're using `public` it means everybody can access it. We usually see constructors defined as public, variables defined as private and methods are separated, some public and some private.

Exercise
--------

Write a new method in Point called `scale`, that will make the point closer by half to (0,0). So for example, point (8, 4) after scale will be (4, 2).

Tutorial Code
-------------
class Point {
    private double x;
    private double y;
    
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public void print() {
        System.out.println("(" + x + "," + y + ")");
    }
    
    // Your code goes here
}

public class Main {
    public static void main(String[] args) {
        Point p = new Point(32, 32);
        for (int i = 0; i < 5; i++) {
            p.scale();
            p.print();
        }
    }
}

Expected Output
---------------

(16.0,16.0)
(8.0,8.0)
(4.0,4.0)
(2.0,2.0)
(1.0,1.0)

Solution
--------

class Point {
    private double x;
    private double y;
    
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public void print() {
        System.out.println("(" + x + "," + y + ")");
    }
    
    public void scale(){
        x = x/2;
        y = y/2;
    }
}

public class Main {
    public static void main(String[] args) {
        Point p = new Point(32, 32);
        for (int i = 0; i < 5; i++) {
            p.scale();
            p.print();
        }
    }
}
