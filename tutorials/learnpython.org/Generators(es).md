Tutorial
--------

Los Generadores (Generators) son muy fáciles de implementar, pero un poco difíciles de entender.

Los Generadres son usados para crear iteradores , pero en una forma diferente. Los Generadores son simples funciones las cuales devuelven un numero de elementos (items) iterables, uno a la vez, de forma especial.

When an iteration over a set of item starts using the for statement, the generator is run. Once the generator's function code reaches a "yield" statement, the generator yields its execution back to the for loop, returning a new value from the set. The generator function can generate as many values (possibly infinite) as it wants, yielding each one in its turn.

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

This function decides how to generate the random numbers on its own, and executes the yield statements one at a time, pausing in between to yield execution back to the main for loop.

Exercise
--------

Write a generator function which returns the Fibonacci series. They are calculated using the following formula: The first two numbers of the series is always equal to 1, and each consecutive number returned is the sum of the last two numbers.
Hint: Can you use only two variables in the generator function? Remember that assignments can be done simultaneously. The code

    a = 1
    b = 2
    a, b = b, a

will simultaneously switch the values of a and b.

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