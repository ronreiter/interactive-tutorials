Tutorial
--------

Python fournit des bibliothèques JSON intégrées pour encoder et décoder JSON.

En Python 2.5, le module simplejson est utilisé, tandis qu'en Python 2.7, le module json est utilisé. Comme cet interpréteur utilise Python 2.7, nous utiliserons json.

Pour utiliser le module json, il doit d'abord être importé :

    import json

Il existe deux formats de base pour les données JSON. Soit sous forme de chaîne de caractères, soit sous forme de structure de données objet. La structure de données objet, en Python, est constituée de listes et de dictionnaires imbriqués les uns dans les autres. La structure de données objet permet d'utiliser des méthodes Python (pour les listes et les dictionnaires) pour ajouter, lister, rechercher et supprimer des éléments de la structure de données. Le format chaîne de caractères est principalement utilisé pour transférer les données vers un autre programme ou les charger dans une structure de données.

Pour charger JSON de retour dans une structure de données, utilisez la méthode "loads". Cette méthode prend une chaîne de caractères et la reconvertit en structure de données objet JSON :

    import json 
    print(json.loads(json_string))

Pour encoder une structure de données en JSON, utilisez la méthode "dumps". Cette méthode prend un objet et renvoie une chaîne de caractères :

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python prend en charge une méthode de sérialisation de données propriétaire de Python appelée pickle (et une alternative plus rapide appelée cPickle).

Vous pouvez l'utiliser exactement de la même manière.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Le but de cet exercice est d'imprimer la chaîne JSON avec la paire clé-valeur "Me" : 800 ajoutée.

Tutorial Code
-------------

import json

# corriger cette fonction pour qu'elle ajoute
# le nom donné et la paire de salaire à salaries_json,
# et le retourne
def add_employee(salaries_json, name, salary):
    # Ajoutez votre code ici

    return salaries_json

# code de test
salaries = '{"Alfred" : 300, "Jane" : 400 }'
new_salaries = add_employee(salaries, "Me", 800)
decoded_salaries = json.loads(new_salaries)
print(decoded_salaries["Alfred"])
print(decoded_salaries["Jane"])
print(decoded_salaries["Me"])

Expected Output
---------------

test_output_contains("300")
test_output_contains("400")
test_output_contains("800")
success_msg("Great work!")

Solution
--------

import json

# corriger cette fonction pour qu'elle ajoute
# le nom donné et la paire de salaire à salaries_json,
# et le retourne
def add_employee(salaries_json, name, salary):
    salaries = json.loads(salaries_json)
    salaries[name] = salary

    return json.dumps(salaries)

# code de test
salaries = '{"Alfred" : 300, "Jane" : 400 }'
new_salaries = add_employee(salaries, "Me", 800)
decoded_salaries = json.loads(new_salaries)
print(decoded_salaries["Alfred"])
print(decoded_salaries["Jane"])
print(decoded_salaries["Me"])