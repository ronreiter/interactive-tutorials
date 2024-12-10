# Mise en forme de chaîne
Python utilise la mise en forme des chaînes de caractères de style C pour créer de nouvelles chaînes formatées. L'opérateur "%" est utilisé pour formater un ensemble de variables entourées par un "tuple" (une liste de taille fixe), avec une chaîne de formatage qui contient du texte normal ainsi que des "spécificateurs d'argument", des symboles spéciaux tels que "%s" et "%d".

Disons que vous avez une variable appelée "name" avec le nom de votre utilisateur, et vous voulez ensuite imprimer un message de bienvenue à cet utilisateur.

    # Cela affiche "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Pour utiliser deux spécificateurs d'argument ou plus, utilisez un tuple (parenthèses) :

    # Cela affiche "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Tout objet qui n'est pas une chaîne peut aussi être formaté avec l'opérateur %s. La chaîne retournée par la méthode "repr" de cet objet est formatée comme une chaîne. Par exemple :

    # Cela affiche : A list: [1, 2, 3]
    mylist = [1, 2, 3]
    print("A list: %s" % mylist)

Voici quelques spécificateurs d'argument de base que vous devriez connaître :

`%s - Chaîne (ou tout objet avec une représentation sous forme de chaîne, comme les nombres)`

`%d - Entiers`

`%f - Nombres à virgule flottante`

`%.<nombre de chiffres>f - Nombres à virgule flottante avec un nombre fixe de chiffres à droite du point.`

`%x/%X - Entiers en représentation hexadécimale (minuscules/majuscules)`

Exercice
--------

Vous devrez écrire une chaîne de format qui affiche les données en utilisant la syntaxe suivante :
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