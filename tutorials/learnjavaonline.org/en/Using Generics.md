Tutorial
--------
Generics provide compile-time type safety that allows programmers to catch invalid types at compile time.

As this feature is often used with collections, we will focus on collections. Generics allows the user to set the type of the collection to limit what kind of objects can be inserted into the collection. The user also does not have to cast the values obtain from the collection. 

When declaring a generic, it must have a type parameter specifying what type of elements will be in the collection. For example, to declare a list containing strings, you would write:

    List<String> names = new ArrayList<>();

### Generics in class declaration

You can also use generics for class definition:

    public class YourClass<Class1,Class2>{
        private Class1 bob1;
        private Class2 bob2;
        Abc(Class1 a, Class2 b){
            this.bob1 = a;
            this.bob2 = b;
        }
        public Class1 getBob1() {
            return (this.bob1);
        }
        public Class2 getBob2() {
            return (this.bob2);
        }
    }

This is usefull when you want to have multiple options for classes of variables in your class, but don't want to write new constructors and functions for every single type.  Now you can just run:

    YourClass<String, Integer> leBobs = new YourClass<>("words",42);  //in this case, <> is the same as putting <String, Integer>
    String a=leBobs.getBob1();
    int b=leBobs.getBob2();
    System.out.println("bob1 is '" + a + "', and bob2 is '" + b + "'.");

To change the types of `bob1` and `bob2` just change the classes in the `<>` when you declare an object of the class `YourClass`.

Note: you cannot use primitives for generics unless you use their class version: ie <~~int~~ Integer> or <~~bool~~ Boolean>

Exercise
--------
Fix the FavoriteClasses class to use generics for it's three variables, favorite1, favorite2, and favorite3, it's constructor, and it's three functions to return each variable, as well as fixing `r` in the `main` section.  
Then define a variable of the FavoriteClasses class and use "Hello", 67, 6.3 as the arguments for the constructor, and when you define it use your favorite classes/types that go with the three arguments.

Tutorial Code
--------
    import java.util.*;
    public class Main{
        public static class FavoriteClasses{
            private favorite1;
            private favorite2;
            private favorite3;
            FavoriteClasses(fav1, fav2, fav3){
                this.favorite1=fav1;
                this.favorite2=fav2;
                this.favorite3=fav3;
            }
            public getFav1(){
                return(this.favorite1);
            }
            public getFav2(){
                return(this.favorite2);
            }
            public getFav3(){
                return(this.favorite3);
            }
        }
        public static main(String[] args){
            List r=new ArrayList();
            r.add(6.3);
            r.add(5.9);
            FavoriteClasses a=new FavoriteClasses("Hello",67,r.get(0));
            System.out.println("My favorites are " + a.getFav1() + ", " a.getFav2() + ", and " + a.getFav3() + ".");
        }
    }
    

Expected Output
--------
    My favorites are Hello, 67, and 6.3.

Solution
--------
    import java.util.*;
    public class Main{
        public static class FavoriteClasses<ClassA,ClassB,ClassC>{
            private ClassA favorite1;
            private ClassB favorite2;
            private ClassC favorite3;
            FavoriteClasses(ClassA fav1, ClassB fav2, ClassC fav3){
                this.favorite1=fav1;
                this.favorite2=fav2;
                this.favorite3=fav3;
            }
            public ClassA getFav1(){
                return(this.favorite1);
            }
            public ClassB getFav2(){
                return(this.favorite2);
            }
            public ClassC getFav3(){
                return(this.favorite3);
            }
        }
        public static main(String[] args){
            List<Float> r=new ArrayList<>();     //can also be double or any other that supports decimals
            r.add(6.3);
            r.add(5.9);
            FavoriteClasses<String, Integer, Float> a=new FavoriteClasses<>("Hello",67,r.get(0)); //same with int
            System.out.println("My favorites are " + a.getFav1() + ", " a.getFav2() + ", and " + a.getFav3() + ".");
        }
    }
