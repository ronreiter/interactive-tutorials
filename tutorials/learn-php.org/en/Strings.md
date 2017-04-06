Tutorial
--------

Strings are variables that hold text. For example, a string which contains a name is defined as follows:

    $name = "John";
    echo $name;

We can easily format strings using variables. For example:

    $name = "John";
    $introduction = "Hello $name";
    echo $introduction;

We can also concatenate strings using the dot `.` operator. For example:

    $first_name = "John";
    $last_name = "Doe";
    $name = $first_name . " " . $last_name;
    echo $name;

To measure the length of a string, we use the `strlen` function:

    $string = "The length of this string is 43 characters.";
    echo strlen($string);

To cut a part of a string and return it as a new string, we can use the `substr` function:

    $filename = "image.png";
    $extension = substr($filename, strlen($filename) - 3);
    echo "The extension of the file is $extension";

### Joining and splitting

We can join arrays to form strings, or split strings to arrays of strings.

For example, to split a string with a list of fruits separated by a comma, we use the `explode` function:

    $fruits = "apple,banana,orange";
    $fruit_list = explode(",", $fruits);
    echo "The second fruit in the list is $fruit_list[1]";

To join back an array to a single string separated with commas, we use the `implode` function:

    $fruit_list = ["apple","banana","orange"];
    $fruits = implode(",", $fruit_list);
    echo "The fruits are $fruits";

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

Array
(
    [0] => 38
    [1] => 42
    [2] => 58
    [3] => 48
    [4] => 33
    [5] => 59
    [6] => 87
    [7] => 17
    [8] => 20
    [9] => 8
    [10] => 98
    [11] => 14
    [12] => 62
    [13] => 66
    [14] => 14
    [15] => 62
    [16] => 97
    [17] => 66
    [18] => 74
    [19] => 78
    [20] => 66
    [21] => 2
    [22] => 79
    [23] => 29
    [24] => 72
    [25] => 6
    [26] => 3
    [27] => 71
    [28] => 46
    [29] => 68
    [30] => 48
    [31] => 4
    [32] => 12
    [33] => 52
    [34] => 66
    [35] => 48
    [36] => 14
    [37] => 39
    [38] => 63
    [39] => 69
    [40] => 81
    [41] => 61
    [42] => 21
    [43] => 77
    [44] => 10
    [45] => 44
    [46] => 39
    [47] => 82
    [48] => 19
    [49] => 77
    [50] => 100
    [51] => 98
    [52] => 53
    [53] => 95
    [54] => 30
    [55] => 17
    [56] => 30
    [57] => 96
    [58] => 68
    [59] => 47
    [60] => 81
    [61] => 52
    [62] => 82
    [63] => 11
    [64] => 13
    [65] => 83
    [66] => 10
    [67] => 14
    [68] => 49
    [69] => 96
    [70] => 27
    [71] => 73
    [72] => 42
    [73] => 76
    [74] => 71
    [75] => 15
    [76] => 81
    [77] => 36
    [78] => 77
    [79] => 38
    [80] => 17
    [81] => 2
    [82] => 29
    [83] => 100
    [84] => 26
    [85] => 86
    [86] => 22
    [87] => 18
    [88] => 38
    [89] => 64
    [90] => 82
    [91] => 51
    [92] => 39
    [93] => 7
    [94] => 88
    [95] => 53
    [96] => 82
    [97] => 30
    [98] => 98
    [99] => 86
)

Solution
--------

<?php
$numbers = "38,42,58,48,33,59,87,17,20,8,98,14,62,66,14,62,97,66,74,78,66,2,79,29,72,6,3,71,46,68,48,4,12,52,66,48,14,39,63,69,81,61,21,77,10,44,39,82,19,77,100,98,53,95,30,17,30,96,68,47,81,52,82,11,13,83,10,14,49,96,27,73,42,76,71,15,81,36,77,38,17,2,29,100,26,86,22,18,38,64,82,51,39,7,88,53,82,30,98,86";

$number_list = explode(",", $numbers);

print_r($number_list);
?>
