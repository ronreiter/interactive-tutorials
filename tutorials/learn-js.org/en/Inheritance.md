Tutorial
--------

JavaScript uses prototype based inheritance. Every object has a `prototype`, and when a method of the object is called then JavaScript tries to find the right function to execute from the prototype object.

### The prototype attribute

Without using the prototype object, we can define the object Person like this:

    function Person(name, age)
    {
        this.name = name;
        this.age = age;

        function describe()
        {
            return this.name + ", " + this.age + " years old.";
        }
    }

When creating instances of the `Person` object, we create a new copy of all members and methods of the functions. This means that every instance of an object will have its own `name` and `age` properties, as well as its own `describe` function.

However, if we use the `Person.prototype` object and assign a function to it, it will also work.

    function Person(name, age)
    {
        this.name = name;
        this.age = age;
    }

    Person.prototype.describe = function()
    {
        return this.name + ", " + this.age + " years old.";
    }

When creating instances of the `Person` object, they will not contain a copy of the `describe` function. Instead, when calling an object method, JavaScript will attempt to resolve the `describe` function first from the object itself, and then using its `prototype` attribute.

### Inheritance

Let's say we want to create a `Person` object, and a `Student` object derived from `Person`:

    var Person = function() {};
 
    Person.prototype.initialize = function(name, age)
    {
        this.name = name;
        this.age = age;
    }

    Person.prototype.describe = function()
    {
        return this.name + ", " + this.age + " years old.";
    }

    var Student = function() {};
    Student.prototype = new Person();

    Student.prototype.learn = function(subject)
    {
        console.log(this.name + " just learned " + subject);
    }

    var me = new Student();

    me.initialize("John", 25);
    me.learn("Inheritance");

As we can see in this example, the `initialize` method belongs to `Person` and the `learn` method belongs to `Student`, both of which are now part of the `me` object.

Keep in mind that there are many ways of doing inheritance in JavaScript, and this is just one of them. 

Exercise
--------

Create an object called `Teacher` derived from the `Person` class, and implement a method called `teach` which receives a string called `subject`, and prints out:

    [teacher's name] is now teaching [subject]

Tutorial Code
-------------

var Person = function() {};

Person.prototype.initialize = function(name, age)
{
    this.name = name;
    this.age = age;
}

// TODO: create the class Teacher and a method teach

var him = new Teacher();

him.initialize("Adam", 45);
him.teach("Inheritance");

Expected Output
---------------

Adam is now teaching Inheritance

Solution
--------

var Person = function() {};

Person.prototype.initialize = function(name, age)
{
    this.name = name;
    this.age = age;
}

// TODO: create the class Teacher and a method teach
var Teacher = function() {
    this.teach = function(subject){
        console.log(this.name + " is now teaching " + subject);
    }
}
Teacher.prototype = new Person();
var him = new Teacher();

him.initialize("Adam", 45);
him.teach("Inheritance");
