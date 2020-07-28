Tutorial
--------

Let's continue with the topic of arrays. There is another type of array - multidimensional array.
This type of array may contain another array as a value for a specific index:

    $multiArray = [ 
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9],
    ];

Now, if we print the value with the index `0`, it will be an array:

    print_r($multiArray[0])

    // Array
    // (
    //     [0] => 1
    //     [1] => 2
    //     [2] => 3
    // )

so that we can get the value from any index from the inner array, and that will be the number:

    print_r($multiArray[0][0]) // 1
    print_r($multiArray[0][1]) // 2
    print_r($multiArray[0][2]) // 3

We can also create an associative multidimensional array:

    $people = [
        "john_doe" => [
            "name" => "John",
            "surname" => "Doe",
            "age" => 25,
        ],
        "jane_doe" => [
            "name" => "Jane",
            "surname" => "Doe",
            "age" => 25,
        ]
    ];
    
    print_r($people);
    
    // Array
    // (
    //     [john_doe] => Array
    //         (
    //             [name] => John
    //             [surname] => Doe
    //             [age] => 25
    //         )
    //     [jane_doe] => Array
    //         (
    //             [name] => Jane
    //             [surname] => Doe
    //             [age] => 25
    //         )
    // )
    
    print_r($people['john_doe']['name']); // John

Tutorial By [**Temuri Takalandze**](https://github.com/ABGEO/)

Exercise
--------

Complete the code below to sum all the numbers in all inner arrays and print the result in a new line.

Tutorial Code
-------------

<?php

$matrix = [ 
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
];

foreach ($matrix as $numbers) {
    $sum = 0;

    // TODO: Write you'r code here.

    echo "{$sum}\n";
}

?>

Expected Output
---------------

6
15
24


Solution
--------

<?php

$matrix = [ 
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
];

foreach ($matrix as $numbers) {
    $sum = 0;

    foreach ($numbers as $number) {
        $sum += $number;
    }

    echo "{$sum}\n";
}

?>
