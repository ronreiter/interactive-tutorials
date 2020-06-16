Tutorial
--------

Les tableaux sont un type de variable spécial qui peut contenir de
nombreuses variables, et les conserver dans une liste.

Par exemple, disons que nous souhaitons créer une liste de tous les
nombres impairs entre 1 et 10. Une fois que nous créons la liste, nous
pouvons affecter de nouvelles variables qui feront référence à une
variable dans le tableau, en utilisant l'index de la variable.

Pour utiliser la première variable dans la liste (dans ce cas le
numéro 1), nous devrons passer le premier index, qui est 0, puisque
PHP utilise des index basés depuis 0, comme quasiment tous les
langages de programmation aujourd'hui.

    $odd_numbers = [1,3,5,7,9];
    $first_odd_number = $odd_numbers[0];
    $second_odd_number = $odd_numbers[1];

    echo "Le premier nombre impair est $first_odd_number\n";
    echo "Le second nombre impair est $second_odd_number\n";

Nous pouvons maintenant ajouter de nouvelles variables en utilisant un
index. Pour ajouter un élément à la fin de la liste, nous pouvons
affecter dans le tableau à l'index 5 (la 6ème variable) :

    $odd_numbers = [1,3,5,7,9];
    $odd_numbers[5] = 11;
    print_r($odd_numbers);

Les tableaux peuvent contenir différents types de variables en
fonction de vos besoins, et peuvent même contenir d'autres tableaux ou
des objets comme membres.

Pour supprimer un élément d'un tableau, utilisez la fonction `unset`
sur le membre lui-même. Par exemple :

    $odd_numbers = [1,3,5,7,9];
    unset($odd_numbers[2]); // supprimera le 3ème élément (5) de la liste
    print_r($odd_numbers);

### Fonctions utiles

La fonction `count` (compte) renvoie le nombre de membres trouvés dans
un tableau.

    $odd_numbers = [1,3,5,7,9];
    echo count($odd_numbers);

La fonction `reset` récupère le premier élément d'un tableau. (Elle
réinitialise également le pointeur d'itération interne).

    $odd_numbers = [1,3,5,7,9];
    $first_item = reset($odd_numbers);
    echo $first_item;

On peut aussi utiliser la syntaxe d'index pour récupérer le premier
membre d'un tableau, comme celà :

    $odd_numbers = [1,3,5,7,9];
    $first_item = $odd_numbers[0];
    echo $first_item;

La fonction `end` récupère le dernier membre d'un tableau.

    $odd_numbers = [1,3,5,7,9];
    $last_item = end($odd_numbers);
    echo $last_item;

Nous pouvons aussi utiliser la fonction `count` pour obtenir le nombre
d'élémets dans la liste, et l'utiliser ensuite pour faire référence à
la dernière variable dans le tableau. Remarquez qu'on doit retrancher
un à la valeur de l'index terminal parceque les index commencent à
zéro en PHP, donc nous devons corriger le fait que nous ne comptons
pas la variable numéro zéro.

    $odd_numbers = [1,3,5,7,9];
    $last_index = count($odd_numbers) - 1;
    $last_item = $odd_numbers[$last_index];
    echo $last_item;

### Fonctions de pile et file

Les tableaux peuvent être utilisés comme des piles ou bien des files.

Pour ajouter un membre à la fin d'un tableau, utilisez la fonction `array_push` :

    $numbers = [1,2,3];
    array_push($numbers, 4); // maintenant le tableau est [1,2,3,4];

    // affiche le nouveau tableau
    print_r($numbers);

Pour retirer un membre de la fin d'un tableau, utilisez la fonction `array_pop` :

    $numbers = [1,2,3,4];
    array_pop($numbers); // maintenant le tableau est [1,2,3];

    // affiche le nouveau tableau
    print_r($numbers);

Pour ajouter un membre au début d'un tableau, utilisez la fonction
`array_unshift` :

    $numbers = [1,2,3];
    array_unshift($numbers, 0); // maintenant le tableau est [0,1,2,3];

    // affiche le nouveau tableau
    print_r($numbers);

Pour retirer un membre du début d'un tableau, utilisez la fonction `array_shift` :

    $numbers = [0,1,2,3];
    array_shift($numbers); // maintenant le tableau est [1,2,3];

    // affiche le nouveau tableau
    print_r($numbers);

### Concaténer des tableaux

Nous pouvons utiliser la fonction `array_merge` pour concaténer deux
tableaux :

    $odd_numbers = [1,3,5,7,9];
    $even_numbers = [2,4,6,8,10];
    $all_numbers = array_merge($odd_numbers, $even_numbers);
    print_r($all_numbers);

### Trier les tableaux

On peut utiliser la fonction `sort` pour trier les tableaux. La
fonction `rsort` trie les tableaux dans l'ordre inverse.
Remarquez que le tri est fait dans le tableau fourni et ne renvoie pas
un nouveau tableau.

    $numbers = [4,2,3,1,5];
    sort($numbers);
    print_r($numbers);

### Fonction de tableaux avancées

La fonction `array_slice` renvoie un nouveau tableau qui contient une
certaine partie d'un tableau spécifique à partir d'un décalage.
Par exemple, si on veut supprimer les 3 premiers éléments d'un
tableau, on peut faire ceci :

    $numbers = [1,2,3,4,5,6];
    print_r(array_slice($numbers, 3));

On peut aussi décider de récupérer une tranche d'une longueur
précise. Par exemple, si nous voulons prendre seulement deux éléments,
on peut ajouter un autre argument à la fonction :

    $numbers = [1,2,3,4,5,6];
    print_r(array_slice($numbers, 3, 2));

La fonction `array_splice` fait exactement la même chose, mais par
contre, elle va aussi **enlever** la tranche qu'elle renvoie du
contenu du tableau d'origine (dans ce cas, la variable `numbers`).

    $numbers = [1,2,3,4,5,6];
    print_r(array_splice($numbers, 3, 2));
    print_r($numbers);

Exercise
--------

1. Créez un nouveau tableau qui contient les nombres pairs 2,4,6,8
   et 10. Le nom du nouveau tableau devrait être `$even_numbers`.
2. Concaténez les tableaux `male_names` et `female_names` pour créer
   le tableau `names`.

Tutorial Code
-------------

<?php

// TODO: ajouter le tableau even_numbers ici

$male_names = ["Jacques", "Éric", "Jean"];
$female_names = ["Jessica", "Beth", "Sandra"];

// TODO: grouppez les noms masculins et féminins dans un seul tableau
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
    [0] => Jacques
    [1] => Éric
    [2] => Jean
    [3] => Jessica
    [4] => Beth
    [5] => Sandra
)

Solution
--------

<?php

// TODO: ajouter le tableau even_numbers ici
$even_numbers = [2,4,6,8,10];

$male_names = ["Jacques", "Éric", "Jean"];
$female_names = ["Jessica", "Beth", "Sandra"];

// TODO: grouppez les noms masculins et féminins dans un seul tableau
$names = array_merge($male_names, $female_names);

print_r($even_numbers);
print_r($names);

?>
