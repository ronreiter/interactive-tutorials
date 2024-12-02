Tutorial
--------

Python utilise la mise en forme de chaîne de style C pour créer de nouvelles chaînes formatées. L'opérateur "%" est utilisé pour formater un ensemble de variables incluses dans un "tuple" (une liste de taille fixe), avec une chaîne de format, qui contient du texte normal avec des "spécificateurs d'arguments", des symboles spéciaux comme "%s" et "%d".

Disons que vous avez une variable appelée "name" contenant votre nom d'utilisateur, et vous souhaitez ensuite imprimer un message de bienvenue à cet utilisateur.

    # Cela affiche "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Pour utiliser deux spécificateurs d'arguments ou plus, utilisez un tuple (parenthèses) :

    # Cela affiche "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Tout objet qui n'est pas une chaîne peut également être formaté en utilisant l'opérateur %s. La chaîne renvoyée par la méthode "repr" de cet objet est formatée comme une chaîne. Par exemple :

    # Cela affiche : A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Voici quelques spécificateurs d'arguments de base que vous devez connaître :

`%s - Chaîne (ou tout objet avec une représentation sous forme de chaîne, comme les nombres)`

`%d - Entiers`

`%f - Nombres à virgule flottante`

`%.<nombre de chiffres>f - Nombres à virgule flottante avec un nombre fixe de chiffres à droite du point.`

`%x/%X - Entiers en représentation hexadécimale (minuscule/majuscule)`


Exercice
--------

Vous devrez écrire une chaîne de format qui imprime les données en utilisant la syntaxe suivante :
    `Hello John Doe. Your current balance is $53.44.`

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