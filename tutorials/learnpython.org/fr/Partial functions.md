Vous pouvez créer des fonctions partielles en Python en utilisant la fonction partial de la bibliothèque functools.

Les fonctions partielles permettent de dériver une fonction avec x paramètres vers une fonction avec moins de paramètres et des valeurs fixes définies pour la fonction plus restreinte.

Importation requise :

    from functools import partial

Ce code retournera 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # créer une nouvelle fonction qui multiplie par 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Note importante : les valeurs par défaut commenceront à remplacer les variables à partir de la gauche. Le 2 remplacera x. y sera égal à 4 quand dbl(4) est appelé. Cela ne fait pas de différence dans cet exemple, mais cela en fait dans l'exemple ci-dessous.

Exercice
--------
Modifiez la fonction fournie en appelant partial() et en remplaçant les trois premières variables dans func(). Puis imprimez avec la nouvelle fonction partielle en utilisant un seul variable d'entrée afin que la sortie soit égale à 60.