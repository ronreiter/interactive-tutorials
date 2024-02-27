Tutorial
--------

Python es completamente orientado a objetos, y no es "escrito estáticamente". No necesitas declarar variables o el tipo antes de usarlas. Cada variable en Python es un objeto y así cada objeto soporta las siguientes instrucciones:

**help(object)** - Muestra información de cómo usar objetos.

**dir(object)** - muestra la estructura interna del objeto - con sus metodos y miembros.

Este tutorial irá a través de algunos tipos básicos de variables.

### Números
Python soporta dos tipos de números - enteros o integrales (integer) y números de punto flotante (float). (Tambien soporta números complejos, los cuales no se explicarán en este tutorial). 

Para definir un integral, usa la siguiente sintaxis:

    myint = 7

Para definir un número de punto flotante, debes usar una de las siguientes notaciones:

    midecimal = 7.0
    midecimal = float(7)

### Cadenas

Las cadenas están definidas con comillas sencillas o compuestas.

    micadena = 'Hola'
    micadena = "Hola"

La diferencia entre las dos es que usando doble comillas lo hace más fácil de incluir los apostofres (de lo contrario concluirá la cadena si se usa doble comillas)

        micadena = "No te preocupes de los 'apostofres' usando comillas dobles"

Existen variaciones para definir cadenas de texto que hacen más sencillo incluir otros símbolos como un salto de línea, una contrabarra o caracteres Unicode. Este tema no se cubre en este tutorial, pero puedes conseguir más información en [Python documentation](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial"). 

Los operadores simples pueden ser ejecutados en números o cadenas:

    uno = 1
    dos = 2
    tres = uno + dos

    hola = "hola"
    mundo = "mundo"
    holamundo = hola + " " + mundo

Se puede asignar a más de una variable simultaneamente en la misma línea, como se muestra aquí

    a, b = 3, 4

Mezclando operadores entre los numeros y cadenas que no son soportadas:

    # Esto no funcionará!
    print uno + dos + hola


### Ejercicio

El objetivo de este ejercicio es crear una cadena de texto, un número entero y uno flotante. La cadena de texto debe nombrarse como "mystring" y debe de contener la palabra "hello". El número flotante deberá llamarse "myfloat" y debe de contener el número 10; el entero debe de llamarse "myint" y deberá contener el número 20.

Tutorial Code
-------------
# Escribe tu propio código aquí


# probando el código
if micadena == "hola":
    print "Cadena: %s" % micadena
if isinstance(miflotante, float) and miflotante == 10.0:
    print "Flotante: %d" % miflotante
if isinstance(miIntegral, int) and miIntegral == 20:
    print "Integral: %d" % miIntegral

Expected Output
---------------
Cadena: hola
Flotante: 10.0
Integral: 20

Solution
--------
mystring = "hola"
myfloat = (float(10))
myint = 20

print("Cadena: " + mystring)
print("Flotante: " + str(myfloat))
print("Integral: " + str(myint))
