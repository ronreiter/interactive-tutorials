Tutorial 
--------
There are four basic pillars to understand Java, which is an object oriented programming language. This basic knowledge will be useful to create efficient programs and to develop huge applications with all Java potential.

## Inheritance ##
Inheritance is the possibility of creating a new class from a previous class (the father...). This property is convenient when you want to create an entity with standard characteristics. After that you can create other classes, which derive of this class, inheriting the properties of the father but with new specific properties.
Example: You have a class vehicle (father class) and two children. The children are car and lorry. The first class have a common properties and the children have a new specific properties.  
    
    class Vehicle {
    	public void getVehicle(){
    		System.out.println("I am a Vehicle!");
    	}
    }
    
    
    class Car extends Vehicle{
    	public void getName(){
    		System.out.println("I am a Car!");
    	}
    }
    
    class Lorry extends Vehicle{
    	public void getName(){
    		System.out.println("I am a Lorry");
    	}
    }
    
    
    
    public class Main {
    	public static void main(String[] args) {

    		Lorry obLorry = new Lorry();
    		Car obCar = new Car();
    		
    		//LORRY SON
    		obLorry.getVehicle();;//Father property
    		obLorry.getName();//Son property
    		
    		//CAR SON
    		obLorry.getVehicle();//Father property
    		obLorry.getName();//Son property
    	}
    }
## Polymorphism ##
Polymorphism is the ability of an object to become in many forms. In the Java case, you can instance the children classes to create different objects.
    
    Vehicle[] vehicles = {new Lorry(),new Car()};
    		
    		//Lorry
    		( (Lorry) vehicles[0]).getName();
    		
    		//Car
    		( (Car) vehicles[1]).getName();

In this example, we can see an array of Vehicle with the objects Lorry and Car. This is the perfect example of polymorphism.

## Encapsulation ##
When you think in encapsulation, the best thing to describe that is a pill. The pill has some ingredients inside but you only can see the pill. 
In Java, this event happens in a class, when you hide the variables of a class with the property private. Therefore, only the methods of this class can access to these variables. The logical here, to create private variables and public methods, including setters and getters to modify the private variables.
    
    class Vehicle {
    	
    	private String _licencePlate;
    	private int _wheels;
    	
    	public String get_licencePlate() {
    		return _licencePlate;
    	}
    	public void set_licencePlate(String _licencePlate) {
    		this._licencePlate = _licencePlate;
    	}
    	public int get_wheels() {
    		return _wheels;
    	}
    	public void set_wheels(int _wheels) {
    		this._wheels = _wheels;
    	}
    }

## Abstraction ##
Abstraction is a process to show the most essential parts of an entity, hiding the irrelevant information. When you are using abstraction, you are reducing the code complexity which is better to understand the code, the programmer can see the code clear and he will be pleasant of view the most important information.
Furthermore, if you image that you have a class with an abstract method. You can not instance the abstract class and you can not implement this method. This task will be done for a daughter class, which can be instantiate.


    abstract class Vehicle {
    	
    	public abstract void getName();
    }
    
    
    class Car extends Vehicle {
    
    	@Override
    	public void getName() {
    		System.out.println("I am a car!");
    	}
    	
    }
    
    
    class Lorry extends Vehicle {
    
    	@Override
    	public void getName() {
    		System.out.println("I am a Lorry!");
    	}
    	
    }

Exercise
--------
This is an exercise for somebody who has little experience in Java programming. This challenge will be fantastic to test your knowledge about object oriented programming concepts in Java.
The exercise consists in use the recent acquired knowledge about the 4 Pillars of Object Oriented Programming.  The father class will be abstract, you will have to implement an abstract method called getType() in children classes. Further, the father class will have the variables name and age. After that you have to instance these classes and call the method in the main.

- Father class; person.
- Two children; student and teacher.
- Variables: name and age.
- Method; getType(). This method has System.out.println("I am a ...");

Tutorial Code
--------

    abstract class Person {
    	//Variables
    	
    	//Abstract method
    	
    }
    
    
    class Student extends Person {
    	
    	//Implement method
    }
    
    
    class Teacher extends Person {
    
    	//Implement method
    
    }
    
    
    public class Main {
    	
    	public static void main(String[] args) {
    		
    
    	}
    	
    }

Expected Output
--------

    I am a student!
    I am a teacher!

Solution
--------

    abstract class Person {
    	//Variables
    	private String _name;
    	private int _age;
    	
    	//Abstract method
    	public abstract void getType();
    }
    
    
    class Student extends Person {
    	//Implement method
    	@Override
    	public void getType() {
    		System.out.println("I am a student!");
    	}
    	
    	
    }
    
    
    class Teacher extends Person {
    	//Implement method
    	@Override
    	public void getType() {
    		// TODO Auto-generated method stub
    		System.out.println("I am a teacher!");
    	}
    
    }
    
    
    public class Main {
    	
    	public static void main(String[] args) {
    		
    		Person[] people = {new Student(), new Teacher()} ;
    		
    		//Student type
    		( (Student) people[0]).getType();
    		
    		//Teacher type
    		( (Teacher) people[1]).getType();
    	}
    	
    }




 