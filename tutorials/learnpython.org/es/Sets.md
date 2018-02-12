Tutorial
--------

Los conjuntos son listas sin entradas duplicadas. Supongamos que quieres recopilar una lista de palabras usadas en un párrafo;

    print(set("my name is Eric and Eric is my name".split()))

Esto imprimirá una lista que contiene "my", "name", "is" "Eric", y finalmente "and". Como el resto de la frase usa palabras que ya están en nuestro conjunto, no se incluyen una segunda vez.

Los conjuntos son una poderosa herramienta en Python dado que tienen la habilidad de calcular diferencias e intersecciones entre otros conjuntos. Por ejemplo, pongamos que tienes una lista de participantes en los eventos A y B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Para buscar que miembros asistirán a los dos eventos, debemos usar el método "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])

    print(a.intersection(b))
    print(b.intersection(a))

Para buscar que miembros asistirán solo a uno de los eventos, usaremos el método "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])

    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Para buscar que miembros asistirán a un evento y no al otro, usaremos el método "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])

    print(a.difference(b))
    print(b.difference(a))

Para obtener una lista de todos los participantes, usaremos el método "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])

    print(a.union(b))

En el siguiente ejercicio, usaremos las listas que nos dan para imprimir un conjunto que contenga todos los participantes del evento A que no vayan a asistir al evento B.

Tutorial Code
-------------
a = ["Jake", "John", "Eric"]
b = ["John", "Jill"]

Expected Output
---------------
test_output_contains("['Jake', 'Eric']")
success_msg("Nice work!")

Solution
--------
a = ["Jake", "John", "Eric"]
b = ["John", "Jill"]

A = set(a)
B = set(b)

print(A.difference(B))
