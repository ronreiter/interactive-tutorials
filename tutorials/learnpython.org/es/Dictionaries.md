Tutorial
--------

un diccionario es un tipo de dato similar a los arreglos, pero trabajan con llaves y valores en vez de indices. Cada valor esta almacenado en un diccionario que puede ser accedido usando una llave, la cual en cualquier tipo de ojbeto (una cadena, número, lista, etc) en vez de usar un indice para referirla.

Por ejemplo una base de datos de números de teléfonos puede estar almacenada en un diccionario como este:

    librotelefonico = {}
    librotelefonico["Juan"] = 938477566
    librotelefonico["Jack"] = 938377264
    librotelefonico["Jill"] = 947662781

De manera alternativa, un diccionario puede ser inicializado con el mismo valor en la anotación siguiente:

    librotelefonico = {
        "Juan" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }

### Iterando en los diccionarios

Los diccionarios pueden ser iterados de la mimsa manera que una lista. Sin embargo en un diccionario no se guardan el orden de los valores almacenados. Para iterar sobre las llaves y valores usa la siguiente sintaxis:

    for name, number in librotelefonico.iteritems():
        print "Número telefónico de %s esta en %d" % (name, number)

### Eliminando valores

Para eliminar el indice especifico, usa tanto uno como la siguiente notación:

    del librotelefonico["Juan"]

o:

    librotelefonico.pop("Juan")

### Ejercicio

Agrega "Jake" a libro telefonico con el número 938273443, y elimina a Jill del libro telefónico.

Tutorial Code
-------------

librotelefonico = {
    "Juan" : 938477566,
    "Jack" : 938377264,
    "Jill" : 947662781
}

# escribe tú codigo aquí


# probando el codigo
if "Jake" in librotelefonico:
    print "Jake esta listado en el libro telefonico."
if "Jill" not in librotelefonico:
    print "Jill no esta listada en el libro telefonico."

Expected Output
---------------

Jake is listed in the libro telefonico.
Jill is not listed in the libro telefonico.

Solution
--------

librotelefonico = {
    "Juan" : 938477566,
    "Jack" : 938377264,
    "Jill" : 947662781
}

# escribe tú codigo aquí
librotelefonico["Jake"] = 938273443
librotelefonico.pop("Jill")

# probando el codigo
if "Jake" in librotelefonico:
    print "Jake esta listado en el libro telefonico."
if "Jill" not in librotelefonico:
    print "Jill no esta listada en el libro telefonico."
