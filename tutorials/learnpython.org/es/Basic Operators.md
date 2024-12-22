Esta sección explica cómo usar operadores básicos en Python.

### Arithmetic Operators

Al igual que en otros lenguajes de programación, los operadores de suma, resta, multiplicación y división se pueden usar con números.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Intenta predecir cuál será la respuesta. ¿Sigue Python el orden de operaciones?

Otro operador disponible es el operador módulo (%), que devuelve el resto entero de la división. dividendo % divisor = resto.

    remainder = 11 % 3
    print(remainder)

Usar dos símbolos de multiplicación hace una relación de potencia.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Python soporta la concatenación de cadenas de texto usando el operador de suma:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python también soporta la multiplicación de cadenas de texto para formar una cadena con una secuencia repetida:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

Las listas pueden unirse con los operadores de suma:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Al igual que en las cadenas de texto, Python soporta la formación de nuevas listas con una secuencia repetida usando el operador de multiplicación:

    print([1,2,3] * 3)

Ejercicio
--------

El objetivo de este ejercicio es crear dos listas llamadas `x_list` y `y_list`,
que contengan 10 instancias de las variables `x` y `y`, respectivamente.
También se te pide que crees una lista llamada `big_list`, que contenga
las variables `x` y `y`, 10 veces cada una, concatenando las dos listas que has creado.