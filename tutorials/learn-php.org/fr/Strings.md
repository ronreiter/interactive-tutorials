Tutorial
--------

Les chaînes sont des variables qui contiennent du texte. Par exemple,
une chaine qui contient un nom est définie comme suit :

    $name = "Jean";
    echo $name;

Nous pouvons facilement formatter des chaînes en utilisant des
variables. Par exemple :

    $name = "Jean";
    $introduction = "Salut $name";
    echo $introduction;

Nous pouvons aussi concaténer des chaînes en utilisant l'opérateur
point `.`. Par exemple :

    $first_name = "Jean";
    $last_name = "Bon";
    $name = $first_name . " " . $last_name;
    echo $name;

Pour mesurer la longueur d'une chaîne, on utilise la fonction `strlen` :

    $string = "La longueur de cette phrase est 43 lettres.";
    echo strlen($string);

Pour découper un morceau d'une chaîne et le renvoyer comme nouvelle
chaîne, nous pouvons utiliser la fonction `substr` :

    $filename = "image.png";
    $extension = substr($filename, strlen($filename) - 3);
    echo "L'extension du fichier est $extension";

### Coller et séparer

On peut coller des tableaux pour former des chaînes, ou séparer des
chaînes en tableaux de chaînes.

Par exemple, pour séparer une chaîne avec une liste de fruits séparés
par une virgule, on utilise la fonction `explode` :

    $fruits = "pomme,banane,orange";
    $fruit_list = explode(",", $fruits);
    echo "Le second fruit dans la liste est $fruit_list[1]";

Pour recoller un tableau en une seule chaîne séparée par des virgules,
on utilise la fonction `implode` :

    $fruit_list = ["pomme","banane","orange"];
    $fruits = implode(",", $fruit_list);
    echo "Les fruits sont $fruits";

Exercise
--------

Séparez la chaîne qui contient la liste des nombres en un nouveau
tableau appelé number_list.

Tutorial Code
-------------

<?php
$numbers = "38,42,58,48,33,59,87,17,20,8,98,14,62,66,14,62,97,66,74,78,66,2,79,29,72,6,3,71,46,68,48,4,12,52,66,48,14,39,63,69,81,61,21,77,10,44,39,82,19,77,100,98,53,95,30,17,30,96,68,47,81,52,82,11,13,83,10,14,49,96,27,73,42,76,71,15,81,36,77,38,17,2,29,100,26,86,22,18,38,64,82,51,39,7,88,53,82,30,98,86";

// TODO: séparer la variable $numbers en un tableau 
// appelé $number_list

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
