Tutorial
--------

Dynamic allocation in C++ is the process of allocating memory at runtime (while the program is executing) instead of compile time (period where your code code is being translated into machine code).
This allows you to create data structure like arrays or object, whose size isnt known until the program needs them

You can dynamically allocate the memory using `new` keyword, and delete the piece of memory using the `delete` keyword. Lets look at some examples

    int n = 10;
    // allocation of memory on Stack

    int *ptr = new int {10};
    // dynamically allocation of memory on heap

The first example allocates `4 Byte` of memory on stack, the memory will automatically be freed up when the function or code block where they were declared finishes execution.
While the second example allocates `4 Byte` of memory on heap, we need to create a pointer that points to the memory allocated on the heap using the `new` keyword, the pointer itself lives on the stack and will be freed once the function or scope block containing it ends. However, the memory on the heap it pointed to is not automatically freed and must be deleted manually using the `delete` keyword.

Lets look at the examples and understand it more deeply

    #include <iostream>
    using namespace std;

    int main()
    {
        int *ptr = new int {10};
        /*
          the pointer ptr lives on stack and will be freed once the program reaches the end of scope,
          However the 4 byte on the heap, which contain the value 10, will not be automatically freed,
          Which will cause Memory Leak
        */

        delete ptr;
        // this deallocates the memory on the heap that ptr was pointing to
        ptr = nullptr;

        return 0;
    }

### Dangling pointer

This line `ptr = nullptr;` prevents a dangling pointer, which is pointer that points to deallocated memory. Setting it to `nullptr` makes it safe to check and ensure that you don't accidentally delete the same memory twice or try to modify or dereference it.

Lets look at how this can be dangerous

    int *ptr_char = new char {'A'};
    delete ptr_char;
    // the pointer ptr still holds the memory address even though the memory is freed.

    cout << *ptr_char << endl;
    // trying to dereference the pointer that no longer belongs to the program
    // Program may crash or show garbage

    *ptr_char = 'B';
    // trying to assign to memory that no longer belongs to program and may crash the program

### Dynamically allocating arrays

So far we have seen how we can allocate memory on the heap using dynamic allocation, now lets look how we can allocate contiguous piece of memory like an array

    int size_arr = 10;

    int *ptr_int_arr = new int[size_arr];
    double *ptr_double_arr = new double[size_arr];
    // size_arr specify the size (number of elements) that needs to be stored

    delete ptr_int_arr[];
    delete ptr_double_arr[];
    // use [] after the name of pointer

The size `size_arr` is necessary when dynamically allocating, the expression `new int[size_arr]` calcualtes the total byte needed (`arr_size * sizeof(int)`), and reserve that exact block, without `arr_size` the calculation is not possible.
The `new` operator returns a pointer pointing to the first element of array.
When deallocating the memory using `delete`, the runtime system needs to know original size of array that was allocated so it can correctly free the entire block of memory, it relies on the size being provided during the initial `new` call.

Exercise
--------

Write a program that performs the following steps
1. Prompt the user to enter the number of days to track
2. dynamically allocate an array of `double` on heap to store the rainfall for that number of days
3. Use a loop to prompt user to input the rainfall amount for each day
4. Calculate the total rainfall for the tracked period
5. Correctly release the memory before program ends and set it to `nullptr`

Tutorial Code
-------------

    #include <iostream>
    using namespace std;

    int main()
    {
        int numDays{};
        double totalRainfall{};

        // prompt the user to enter numDays

        double *dailyRain;
        // allocate the array dynamically using numDays

        for (size_t i = 0; i < numDays; i++)
        {
            double rainfall;
            cout << "Enter rainfall (mm) for Day " << (i + 1) << ": ";

            //assign the prompted rainfall to array
            //add the rainfall to totalRainfall
        }

        cout << "The Total Rainfall for " << numDays << " days : " << totalRainfall <<"mm";
        //release the memory

        return 0;
    }

Expected Output
---------------

    The Total Rainfall for 7 days : 453.87mm

Solution
--------

    #include <iostream>
    using namespace std;

    int main()
    {
        int numDays{};
        double totalRainfall{};

        cin >> numDays;
        double *dailyRain = new double{numDays};

        for (size_t i = 0; i < numDays; i++)
        {
            double rainfall;
            cout << "Enter rainfall (mm) for Day " << (i + 1) << ": ";
            cin >> rainfall;
            
            dailyRain[i] = rainfall;
            totalRainfall += dailyRain[i];
        }

        cout << "The Total Rainfall for " << numDays << " days : " << totalRainfall <<"mm";
        
        delete[] dailyRain;
        dailyRain = nullptr;

        return 0;
    }