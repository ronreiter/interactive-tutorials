Python utilise le formatage de chaînes de style C pour créer de nouvelles chaînes formatées. L'opérateur "%" est utilisé pour formater un ensemble de variables incluses dans un "tuple" (une liste de taille fixe), avec une chaîne de format qui contient du texte normal ainsi que des "spécificateurs d'argument", des symboles spéciaux comme "%s" et "%d".

Supposons que vous ayez une variable appelée "name" avec votre nom d'utilisateur, et vous souhaitez ensuite imprimer un message de bienvenue à cet utilisateur.

    # Ceci affiche "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Pour utiliser deux spéficateurs d'argument ou plus, utilisez un tuple (parenthèses) :

    # Ceci affiche "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Tout objet qui n'est pas une chaîne peut également être formaté en utilisant l'opérateur %s. La chaîne renvoyée par la méthode "repr" de cet objet est formatée comme une chaîne. Par exemple :

    # Ceci affiche : A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Voici quelques spécificateurs d'argument de base que vous devriez connaître :

`%s - Chaîne (ou tout objet avec une représentation sous forme de chaîne, comme les nombres)`

`%d - Entiers`

`%f - Nombres à virgule flottante`

`%.<nombre de chiffres>f - Nombres à virgule flottante avec un nombre fixe de chiffres à droite du point.`

`%x/%X - Entiers en représentation hexadécimale (minuscule/majuscule)`


Exercice
--------

Vous devrez écrire une chaîne de format qui imprime les données en utilisant la syntaxe suivante :
`Hello John Doe. Your current balance is $53.44.`