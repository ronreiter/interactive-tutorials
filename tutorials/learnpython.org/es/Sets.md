Los conjuntos son listas sin entradas duplicadas. Supongamos que quieres recolectar una lista de palabras utilizadas en un párrafo:

    print(set("my name is Eric and Eric is my name".split()))

Esto imprimirá una lista que contiene "my", "name", "is", "Eric", y finalmente "and". Dado que el resto de la oración usa palabras que ya están en el conjunto, no se insertan dos veces.

Los conjuntos son una herramienta poderosa en Python ya que tienen la capacidad de calcular diferencias e intersecciones entre otros conjuntos. Por ejemplo, supongamos que tienes una lista de participantes en los eventos A y B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Para averiguar qué miembros asistieron a ambos eventos, puedes usar el método "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Para averiguar qué miembros asistieron solo a uno de los eventos, utiliza el método "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Para averiguar qué miembros asistieron solo a un evento y no al otro, utiliza el método "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Para recibir una lista de todos los participantes, utiliza el método "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Ejercicio--------
En el ejercicio a continuación, utiliza las listas proporcionadas para imprimir un conjunto que contenga todos los participantes del evento A que no asistieron al evento B.