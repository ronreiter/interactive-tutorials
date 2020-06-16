Tutorial
--------

Les boucles while sont de simples blocs qui s'exécutent de façon
répétée jusqu'à ce que la condition de la boucle while ne soit plus remplie.

Voici un exemple de boucle qui est exécutée au total 10 fois :

    $counter = 0;

    while ($counter < 10) {
        $counter += 1;
        echo "Execution - counter vaut $counter.\n";
    }

La différence principale entre les boucles for et les boucles while
est que les boucles for sont utilisées pour itérer sur un tableau ou
un objet, et les boucles while s'exécuteront un nombre de fois
inconnue, qui dépend de consitions variables (par exemple, jusqu'à ce
qu'un utilisateur ait saisi une entrée correcte).

### Instructions de contrôle

Les boucles peuvent être contrôlées en utilisant les instructions de
contrôle de flot `break` et `continue`, qui s'avèrent très pratiques dans
les boucles while. L'instruction `break` quitte immédiatement la
boucle for au milieu du bloc, alors que l'instruction `continue`
revient au sommet de la boucle `while`, en re-vérifiant si la
condition de boucle est remplie également.

#### L'instruction continue

Utilisons l'exemple précédent, mais cette fois, ajoutons une
vérification pour voir si le nombre est pair. S'il l'est, on le
sautera, de façon à ce que seuls les nombres impairs soient affichés.

    $counter = 0;

    while ($counter < 10) {
        $counter += 1;

        if ($counter % 2 == 0) {
            echo "On saute $counter qui est un numéro pair.\n";
            continue;
        }

        echo "Execution - counter vaut $counter.\n";
    }

#### L'instruction break

Supposons que nous voulions ajouter un autre test qui vérifie si la
variable counter n'est pas plus grande que 8. Si elle l'est, on
souhaiterait arrêter la boucle. Cela entrainera que le nombre 9 n'est
pas affiché, dans cet exemple.

    $counter = 0;

    while ($counter < 10) {
        $counter += 1;

        if ($counter > 8) {
            echo "counter est plus grand que 8, on arrête la boucle.\n";
            break;
        }

        if ($counter % 2 == 0) {
            echo "On saute $counter qui est un numéro pair.\n";
            continue;
        }

        echo "Execution - counter vaut $counter.\n";
    }

Exercise
--------

Utilisez une boucle `while` pour afficher tous les nombres **impairs**
d'un tableau. Utilisez l'instruction `continue` pour sauter les
boucles et éviter d'afficher les nombres pairs.

Souvenez-vous - vous avez besoin de la séquence de caractères `\n` à
la fin des instructions echo pour continuer sur la ligne suivante.

**Astuce:** pour tester si un nombre est pair, vérifiez si le nombre
modulo 2 est égal à 0 ($number % 2 == 0).

Tutorial Code
-------------

<?php
$numbers = [56, 65, 26, 86, 66, 34, 78, 74, 67, 18, 34, 73, 45, 67, 75, 10, 60, 80, 74, 16, 86, 34, 12, 23, 42, 72, 36, 3, 73, 9, 92, 81, 94, 54, 97, 74, 45, 55, 70, 94, 96, 81, 86, 86, 84, 4, 32, 8, 96, 86, 87, 18, 84, 87, 59, 48, 32, 90, 17, 22, 82, 79, 66, 28, 17, 14, 80, 83, 66, 36, 21, 89, 68, 2, 51, 65, 20, 87, 48, 5, 1, 16, 60, 53, 84, 90, 16, 2, 37, 73, 57, 70, 57, 69, 68, 1, 24, 40, 72, 97];

// TODO: Affichez seulement les nombres impairs

?>

Expected Output
---------------

65
67
73
45
67
75
23
3
73
9
81
97
45
55
81
87
87
59
17
79
17
83
21
89
51
65
87
5
1
53
37
73
57
57
69
1
97

Solution
--------

<?php
$numbers = [56, 65, 26, 86, 66, 34, 78, 74, 67, 18, 34, 73, 45, 67, 75, 10, 60, 80, 74, 16, 86, 34, 12, 23, 42, 72, 36, 3, 73, 9, 92, 81, 94, 54, 97, 74, 45, 55, 70, 94, 96, 81, 86, 86, 84, 4, 32, 8, 96, 86, 87, 18, 84, 87, 59, 48, 32, 90, 17, 22, 82, 79, 66, 28, 17, 14, 80, 83, 66, 36, 21, 89, 68, 2, 51, 65, 20, 87, 48, 5, 1, 16, 60, 53, 84, 90, 16, 2, 37, 73, 57, 70, 57, 69, 68, 1, 24, 40, 72, 97];

// TODO: Affichez seulement les nombres impairs
$index = 0;
while( $index < count( $numbers ) )
{
    $number = $numbers[ $index ];
    ++$index;

    if( $number % 2 == 0 )
        continue;

    echo "$number\n";
}
?>
