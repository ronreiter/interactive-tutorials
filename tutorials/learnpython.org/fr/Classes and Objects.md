Les objets sont une encapsulation de variables et de fonctions en une seule entité. Les objets obtiennent leurs variables et fonctions à partir de classes. Les classes sont essentiellement un modèle pour créer vos objets.

Une classe très basique ressemblerait à quelque chose comme ceci :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Nous expliquerons pourquoi vous devez inclure ce "self" en tant que paramètre un peu plus tard. Tout d'abord, pour assigner la classe (modèle) ci-dessus à un objet, vous feriez ce qui suit :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Maintenant, la variable "myobjectx" contient un objet de la classe "MyClass" qui contient la variable et la fonction définies dans la classe appelée "MyClass".

### Accéder aux variables d'un objet

Pour accéder à la variable à l'intérieur du nouvel objet créé "myobjectx", vous feriez ce qui suit :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Ainsi, par exemple, ce qui suit afficherait la chaîne "blah" :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Vous pouvez créer plusieurs objets différents qui sont de la même classe (ont les mêmes variables et fonctions définies). Cependant, chaque objet contient des copies indépendantes des variables définies dans la classe. Par exemple, si nous devions définir un autre objet avec la classe "MyClass" et ensuite changer la chaîne dans la variable ci-dessus :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Puis imprimez les deux valeurs
    print(myobjectx.variable)
    print(myobjecty.variable)


### Accéder aux fonctions d'un objet

Pour accéder à une fonction à l'intérieur d'un objet, vous utilisez une notation similaire à celle de l'accès à une variable :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Ce qui précède afficherait le message, "This is a message inside the class."

### __init__()

La fonction `__init__()`, est une fonction spéciale qui est appelée lorsque la classe est initiée.
Elle est utilisée pour assigner des valeurs dans une classe.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Prints '7'
    
Exercice
--------

Nous avons une classe définie pour les véhicules. Créez deux nouveaux véhicules appelés car1 et car2.
Définissez car1 comme étant une décapotable rouge valant $60,000.00 avec un nom de Fer,
et car2 comme un van bleu nommé Jump valant $10,000.00.