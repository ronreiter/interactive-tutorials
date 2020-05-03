Tutorial
--------

Las compresiones de listas son una herramienta muy poderosa, que crea una lista basada en otra, en una única linea legible.

Por ejemplo, vamos a decir que necesitamos crear una lista de enteros  que especifique la longitud de cada palabra en una frase en concreto, pero solo si la palabra no es "el".

    sentencia = "el rápido zorro marrón salta sobre el perro perezoso"
    palabras = sentencia.split()
    longitud_palabra = []
    for palabra in palabras:
          if palabra != "el":
              longitud_palabra.append(len(palabra))
    print(palabras)
    print(longitud_palabra)

Usando una comprensión de lista podemos simplificar éste proceso a ésta notación:

    sentencia = "el rápido zorro marrón salta sobre el perro perezoso"
    palabras = sentencia.split()
    longitud_palabras = [len(palabra) for palabra in palabras if palabra != "el"]
    print(palabras)
    print(longitud_palabras)

Exercise
--------

Usando una comprensión de lista, crea una nueva lista llamada "newlist" fuera de la lista "numbers", que contenga solo los números positivos de la lista, como enteros.

Tutorial Code
-------------
numbers = [34.6, -203.4, 44.9, 68.3, -12.2, 44.6, 12.7]
newlist = []
print(newlist)

Expected Output
---------------

test_output_contains("[34, 44, 68, 44, 12]")
success_msg("Very nice!")

Solution
--------
numbers = [34.6, -203.4, 44.9, 68.3, -12.2, 44.6, 12.7]
newlist = [int(x) for x in numbers if x > 0]
print(newlist)
