Tutorial
--------

In Java, all function definitions must be inside classes. We also call functions methods. Let's look at an example method

    public class Main {
        public static void foo() {
            // Do something here
        }
    }

`foo` is a method we defined in class Main. Notice a few things about `foo`.

- `static` means this method belongs to the class Main and not to a specific instance of Main. Which means we can call the method from a different class like that `Main.foo()`.
- `void` means this method doesn't return a value. Methods can return a single value in Java and it has to be defined in the method declaration. However, you can use `return` by itself to exit the method.
- This method doesn't get any arguments, but of course Java methods can get arguments as we'll see further on.

### Arguments

I always like to say that arguments to Java methods are passed by value, although some might disagree with my choice of words, I find it the best way to explain and understand how it works exactly.

By value means that arguments are copied when the method runs. Let's look at an example.

    public void bar(int num1, int num2) {
        ...
    }

Here is a another place in the code, where bar is called

    int a = 3;
    int b = 5;
    bar(a, b);

You can picture in your head that when `bar(a, b)` is run, it's like in the beginning of `bar` the following two lines are written:

    int num1 = a;
    int num2 = b;

And only then the rest of the method is run.

This means that `a` value get copied to `num1` and `b` value get copied to `num2`. Changing the values of `num1` and `num2` will not affect `a` and `b`.

If the arguments were objects, the rules remain the same, but it acts a bit differently. Here is a an example:

    public void bar2(Student s1, Student s2) {
        ...
    }

And here is how we use it

    Student joe = new Student("joe");
    Student jack = new Student("jack");
    bar2(joe, jack);

Again we can picture the same two lines in the beginning of `bar2`

    Student s1 = joe;
    Student s2 = jack;

But when we assign objects, it's a bit different than assigning primitives. `s1` and `joe` are two different references to the same object. `s1 == joe` is true. This means that running methods on `s1` will change the object `joe`. But if we'll change the value of `s1` as a reference, it will not affect the reference `joe`.

    s1.setName("Chuck"); // joe name is now Chuck as well
    s1 = new Student("Norris"); // s1 is a new student, different than joe with the name of Norris
    // s1 == joe   is not true anymore

### Non static methods

Non static methods in Java are used more than static methods. Those methods can only be run on objects and not on the whole class.

Non static methods can access and alter the field of the object.

    public class Student {
        private String name;
        public String getName() {
            return name;
        }
        public void setName(String name) {
            this.name = name;
        }
    }

 Calling the methods will require an object of type `Student`.

    Student s = new Student();
    s.setName("Danielle");
    String name = s.getName();

    Student.setName("Bob"); // Will not work!
    Student.getName(); // Will not work!

### Summary

- Every Java method has to be within a class
- Static methods belong to a class while non-static methods belong to objects
- All parameters to functions are passed by value, primitives content is copied, while objects are not copied and some would say 'passed by reference'

Exercise
--------

Write the method `printFullName` of student which prints the full name of a student.

Tutorial Code
-------------

class Student {
    private String firstName;
    private String lastName;
    public Student(String firstName, String lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }
    // Your code goes here
}

public class Main {
    public static void main(String[] args) {
        Student[] students = new Student[] {
            new Student("Morgan", "Freeman"),
            new Student("Brad", "Pitt"),
            new Student("Kevin", "Spacey"),
        };
        for (Student s : students) {
            s.printFullName();
        }
    }
}

Expected Output
---------------

Morgan Freeman
Brad Pitt
Kevin Spacey

Solution
--------

class Student {
    private String firstName;
    private String lastName;
    public Student(String firstName, String lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }
    
    public void printFullName() {
        System.out.println (this.firstName+" "+this.lastName);
    }
}

public class Main {
    public static void main(String[] args) {
        Student[] students = new Student[] {
            new Student("Morgan", "Freeman"),
            new Student("Brad", "Pitt"),
            new Student("Kevin", "Spacey"),
        };
        for (Student s : students) {
            s.printFullName();
        }
    }
}
