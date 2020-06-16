Tutorial
--------

Les boucles for sont de simples boucles qui nous permettent d'itérer
sur une variable itérable en utilisant un index.
Il y a deux types de boucles for - une simple boucle for (style C), et
une boucle foreach.

### Boucle for

Les boudles for sont très utiles quand on a besoin d'itérer sur un
tableau et de faire référence aux membres du tableau en utilisant un
index mobile. Par exemple, disons qu'on a une liste de nombres
impairs. Pour les imprimer, on doit faire référence à chaque élément
individuellement. Le code qu'on écrit dans la boucle for peut utiliser
l'index `i`, qui change à chaque itération de la boucle.

    $odd_numbers = [1,3,5,7,9];
    for ($i = 0; $i < count($odd_numbers); $i=$i+1) {
        $odd_number = $odd_numbers[$i];
        echo $odd_number . "\n";
    }

La première ligne de la boucle for définit 3 parties:

* l'instruction d'initialisation - dans notre cas, on initialise la
  variable itérateur `$i` à 0.
* l'instruction de condition - cette instruction est évaluée à chaque
  boucle. La boucle s'arrête quand la condition n'est plus
  remplie. Cela se produit quand la variable itérateur `$i` sera plus
  grande que la longueur du tableau.
* l'instruction d'incrémentation - cette instruction est exécutée à
  chaque itération pour incrémenter l'index de la variable du montant
  voulu. D'habitude, on incrémentera `$i` de 1. Il y a aussi deux variantes
  plus courtes pour incrémenter une variable de 1. On peut utiliser
  `$i+=1` ou aussi `$i++`.

### Boucle foreach

La boucle foreach itére sur un élément itérable tel qu'un tableau ou
un objet, en fournissant les membres un par un à une variable spécifique.

Par exemple, disons que nous souhaitons créer une liste de tous les
nombres impairs entre 1 et 10, et les afficher un par un, comme dans
l'exemple précédent. Cette fois, nous allons utiliser l'instruction
`foreach` au lieu d'une instruction `for` classique avec une variale
itérateur. Au lieu d'utiliser la variable itérateur comme un index du
tableau, on récupère l'élément depuis le tableau directement dans la
variable `$odd_number`.

    $odd_numbers = [1,3,5,7,9];
    foreach ($odd_numbers as $odd_number) {
      echo $odd_number . "\n";
    }

Quand on itére parmi des tableaux à clés, on peut utiliser la syntaxe
suivante :

    $phone_numbers = [
      "Alex" => "415-235-8573",
      "Jessica" => "415-492-4856",
    ];

    foreach ($phone_numbers as $name => $number) {
      echo "le numéro de $name est $number.\n";
    }

Exercise
--------

Affichez tous les numéros présents dans le tableau, un par un, en
utilisant la séquence de caractères de fin de ligne `\n` pour séparer
les résultats.

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
