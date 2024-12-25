Un diccionario es un tipo de dato similar a los arrays, pero funciona con claves y valores en lugar de índices. Cada valor almacenado en un diccionario se puede acceder utilizando una clave, que puede ser cualquier tipo de objeto (una cadena, un número, una lista, etc.) en lugar de usar su índice para referenciarlo.

Por ejemplo, una base de datos de números telefónicos podría almacenarse utilizando un diccionario como este:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternativamente, un diccionario puede inicializarse con los mismos valores en la siguiente notación:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterar sobre diccionarios

Los diccionarios pueden iterarse, al igual que una lista. Sin embargo, un diccionario, a diferencia de una lista, no mantiene el orden de los valores almacenados en él. Para iterar sobre pares clave-valor, use la siguiente sintaxis:

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Eliminar un valor

Para eliminar un índice específico, use cualquiera de las siguientes notaciones:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

o:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


Ejercicio
--------

Añade "Jake" al directorio telefónico con el número 938273443, y elimina a Jill del directorio telefónico.