Tutorial
--------

Java uses boolean variables to evaluate conditions. The boolean values `true` and `false` are returned when an expression is compared or evaluated.
For example:

    int a = 4;
    boolean b = a == 4;

    if (b) {
        System.out.println("It's true!");
    }

Of course we don't normally assign a conditional expression to a boolean. Normally, we just use the short version:

    int a = 4;

    if (a == 4) {
        System.out.println("Ohhh! So a is 4!");
    }

### Boolean operators

There aren't that many operators to use in conditional statements and most of them are pretty straight forward:

    int a = 4;
    int b = 5;
    boolean result;
    result = a < b; // true
    result = a > b; // false
    result = a <= 4; // a smaller or equal to 4 - true
    result = b >= 6; // b bigger or equal to 6 - false
    result = a == b; // a equal to b - false
    result = a != b; // a is not equal to b - true
    result = a > b || a < b; // Logical or - true
    result = 3 < a && a < 6; // Logical and - true
    result = !result; // Logical not - false

### if - else and between

The if, else statement in Java is pretty simple.

    if (a == b) {
        // a and b are equal, let's do something cool
    }

And we can also add an else statement after an if, to do something if the condition is not true

    if (a == b) {
        // We already know this part
    } else {
        // a and b are not equal... :/
    }

The if - else statements doesn't have to be in several lines with {}, if can be used in one line, or without the {}, for a single line statment.

    if (a == b)
        System.out.println("Another line Wow!");
    else
        System.out.println("Double rainbow!");

Although this method might be useful for making your code shorter by using fewer lines, we strongly recommend for beginners not to use this short version of statements and to always use the full version with {}. This goes to every statement that can be shorted to a single line (for, while, etc).

### The ugly side of if

There is a another way to write a one line if - else statement by using the operator ? :

    int a = 4;
    int result = a == 4 ? 1 : 8;

    // result will be 1
    // This is equivalent to
    int result;

    if (a == 4) {
        result = 1;
    } else {
        result = 8;
    }

Again, we strongly recommend for beginners not to use this version of if.

### == and equals

The operator `==` works a bit different on objects than on primitives.
When we are using objects and want to check if they are equal, the operator `==` will say if they are the same, if you want to check if they are logically equal, you should use the `equals` method on the object. For example:

    String a = new String("Wow");
    String b = new String("Wow");
    String sameA = a;
    
    boolean r1 = a == b;      // This is false, since a and b are not the same object
    boolean r2 = a.equals(b); // This is true, since a and b are logically equals
    boolean r3 = a == sameA;  // This is true, since a and sameA are really the same object

Exercise
--------

Change the variables in the first section, so that each if statement resolves as true.

Tutorial Code
-------------

    public class Main {
        public static void main(String[] args) {
            String a = new String("Wow");
            String b = "Wow";
            String c = a;
            String d = c;

            boolean b1 = a == b;
            boolean b2 = b.equals(b + "!");
            boolean b3 = !c.equals(a);

            if (b1 && b2 && b3) {
                System.out.println("Success!");
            }
        }
    }

Expected Output
---------------

    Success!

Solution
--------

    public class Main {
        public static void main(String[] args) {
            Main a = new Main() {
                @Override
                public boolean equals(Object obj) {
                    return true;
                }
            };

            Main b = a;

            Main c = new Main() {
                @Override
                public boolean equals(Object obj) {
                    return false;
                }
            };

            boolean b1 = a == b;
            boolean b2 = b.equals(b + "!");
            boolean b3 = !c.equals(a);

            if (b1 && b2 && b3) {
                System.out.println("Success!");
            }
        }
    }
