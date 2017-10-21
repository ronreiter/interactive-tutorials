Tutorial
--------

PHP arrays are actually ordered maps, meaning that all values of arrays have keys,
and the items inside the array preserve order. When using arrays as simple lists
as we have seen last chapter, a zero based counter is used to set the keys. Each item
which is added to the array increments the next index by 1.

A good example for using arrays with keys is a phone book. Let's say we want to
save the phone numbers of people in a class.

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    print_r($phone_numbers);
    echo "Alex's phone number is " . $phone_numbers["Alex"] . "\n";
    echo "Jessica's phone number is " . $phone_numbers["Jessica"] . "\n";

To add an item to an array using a key, we use the brackets operator, as you would expect.

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    $phone_numbers["Michael"] = "415-955-3857";

    print_r($phone_numbers);

To check if a key exists within an array, we can use the `array_key_exists` function:

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    if (array_key_exists("Alex", $phone_numbers)) {
        echo "Alex's phone number is " . $phone_numbers["Alex"] . "\n";
    } else {
        echo "Alex's phone number is not in the phone book!";
    }

    if (array_key_exists("Michael", $phone_numbers)) {
        echo "Michael's phone number is " . $phone_numbers["Michael"] . "\n";
    } else {
        echo "Michael's phone number is not in the phone book!";
    }

If we want to extract only the keys of the array (the names), we can use the `array_keys` function.

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    print_r(array_keys($phone_numbers));

Alternatively, to get only the values of an array (the phone numbers), we can use the `array_values` function.

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    print_r(array_values($phone_numbers));

Exercise
--------

Add a number to the phone book for Eric, with the number 415-874-7659,
either by adding it to the array definition, or as a separate code line.

Tutorial Code
-------------

<?php
$phone_numbers = [
  "Alex" => "415-235-8573",
  "Jessica" => "415-492-4856",
];

print_r($phone_numbers);
?>

Expected Output
---------------

Array
(
    [Alex] => 415-235-8573
    [Jessica] => 415-492-4856
    [Eric] => 415-874-7659
)

Solution
--------

<?php
$phone_numbers = [
  "Alex" => "415-235-8573",
  "Jessica" => "415-492-4856",
];

$phone_numbers["Eric"] = "415-874-7659";

print_r($phone_numbers);
?>


