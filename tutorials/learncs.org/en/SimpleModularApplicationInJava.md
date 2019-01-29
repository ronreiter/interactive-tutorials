# Creating a Simple Modular Application in Java
*Learn how to create a simple modular application in Java in this article by Nick Samoylov, a Java programmer who graduated as an engineer-physicist from Moscow Institute of Physics and Technology and learned how to program as a tool for testing his mathematical models using FORTRAN and C++, and Mohamed Sanaulla, a full-stack developer with more than 8 years, experience in developing enterprise applications and Java-based backend solutions for e-commerce applications.*

Modular programming enables one to organize code into independent, cohesive modules, which can be combined to achieve the desired functionality. You should be wondering what this modularity is all about and how to create a modular application in Java. In this article, we will try to clear up the confusion around creating modular applications in Java by walking you through a simple example. Our goal is to show you how to create a modular application; hence, we picked a simple example so as to focus on our goal. 

Our example is a simple advanced calculator, which checks whether a number is prime, calculates the sum of prime numbers, checks whether a number is even, and calculates the sum of even and odd numbers.

## Getting ready
We will divide our application into two modules:
* The `math.util` module, which contains the APIs for performing the mathematical calculations
* The `calculator` module, which launches an advanced calculator

## How to do it...
1.	Let's implement the APIs in the `com.packt.math.MathUtil` class, starting with the `isPrime(Integer number)` API:
```java
public static Boolean isPrime(Integer number){
     if ( number == 1 ) { return false; }
     return IntStream.range(2,num).noneMatch(i -> num % i == 0 );
}
```        
2.	Implement the `sumOfFirstNPrimes(Integer count)` API:
```java
public static Integer sumOfFirstNPrimes(Integer count){
     return IntStream.iterate(1,i -> i+1)
                     .filter(j -> isPrime(j))
                     .limit(count).sum();
 }
```
3.	Let's write a function to check whether the number is even:
```java
public static Boolean isEven(Integer number){
     return number % 2 == 0;
}
```
4.	The negation of `isEven` tells us whether the number is odd. We can have functions to find the sum of the first N even numbers and the first N odd numbers, as shown here:
```java
public static Integer sumOfFirstNEvens(Integer count){
     return IntStream.iterate(1,i -> i+1)
                     .filter(j -> isEven(j))
                     .limit(count).sum();
}

public static Integer sumOfFirstNOdds(Integer count){
     return IntStream.iterate(1,i -> i+1)
                     .filter(j -> !isEven(j))
                     .limit(count).sum();
}
```

We can see in the preceding APIs that the following operations are repeated:
*	An infinite sequence of numbers starting from `1`
*	Filtering the numbers based on some condition
*	Limiting the stream of numbers to a given count
*	Finding the sum of numbers thus obtained

Based on our observation, we can refactor the preceding APIs and extract these operations into a method, as follows:
```java
Integer computeFirstNSum(Integer count,
                                 IntPredicate filter){
  return IntStream.iterate(1,i -> i+1)
                  .filter(filter)
                  .limit(count).sum();
 }
```

Here, `count` is the limit of numbers we need to find the sum of and `filter` is the condition for picking the numbers for summing. Let's rewrite the APIs based on the refactoring we just did:
```java
public static Integer sumOfFirstNPrimes(Integer count){
  return computeFirstNSum(count, (i -> isPrime(i)));
}

public static Integer sumOfFirstNEvens(Integer count){
  return computeFirstNSum(count, (i -> isEven(i)));
}

public static Integer sumOfFirstNOdds(Integer count){
  return computeFirstNSum(count, (i -> !isEven(i)));
}
```

You must be wondering about the following:
*	The `IntStream` class and the related chaining of the methods
*	The use of `->` in the code base
*	The use of the `IntPredicate` class

So far, we have seen a few APIs around mathematical computations. These APIs are part of our `com.packt.math.MathUtil class`. The complete code for this article can be found at https://github.com/PacktPublishing/Java-11-Cookbook-Second-Edition/tree/master/Chapter03/2_simple-modular-math-util.

Let's make this small utility class part of a module named `math.util`. The following are some conventions we use to create a module:

