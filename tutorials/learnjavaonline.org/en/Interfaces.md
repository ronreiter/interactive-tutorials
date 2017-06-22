Tutorial
--------

Interfaces are class templates. Although not strictly required, they are part of the organizational structure of object-oriented programming. Interfaces define methods for classes by specifying the method name, the return type (or void) and the method arguments (by type and name). These method definitions are called signatures. Because this is a template, the method signatures contain no code. The code is entered into the **implementation** of an interface. Interfaces are used in the discipline of polymorphism.

Note these two important points about interfaces:

-  If a class implements an `interface`, all of the interface's methods must appear in the class.
-  The `implements` keyword is used when creating a class that is modeled after an interface.

### An analogy

Think of cutting a duck decoy from a block of wood. First, a template is used to trace the pattern onto the wood. Then, when the wood is cut, it resembles the template. At this point, however, neither the template nor the wood have any of the fine details that one would expect from a finished decoy. The template was used to define basic characteristics, not precise details. After multiple duck-shaped pieces have been cut, each one can be carved and decorated uniquely. Yet, they all have the same basic size and shape.

An interface is generally used as a template for multiple classes. These classes all share the methods defined in the interface. However, the implementation of the methods may vary from one class to another.

### An example of an interface

An interface named Animal might have method defintions for feed, groom and pet. The feeding, grooming and petting of animals can be as different as the animals themselves.

    interface Animal {
        bool feed(bool timeToEat);
        void groom();
        void pet();
    }

A dog class, for instance, may be implemented in a somewhat predictable way.

    class Dog implements Animal {
        bool feed(bool timeToEat) {
          // pour food into bowl
          return true;
        }
        void groom() {
          // brush well
        }
        void pet() {
          // pet cautiously
        }
    }

Other animal classes, may have specific needs.

    class Giraffe implements Animal {
        bool feed(bool timeToEat) {
          // point to the trees 
          return true;
        }
        void groom() {
          // get a ladder
          // brush well
        }
        void pet() {
          // get a ladder
          // pet cautiously
        }
    }

    class Tiger implements Animal {
        bool feed(bool timeToEat) {
          // toss raw meat into cage
          return true
        }
        void groom() {
          // tranquilize
          // brush well
        }
        void pet() {
          // DO NOT PET
        }
    }

Exercise
--------
Create a gorilla class which implements the Animal interface.

### Tutorial Code

    interface Animal {
        bool feed(bool timeToEat);
        void groom();
        void pet();
    }

### Expected Output

  No visible output. However, the result should be a class, similar to the ones implemented above, for a gorilla that includes all of the interface methods.

### Solution

    class Gorilla implements Animal {
        bool feed(bool timeToEat) {
          // put gorilla food into cage
          return true;
        }
        void groom() {
          // lather, rinse, repeat
        }
        void pet() {
          // pet at your own risk
        }
    }  
