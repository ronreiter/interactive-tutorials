Tutorial
--------

If you are already familiar with the concept of pointers, this is for you to gain in-depth undertanding on how the memory allocation is happening at run time, which can be seen in the linked-list tutorial visit https://www.learn-cpp.org/en/Linked_lists

If not  checkout the Pointers Tutorial, visit https://www.learn-cpp.org/en/Pointers

## Memory 
All the memory that is required is determined before the program execution by defining the vairables needed before hand not after.
    
    #include<iostream>
    using namespace std;

    int main(){

    int value=10;//here value is the variable it of type integer which is of 4 bytes.

    cout<<value<<endl;

    return 0;
    }


But what if you needed to allocated memory that is unknown during the compile time,
like inserting nodes in linked list. what do you do? do you guess it. NO, (or) you set the memory size to a ridiculous amount. NO, that would be waste of memory.
<img src="/static/img/tutorials/learn-cpp.org/en/images/memory-segment-program.png" width="800">

The image above show how a program's memory is divided into segments and what each one does.

#### Code Segment (a.k.a. Text Segment)
What it contains:<br>The compiled machine instructions of your program (your functions, loops, etc.).<br>

Example: the actual binary code of main(), add(), etc.<br>
It contains the actual lines of code in it.

#### Static / Global Segment
This section is for variable that:<br>
Are declared outside function which are also called global variables,
Or decalred with the keyword static(inside or outside functions)

It's actually divided interally into :<br>
Initialized data segment(Data) where the variables withe initialzed values are stored here.
Uninitialized data segment(BSS) where the variables with no values are stored here

#### Heap Segment
This is where dynamic memory is allocated, the memory you manually allocate using new, mallco(),etc.<br>

It contains:
memory allocated at runtime such as arrays, object etc. are created during the program exection time or runtime.

#### Stack Segment
The stack is used for function calls (call frames), local variables, return addresses.<br>

A new stack frame is created every time a function is called and automatically destroyed when function returns.

## Dynamic memory allocation using new operator
In c++ the dynamic memory is allocated in the heap segment of the computer memory, which is internally given by the operating system(OS).

We know that the pointer holds the memory address of the same type variable.

    int *pointer;//this holds the address of the another variable whose datatype is int.

Now, the memory which is allocated on the heap segment which is done by the "new" keyword.

    pointer=new type;
    
    //here "type" is datatype

    int *pointer;
    pointer=new int; //here new returns a memory address from the heap to the pointer variable. 

    int *foo=new int[5]; //here the system dynamically allocated space 
    for five elements of type int and returns a pointer to the first element of the sequence.

    //here the foo stores the address of the first element of the sequence. example foo=0x1l23123.

<img src="/static/img/tutorials/learn-cpp.org/en/images/dynamic.png" width="800">

## Dereferencing

Dereferencing means accessing the actual value stored at a memory address that a pointer holds.

A pointer variable stores an address, not the value itself dereferencing tells the program:
<br>
<b>
“Go to the memory address inside this pointer and read or modify the value stored there.”
</b>


    cout<<*pointer<<endl; //this is dereferencing a pointer 
    //NOTE: we are not decalring the pointer here, we are dereferecing the pointer.

## Pointer Arithemtic

When you use a pointer in C++, it stores a memory address not the actual value.
But you can do arithmetic operations on that address to move around in memory.

## Example
#### Pointer Arithemtic


    #include<iostream>
    using namespace std;

    int main() {
    int arr[3] = {10, 20, 30};

    int* ptr = arr;   // points to arr[0]
    cout << "ptr points to: " << *ptr << endl; // 10

    ptr++;  // move to next int (4 bytes ahead in memory)
    cout << "After ptr++, points to: " << *ptr << endl; // 20

    ptr++;  
    cout << "After another ptr++, points to: " << *ptr << endl; 
    
    return 0;
    }
    

    results(may vary for you):
    arr[0] → 0x1000 : 10
    arr[1] → 0x1004 : 20
    arr[2] → 0x1008 : 30

## Dynamic memory allocation

    #inlcude<iostream>
    using namespace std;
    int main(){
    int value=100;
    int *pointer=new int;

    cout<<pointer<<endl; // this prints the address stored in the pointer.
    
    *pointer=100; //modifies the value at the pointer address.

    cout<<*pointer<<endl; // this print the value which is at that memory address.

    return 0; //we didn't freeded the memory yet read below for that topic.
    
    }

Try to run the above program to see the working of dynamic allocation of memory.


    #include <iostream>
    using namespace std;

    int main() {
    int* ptr = new int[3]; // dynamically allocates memory for 3 integers

    // Assign values using pointer arithmetic
    *ptr = 10;         // first element
    *(ptr + 1) = 20;   // second element
    *(ptr + 2) = 30;   // third element

    // Print values
    cout << *ptr << " " << *(ptr + 1) << " " << *(ptr + 2) << endl;

    delete[] ptr;  // free memory

    }


## Delete operator
The delete operator frees (deallocates) memory that was previously allocated using new.

When you allocate memory dynamically with new, it comes from the heap.
To release that memory (so the OS can reuse it), you must call delete.

If you don’t, your program causes a memory leak.

There are two forms of delete depending on how the memory was allocated:<br>
    
    delete pointer; //frees one item 

    //for single vairable/object deallocation

<br>

    delete[] pointer; //frees the whole array

    //for Array of variables/objects deallocation 


### Example
Deleting a single variable

    #include <iostream>
    using namespace std;

    int main() {
    // Step 1: Allocate memory dynamically
    int* ptr = new int;   // allocates memory for one int on the heap

    // Step 2: Store value
    *ptr = 50;

    cout << "Value: " << *ptr << endl;  // Output: 50
    cout << "Address: " << ptr << endl; // Heap memory address

    // Step 3: Free the allocated memory
    delete ptr;

    // Step 4: Avoid dangling pointer
    ptr = nullptr;

    cout << "Memory freed successfully!" << endl;

    return 0;

    }

Deleting a Dynamic Array

    #include <iostream>
    using namespace std;

    int main() {
    // Step 1: Allocate memory for an array of 3 integers
    int* arr = new int[3];

    // Step 2: Assign values
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // Step 3: Access using pointer arithmetic
    for (int i = 0; i < 3; i++) {
        cout << "arr[" << i << "] = " << *(arr + i) << endl;
    }

    // Step 4: Free the array
    delete[] arr;   // Notice the [] — must match with new[]

    arr = nullptr;  // Prevent dangling pointer

    return 0;

    }







