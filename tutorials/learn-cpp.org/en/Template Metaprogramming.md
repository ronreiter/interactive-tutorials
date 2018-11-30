Tutorial
--------

### Introduction

Template metaprogramming (TMP) is a metaprogramming technique in which templates are used by a compiler to generate temporary source code, which is merged by the compiler with the rest of the source code and then compiled. The output of these templates include compile-time constants, data structures, and complete functions. The use of templates can be thought of as compile-time execution. The technique is used by a number of languages, the best-known being *C++*, but also *Curl*, *D*, and *XL*.

### Our first program

What exactly "**programming at compile-time**" means can be illustrated with an example of a factorial function, which in non-template C++ can be written using recursion as follows: 

    unsigned int factorial(unsigned int n) {
      return n == 0 ? 1 : n * factorial(n - 1); 
    }

    // Usage examples:
    // factorial(0) would yield 1;
    // factorial(4) would yield 24.

The code above will execute at run time to determine the factorial value of the literals 4 and 0. By using template metaprogramming and template specialization to provide the ending condition for the recursion, the factorials used in the program—ignoring any factorial not used—can be calculated at compile time by this code:

    template <unsigned int n>
    struct factorial {
      enum { value = n * factorial<n - 1>::value };
    };

    template <>
    struct factorial<0> {
      enum { value = 1 };
    };

    // Usage examples:
    // factorial<0>::value would yield 1;
    // factorial<4>::value would yield 24.

The code above calculates the factorial value of the literals *4* and *0* at compile time and uses the results as if they were precalculated constants. To be able to use templates in this manner, the compiler must know the value of its parameters at compile time, which has the natural precondition that factorial<X>::value can only be used if *X* is known at compile time. In other words, *X* must be a constant literal or a constant expression. 

Exercise
--------

Write a cpp program using template metaprogramming, which calculates powers of 2

Tutorial Code
-------------

    #include <iostream> 
    using namespace std; 

    // write code here
      
    int main() 
    { 
        cout << funStruct<8>::val << endl; 
        return 0; 
    } 

Expected Output
---------------

    256

Solution
--------

    #include <iostream> 
    using namespace std; 
      
    template<int n> struct funStruct 
    { 
        enum { val = 2*funStruct<n-1>::val }; 
    }; 
      
    template<> struct funStruct<0> 
    { 
        enum { val = 1 }; 
    }; 
      
    int main() 
    { 
        cout << funStruct<8>::val << endl; 
        return 0; 
    } 
