Tutorial
--------

In Java, the term inheritance refers to the adoption of all non-private properties and methods of one class (superclass) by another class (subclass). Inheritance is a way to make a copy of an existing class as the starting point for another. In addition to the term subclass, inherited classes are also called `derived` classes.

At this point, it may be helpful to distinguish inheritance from interfaces. Interfaces define only the structure of the class members while inherited classes include the actual code of the superclass. Additionally, inheritance (more accurately, the definition of a subclass) uses the `extends` keyword in the subclass declaration.

For clarity, if a subclass is created using a superclass and the subclass remains unaltered, the two classes will be identical. But most subclasses do not remain unaltered. Because a subclass is still a class, it can be altered to include new properties and methods. The finished subclass can even be used as a superclass to create additional subclasses. There is no effective limit to the number of inheritance levels.

The methods and properties of a subclass can be used just like those of it's superclass. They can also be overridden. Overriding is the process of replacing (or augmenting) the original code with new code to suit the current purpose. An overridden method's signature in the subclass remains the same as the superclass but the contents of the method will be changed to meet the goal of the method in it's new form. This may even mean executing the code inherited from the superclass before or after executing some new code within the same method. To execute the inherited code from within the subclass, prefix the method with `super`. It is also possible to write a subclass constructor that invokes the constructor of the superclass, either implicitly or by using the `super` keyword (e.g., super.methodName()).

Why do this? Inheritance promotes code reuse and the concept of generic-to-specific implementation. Ideally, a superclass will be written at the most generic level. Subclasses can then be created from the superclass with a finer, more specific purpose.


### An example of inheritence

Think of a door. It doesn't matter what kind. All doors open and close. However, some doors open differently than others (lifting up vs swinging out, swinging in vs sliding across). So, let's say Door is the superclass for a door and it has an `open` method. The method is simple. It's only instruction is `push`.


    public class Door {
        public void open ()
        {
            push();     // Since this is just a generic "Door" we will assume the simplest opening method.
                        // The actual open method must be overridden by a subclass, as we see below.
                        // Later, a way to force a subclass to override a method will be demonstrated -- 
                        // but for this simple example will do for now.
        }
    }
  
  
 Using this class on a bank vault door might prove unsuccessful. A better strategy would be to "subclass" Door using inheritance and then override the `open` method to input the combination and `pull` rather than `push`.

  
    class BankVaultDoor extends Door {    // The "extends" keyword used to tell java that BankVaultDoor inherits the functionality of Door.
  
        public void open () {
            enterCombination();
            pull;
        }
  
    }
  
The advantage of using inheritance is writing code that applies to a number of classes that extend a more general class.  In the below example we have a method that opens several types of doors.

    public class Main {

        public static void main(String[] args) {
            Door d1 = new BankVaultDoor();
            Door d2 = new HouseFrontDoor();
            Door d3 = new CarDoor();
        }

        if (arg[0] == "car") {
            d3.open();
        } else if (arg[0] == "bank") {
            d1.open();
        } else {
            d2.open();
        }
    }

Notice that the `open()` method doesn't know (or care) about the type of door. Any class that is subclassed from Door (using `extends Door`) will use the `open()` method to open it. 

Exercise
--------

Create a house front door class which inherits from the Door class and open it. Assume the house door has a locked doorknob and it swings into the house. Hint: Your code should use the `super` keyword.

Tutorial Code
-------------

    public class Door {
        public void open ()
        {
            push();
        }
    }

    class BankVaultDoor extends Door {
  
        public void open () {
            enterCombination();
            pull;
        }
  
    }

    class HouseFrontDoor extends Door {
        // Your code goes here
    }


Expected Output
---------------

None for this exercise.

Solution
--------

    public class Door {
        public void open ()
        {
            push();
        }
    }

    class BankVaultDoor extends Door {
  
        public void open () {
            enterCombination();
            pull;
        }
  
    }

    class HouseFrontDoor extends Door {

        public void open () {
            insertKeyAndTurnKnob();
            super.push();
        }

    }
