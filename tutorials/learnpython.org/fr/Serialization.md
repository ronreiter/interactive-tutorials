Tutoriel
--------

Python fournit des bibliothèques JSON intégrées pour encoder et décoder JSON.

Dans Python 2.5, le module simplejson est utilisé, alors que dans Python 2.7, c'est le module json qui est utilisé. Puisque cet interpréteur utilise Python 2.7, nous allons utiliser json.

Pour utiliser le module json, il doit d'abord être importé :

    import json

Il existe deux formats de base pour les données JSON. Soit sous forme de chaîne, soit sous forme de structure de données objet. La structure de données objet, en Python, est composée de listes et de dictionnaires imbriqués les uns dans les autres. La structure de données objet permet d'utiliser les méthodes Python (pour les listes et les dictionnaires) afin d'ajouter, lister, rechercher et supprimer des éléments de la structure de données. Le format chaîne est principalement utilisé pour transmettre les données à un autre programme ou charger dans une structure de données.

Pour charger JSON de nouveau dans une structure de données, utilisez la méthode "loads". Cette méthode prend une chaîne et la transforme à nouveau en structure de données objet json :

    import json 
    print(json.loads(json_string))

Pour encoder une structure de données en JSON, utilisez la méthode "dumps". Cette méthode prend un objet et retourne une chaîne :

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python prend en charge une méthode propriétaire de sérialisation de données appelée pickle (et une alternative plus rapide appelée cPickle).

Vous pouvez l'utiliser exactement de la même manière.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

L'objectif de cet exercice est d'imprimer la chaîne JSON avec la paire clé-valeur "Me" : 800 ajoutée à celle-ci.

Tutorial Code
-------------

import json

# fix this function, so it adds the given name
# and salary pair to salaries_json, and return it
def add_employee(salaries_json, name, salary):
    # Add your code here

    return salaries_json

# test code
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

# fix this function, so it adds the given name
# and salary pair to salaries_json, and return it
def add_employee(salaries_json, name, salary):
    salaries = json.loads(salaries_json)
    salaries[name] = salary

    return json.dumps(salaries)

# test code
salaries = '{"Alfred" : 300, "Jane" : 400 }'
new_salaries = add_employee(salaries, "Me", 800)
decoded_salaries = json.loads(new_salaries)
print(decoded_salaries["Alfred"])
print(decoded_salaries["Jane"])
print(decoded_salaries["Me"])