Tutorial
--------

### Swapping Strings

You shall try and swap strings using `templates` (see [documentation](https://en.wikipedia.org/wiki/Generic_programming#Templates_in_C.2B.2B)). 

### Our first program


Exercise
--------

Change the program in the bottom in a way so that it prints to the output "world!, Hello"

Tutorial Code
-------------

    #include <iostream>
    using namespace std;
    
    template<typename T>
    void Swap(T & a, T & b)  {
    // your code goes here
    
    }

    int main() {
        string hello = "world!", 
        world = "Hello, ";
        Swap( world, hello );
        cout << hello << world << endl; //Output is "Hello, world!"
  
        return 0;
    }

Expected Output
---------------

    Hello, world!

Solution
--------

    #include <iostream>
    using namespace std;

    template<typename T>
    void Swap(T & a, T & b) {
       T temp = b;
       b = a;
       a = temp;
    }

    int main() {
        string hello = "world!", 
        world = "Hello, ";
        Swap( world, hello );
        cout << hello << world << endl; //Output is "Hello, world!"
  
        return 0;
    }
