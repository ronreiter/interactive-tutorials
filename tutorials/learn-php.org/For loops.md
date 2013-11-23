Tutorial
--------

For loops are simple loops which helps us iterate over an iterable variable by using an index.
There are two types of for loops - a simple (C style) for loop, and a foreach loop.

### For loop

For loops are very useful when we need to iterate over an array and refer to member of the array
using a changing index. For example, let's say we have a list of odd numbers. To print them
out, we need to refer to each item individually. The code we write in the for loop can use
the index `i`, which changes in every iteration of the for loop.

    $odd_numbers = [1,3,5,7,9];
    for ($i = 0; $i < count($odd_numbers); $i=$i+1) {
        $odd_number = $odd_numbers[$i];
        echo $odd_number . "\n";
    }

The first line of the for loop defines 3 parts:

* The initialization statement - in our case, we initialize the iterator variable `$i` to 0.
* The condition statement - this statement gets evaluated in every loop. The loop stops when
this condition is unmet. This will happen when the iterator variable `$i` will be larger
than the length of the array.
* The increment statement - this statement is executed every iteration to increase the index
variable by the needed amount. Usually, we will increase `$i` by 1. There are two shorter
ways of increasing a variable by 1 as well. We can use `$i+=1` or `$i++` as well.



### Foreach loop

The foreach loop iterates over an iterable element such as an array or an object, providing
the members in a specific variable one at a time.

For example, let's say we want to create a list of all the odd numbers between 1 and 10, and print
them out one by one, like in the previous example. This time, we will be using the `foreach`
statement instead of a regular `for` loop wih an iterator variable. Instead of using the iterator
variable as an index to the array, we get the item from the array directly into the `$odd_number`
variable.

    $odd_numbers = [1,3,5,7,9];
    foreach ($odd_numbers as $odd_number) {
      echo $odd_number . "\n";
    }

When iterating over arrays with keys, we can use the following syntax:

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    foreach ($phone_numbers as $name => $number) {
      echo "$name's number is $number.\n";
    }

Exercise
--------

Print out all numbers inside the array, one by one,
using the `\n` newline character sequence to separate between results.

Tutorial Code
-------------

<?php
$even_numbers = [2,4,6,8,10,12,14,16,18,20];

?>

Expected Output
---------------

2
4
6
8
10
12
14
16
18
20

Solution
--------

<?php
$even_numbers = [2,4,6,8,10,12,14,16,18,20];
foreach ($even_numbers as $even_number) {
  echo $even_number . "\n";
}
?>
