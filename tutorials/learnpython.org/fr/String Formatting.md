Tutoriel
--------

Python utilise le formatage de chaînes de style C pour créer de nouvelles chaînes formatées. L'opérateur "%" est utilisé pour formater un ensemble de variables enfermées dans un "tuple" (une liste de taille fixe), avec une chaîne de format, qui contient du texte normal ainsi que des "spécificateurs d'argument", des symboles spéciaux comme "%s" et "%d".

Disons que vous avez une variable appelée "name" avec votre nom d'utilisateur, et vous voudriez alors imprimer une salutation à cet utilisateur.

    # This prints out "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Pour utiliser deux ou plusieurs spécificateurs d'argument, utilisez un tuple (parenthèses) :

    # This prints out "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Tout objet qui n'est pas une chaîne peut être formaté en utilisant également l'opérateur %s. La chaîne qui est renvoyée par la méthode "repr" de cet objet est formatée comme la chaîne. Par exemple :

    # This prints out: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Voici quelques spécificateurs d'argument de base que vous devriez connaître :

`%s - Chaîne (ou tout objet avec une représentation sous forme de chaîne, comme les nombres)`

`%d - Entiers`

`%f - Nombres à virgule flottante`

`%.<nombre de chiffres>f - Nombres à virgule flottante avec un nombre fixe de chiffres à droite du point.`

`%x/%X - Entiers en représentation hexadécimale (minuscules/majuscules)`

Exercice
--------

Vous devrez écrire une chaîne de format qui imprime les données en utilisant la syntaxe suivante :
    `Hello John Doe. Your current balance is $53.44.`.

Tutorial Code
-------------

data = ("John", "Doe", 53.44)
format_string = "Hello"

print(format_string % data)

Expected Output
---------------
#test_output_contains("Hello John Doe. Your current balance is $53.44.", no_output_msg= "Make sure you add the `%s` in the correct spaces to the `format_string` to meeet the exercise goals!")
test_object('format_string')
success_msg('Great work!')

Solution
--------

data = ("John", "Doe", 53.44)
format_string = "Hello %s %s. Your current balance is $%s."

print(format_string % data)