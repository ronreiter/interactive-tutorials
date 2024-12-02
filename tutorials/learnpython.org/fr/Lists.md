Tutorial
--------

Les listes sont très similaires aux tableaux. Elles peuvent contenir n'importe quel type de variable, et elles peuvent contenir autant de variables que vous le souhaitez. Les listes peuvent également être itérées d'une manière très simple. Voici un exemple de comment construire une liste.

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # imprime 1
    print(mylist[1]) # imprime 2
    print(mylist[2]) # imprime 3

    # imprime 1,2,3
    for x in mylist:
        print(x)

L'accès à un indice qui n'existe pas génère une exception (une erreur).

    mylist = [1,2,3]
    print(mylist[10])

Exercice
--------

Dans cet exercice, vous devrez ajouter des nombres et des chaînes aux listes correctes en utilisant la méthode de liste "append". Vous devez ajouter les nombres 1, 2 et 3 à la liste "numbers", et les mots 'hello' et 'world' à la variable strings.

Vous devrez également remplir la variable second_name avec le deuxième nom dans la liste names, en utilisant l'opérateur crochets `[]`. Notez que l'indice est basé sur zéro, donc si vous voulez accéder au deuxième élément de la liste, son indice sera 1.

Tutorial Code
-------------
numbers = []
strings = []
names = ["John", "Eric", "Jessica"]

# écrivez votre code ici
second_name = None


# ce code doit écrire les tableaux remplis et le deuxième nom de la liste des noms (Eric).
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

# écrivez votre code ici
numbers.append(1)
numbers.append(2)
numbers.append(3)

strings.append("hello")
strings.append("world")

second_name = names[1]

# ce code doit écrire les tableaux remplis et le deuxième nom de la liste des noms (Eric).
print(numbers)
print(strings)
print("The second name on the names list is %s" % second_name)