1.	Place all the code related to the module under a directory named `math.util` and treat this as our module root directory.
2.	In the root folder, insert a file named `module-info.java`.
3.	Place the packages and the code files under the root directory.

What does `module-info.java` contain? The following:
*	The name of the module
*	The packages it exports, that is, the one it makes available for other modules to use
*	The modules it depends on
*	The services it uses
*	The service for which it provides implementation

The JDK comes bundled with a lot of modules, that is, the existing Java SDK has been modularized! One of those modules is a module named `java.base`. All of the user-defined modules implicitly depend on (or require) the `java.base` module (think of every class implicitly extending the `Object` class).

Our `math.util` module doesn't depend on any other module (except, of course, the `java.base` module). However, it makes its API available for other modules (if not, then this module's existence is questionable). Let's go ahead and put this statement into code:

```java
module math.util{
  exports com.packt.math;
}
```

We are telling the Java compiler and runtime that our `math.util` module is exporting the code in the `com.packt.math` package to any module that depends on `math.util`. The code for this module can be found at `Chapter03/2_simple-modular-math-util/math.util`.

Now, let's create another module calculator that uses the `math.util` module. This module has a `Calculator` class whose work is to accept the user's choice for which mathematical operation to execute and then the input required to execute the operation. The user can choose from five available mathematical operations:
*	Prime number check
*	Even number check
*	Sum of **N** primes
*	Sum of **N** evens
*	Sum of **N** odds

Let's see this in code:
```java
private static Integer acceptChoice(Scanner reader){
  System.out.println("************Advanced Calculator************");
  System.out.println("1. Prime Number check");
  System.out.println("2. Even Number check");
  System.out.println("3. Sum of N Primes");
  System.out.println("4. Sum of N Evens");
  System.out.println("5. Sum of N Odds");
  System.out.println("6. Exit");
  System.out.println("Enter the number to choose operation");
  return reader.nextInt();
}
```
Then, for each of the choices, we accept the required input and invoke the corresponding `MathUtil` API, as follows:
```java
switch(choice){
  case 1:
    System.out.println("Enter the number");
    Integer number = reader.nextInt();
    if (MathUtil.isPrime(number)){
      System.out.println("The number " + number +" is prime");
    }else{
      System.out.println("The number " + number +" is not prime");
    }
  break;
  case 2:
    System.out.println("Enter the number");
    Integer number = reader.nextInt();
    if (MathUtil.isEven(number)){
      System.out.println("The number " + number +" is even");
    }
  break;
  case 3:
    System.out.println("How many primes?");
    Integer count = reader.nextInt();
    System.out.println(String.format("Sum of %d primes is %d", 
          count, MathUtil.sumOfFirstNPrimes(count)));
  break;
  case 4:
    System.out.println("How many evens?");
    Integer count = reader.nextInt();
    System.out.println(String.format("Sum of %d evens is %d", 
          count, MathUtil.sumOfFirstNEvens(count)));
  break;
  case 5: 
    System.out.println("How many odds?");
    Integer count = reader.nextInt();
    System.out.println(String.format("Sum of %d odds is %d", 
          count, MathUtil.sumOfFirstNOdds(count)));
  break;
}
```
The complete code for the `Calculator` class can be found at `Chapter03/2_simple-modular-math-util/calculator/com/packt/calculator/Calculator.java`. Let's create the module definition for our `calculator` module in the same way we created it for the `math.util` module:
```java
module calculator{
  requires math.util;
}
```
In the preceding module definition, we mentioned that the `calculator` module depends on the `math.util` module using the `required` keyword. The code for this module can be found at `Chapter03/2_simple-modular-math-util/calculator`. Let's compile the code:
```java
javac -d mods --module-source-path . $(find . -name "*.java")
```

The preceding command has to be executed from `Chapter03/2_simple-modular-math-util`. Also, you should have the compiled code from across both the modules, `math.util` and `calculator`, in the `mods` directory. Just a single command and everything including the dependency between the modules is taken care of by the compiler. We didn't require build tools such as `ant` to manage the compilation of modules.

The `--module-source-path` command is the new command-line option for `javac`, specifying the location of our module source code. Let's execute the preceding code: 

```java
java --module-path mods -m calculator/com.packt.calculator.Calculator
```

