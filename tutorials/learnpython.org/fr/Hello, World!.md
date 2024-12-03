Tutorial
--------

Python est un langage très simple et possède une syntaxe très directe.
Il encourage les programmeurs à coder sans code de base (préparé).
La directive la plus simple en Python est la directive "print" -
elle imprime simplement une ligne (et inclut également un saut de ligne, contrairement à C).

Il existe deux principales versions de Python, Python 2 et Python 3. Python 2 et 3 sont assez différents.
Ce tutoriel utilise Python 3, car il est plus sémantiquement correct et supporte des fonctionnalités plus récentes.

Par exemple, une différence entre Python 2 et 3 est l'instruction `print`.
En Python 2, l'instruction "print" n'est pas une fonction, et est donc invoquée sans parenthèses. Cependant, en Python 3, c'est une fonction, et doit être invoquée
avec des parenthèses.

Pour imprimer une chaîne en Python 3, écrivez simplement :

    print("This line will be printed.")

### Indentation

Python utilise l'indentation pour les blocs, au lieu d'accolades. Les tabulations et les espaces sont pris en charge, mais l'indentation standard requiert que le code Python standard utilise quatre espaces. Par exemple :

    x = 1
    if x == 1:
        # indenté de quatre espaces
        print("x is 1.")

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