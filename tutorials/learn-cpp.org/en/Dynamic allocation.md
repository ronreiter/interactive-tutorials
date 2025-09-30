Tutorial
--------

Memory dynamic allocation is a crucial topic in C. It enables the creation of complicated data structures such as linked lists. Allocating memory dynamically allows us to store data without knowing the size of the data at the time the program was written.

To dynamically allocate memory, we must have a pointer ready to store the location of the freshly allocated memory. We can use that same address to access the memory that has been allocated to us, and we can use that same pointer to release the memory once we have finished using it.

Assume we wish to allocate an animal structure dynamically. The animal is defined as follows:

    typedef struct animal{
        char const * name;
        int type;
    } ani;

In the code above, `animal` is the name of the struct and `ani` is the nickname. Later you can call the struct by its real name or nickname.
We use the following syntax to allocate a new animal in the `mypet` argument: 

    animal * mypet= (animal *) malloc(sizeof(animal));

This instructs the compiler that we want to allocate just enough memory to store an animal struct and then return a reference of type `animal` to the freshly allocated data. The memory allocation function `malloc()` reserves the memory space supplied. This is the size of an `animal` in bytes in this example.

 We write `(animal *)` before the call to `malloc()` because `malloc()` produces a "void pointer," which is a pointer with no type. The addition of `(animal *)` before it is known as *typecasting*, and it converts the type of the pointer returned by `malloc()` to `animal`. It is technically required to express it this way since if you don't typecast it, C++ won't transform the type of the returned pointer to that of the pointer it is given to (in this case, `mypet`).
 
 It should be noted that `sizeof` is not a function since the compiler interprets it and converts it to the actual memory size of the person struct.

We may use the `->` notation to access the animal`s members:

    mypet->name = "Mongmongi";
    mypet->type = 2;

When we're through with the dynamically allocated struct, we can free it using `free`:

    free(mypet);

 It should be noted that the free function does not remove the `mypet` variable itself; rather, it only releases the data that it references. The `mypet` variable will still point to a location in memory, but after calling `free,` we are no longer permitted to access that location. That pointer must not be used again until we allocate fresh data with it.
 
Exercise
--------

Use `malloc` to dynamically allocate an animal structure.

Tutorial Code
-------------

	#include <iostream>

	using namespace std;

	typedef struct student {
		char const *name;
		int age;
	} stud;

	int main()
	{
		
		/* Dynamically allocate a new student
         struct which mystudent points to here */
		mystudent->name ="Alice";
		mystudent->age = 24;
		
		cout << "My student`s name is " << mystudent->name << endl;
		free(mystudent);

		return 0;
	}

Expected Output
---------------

    My student`s name is Alice

Solution
--------

    #include <iostream>

	using namespace std;

	typedef struct student {
		char const *name;
		int age;
	} stud;

	int main()
	{
		student * mystudent = (student *) malloc(sizeof(student));
		
		mystudent->name ="Alice";
		mystudent->age = 24;
		
		cout << "My student`s name is " << mystudent->name << endl;
		free(mystudent);

		return 0;
	}
