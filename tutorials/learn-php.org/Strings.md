Tutorial
--------

Strings are variables that hold text. For example, a string which contains a name is defined as follows:

    <?php
    $name = "John";
    echo $name;
    ?>

We can easily format strings using variables. For example:

    <?php
    $name = "John";
    $introduction = "Hello $name";
    echo $introduction;
    ?>

We can also concatenate strings using the dot `.` operator. For example:

    <?php
    $first_name = "John";
    $last_name = "Doe";
    $name = $first_name . " " . $last_name;
    echo $name;
    ?>

To cut a part of a string and return it as a new string, we can use the `substr` function:

    <?php
    $filename = "image.png";
    $extension = substr($filename, 4)


### Joining and splitting

We can join arrays to form strings, or split strings to arrays of strings.

For example, to split a string with a list of fruits separated by a comma, we use the `str_split` function:

    <?php
    $fruits = "apple,banana,orange";
    $fruit_list = str_split($fruits, ",");
    echo "The second fruit in the list is $fruit_list[1]";
    ?>

To join back an array to a single string separated with commas, we use the `str_join` function:

    <?php
    $fruit_list = ["apple","banana","orange"];
    $fruits = str_join($fruit_list, ",");
    echo "The fruits are $fruits";
    ?>

Exercise
--------

Split string that contains the list of numbers into a new array called number_list.

Tutorial Code
-------------

<?php
$numbers = "38,42,58,48,33,59,87,17,20,8,98,14,62,66,14,62,97,66,74,78,66,2,79,29,72,6,3,71,46,68,48,4,12,52,66,48,14,39,63,69,81,61,21,77,10,44,39,82,19,77,100,98,53,95,30,17,30,96,68,47,81,52,82,11,13,83,10,14,49,96,27,73,42,76,71,15,81,36,77,38,17,2,29,100,26,86,22,18,38,64,82,51,39,7,88,53,82,30,98,86";

// TODO: split the $numbers variable to an array
// called $number_list

print_r($number_list);
?>

Expected Output
---------------

Hello, World!

Solution
--------