The `--module-path` command, similar to `--classpath`, is the new command-line option `java`, specifying the location of the compiled modules. After running the preceding command, you will see the calculator in action:
 
Congratulations! With this, we have a simple modular application up and running. 

We have provided scripts to test out the code on both Windows and Linux platforms. Please use `run.bat` for Windows and `run.sh` for Linux.

## How it works...

Now that you have been through the example, we will look at how to generalize it so that we can apply the same pattern in all our modules. We followed a particular convention to create the modules:

```java
|application_root_directory
|--module1_root
|----module-info.java
|----com
|------packt
|--------sample
|----------MyClass.java
|--module2_root
|----module-info.java
|----com
|------packt
|--------test
|----------MyAnotherClass.java
```

We place the module-specific code within its folders with a corresponding `module-info.java` file at the root of the folder. This way, the code is organized well.

Let's look into what `module-info.java` can contain. From the Java language specification (http://cr.openjdk.java.net/~mr/jigsaw/spec/lang-vm.html), a module declaration is of the following form:

```java
{Annotation} [open] module ModuleName { {ModuleStatement} }
```

Here's the syntax, explained: 
*	`{Annotation}`: This is any annotation of the form `@Annotation(2)`.
*	`open`: This keyword is optional. An open module makes all its components accessible at runtime via reflection. However, at compile-time and runtime, only those components that are explicitly exported are accessible.
*	`module`: This is the keyword used to declare a module.
*	`ModuleName`: This is the name of the module that is a valid Java identifier with a permissible dot (`.`) between the identifier names—similar to `math.util`.
*	`{ModuleStatement}`: This is a collection of the permissible statements within a module definition. Let's expand this next.

A module statement is of the following form:

```java
ModuleStatement:
  requires {RequiresModifier} ModuleName ;
  exports PackageName [to ModuleName {, ModuleName}] ;
  opens PackageName [to ModuleName {, ModuleName}] ;
  uses TypeName ;
  provides TypeName with TypeName {, TypeName} ;
```

The module statement is decoded here:

*	`requires`: This is used to declare a dependency on a module. `{RequiresModifier}` can be transitive, static, or both. Transitive means that any module that depends on the given module also implicitly depends on the module that is required by the given module transitively. Static means that the module dependence is mandatory at compile time, but optional at runtime. Some examples are `requires math.util`, `requires transitive math.util`, and `requires static math.util`.
*	`exports`: This is used to make the given packages accessible to the dependent modules. Optionally, we can force the package's accessibility to specific modules by specifying the module name, such as `exports com.package.math to calculator`.
*	`opens`: This is used to open a specific package. We can open a module by specifying the `open` keyword with the module declaration. But this can be less restrictive. So, to make it more restrictive, we can open a specific package for reflective access at runtime using the `opens` keyword—`opens com.packt.math`.
*	`uses`: This is used to declare a dependency on a service interface that is accessible via `java.util.ServiceLoader`. The service interface can be in the current module or in any module that the current module depends on.
*	`provides`: This is used to declare a service interface and provide it with at least one implementation. The service interface can be declared in the current module or in any other dependent module. However, the service implementation must be provided in the same module; otherwise, a compile-time error will occur.

The module source of all modules can be compiled at once using the `--module-source-path` command-line option. This way, all the modules will be compiled and placed in their corresponding directories under the directory provided by the `-d` option. For example, `javac -d mods --module-source-path . $(find . -name "*.java")` compiles the code in the current directory into a `mods` directory.

Running the code is equally simple. We specify the path where all our modules are compiled into using the command-line option `--module-path`. Then, we mention the module name along with the fully qualified main class name using the command-line option `-m`, for example, `java --module-path mods -m calculator/com.packt.calculator.Calculator`.

*If you found this article interesting, you can explore [Java 11 Cookbook](https://www.amazon.com/Java-Cookbook-definitive-application-development-ebook/dp/B07HY331VW) to find solutions for modular, functional, reactive, GUI, network, and multithreaded programming. [Java 11 Cookbook](https://www.packtpub.com/application-development/java-11-cookbook-second-edition) offers a range of software development solutions with simple and straightforward Java 11 code examples to help you build a modern software system.*
