Los listas son muy similares a los arrays. Pueden contener cualquier tipo de variable, y pueden contener tantas variables como desees. Las listas también se pueden iterar de una manera muy simple. Aquí hay un ejemplo de cómo construir una lista.

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # prints 1
    print(mylist[1]) # prints 2
    print(mylist[2]) # prints 3

    # prints out 1,2,3
    for x in mylist:
        print(x)

Acceder a un índice que no existe genera una excepción (un error).

    mylist = [1,2,3]
    print(mylist[10])

Exercise
--------

En este ejercicio, necesitarás agregar números y cadenas a las listas correctas usando el método "append" de listas. Debes agregar los números 1, 2 y 3 a la lista "numbers", y las palabras 'hello' y 'world' a la variable strings.

También tendrás que completar la variable second_name con el segundo nombre en la lista names, usando el operador de corchetes `[]`. Ten en cuenta que el índice es basado en cero, por lo que si quieres acceder al segundo elemento en la lista, su índice será 1.