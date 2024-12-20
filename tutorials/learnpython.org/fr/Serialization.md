Python fournit des bibliothèques JSON intégrées pour encoder et décoder JSON.

En Python 2.5, le module simplejson est utilisé, tandis qu'en Python 2.7, le module json est utilisé. Puisque cet interpréteur utilise Python 2.7, nous utiliserons json.

Pour utiliser le module json, il doit d'abord être importé :

    import json

Il existe deux formats de base pour les données JSON. Soit sous forme de chaîne, soit sous forme de structure de données. La structure de données, en Python, consiste en des listes et des dictionnaires imbriqués les uns dans les autres. La structure de données permet d'utiliser les méthodes python (pour les listes et les dictionnaires) pour ajouter, lister, rechercher et supprimer des éléments de la structure de données. Le format de chaîne est principalement utilisé pour transmettre les données à un autre programme ou les charger dans une structure de données.

Pour charger JSON dans une structure de données, utilisez la méthode "loads". Cette méthode prend une chaîne et la transforme en structure de données d'objet json :

    import json 
    print(json.loads(json_string))

Pour encoder une structure de données en JSON, utilisez la méthode "dumps". Cette méthode prend un objet et renvoie une chaîne :

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python prend en charge une méthode de sérialisation de données propriétaire appelée pickle (et une alternative plus rapide appelée cPickle).

Vous pouvez l'utiliser exactement de la même manière.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

L'objectif de cet exercice est d'afficher la chaîne JSON avec la paire clé-valeur "Me" : 800 ajoutée à celle-ci.