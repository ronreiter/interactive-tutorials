Tutorial
--------

Remeber pointers? We used to point to an array of chars then make a string out of them.
Then things got more intersting when we learned how to control these pointers.
Now it is time to do something even more intersting with pointers where we point them to functions then call these functions using a pointer.

### Why Pointing to a Function?

The first question that may come to your mind is why would we use pointers to call a function when we can simply call a function by its name: `function();` - that's a great questions! Now imagine the `sort` function where you need to sort an array. Sometimes you want to order array elements in an accending order or decending order. How would you choose? Function Pointers!


### Function Pointers Syntax

    void (*pf)(int);

I agree with you. This definetly is very, or so you may think. Let's re-read that code and try to understand it point by point. Read it inside-out. `*pf` is the pointer to a function. `void` is the return type of that function, and finally `int` is the argument type of that function. Got it? Good.

Let's insert pointers into the function pointer and try to read it again:

    char* (*pf)(int*)

again:
1. `*pf` is the function pointer.
2. `char*` is the return type of that function.
3. `int*` is the type of the argument.

Ok enough with theory. Let's get ours hands dirty with some real code.
See this example:

    #include <stdio.h>
    void someFunction(int arg)
    {
		printf("This is someFunction being called and arg is: %d\n", arg);
		printf("Whoops leaving the function now!\n");
    }

    main()
    {
		void (*pf)(int);
		pf = &someFunction;
		printf("We're about to call someFunction() using a pointer!\n");
		(pf)(5);
		printf("Wow that was cool. Back to main now!\n\n");
    }

Remeber `sort()` we talked about earlier? We can do the same with it.
Instead of ordering a set in an accending way we can do the opposite using our own comparison function as follow:

    #include <stdio.h>
	#include <stdlib.h> //for qsort()

    int compare(const void* left, const void* right)
    {
		return (*(int*)right - *(int*)left);
		// go back to ref if this seems complicated: http://www.cplusplus.com/reference/cstdlib/qsort/
    }
    main()
    {
		int (*cmp) (const void* , const void*);
		cmp = &compare;

		int iarray[] = {1,2,3,4,5,6,7,8,9};
		qsort(iarray, sizeof(iarray)/sizeof(*iarray), sizeof(*iarray), cmp);

		int c = 0;
		while (c < sizeof(iarray)/sizeof(*iarray))
		{
			printf("%d \t", iarray[c]);
			c++;
		}
    }

Let's remeber again. Why do we use function pointers?
1. To allow programmer to use libraries for different usages -> "Flexibility"


Exercise
--------
Complete the array of pointers to functions and call each function using its pointer from the array. Array of pointers to functions? Yes you can do that!

Tutorial Code
-------------

    #include <stdio.h>

    void f1(int var)
    {
            printf("this is f1 and var is: %d\n", var);
    }

    void f2(int var)
    {
            printf("this is f2 and var is: %d\n", var);
    }

    void f3(int var)
    {
            printf("this is f3 and var is: %d\n", var);
    }

    int main()
    {
		void (........) = {.......};

		int c = 0;
		while(c < 3)
		{
			.......
			++c;
		}

	  return 0;
    }


Expected Output
---------------

    this is f1 and var is: 0
    this is f2 and var is: 1
    this is f3 and var is: 2

Solution
--------

    #include <stdio.h>

    void f1(int var)
    {
            printf("this is f1 and var is: %d\n", var);
    }

    void f2(int var)
    {
            printf("this is f2 and var is: %d\n", var);
    }

    void f3(int var)
    {
            printf("this is f3 and var is: %d\n", var);
    }

    int main()
    {
		void (*pf[])(int) = {f1, f2, f3};

		int c = 0;
		while(c < 3)
		{
			pf[c](c);
			++c;
		}

		return 0;
    }
