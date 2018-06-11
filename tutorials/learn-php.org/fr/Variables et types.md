Tutorial
--------

Pour définir une variable, utilisez simplement la syntaxe suivante :

    $x = 1;
    $y = "foo";
    $z = True;

Nous avons juste défini une variable nommée `x` avec le nombre 1, une variable
nommée `y` avec la chaîne "foo" et une variable nommée `z` avec la
valeur booléenne True (vrai). Une fois qu'elles sont définies, on peut
les utiliser dans le code.

PHP a de nombreux types de variables, mais les types les plus basiques
pour les variables sont les entiers (nombres entiers), flottants
(nombres réels), chaînes et booléens.

PHP a aussi des tableaux et des objets que nous expliquerons dans
d'autres tutoriels.

Les variables peuvent aussi être mises à NULL, ce qui signifie que ces
variables existent, mais ne contiennent aucune valeur.

### Opérateurs

Nous pouvons utiliser des opérateurs d'arithmétique simple pour
ajouter, soustraire ou concaténer entre variables.

Nous pouvons aussi afficher des variables PHP en utilisant la commande
`echo` (vous pouvez l'essayer maintenant).

Par exemple, faisons l'addition de deux nombres, mettons le résultat
dans une nouvelle variable, et affichons ce résultat.

    $x = 1;
    $y = 2;
    $sum = $x + $y;
    echo $sum;       // afficher 3

### Formattage de chaîne

En PHP, comme en Perl, les chaînes avec double quotes peuvent
formatter des chaînes en utilisant des variables définies. Par exemple :

    $name = "Jacques";
    echo "Votre nom est $name";    // affiche Votre nom est Jacques

Exercise
--------

#### Partie 1


Définissez des variables `name` (nom) et `age` de façon à afficher une
ligne correspondant à la phrase suivante :

`Salut Jacques. Vous avez 20 ans.`

Remarquez que le code contient une séquence de caractère spécial à la
fin appelée retour à la ligne - `\n`. Cette séquence fera en sorte que
la prochaine ligne affichée le soit sur la ligne suivante. Pour le
développement Web, cela n'est pas important, puisque nous utiliserons
les balises HTML pour ce besoin.

#### Partie 2

Faites la somme de deux variables x et y et mettez le résultat dans la
variable sum.

Tutorial Code
-------------

<?php
// Partie 1: ajoutez les variables name et age.
echo "Salut $name. Vous avez $age.\n";

// Part 2: faites la somme des variables x et y
// et mettez le résultat dans la variable sum.
$x = 195793;
$y = 256836;
$sum = NULL;

echo "La somme de $x et $y est $sum."
?>

Expected Output
---------------

Salut Jacques. Vous avez 20 ans.
La somme de 195793 et 256836 est 452629.

Solution
--------

<?php
$name = "Jacques";
$age = 20;
echo "Salut $name. Vous avez $age ans.\n";

$x = 195793;
$y = 256836;
$sum = $x + $y;

echo "La somme de $x et $y est $sum."
?>
