Generadores son muy fáciles de implementar, pero un poco difíciles de entender.

Los generadores se utilizan para crear iteradores, pero con un enfoque diferente. Los generadores son funciones simples que devuelven un conjunto iterable de elementos, uno a la vez, de una manera especial.

Cuando una iteración sobre un conjunto de elementos comienza utilizando la declaración for, el generador se ejecuta. Una vez que el código de la función del generador alcanza una declaración "yield", el generador cede su ejecución de vuelta al bucle for, devolviendo un nuevo valor del conjunto. La función generadora puede generar tantos valores (posiblemente infinitos) como desee, cediendo cada uno en su turno.

Aquí hay un ejemplo simple de una función generadora que devuelve 7 números enteros aleatorios:

Esta función decide cómo generar los números aleatorios por sí misma y ejecuta las declaraciones yield una a la vez, pausando entre ellas para ceder la ejecución al bucle for principal.

Ejercicio
--------

Escribe una función generadora que devuelva la serie de Fibonacci. Se calculan utilizando la siguiente fórmula: Los primeros dos números de la serie siempre son iguales a 1, y cada número consecutivo devuelto es la suma de los dos últimos números.
Pista: ¿Puedes usar solo dos variables en la función generadora? Recuerda que las asignaciones pueden hacerse simultáneamente. El código

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

cambiará simultáneamente los valores de a y b.