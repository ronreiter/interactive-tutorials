Tutorial
--------

Pointers are basically a reference to a variable in memory.
They're "pointing" to a memory-address where a variable is stored.

Pointers in C++ are very similar to pointers in C. For more details about pointers, visit https://www.learn-c.org/en/Pointers.

C++, however, adds some more features, namely the operators new and delete to allocate and de-allocate memory to a pointer, respectively.

## datatype
A pointer in almost all cases needs a datatype that matches the referenced variable.
For example an int-pointer can hold the address of an int-variable and a float-pointer can hold the address of a float-variable.
A special case is the so called "void-pointer".

## void pointer
A so called "void-pointer" is a pointer, which has no data type assigned.
It can hold an address of any type and can be typecasted to any other type.

## Examples:
### Pointermagic explained
    // This will explain how pointers are used
    #include <iostream> 
    using namespace std; 
    int main() 
    {     
      int a = 5;  //Declare and initialize a variable
      /*
      The following pointer declarations are all valid and they all are doing the same:
      Declaring a new pointer and initializing it with 0 (a non accessible memory address) for safety-reasons.
      int * b = 0;
      int* b = 0                 
      int *b = 0; // This is how its usually written.
      int *b; // <= this, however would cause "b" to point to some random address which might be unsafe.
      */
      int *b = 0; // Create a new pointer of type int and initialize it with 0

      cout << "\"b\" is initialized and now pointing to memory-address:  " << b << endl << endl;        

      //Now make the pointer "point" to the address of a
      b = &a; //"b" now points to the address of "a"

      cout << "\"a\" is stored at memory-address:  " << &a << endl;
      cout << "\"b\" is stored at memory-address:  " << &b << endl;
      cout << "\"b\" is pointing to memory-address now:  " << b << endl << endl;

      cout << "The value of \"a\" is: " << a << endl;  // returns the value of a
      
      //the "*b" will get the value from the address b points to (the value of a)
      cout << "The value of the area \"b\" is pointing to is: " << *b << endl << endl << endl;      

      //Now modify the value of the address "b" is pointing to...effectively changing the value of "a"     
      *b=10;      

      cout << "\"a\" is still stored at memory-address:  " << &a << endl;
      cout << "\"b\" is still stored at memory-address:  " << &b << endl;
      cout << "\"b\" is still pointing to memory-address:  " << b << endl << endl;      

      cout << "The value of \"a\" is now: " << a << endl;  // returns the value of a
      cout << "The value of the area \"b\" is pointing to is now: " << *b << endl << endl;

      return 0;        
    }

### void pointer in C++ particularity
One of the biggest differences is that pointers in C++ are more secure.
In C, we can assign a void pointer to a non-void pointer without using a cast to non-void pointer. In C++, however, you have to explicitly type cast it.

    void* p1;
    char* p2;
    p2 = p1; // Valid in C but not C++
    p2 = (char*) p1; // In C++ we have to typecast the pointer!

C++ also introduced 2 new concepts on pointers:

- Constant pointer, in which the address pointed to cannot be changed.
- Pointer to constant, in which the contents pointed to cannot be modified.

Exercise
--------
Indirectly access and modify the value of "n":
- Create 2 pointers p1 and p2 for the given integer "n", 
- with p1 being the void pointer, 
- and p2 the int pointer.
- p2 must be assigned to p1.
- indirectly increase the value of n's content by 1 and print the value.

Tutorial Code
-------------

    #include <iostream>
    
    using namespace std;
    
    int main() {
        int n = 1;
        
        //Your code here: Create pointers for n and use them to modify n's value

        cout << n << endl; // <- This should print "2" without n being modified directly.
      
        return 0;
    }

Expected Output
--------
    
    2

Solution
--------

    #include <iostream>
    using namespace std;
    
    int main() {
        int n = 1;
      
        // Create pointers for n
        void* p1;  //Create a void-pointer
        int* p2;  //Create an int-pointer
      
        p1 = &n;  //let the void pointer reference "n"
        p2 = (int*) p1;  // let int-pointer reference the void-pointer but typecasted to int
        *p2 += 1;  // increment the value where p2 is pointing to by 1
      
        //cout << *p2 << endl; // points to the address of n. output will be identical to the line below
        cout << n << endl;
      
        return 0;
    }
    /*
    //A compacter version:
    #include <iostream>
    using namespace std;
    int main() {
        int n = 1;      
        //We can declare and intialize the pointers in one step each
        void *p1 = &n;
        int *p2 = (int*) p1;      
        *p2 += 1;
        cout << n << endl; 
        return 0;
    }
    */
