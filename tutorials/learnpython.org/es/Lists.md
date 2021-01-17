Tutorial
--------

Las listas son muy similares a los arreglos. Estas pueden contener cualquier tipo de variable y pueden soportar todas las variables que desees. Los elementos de la lista pueden ser iterados de manera simple ! (se explicará mas adelante en el tutorial) o accediendo a ellos via un indice basado en cero. Aquí hay un ejemplo de cómo crear una lista.


    miLista = []
    miLista.append(1)
    miLista.append(2)
    miLista.append(3)
    print miLista[0] # imprime 1
    print miLista[1] # imprime 2
    print miLista[2] # imprime 3

    # prints out 1,2,3
    for x in miLista:
        print(x)

Accediendo a un indice que no exista generará un error.

    miLista = [1,2,3]
    print miLista[10]

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
