Tutorial
--------

Python provee librerias nativas a JSON para codificar y decodificar a JSON.

En Python 2.5, el modulo simplejson es usado, mientras que en Python 2.7, el modulo json es usado. Ya que este interprete usa Python 2.5, usaremos simplejson.

Para codificar una estructura de datos a JSON, usamos el método "dumps":

    json_string = simplejson.dumps([1, 2, 3, "a", "b", "c"])

Para cargar JSON a una estructura de datos, usa el método "loads":

    print simplejson.loads(json_string)

Python un metodo propio de serialización llamado pickle (y una alternativa mas rápida llamada cPickle).

La puedes usar exactamente de la misma manera.

    pickled_string = cPickle.dumps([1, 2, 3, "a", "b", "c"])
    print cPickle.loads(pickled_string)

En este ejercicio, deberás codigificar las variables de "salarios" a JSON, y mostrar el resultado.

Tutorial Code
-------------

salarios = {
    "Alfredo" : 300,
    "Jane" : 301,
}

Expected Output
---------------

{"Jane": 301, "Alfredo": 300}