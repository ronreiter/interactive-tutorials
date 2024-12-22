Python proporciona bibliotecas JSON integradas para codificar y decodificar JSON.

En Python 2.5, se usa el módulo simplejson, mientras que en Python 2.7, se usa el módulo json. Dado que este intérprete utiliza Python 2.7, estaremos usando json.

Para utilizar el módulo json, primero debe ser importado:

    import json

Existen dos formatos básicos para los datos JSON: ya sea en una cadena o en la estructura de datos de objeto. La estructura de datos de objeto, en Python, consiste en listas y diccionarios anidados entre sí. La estructura de datos de objeto permite usar métodos de Python (para listas y diccionarios) para agregar, enumerar, buscar y eliminar elementos de la estructura de datos. El formato de cadena se utiliza principalmente para pasar los datos a otro programa o cargar en una estructura de datos.

Para cargar JSON de nuevo a una estructura de datos, use el método "loads". Este método toma una cadena y la convierte de nuevo en la estructura de datos de objeto json:

    import json 
    print(json.loads(json_string))

Para codificar una estructura de datos a JSON, use el método "dumps". Este método toma un objeto y devuelve una cadena:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python admite un método de serialización de datos propietario de Python llamado pickle (y una alternativa más rápida llamada cPickle).

Puedes usarlo exactamente de la misma manera.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

El objetivo de este ejercicio es imprimir la cadena JSON con el par clave-valor "Me" : 800 añadido a ella.