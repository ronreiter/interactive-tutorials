Tutorial
--------

Python provee libreías JSON embebidas para codificar y decodificar JSON.

En Python 2.5 se usa el módulo simplejson, mientras que en Python 2.7 es empleado el módulo json. Cómo éste intérprete usar Python 2.7, json será el que usemos.

Para poder usar el módulo json, primero debemos importarlo:

    import json

Hay dos formatos básicos para los datos JSON, como cadena u objeto datastructure. El objeto datastructure, en Python, consiste en listas y diccionarios anidados uno dentro de otros. Los objetos datastructure permiten usar los métodos python para listas y diccionarios para agregar, listar, buscar y eliminar elementos del datastructure. El formato de cadena de texto se usa principalmente para pasar datos entre programas o cargarlos en un datastructure.

Para cargar un JSON de vuelta a una estructura de datos hay que usar el método "loads". Éste método coge un string y lo regreso dentro de un objeto datastructure de json:

    import json
    print(json.loads(json_string))

Para codificar una estructura de datos a JSON, hay que usar el método "dumps". Éste método coge un objeto y devuelve una cadena de texto:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python soporta un método de serialización de datos patentado llamado pickle (y una alternativa más rápida lamada cPickle).

Puedes usarlo exactamente de la misma manera.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

El objetivo de este ejercicio es imprimir la cadena JSON con el par clave-valor "Me" : 800 añadido.

Tutorial Code
-------------

import json

# Arregla esta función, para que pueda añadirse el nombre
# y el par salarial a salaries_json, y devolverlo
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

# Arregla esta función, para que pueda añadirse el nombre
# y el par salarial a salaries_json, y devolverlo
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
