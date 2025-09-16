Les listes sont très similaires aux tableaux. Elles peuvent contenir n'importe quel type de variable et peuvent contenir autant de variables que vous le souhaitez. Les listes peuvent également être itérées de manière très simple. Voici un exemple de comment construire une liste.

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

Accéder à un indice qui n'existe pas génère une exception (une erreur).

    mylist = [1,2,3]
    print(mylist[10])

Exercise
--------

Dans cet exercice, vous devrez ajouter des nombres et des chaînes aux listes correctes en utilisant la méthode "append" des listes. Vous devez ajouter les nombres 1, 2 et 3 à la liste "numbers", et les mots 'hello' et 'world' à la variable strings.

Vous devrez également remplir la variable second_name avec le deuxième nom dans la liste names, en utilisant l'opérateur de crochets `[]`. Notez que l'index est basé sur zéro, donc si vous voulez accéder au deuxième élément de la liste, son index sera 1.