# Lambda Expression in Java
In Java, a lambda expression is a concise way to represent an anonymous function—a method without a name. It provides a way to pass functionality as an argument to other methods or to create simple implementations of functional interfaces.

Lambda expressions are particularly useful when working with functional interfaces, which have only one abstract method. They allow you to write shorter and more readable code by reducing boilerplate code, especially when dealing with simple operations or callbacks.

[![Lambda Expression](https://i.ibb.co/S0fxQ7h/lambda-expression.jpg)](https://ibb.co/bLb3HRS)

## Lambda Expression Syntax:
```bash
lambda operator -> body
```

## Example of Lambda Expression
```bash
package LambdaExpression;
/**
 * This program demonstrates the usage of lambda expressions in Java.
 */
 
@FunctionalInterface
interface MyLambda1 {
    // Method to add two numbers
    public int add(int x, int y); // Lambda expressions can take multiple parameters
}

public class LambdaExample {
    public static void main(String[] args) {
        // Lambda expression to add two numbers
        MyLambda1 m1 = (a, b) -> a + b; // Lambda expressions do not require 'return' keyword and type of the variable

        // Display the result of adding two numbers
        System.out.println(m1.add(10, 10));
    }
}
```


## Lambda Expression Parameters
There are three Lambda Expression Parameters are mentioned below:
- 1. Zero Parameter 
- 2. Single Parameter
- 3. Multiple Parameters

## 1. Lambda Expression with Zero parameter 
```bash
() -> System.out.println("Zero parameter lambda");
```
### Example
```bash
// Functional interface with zero parameters
interface ZeroParamLambda {
    void display();
}

public class ZeroParamLambdaExample {
    public static void main(String[] args) {
        // Lambda expression with zero parameters
        ZeroParamLambda zeroParamLambda = () -> {
            System.out.println("Lambda expression with zero parameters executed");
        };
        zeroParamLambda.display();
    }
}
```

## 2. Lambda Expression with Single parameter
```bash
(p) -> System.out.println("One parameter: " + p);
```
> Note: It is not mandatory to use parentheses if the type of that variable can be inferred from the context.
### Example:
```bash
// Functional interface with single parameter
interface SingleParamLambda {
    int square(int x);
}

public class SingleParamLambdaExample {
    public static void main(String[] args) {
        // Lambda expression with single parameter
        SingleParamLambda singleParamLambda = (int x) -> {
            return x * x;
        };
        int result = singleParamLambda.square(5);
        System.out.println("Square of 5 is: " + result);
    }
}
```

## 3. Lambda Expression with Multiple parameters
```bash
(p1, p2) -> System.out.println("Multiple parameters: " + p1 + ", " + p2);
```
### Example:
```bash
// Functional interface with multiple parameters
interface MultiParamLambda {
    int add(int a, int b);
}

public class MultiParamLambdaExample {
    public static void main(String[] args) {
        // Lambda expression with multiple parameters
        MultiParamLambda multiParamLambda = (int a, int b) -> {
            return a + b;
        };
        int sum = multiParamLambda.add(10, 20);
        System.out.println("Sum of 10 and 20 is: " + sum);
    }
}

```

## Rules for the body of a lambda expression
- The body of the lambda expression can be either a single expression or more statements.
- If we are using a single expression as the body of a lambda expression, then no need to enclose the body with curly braces ({}).
- If we are using one or more statements as the body of a lambda expression, then enclosing them within curly braces({}) can be mandatory.