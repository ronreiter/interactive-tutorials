Tutorial
--------

Pointers in C++ are very similar to pointers in C. For more details about pointers, visit https://www.learn-c.org/en/Pointers.
C++, however, adds some more features, namely the operators new and delete to allocate and de-allocate memory to a pointer, respectively.

One of the biggest differences is that pointers in C++ are more secure. In C, we can assign a void pointer to a non-void pointer without using a cast to non-void pointer. In C++, however, you have to explicitly type cast it.

Example:

    void* p1;
    char* p2;
    p2 = p1; // Valid in C but not C++
    p2 = (char*) p1; // In C++

C++ also introduced 2 new concepts on pointers:

Constant pointer, in which the address pointed to cannot be changed.

Pointer to constant, in which the contents pointed to cannot be modified.

Exercise
--------

Create 2 pointers p1 and p2 for the given integer, with p1 being the void pointer, and p2 the int pointer. p2 must be assigned to p1. Increase the value of the content by 1 and print the value.

Tutorial code;
--------

    #include <iostream>
    
    using namespace std;
    
    int main() {
      int n = 1;
      
      // Create pointers for n
      cout << "Hello World!" << endl;
      
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
      void* p1;
      int* p2;
      
      p1 = &n;
      p2 = (int*) p1;
      *p2 += 1;
      
      cout << *p2 << endl;
      
      return 0;
    }
