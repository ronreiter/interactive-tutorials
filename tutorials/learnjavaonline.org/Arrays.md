Tutorial
--------

Arrays in Java are also objects. They need to be declared and then created.
In order to declare a variable that will hold an array of integers, we use the following syntax:

    int[] arr;

Notice there is no size, since we didn't create the array yet.

    arr = new int[10];

This will create a new array with the size of 10. We can check the size by printing the array's length:

    System.out.println(arr.length);

We can access the array:

    arr[0] = 4;
    arr[1] = arr[0] + 5;

We can also create an array with values in the same line:

    int[] arr = {1, 2, 3, 4, 5};

Don't try to print the array without a loop, it will print something nasty like [I@f7e6a96.

Exercise
--------

Change the values in numbers so it will not raise an error.

Tutorial Code
-------------

public class Main {
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3};
        int length = numbers[3];
        char[] chars = new char[length];
        chars[numbers.length + 4] = 'y';
        System.out.println("Done!");
    }
}

Expected Output
---------------

Done!

Solution
--------