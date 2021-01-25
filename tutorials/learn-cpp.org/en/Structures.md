Tutorial
--------

###  What is a structure

If you start programming code in C++ you'll sooner or later be facing a situation in which you'll need to store coherent data in a structured way.
This is where structures come in place...

A structure is basically a user-defined datatype which consists of other datatypes like int, char, etc. ...

### Defining a structure
    //This is how you'll usually define a structure    
    using namespace std;
    struct MyOwnStructure { // keyword "struct" followed by a name, followed by braces containing the datatypes you like, followed by a semicolon
        int poperty_one,
        int property_two,
        char property_three,
        bool property_four
        //...
    };

### Using a structure 
    int main (void) {
        MyOwnStructure demo1; //Declare demo1 of type MyOwnStructure
        MyOwnStructure demo2; //Declare demo2 of type MyOwnStructure

        //set demo1's with values
        demo1.property_one = 1;
        demo1.property_two = 2;
        demo1.property_three = 'a';
        demo1.property_four = false;

        //set demo2's values
        demo2.property_one = 3;
        demo2.property_two = 4;
        demo2.property_three = 'b';
        demo2.property_four = true;

        cout << "Demo1: " << demo1.property_one << demo1.property_two << demo1.property_three << demo1.property_four << endl;
        cout << "Demo2: " << demo2.property_one << demo2.property_two << demo2.property_three << demo2.property_four << endl;
        /*
        Will output
        Demo1: 12a0
        Demo2: 34b1
        */
        return 0;
    }


Exercise
--------

- Create a structure named "person" with the following fields
  - name (should be string)
  - age (should be int)
  - do_programming (should be bool)
- declare two objects "p1" and "p2" of your structure's datatype
- set the values for "p1" as follows:
    - name: alice
    - age: 20
    - do_programming: true
- set the values for "p2" as follows:
    - name: bob
    - age: 18
    - do_programming: false
- "cout" their informations in the scheme "name (age)" => e.g. tim (23) by getting the values from your structure-objects


Tutorial Code
-------------

    #include <iostream>
    using namespace std;
    
    //Your structure here...

    int main (void){
        //Declaring person's
        //Your code here...

        //Setting person 1's values
        //Your code here...

        //Setting person 2's values
        //Your code here...

        //Printing out
        //Your code here...
        //cout << name << " (" << age << ")" << endl;
        

        return 0;
    }

Expected Output
---------------

    
    alice (20)
    bob (18)
    


Solution
--------

    #include <iostream>
    using namespace std;
    
    struct person { 
        string name;
        int age;
        bool do_programming;
    };

    int main (void){
        //Declaring person's
        person p1;
        person p2;

        //Setting person 1's values
        p1.name = "alice";
        p1.age = 20;
        p1.do_programming = true;

        //Setting person 2's values
        p2.name = "bob";
        p2.age = 18;
        p2.do_programming = false;

        //Printing out
        cout << p1.name << " (" << p1.age << ")" << endl;
        cout << p2.name << " (" << p2.age << ")" << endl;

        return 0;
    }


