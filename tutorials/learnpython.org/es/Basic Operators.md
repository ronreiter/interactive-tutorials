Este sección explica cómo usar operadores básicos en Python.

### Operadores Aritméticos       

Al igual que en cualquier otro lenguaje de programación, los operadores de suma, resta, multiplicación y división se pueden usar con números.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Intenta predecir cuál será la respuesta. ¿Python sigue el orden de operaciones?

Otro operador disponible es el operador módulo (%), que devuelve el resto entero de la división. dividendo % divisor = resto.

    remainder = 11 % 3
    print(remainder)

Usar dos símbolos de multiplicación establece una relación de potencia.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Uso de Operadores con Cadenas de Texto

Python permite concatenar cadenas de texto usando el operador de suma:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python también permite multiplicar cadenas de texto para formar una cadena con una secuencia repetitiva:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Uso de Operadores con Listas

Las listas se pueden unir con el operador de suma:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Al igual que con las cadenas, Python permite formar nuevas listas con una secuencia repetitiva usando el operador de multiplicación:

    print([1,2,3] * 3)

Ejercicio
--------

El objetivo de este ejercicio es crear dos listas llamadas `x_list` e `y_list`,
que contengan 10 instancias de las variables `x` e `y`, respectivamente.
También se requiere que crees una lista llamada `big_list`, que contenga
las variables `x` e `y`, 10 veces cada una, concatenando las dos listas que has creado.