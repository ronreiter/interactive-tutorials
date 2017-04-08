Tutorial
--------

Arrays are a special type of variable that can contain many variables, and hold them in a list.

For example, let's say we want to create a list of all the odd numbers between 1 and 10. Once
we create the list, we can assign new variables that will refer to a variable in the array,
using the index of the variable.

To use the first variable in the list (in this case the number 1), we will need to give the
first index, which is 0, since PHP uses zero based indices, like almost all programming
languages today.

    $odd_numbers = [1,3,5,7,9];
    $first_odd_number = $odd_numbers[0];
    $second_odd_number = $odd_numbers[1];

    echo "The first odd number is $first_odd_number\n";
    echo "The second odd number is $second_odd_number\n";

We can now add new variables using an index. To add an item to the end of the list, we can assign
the array with index 5 (the 6th variable):

    $odd_numbers = [1,3,5,7,9];
    $odd_numbers[5] = 11;
    print_r($odd_numbers);

Arrays can contain different types of variables according to your needs, and can even contain
other arrays or objects as members.

To delete an item from an array, use the `unset` function on the member itself. For example:

    $odd_numbers = [1,3,5,7,9];
    unset($odd_numbers[2]); // will remove the 3rd item (5) from the list
    print_r($odd_numbers);

### Useful functions

The `count` function returns the number of members an array has.

    $odd_numbers = [1,3,5,7,9];
    echo count($odd_numbers);

The `reset` function gets the first member of the array. (It also resets the internal iteration pointer).

    $odd_numbers = [1,3,5,7,9];
    $first_item = reset($odd_numbers);
    echo $first_item;

We can also use the index syntax to get the first member of the array, as follows:

    $odd_numbers = [1,3,5,7,9];
    $first_item = $odd_numbers[0];
    echo $first_item;

The `end` function gets the last member of the array.

    $odd_numbers = [1,3,5,7,9];
    $last_item = end($odd_numbers);
    echo $last_item;

We can also use the `count` function to get the number of elements in the list, and then
use it to refer to the last variable in the array. Note that we subtract one from the
last index because indices are zero based in PHP, so we need to fix the fact that
we don't count variable number zero.

    $odd_numbers = [1,3,5,7,9];
    $last_index = count($odd_numbers) - 1;
    $last_item = $odd_numbers[$last_index];
    echo $last_item;

### Stack and queue functions

Arrays can be used as stacks and queues as well.

To push a member to the end of an array, use the `array_push` function:

    $numbers = [1,2,3];
    array_push($numbers, 4); // now array is [1,2,3,4];

    // print the new array
    print_r($numbers);

To pop a member from the end of an array, use the `array_pop` function:

    $numbers = [1,2,3,4];
    array_pop($numbers); // now array is [1,2,3];

    // print the new array
    print_r($numbers);

To push a member to the beginning of an array, use the `array_unshift` function:

    $numbers = [1,2,3];
    array_unshift($numbers, 0); // now array is [0,1,2,3];

    // print the new array
    print_r($numbers);

To pop a member from the beginning of an array, use the `array_shift` function:

    $numbers = [0,1,2,3];
    array_shift($numbers); // now array is [1,2,3];

    // print the new array
    print_r($numbers);

### Concatenating arrays

We can use the `array_merge` to concatenate between two arrays:

    $odd_numbers = [1,3,5,7,9];
    $even_numbers = [2,4,6,8,10];
    $all_numbers = array_merge($odd_numbers, $even_numbers);
    print_r($all_numbers);

### Sorting arrays

We can use the `sort` function to sort arrays. The `rsort` function sorts arrays in reverse.
Notice that sorting is done on the input array and does not return a new array.

    $numbers = [4,2,3,1,5];
    sort($numbers);
    print_r($numbers);

### Advanced array functions

The `array_slice` function returns a new array that contains a certain part of a specific array from an offset.
For example, if we want to discard the first 3 elements of an array, we can do the following:

    $numbers = [1,2,3,4,5,6];
    print_r(array_slice($numbers, 3));

We can also decide to take a slice of a specific length. For example, if we want to take only two items, we can
add another argument to the function:

    $numbers = [1,2,3,4,5,6];
    print_r(array_slice($numbers, 3, 2));

The `array_splice` function does exactly the same, however it will also **remove** the slice returned from the
original array (in this case, the `numbers` variable).

    $numbers = [1,2,3,4,5,6];
    print_r(array_splice($numbers, 3, 2));
    print_r($numbers);

Exercise
--------

1. Create a new array which contains the even numbers 2,4,6,8 and 10. The name of the new array should be `$even_numbers`.
2. Concatenate the `male_names` and `female_names` arrays to create the `names` array.

Tutorial Code
-------------

<?php

// TODO: add the even_numbers array here

$male_names = ["Jake", "Eric", "John"];
$female_names = ["Jessica", "Beth", "Sandra"];

// TODO: join the male and female names to one array
$names = NULL;

print_r($even_numbers);
print_r($names);

?>

Expected Output
---------------

Array
(
    [0] => 2
    [1] => 4
    [2] => 6
    [3] => 8
    [4] => 10
)
Array
(
    [0] => Jake
    [1] => Eric
    [2] => John
    [3] => Jessica
    [4] => Beth
    [5] => Sandra
)

Solution
--------

<?php

// TODO: add the even_numbers array here
$even_numbers = [2,4,6,8,10];

$male_names = ["Jake", "Eric", "John"];
$female_names = ["Jessica", "Beth", "Sandra"];

// TODO: join the male and female names to one array
$names = array_merge($male_names, $female_names);

print_r($even_numbers);
print_r($names);

?>
