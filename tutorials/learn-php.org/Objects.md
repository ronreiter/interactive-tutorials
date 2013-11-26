Tutorial
--------

PHP is an object oriented language, although it does not have to be used as one, since most
PHP functions are not object oriented.

In object oriented programming, a `class` is a definition of an object,
whereas an `object` is an instance of an object, meaning that from one
class you can create many objects.

For example, let's define a class of a student.

    class Student {
        // constructor
        public function __construct($first_name, $last_name) {
            $this->first_name = $first_name;
            $this->last_name = $last_name;
        }

        public function say_name() {
            echo "My name is " . $this->first_name . " " . $this->last_name . ".\n";
        }
    }

    $alex = new Student("Alex", "Jones");
    $alex->say_name();

Let's analyze the code. Notice that the `Student` class has a constructor function, which is executed
when the object is created. The constructor receives arguments which are later provided when
constructing the object with the `new` keyword.

After we have constructed the object into the variable `$alex` we can now use the object's methods.

We implemented an object method `say_name`, which prints out the name of the student. Notice that the
`say_name` function does not receive any arguments, but it does have access to the first and last
name of the student, because they were previously defined in the constructor.

Here are some important definitions related to objects:

* **Classes** define how objects behave. Classes do not contain data.
* **Objects** are instances of classes, which contain data.
* **Members** are variables that belong to an object.
* **Methods** are functions that belong to an object, and have access to its members.
* **Constructor** is a special method that is executed when an object is created.

### Inheritance

The most important feature of object oriented programming is inheritance. This feature allows us to reuse
code we've written and extend it. For example, let's say we want to be able to define a math student, which
also knows how to sum two numbers.

    class Student {
        // constructor
        public function __construct($first_name, $last_name) {
            $this->first_name = $first_name;
            $this->last_name = $last_name;
        }

        public function say_name() {
            echo "My name is " . $this->first_name . " " . $this->last_name . ".\n";
        }
    }

    $alex = new Student("Alex", "Jones");
    $alex->say_name();

    class MathStudent extends Student {
        function sum_numbers($first_number, $second_number) {
            $sum = $first_number + $second_number;
            echo $this->first_name . " says that " . $first_number . " + " . $second_number . " is " . $sum;
        }
    }

    $eric = new MathStudent("Eric", "Chang");
    $eric->say_name();
    $eric->sum_numbers(3, 5);

Notice that Eric's object also has the same constructor and the `say_name` function,
in addition to a new method called `sum_numbers`, which causes Eric to calculate the
sum of two numbers. Also notice that the new function has access to the same members
we have previously defined in the Student class (`first_name`, `last_name`).

### Public and private functions

We can use the `public` and `private` modifiers respectively to define functions which
can be accessed from outside the object or not, for encapsulation purposes. This
allows to better define how objects should be used, to separate between functions
which are used for internal use, as opposed to an external interface.

    class Student {
        // constructor should be public
        public function __construct($first_name, $last_name) {
            $this->first_name = $first_name;
            $this->last_name = $last_name;
        }

        // for external use
        public function say_name() {
            echo "My name is " . $this->full_name() . "\n";
        }

        // for internal use
        private function full_name() {
            return $this->first_name . " " . $this->last_name;
        }
    }

    $alex = new Student("Alex", "Jones");

    $alex->say_name();

    // this will not work
    // echo $alex->full_name();

Exercise
--------

Create a class called Car with a constructor that receives the brand and make year of the car, and
a function called `print_details` that prints out the details of the car.

For example, for a 2006 Toyota car, the following line would be printed out:

`This car is a 2006 Toyota.`

Tutorial Code
-------------

<?php
// TODO: Implement the Car class here

$car = new Car("Toyota", 2006);
$car->print_details();

Expected Output
---------------

This car is a 2006 Toyota.

Solution
--------

<?php
class Car {
    public function __construct($brand, $year) {
        $this->brand = $brand;
        $this->year = $year;
    }

    public function print_details() {
        echo "This car is a " . $this->year . " " . $this->brand . ".\n";
    }
}

$car = new Car("Toyota", 2006);
$car->print_details();
