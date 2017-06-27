Tutoriel
--------

Python est un langage très simple, qui a une syntaxe très directe.
Il encourage les programmeurs à ne pas trop utiliser de lignes de code toutes faites.
La plus simple des instructions Python est l'instruction "print" (que l'on peut traduire par "imprimer") -
elle affiche simplement une ligne (et inclut également un retour à la ligne, contrairement au "printf" du C).

Il existe deux versions majeures de Python, Python 2 et Python 3. Python 2 et 3 sont assez différents.
Ce tutoriel utilise Python 3, car il a une sémantique plus correcte et présente des fonctionnalités plus récentes.

Par exemple, une différence entre Python 2 et 3 est l'instruction `print`.
En Python 2, l'instruction "print" n'est pas une fonction, et par conséquent elle est invoquée sans parenthèses. Par contre, en Python 3, c'est une fonction, qui doit être invoquée
avec des parenthèses.

Pour afficher une chaîne de caractères en Python 3, écrivez simplement&nbsp;:

    print("Cette ligne sera affichée.")

### Indentation

Python utilise l'indentation (les retraits de début de ligne) pour les blocs d'instructions, au lieu des accolades. Il autorise pour cela les tabulations ou bien les espaces, mais la norme
est d'utiliser quatre espaces. Par exemple:

    x = 1
    if x == 1:
        # retrait de quatre espaces
        print("x vaut 1.")

Exercice
--------

Utilisez l'instruction "print" pour afficher la ligne "Hello, World!".

Tutorial Code
-------------

print("Goodbye, World!")

Expected Output
---------------
test_output_contains("Hello, World!")
success_msg('Bon travail !')

Solution
--------

print("Hello, World!")


