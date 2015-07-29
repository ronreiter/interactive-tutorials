Unions
--------

C unions, just like structures, are special, large variables which contain several named variables inside. Structures are the basic foundation for objects and classes in C++. The difference with structures is that unions allow you to store multiple datatypes in the same memory location. Hence, you can create a union with multiple entities (or members), but only one of which can contain a value at any given time. This makes a union an efficient way of using the same memory location for multiple purposes.

A union can be created in the same manner as the struct, but using the **union** statement instead. Let us create a union type named **sample**:

    union sample {
        int x;
        float y;
        char str[20]
    };

A variable of type **sample** can store data of either integer, float or character type. To be able to do this, the memory occupied by a union will be large enough to hold the largest member of the union. In our example above, memory size will be 20 to account for the character type data. 

To access the sample's variables, we use the dot `.` operator. To illustrate, try executing this code and analyze the potential problem.

    #include <stdio.h>
    #include <string.h>
    
    union sample {
        int x;
        float y;
        char str[20]
    };
    
    int main() {
        union sample data;
        
        data.i = 1;
        data.f = 1.5;
        strcpy(data.str, "This is from a Union");
        
        return 0;
    }

Unions may have other complex datatypes such as structures and pointers as their members. Similarly, unions may also be members of other datatypes such as arrays and structures. Typedefs may also be used to create new datatypes from unions, similar to what we had seen for structures.

Exercise
--------

Define a union with three members: Age, FirstName (length: 20), and LastName (length: 20). Use the defined union to print a person's details. Take note of the union's defining characteristic: can store multiple datatypes in the same memory location.

Tutorial Code
-------------

    #include <stdio.h>
    #include <string.h>
    
    union Person
    {
        /* complete this area */
    };
    
    int main()
    {
        union Person person;
        /* complete this area */
        
        return 0;
    }

Expected Output
---------------

    First Name: John
    Last Name: Nash
    Age: 27

Solution
--------

    #include <stdio.h>
    #include <string.h>
    
    union Person
    {
        int Age;
        char FirstName[20];
        char LastName[20];
    };
    
    int main()
    {
        union Person person;
        
        strcpy(person.FirstName, "John")
        printf("First Name: %s\n", person.FirstName)
        strcpy(person.LastName, "Nash")
        printf("Last Name: %s\n", person.LastName)
        person.Age = 27;
        printf("First Name: %d\n", person.Age)
        
        return 0;
    }
