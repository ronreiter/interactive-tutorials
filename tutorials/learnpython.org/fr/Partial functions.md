Tutorial
--------

Vous pouvez créer des fonctions partielles en Python en utilisant la fonction `partial` de la bibliothèque `functools`.

Les fonctions partielles permettent de dériver une fonction avec x paramètres vers une fonction avec moins de paramètres, en fixant des valeurs pour la fonction plus restreinte.

Importation requise :

    from functools import partial

Ce code renverra 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Une remarque importante : les valeurs par défaut commenceront à remplacer les variables à partir de la gauche. Le 2 remplacera x. y sera égal à 4 lorsque `dbl(4)` sera appelé. Cela n'a pas de différence dans cet exemple, mais cela en a dans l'exemple ci-dessous.

Exercice
--------
Modifiez la fonction fournie en appelant `partial()` et en remplaçant les trois premières variables de `func()`. Ensuite, imprimez avec la nouvelle fonction partielle en utilisant une seule variable d'entrée pour que la sortie soit égale à 60.

Tutorial Code
-------------
#Following is the exercise, function provided:
from functools import partial
def func(u, v, w, x):
    return u*4 + v*3 + w*2 + x
#Enter your code here to create and print with your partial function

Expected Output
---------------
#test_object('p')
test_output_contains('60')
success_msg('Good job!')

Solution
--------
from functools import partial
def func(u, v, w, x):
    return u*4 + v*3 + w*2 + x

p = partial(func,5,6,7)
print(p(8))