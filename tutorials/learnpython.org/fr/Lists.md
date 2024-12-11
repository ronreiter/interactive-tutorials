Tutorial
--------

Les listes sont très similaires aux tableaux. Elles peuvent contenir n'importe quel type de variable et autant de variables que vous le souhaitez. Les listes peuvent également être itérées de manière très simple. Voici un exemple de comment construire une liste.

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

Dans cet exercice, vous devrez ajouter des nombres et des chaînes aux listes appropriées en utilisant la méthode "append". Vous devez ajouter les nombres 1, 2 et 3 à la liste "numbers" et les mots 'hello' et 'world' à la variable strings.

Vous devrez également remplir la variable second_name avec le deuxième nom dans la liste names, en utilisant l'opérateur crochets `[]`. Notez que l'indexation commence à zéro, donc si vous voulez accéder au deuxième élément de la liste, son indice sera 1.

Tutorial Code
-------------
numbers = []
strings = []
names = ["John", "Eric", "Jessica"]

# write your code here
second_name = None


# this code should write out the filled arrays and the second name in the names list (Eric).
print(numbers)
print(strings)
print("The second name on the names list is %s" % second_name)

Expected Output
---------------

test_output_contains("[1,2,3]", no_output_msg= "Make sure that you have printed the `numbers` list.")
test_output_contains("['hello', 'world']", no_output_msg= "Make sure that you have printed the `strings` list.")
test_output_contains("The second name on the names list is Eric", no_output_msg= "Did you fill in the variable `second_name` with the second name in the names list?")
success_msg("Great Job!")

Solution
--------

numbers = []
strings = []
names = ["John", "Eric", "Jessica"]

# write your code here
numbers.append(1)
numbers.append(2)
numbers.append(3)

strings.append("hello")
strings.append("world")

second_name = names[1]

# this code should write out the filled arrays and the second name in the names list (Eric).
print(numbers)
print(strings)
print("The second name on the names list is %s" % second_name)