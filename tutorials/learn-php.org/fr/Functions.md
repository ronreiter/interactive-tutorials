Tutorial
--------

Les fonctions sont de simples blocs de code que nous pouvons appeler
de n'importe où. Par exemple, on peut créer une fonction qui fait la
somme d'une liste de nombres et renvoie le résultat. Appelons cette
fonction `sum`.

Il y a deux types de fonctions - les fonctions de la bibliothèque et
les fonctions des utilisateurs. Les fonctions de la bibliothèque,
comme `array_push` font partie de la bibliothèque PHP et peuvent être
utilisées par n'importe qui. Par contre, vous pouvez utiliser vos
propres fonctions et les utiliser à travers votre code.

Une fonction reçoit une liste d'arguments séparés par des
virgules. Tout argument existe seulement dans le contexte d'une
fonction, ce qui signifie qu'ils deviennent des variables à
l'intérieur du bloc de la fonction, mais ne sont pas définies en
dehors de ce bloc de fonction.

    // definit une fonction appelée `sum` qui
    // recevra une liste de nombres comme argument
    function sum($numbers) {
        // initialiser la variable qu'on renverra
        $sum = 0;

        // additionner les nombres
        foreach ($numbers as $number) {
            $sum += $number;
        }

        // renvoyer la somme à l'utilisateur
        return $sum;
    }

    // Exemple d'utilisation de sum
    echo sum([1,2,3,4,5,6,7,8,9,10]);

Après avoir défini des fonctions, vous pourriez charger d'autres
fichiers PHP dans vos fichiers, donc vous pourriez définir toutes vos
fonctions dans un fichier, et les charger pour un autre
fichier. Disons que nous avons défini la fonction `sum` à l'intérieur
d'un fichier appelé `sum.php`. Nous pouvons maintenant créer un autre
fichier, disons `index.php` et utiliser la fonction `sum` en incluant
`sum.php` comme ceci :

    include("sum.php");

    // Exemple d'utilisation de sum
    echo sum([1,2,3,4,5,6,7,8,9,10]);

(Ce code ne marchera pas parce qu'il n'y a pas de modules définis dans
l'environnement PHP).

Exercise
--------

Créez une fonction `squared_sum` qui renvoit la somme de chaque entier
dans un tableau, mis au carré.

Tutorial Code
-------------

<?php
// Écrivez la fonction squared_sum ici

echo squared_sum([56, 65, 26, 86, 66, 34, 78, 74, 67, 18, 34, 73, 45, 67, 75, 10, 60, 80, 74, 16, 86, 34, 12, 23, 42, 72, 36, 3, 73, 9, 92, 81, 94, 54, 97, 74, 45, 55, 70, 94, 96, 81, 86, 86, 84, 4, 32, 8, 96, 86, 87, 18, 84, 87, 59, 48, 32, 90, 17, 22, 82, 79, 66, 28, 17, 14, 80, 83, 66, 36, 21, 89, 68, 2, 51, 65, 20, 87, 48, 5, 1, 16, 60, 53, 84, 90, 16, 2, 37, 73, 57, 70, 57, 69, 68, 1, 24, 40, 72, 97]);

?>

Expected Output
---------------

382629

Solution
--------

<?php
// Écrivez la fonction squared_sum ici
function squared_sum($numbers) {
    // initialiser la variable qu'on renverra
    $sum = 0;

    // additionner les nombres
    foreach ($numbers as $number) {
        $sum += $number * $number;
    }

    // renvoie la somme à l'utilisateur
    return $sum;
}

echo squared_sum([56, 65, 26, 86, 66, 34, 78, 74, 67, 18, 34, 73, 45, 67, 75, 10, 60, 80, 74, 16, 86, 34, 12, 23, 42, 72, 36, 3, 73, 9, 92, 81, 94, 54, 97, 74, 45, 55, 70, 94, 96, 81, 86, 86, 84, 4, 32, 8, 96, 86, 87, 18, 84, 87, 59, 48, 32, 90, 17, 22, 82, 79, 66, 28, 17, 14, 80, 83, 66, 36, 21, 89, 68, 2, 51, 65, 20, 87, 48, 5, 1, 16, 60, 53, 84, 90, 16, 2, 37, 73, 57, 70, 57, 69, 68, 1, 24, 40, 72, 97]);

?>

