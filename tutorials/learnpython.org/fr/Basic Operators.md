Cette section explique comment utiliser les opérateurs de base en Python.

### Arithmetic Operators       

Tout comme dans d'autres langages de programmation, les opérateurs d'addition, de soustraction, de multiplication et de division peuvent être utilisés avec des nombres.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Essayez de prédire quel sera le résultat. Python suit-il l'ordre des opérations ?

Un autre opérateur disponible est l'opérateur modulo (%) qui retourne le reste entier de la division. dividende % diviseur = reste.

    remainder = 11 % 3
    print(remainder)

Utiliser deux symboles de multiplication crée une relation de puissance.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Python prend en charge la concaténation de chaînes en utilisant l'opérateur d'addition :

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python prend également en charge la multiplication de chaînes pour former une chaîne avec une séquence répétée :

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

Les listes peuvent être jointes avec les opérateurs d'addition :

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Tout comme pour les chaînes, Python prend en charge la formation de nouvelles listes avec une séquence répétée en utilisant l'opérateur de multiplication :

    print([1,2,3] * 3)

Exercice
--------

L'objectif de cet exercice est de créer deux listes appelées `x_list` et `y_list`, qui contiennent 10 instances des variables `x` et `y`, respectivement. Vous devez également créer une liste appelée `big_list`, qui contient les variables `x` et `y`, 10 fois chacune, en concaténant les deux listes que vous avez créées.