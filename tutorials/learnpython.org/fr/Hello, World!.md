Tutoriel
--------

Python est un langage très simple, avec une syntaxe très directe.
Il encourage les programmeurs à coder sans code préparé. 
La directive la plus simple en Python est la directive "print" -
elle affiche simplement une ligne (et inclut également un saut de ligne, contrairement au C).

Il existe deux principales versions de Python, Python 2 et Python 3. Python 2 et 3 sont assez différents.
Ce tutoriel utilise Python 3, car il est plus sémantiquement correct et prend en charge des fonctionnalités plus récentes.

Par exemple, une différence entre Python 2 et 3 est l'instruction `print`.
En Python 2, l'instruction "print" n'est pas une fonction, et par conséquent elle est
appelée sans parenthèses. Cependant, en Python 3, c'est une fonction, et elle doit être appelée
avec des parenthèses.

Pour imprimer une chaîne en Python 3, il suffit d'écrire :

    print("Cette ligne sera imprimée.")

### Indentation

Python utilise l'indentation pour les blocs, au lieu des accolades. Les tabulations et les espaces sont pris en charge, mais l'indentation standard
exige un code Python standard utilisant quatre espaces. Par exemple :

    x = 1
    if x == 1:
        # indenté de quatre espaces
        print("x est 1.")

Exercice
--------

Utilisez la fonction "print" pour imprimer la ligne "Hello, World!".

Tutorial Code
-------------

print("Goodbye, World!")

Expected Output
---------------
test_output_contains("Hello, World!")
success_msg('Great job!')

Solution
--------

print("Hello, World!")