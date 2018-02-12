Tutorial
--------
You previously learned what is a pointer and how to manipulate pointers. In this tutorial you will be learning the arithmetic operations on pointers.
There are multiple arithmetic operations that can be applied on C pointers: ++, --, -, +

### Incrementing a Pointer with (++)

Just like any variable the ++ operation increases the value of that variable. In our case here the variable is a pointer hence when we increase its value we are increasing the address in the memory that pointer points to. 
Let's combine this operation with an array in our example:

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] has value %d - and address @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[3]; //point to the 4th element in the array
	    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the address of the 4th element
	    
	    intpointer++; //now increase the pointer's address so it points to the 5th elemnt in the array
	    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the address of the 5th element
	    
	    return 0;
	}


### Decreasing a Pointer with (--)

Just like in our previous example we increased the pointer's pointed-to address by one using the ++ operator, we can decrease the address pointed-to by one using the decrement operator (--).

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] has value %d - and address @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[4]; //point to the 5th element in the array
	    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the address of the 5th element
	    
	    intpointer--; //now decrease the point's address so it points to the 4th element in the array
	    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the address of the 4th element
	    
	    return 0;
	}

### Adding Pointers with (+)
We previously increased a pointer's pointed-to address by one. We can also increase it by an integer value such:

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] has value: %d - and address @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[1]; //point to the 2nd element in the array
	    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the address of the 2nd element
	    
	    intpointer += 2; //now shift by two the point's address so it points to the 4th element in the array
	    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the addres of the 4th element
	    
	    return 0;
	}

Note how in the output the address shifted by 8 steps in the memory. You might be wondering why?
The answer is simple: Because our pointer is an int-pointer and the size of an int variable is 4 bytes the memory is shift-able by 4 blocks.
In our code we shifted by 2 (added +2) to the initial address so that makes them 2 x 4 byte = 8.

### Subtracting Pointers with (-)

Similarly we can subtract:

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] has value: %d - and address @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[4]; //point to the 5th element in the array
	    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the address of the 5th element
	    
	    intpointer -= 2; //now shift by two the point's address so it points to the 3rd element in the array
	    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the address of the 3rd element
	    
	    return 0;
	}

again the address is shifted by blocks of 4bytes (in case of int).

### Other Operations
There are more operations such as comparison >, <, ==. The idea is very similar of comparing variables, but in this case we are comparing memory address.

Exercise
--------
Copy last three addresses of intarray into parray which is an array of pointers to an int.

Tutorial Code
-------------
    #include <stdio.h>
	
    int main() {
    	int intarray[5] = {10,20,30,40,50};
        //-----------------------^
        int *pointer = &intarray[2];

        // Array of 3 pointers
        int *parray[3];

        // Copy last three addresses of intarray into parray
        // Use parray and pointer
        int i;
        for (i = 0; i < 3; i++) {
            // Insert code here
        }

        // Test code
        for (i = 0; i < 3; i++) {
            if (parray[i] == &pointer[i]) {
                printf("Matched!\n");
            } else {
                printf("Fail\n");
            }
        }

        return 0;
    }


Expected Output
---------------
    Matched!
    Matched!
    Matched!

Solution
--------
        #include <stdio.h>

        int main() {
            int intarray[5] = {10,20,30,40,50};
            //-----------------------^
            int *pointer = &intarray[2];

            int *parray[3];

            int i;
            for (i = 0; i < 3; i++) {
                parray[i] = pointer + i;
            }

            for (i = 0; i < 3; i++) {
                if (parray[i] == &pointer[i]) {
                    printf("Matched!\n");
                } else {
                    printf("Fail\n");
                }
            }

            return 0;
        }
      
      