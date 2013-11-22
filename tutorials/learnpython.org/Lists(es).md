Tutorial
--------

Listas son como arreglos flexibles. Estos contienen variables que desees y todas los tipos de variables que esten soportados. Los elementos de la lista pueden ser iterated over! (se explicará mas adelante en el tutorial) o accediendo a ellos via un indice basado en cero.


    milista = []
    milista.append(1)
    milista.append(2)
    milista.append(3)
    print milista[0] # imprime 1
    print milista[1] # imprime 2
    print milista[2] # imprime 3

    # prints out 1,2,3
    for x in mylist:
        print x

Accediendo un indice que no exista generará un error.

    mylist = [1,2,3]
    print mylist[10]

### Ejercicio

Crear una lista llamada "numeros" que contengan los números 1, 2, y 3 (en ese orden).
Crea una lista llamada "cadenas" la cual contenga "hola" y "mundo" (en ese orden).
Intenta usar el método de "append" para agregar objetos.

Tutorial Code
-------------
# modificando el codigo
numeros = []
cadenas = []

# probando codigo
print numeros
print cadenas

Expected Output
---------------
[1, 2, 3]
['hola', 'mundo']

Solution
--------