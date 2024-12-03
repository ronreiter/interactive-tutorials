Tutorial
--------

Vous pouvez créer des fonctions partielles en Python en utilisant la fonction `partial` de la bibliothèque `functools`.

Les fonctions partielles permettent de dériver une fonction avec x paramètres vers une fonction avec moins de paramètres et des valeurs fixes définies pour la fonction plus limitée.

Importation requise :

    from functools import partial

Ce code renverra 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # créer une nouvelle fonction qui multiplie par 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Une note importante : les valeurs par défaut commenceront à remplacer les variables en partant de la gauche. Le 2 remplacera x. y sera égal à 4 lorsque `dbl(4)` est appelé. Cela ne fait pas de différence dans cet exemple, mais c'est le cas dans l'exemple ci-dessous.

Exercice
--------
Modifiez la fonction fournie en appelant `partial()` et en remplaçant les trois premières variables dans `func()`. Ensuite, imprimez avec la nouvelle fonction partielle en utilisant une seule variable d'entrée pour que la sortie soit égale à 60.

Tutorial Code
-------------
#Voici l'exercice, fonction fournie :
from functools import partial
def func(u, v, w, x):
    return u*4 + v*3 + w*2 + x
#Entrez votre code ici pour créer et imprimer avec votre fonction partielle

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