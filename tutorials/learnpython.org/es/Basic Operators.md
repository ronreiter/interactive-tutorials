Tutorial
--------

esta sección explica un poco sobre como usar los operadores básicos en Python. 

### Operadores Aritméticos  


Tal como cualquierr otro lenguaje de programacion, los operadores de sumas, restas, multiplicaciones y divisiones pueden ser usadas con números.<br> 

    numeros = 1 + 2 * 3 / 4.0

Intenta predecir que la respuesta será. Si python sigue las ordenes de los operadores?

Otro operador disponible es el de modulo (%), este regresa el integral remanente de una división. dividendo % divisor = remanente.

    remanente = 11 % 3

Usando dos simbolos de multiplicación crea una relación de potencia.

    cuadrado = 7 ** 2
    cubico = 2 ** 3

### Usando operadores con texto

Python soporta unir texto usando el operador de adición:

    holamundo = "hola" + " " + "mundo"

Python también soporta multiplicar texto o cadenas para formar una cadena con una secuencia repetitiva:

    muchosholas = "hola" * 10

### Usar Operadores con listas

Listas pueden ser unidas con los operadores de adición:

    numeros_pares = [2,4,6,8]
    numeros_impares = [1,3,5,7]
    todos_los_numeros = numeros_pares + numeros_impares

Al igual que en las cadenas, Python admite la formación de nuevas listas con una secuencia repetitiva utilizando el operador de multiplicación:

    print [1,2,3] * 3

### Ejercicios

El objetivo de este ejercicio es crear dos listas llamadas `x_list` y `y_list`, las cuales contendrán 10 instancias de las variables `x` e `y`,
respectivamente. También se requiere crear una lista llamada "big_list", la cual contendrá las variables `x` e `y`, 10 veces cada una, concatenando las dos listas que has creado.

Tutorial Code
-------------

x = object()
y = object()

# change this code
x_list = [x]
y_list = [y]
big_list = []

print "x_list contains %d objects" % len(x_list)
print "y_list contains %d objects" % len(y_list)
print "big_list contains %d objects" % len(big_list)

# Código de Prueba
if x_list.count(x) == 10 and y_list.count(y) == 10:
    print "Almost there..."
if big_list.count(x) == 10 and big_list.count(y) == 10:
    print "Great!"

Salida Esperada
---------------

x_list contains 10 objects
y_list contains 10 objects
big_list contains 20 objects
Almost there...
Great!

Solución
--------
x = object()
y = object()

# Cambiar este código
x_list = [x]*10
y_list = [y]*10
big_list = x_list + y_list

print "x_list contains %d objects" % len(x_list)
print "y_list contains %d objects" % len(y_list)
print "big_list contains %d objects" % len(big_list)

# Código de Prueba
if x_list.count(x) == 10 and y_list.count(y) == 10:
    print "Almost there..."
if big_list.count(x) == 10 and big_list.count(y) == 10:
    print "Great!"
