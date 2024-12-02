Tutorial
--------

Cette section explique comment utiliser les opérateurs de base en Python.

### Opérateurs Arithmétiques       

Tout comme dans d'autres langages de programmation, les opérateurs d'addition, de soustraction, de multiplication et de division peuvent être utilisés avec des chiffres.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Essayez de prédire quelle sera la réponse. Python suit-il l'ordre des opérations ?

Un autre opérateur disponible est l'opérateur modulo (%) qui renvoie le reste entier de la division. dividende % diviseur = reste.

    remainder = 11 % 3
    print(remainder)

L'utilisation de deux symboles de multiplication crée une relation de puissance.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Utilisation des Opérateurs avec les Chaînes de Caractères

Python prend en charge la concaténation de chaînes de caractères en utilisant l'opérateur d'addition :

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python prend également en charge la multiplication des chaînes de caractères pour former une chaîne avec une séquence répétée :

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Utilisation des Opérateurs avec les Listes

Les listes peuvent être jointes avec les opérateurs d'addition :

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Tout comme pour les chaînes, Python prend en charge la formation de nouvelles listes avec une séquence répétée en utilisant l'opérateur de multiplication :

    print([1,2,3] * 3)

Exercice
--------

L'objectif de cet exercice est de créer deux listes appelées `x_list` et `y_list`,
qui contiennent 10 instances des variables `x` et `y`, respectivement.
Vous devez également créer une liste appelée `big_list`, qui contient
les variables `x` et `y`, 10 fois chacune, en concaténant les deux listes que vous avez créées.

Tutorial Code
-------------

x = object()
y = object()

# TODO: change this code
x_list = [x]
y_list = [y]
big_list = []

print("x_list contains %d objects" % len(x_list))
print("y_list contains %d objects" % len(y_list))
print("big_list contains %d objects" % len(big_list))

# testing code
if x_list.count(x) == 10 and y_list.count(y) == 10:
    print("Almost there...")
if big_list.count(x) == 10 and big_list.count(y) == 10:
    print("Great!")

Expected Output
---------------

Ex().check_object('x_list').has_equal_value(expr_code = 'len(x_list)')
Ex().check_object('y_list').has_equal_value(expr_code = 'len(y_list)')
Ex().check_object('big_list').has_equal_value(expr_code = 'len(big_list)')
success_msg('Good work!')

Solution
--------

x = object()
y = object()

# TODO: change this code
x_list = [x] * 10
y_list = [y] * 10
big_list = x_list + y_list

print("x_list contains %d objects" % len(x_list))
print("y_list contains %d objects" % len(y_list))
print("big_list contains %d objects" % len(big_list))

# testing code
if x_list.count(x) == 10 and y_list.count(y) == 10:
    print("Almost there...")
if big_list.count(x) == 10 and big_list.count(y) == 10:
    print("Great!")