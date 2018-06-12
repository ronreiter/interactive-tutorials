Tutorial
--------

Les tableaux PHP sont en réalité des dictionnaires, ce qui signifie
que toutes les valeurs des tableaux ont des clés, et les éléments à
l'intérieur des tableaux conservent l'ordre. Quand on utilise les
tableaux comme de simples listes comme nous l'avons vu dans le
chapitre précédent, un compteur qui démarre à zéro est utilisé pour
définir les clés. Chaque élément qui est ajouté au tableau incrémente
alors l'index suivant de 1.

Un bon exemple d'utilisation des tableaux avec des clés est un
répertoire téléphonique. Disons que nous voulons stocker les
numéros de téléphone des gens dans une classe.

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    print_r($phone_numbers);
    echo "Le numéro de téléphone d'Alex est " . $phone_numbers["Alex"] . "\n";
    echo "Le numéro de téléphone de Jessica est " . $phone_numbers["Jessica"] . "\n";

Pour ajouter un élément dans un tableau en utilisant une clé, nous
utilisons l'opérateur des crochets, comme vous vous y attendez.

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    $phone_numbers["Michael"] = "415-955-3857";

    print_r($phone_numbers);

Pour vérifier si une clé existe dans un tableau, on peut utiliser la
fonction `array_key_exists` :

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    if (array_key_exists("Alex", $phone_numbers)) {
        echo "Le numéro de téléphone d'Alex est " . $phone_numbers["Alex"] . "\n";
    } else {
        echo "Le numéro de téléphone d'Alex n'est pas dans le répertoire !";
    }

    if (array_key_exists("Michael", $phone_numbers)) {
        echo "Le numéro de téléphone de Michael est " . $phone_numbers["Michael"] . "\n";
    } else {
        echo "Le numéro de téléphone de Michael n'est pas dans le répertoire !";
    }

Si on veut extraire seulement les clés du tableau (les noms), nous
pouvons utiliser la fonction `array_keys`.

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    print_r(array_keys($phone_numbers));

Ou bien, pour obtenir seulement les valeurs d'un tableau (les numéros
de téléphone), on peut utiliser la fonction `array_values`.

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    print_r(array_values($phone_numbers));

Exercise
--------

Ajoutez un numéro au répertoire pour Éric, avec le numéro
415-874-7659, soit en l'ajoutant à la définition du tableau, soit
comme ligne de code à part.

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
    [Éric] => 415-874-7659
)

Solution
--------

<?php
$phone_numbers = [
  "Alex" => "415-235-8573",
  "Jessica" => "415-492-4856",
];

$phone_numbers["Éric"] = "415-874-7659";

print_r($phone_numbers);
?>


