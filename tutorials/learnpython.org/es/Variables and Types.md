Python es completamente orientado a objetos y no tiene un "tipado estático". No necesitas declarar variables antes de usarlas ni declarar su tipo. Cada variable en Python es un objeto.

Este tutorial revisará algunos tipos básicos de variables.

### Numbers
Python soporta dos tipos de números - enteros (números completos) y números de punto flotante (decimales). (También soporta números complejos, que no se explicarán en este tutorial).

Para definir un entero, usa la siguiente sintaxis:

    myint = 7
    print(myint)

Para definir un número de punto flotante, puedes usar una de las siguientes notaciones:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

Las cadenas se definen ya sea con comillas simples o dobles.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

La diferencia entre ambas es que usar comillas dobles facilita incluir apóstrofes (mientras que estos terminarían la cadena si se usan comillas simples).

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
Hay variaciones adicionales para definir cadenas que facilitan incluir cosas como retornos de carro, barras invertidas y caracteres Unicode. Estas van más allá del alcance de este tutorial, pero están cubiertas en la [documentación de Python](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Se pueden ejecutar operadores simples en números y cadenas:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Las asignaciones se pueden hacer a más de una variable "simultáneamente" en la misma línea, como esta:

    a, b = 3, 4
    print(a, b)

No se soporta la mezcla de operadores entre números y cadenas:

    # ¡Esto no funcionará!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercise
--------

El objetivo de este ejercicio es crear una cadena, un entero y un número de punto flotante. La cadena debe llamarse `mystring` y debe contener la palabra "hello". El número de punto flotante debe llamarse `myfloat` y debe contener el número 10.0, y el entero debe llamarse `myint` y debe contener el número 20.