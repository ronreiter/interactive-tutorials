Tutorial
--------

Los Generadores (Generators) son muy fáciles de implementar, pero un poco difíciles de entender.

Los Generadres son usados para crear iteradores , pero en una forma diferente. Los Generadores son simples funciones las cuales devuelven un numero de elementos (items) iterables, uno a la vez, de forma especial.

Cuando una iteración sobre un conjunto de elementos comienza a usar la instrucción , se ejecuta el generador. Una vez que el código de función del generador alcanza una declaración de "rendimiento", el generador devuelve su ejecución al ciclo for, devolviendo un nuevo valor del conjunto. La función de generador puede generar tantos valores (posiblemente infinitos) como desee, produciendo cada uno a su vez


He aqui un simple ejemplo de una función Generador (Generator) la cual devuelve 7 números enteros al azar (aleatorios):

    import random

    def lottery():
        # devuelve 6 Numeros entre 1 y 40
        for i in xrange(6):
            yield random.randint(1, 40)

        # devuelve un 7º número entre 1 y 15
        yield random.randint(1,15)

    for random_number in lottery():
        print "And the next number is... %d!" % random_number

Esta función decide cómo generar los números aleatorios por sí sola y ejecuta las declaraciones de rendimiento de una en una, deteniéndose en el medio para devolver la ejecución al ciclo principal for.

Exercise
--------

Escriba una función generadora que devuelva la serie Fibonacci. Se calculan utilizando la siguiente fórmula: los dos primeros números de la serie siempre son iguales a 1, y cada número consecutivo devuelto es la suma de los dos últimos números. Sugerencia: ¿Puedes usar solo dos variables en la función de generador? Recuerde que las tareas se pueden hacer simultáneamente. El código

    a = 1
    b = 2
    a, b = b, a

cambiará simultáneamente los valores de a y b.

Tutorial Code
-------------

# fill in this function
def fib():
    pass #this is a null statement which does nothing when executed, useful as a placeholder.

# testing code
import types
if type(fib()) == types.GeneratorType:
    print "Good, The fib function is a generator."

    counter = 0
    for n in fib():
        print n
        counter += 1
        if counter == 10:
            break



Expected Output
---------------

Good, The fib function is a generator.
1
1
2
3
5
8
13
21
34
55

Solution
--------
