Tutorial
--------

Arrays are a special type of variable that can contain many variables, and hold them in a list.

For example, let's say we want to create a list of all the odd numbers between 1 and 10. Once
we create the list, we can assign new variables that will refer to a variable in the array,
using the index of the variable.

To use the first variable in the list (in this case the number 1), we will need to give the
first index, which is 0, since PHP uses zero based indices, like almost all programming
languages today.

    <?php
    $odd_numbers = [1,3,5,7,9];
    $first_odd_number = $odd_numbers[0];
    $second_odd_number = $odd_numbers[1];

    echo "The first odd number is $first_odd_number\n";
    echo "The second odd number is $second_odd_number\n";

    ?>

We can now add new variables using an index. To add an item to the end of the list, we can assign
the array with index 5 (the 6th variable):

    <?php
    $odd_numbers = [1,3,5,7,9];
    $odd_numbers[5] = 11;
    ?>

Arrays can contain different types of variables according to your needs, and can even contain
other arrays or objects as members.

### Useful functions

The `reset` function gets the first member of the array. (It also resets the internal iteration pointer).

    <?php
    $odd_numbers = [1,3,5,7,9];
    $first_item = reset($odd_numbers);
    ?>

The `end` function gets the last member of the array.

    <?php
    $odd_numbers = [1,3,5,7,9];
    $last_item = end($odd_numbers);
    ?>

### Stack and queue functions

Arrays can be used as stacks and queues as well.

To push a member to the end of an array, use the `array_push` function:

    <?php
    $numbers = [1,2,3];
    array_push($numbers, 4); // now array is [1,2,3,4];

    // print the new array
    print_r($numbers);
    ?>

To pop a member from the beginning of an array, use the `array_pop` function:

    <?php
    $numbers = [1,2,3,4];
    array_pop($numbers); // now array is [1,2,3];

    // print the new array
    print_r($numbers);
    ?>

To push a member to the beginning of an array, use the `array_unshift` function:

    <?php
    $numbers = [1,2,3];
    array_unshift($numbers, 0); // now array is [0,1,2,3];

    // print the new array
    print_r($numbers);
    ?>

To pop a member from the beginning of an array, use the `array_shift` function:

    <?php
    $numbers = [0,1,2,3];
    array_shift($numbers); // now array is [1,2,3];

    // print the new array
    print_r($numbers);
    ?>

### Exercise

Print "Hello, World!" to the console.

Tutorial Code
-------------


Expected Output
---------------

	Hello, World!
