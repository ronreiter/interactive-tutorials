Tutorial
--------

Continuons sur le thème des tableaux. Il existe un autre genre de tableaux - les tableaux multidimensionnels.
Ce type de tableau peut contenir un autre tableau comme valeur pour un indice donné :

    $multiArray = [ 
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9],
    ];

Ainsi, si on affiche la valeur pour l'indice `0`, ce sera un tableau :

    print_r($multiArray[0])

    // Array
    // (
    //     [0] => 1
    //     [1] => 2
    //     [2] => 3
    // )

de façon à ce qu'on puisse récupérer la valeur pour n'importe quel indice dans le tableau interne, qui sera ainsi un nombre :

    print_r($multiArray[0][0]) // 1
    print_r($multiArray[0][1]) // 2
    print_r($multiArray[0][2]) // 3

On peut aussi créer un tableau associatif multidimensionnel :

    $personnes = [
        "john_doe" => [
            "prenom" => "John",
            "nom" => "Doe",
            "age" => 25,
        ],
        "jane_doe" => [
            "prenom" => "Jane",
            "nom" => "Doe",
            "age" => 25,
        ]
    ];
    
    print_r($personnes);
    
    // Array
    // (
    //     [john_doe] => Array
    //         (
    //             [prenom] => John
    //             [nom] => Doe
    //             [age] => 25
    //         )
    //     [jane_doe] => Array
    //         (
    //             [prenom] => Jane
    //             [nom] => Doe
    //             [age] => 25
    //         )
    // )
    
    print_r($personnes['john_doe']['prenom']); // John

Tutoriel par [**Temuri Takalandze**](https://github.com/ABGEO/)

Exercise
--------

Complétez le code ci-dessous pour faire la somme de tous les nombres dans tous les tableaux internes et affichez le résultat sur une nouvelle ligne.

Tutorial Code
-------------

<?php

$matrice = [ 
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
];

foreach ($matrice as $nombres) {
    $somme = 0;

    // TODO: Ecrivez votre propre code ici.

    echo "{$somme}\n";
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

$matrice = [ 
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
];

foreach ($matrice as $nombres) {
    $somme = 0;

    foreach ($nombres as $nombre) {
        $somme += $nombre;
    }

    echo "{$somme}\n";
}

?>
