Tutorial
--------

Python es completamente orientado a objetos, y no es "escrito estaticamente". No necesitas declarar variables o el tipo antes de usuarlas. Cada variable en Python es un objeto y así cada objeto soporta las siguientes instrucciones:

**help(object)** - Muestra información de como usar objetos.

**dir(object)** - muestra que la estructura interna del objeto - y sus metodos y miembros.

Este tutorial ira a traves de algunos tipos basicos de variables.

### Números
Python soporta dos tipos de números - integrales y numeros de punto flotante. (Tambien soporta números complejos, los cuales no se explicarán en este tutorial). 

Para definir un integral, usa la siguiente sintaxis:

    myint = 7

Para definir un número de punto flotante, debes usar una de las siguientes notaciones:

    midecimal = 7.0
    midecimal = float(7)

### Cadenas

Las cadenas están definidas con comillas sencillas o compuestas.

    micadena = 'Hola'
    micadena = "Hola"

La diferencia ente las dos es que usando doble comillas lo hace mas facil de incluir los apostofres (de lo contrario concluirira la cadena si se usa doble comillas)

        micadena = "No te preocupes de los 'apostofres' usando comillas dobles"

There are additional variations on defining strings that make it easier to include things such as carriage returns, backslashes and Unicode characters. These are beyond the scope of this tutorial, but are covered in the [Python documentation](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial"). 

Operadores sencillos pueden ser ejecutados en números o cadenas:

    uno = 1
    dos = 2
    tres = uno + dos

    hola = "hola"
    mundo = "mundo"
    holamundo = hola + " " + mundo

Se puede asignar a mas de una variable simultaneamente en la misma linea, como se muestra aquí

    a, b = 3, 4

Mezclando operadores entre los numeros y cadenas que no son soportadas:

    # Esto no funcionará!
    print uno + dos + hola


### Ejercicio

The target of this exercise is to create a string, an integer, and a floating point number. The string should be named mystring and should contain the word "hello". The floating point number should be named myfloat and should contain the number 10, and the integer should be named myint and should contain the number 20. 

Tutorial Code
-------------
# Escribe tu propio codigo aqui


# probando el codigo
if micadena == "hola":
    print "Cadena: %s" % micadena
if isinstance(miflotante, float) and miflotante == 10.0:
    print "Flotante: %d" % miflotante
if isinstance(miIntegral, int) and miIntegral == 20:
    print "Integral: %d" % miIntegral

Expected Output
---------------
Cadena: hola
Flotante: 10
Integral: 20

Solution
--------