Tutorial
--------

Java Generic methods and generic classes enable programmers to specify, with a single method declaration, a set of related methods, or with a single class declaration, a set of related types, respectively.Generic in java is similar to templates in C++. It allows the user to parameterized the types in classes, or interface. The user have to <> to specify parameter types in generic class creation. 


## Generic Methods
public <T> methodName()
{
    ...
}

## Generic class
public class ClassName<T>
{
    ...
}

## Generic variable
T varibaleName;

Lets see a code sample to easily understand the generic types.

//This a Generic class declaration
    class Generic<T> // This class accepts any data type
    {

// Generic variable declaration
        T variable; 
        public Generic(T variable) // constructor  for generic class
        {
            this.variable = variable;
        }

//generic method declaration
        public <T> getVariable() // method to get the variable of generic type
        {
            return variable;
        }
    }

This the main class where the object for generic class is created here.

    class Main
    {
        public static void main(String args[])
        {

// Here the object is created for the generic class
            Generic<Integer> intvar = new Generic<Integer>(20); // Here the object is created for Generic class of type Integer.
            System.out.println(intvar.getVariable());
           
            Generic<String> strvar = new Generic<String>("I love Java"); // Here the object is created for Generic class of type String.
            System.out.println(strvar.getVariable());

        }

    }

## OUTPUT
20                                                                                                                                                                                 
I love Java

The code shows you that the class constructor while object creation can accept any data type.

Exercise
--------

Create a Generic class which accepts String and Integer datatype at a time. Create a object for the same. Pass in 30 and "I love Generic types" has parameters. print the both in next next line   

Tutorial Code
-------------
// Create a generic class here.

public class Main {

    public static void main(String[] args) {

        // Your code goes here

    }

}

Expected Output
---------------
30
I love Generic types


Solution
--------

class Generic<I, S> 
{
    I variable1;  
    S variable2;
    public Generic(I variable1, S variable2) 
    {
        this.variable1 = variable1;
        this.variable2 = variable2;
    }
    public I getVariable1() 
    {
        return variable1;
    }
    public S getVariable2() 
    {
        return variable2;
    }
}
class Main
{
    public static void main(String args[])
    {
        Generic<Integer, String> intstrvar = new Generic<Integer, String>(30,"I love Generic types");
        System.out.println(intstrvar.getVariable1());
        System.out.println(intstrvar.getVariable2());

    }

}
