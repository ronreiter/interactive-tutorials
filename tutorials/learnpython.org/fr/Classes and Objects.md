Tutorial
-----------------

Les objets sont une encapsulation de variables et de fonctions en une seule entité. Les objets obtiennent leurs variables et fonctions à partir des classes. Les classes sont essentiellement un modèle pour créer vos objets.

Une classe très basique ressemblerait à ceci :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")  # C'est un message à l'intérieur de la classe.

Nous expliquerons pourquoi vous devez inclure ce "self" comme paramètre un peu plus tard. Tout d'abord, pour assigner la classe (modèle) ci-dessus à un objet, vous feriez ce qui suit :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")  # C'est un message à l'intérieur de la classe.

    myobjectx = MyClass()

Désormais, la variable "myobjectx" contient un objet de la classe "MyClass" qui contient la variable et la fonction définies dans la classe appelée "MyClass".

### Accéder aux Variables d'un Objet

Pour accéder à la variable à l'intérieur du nouvel objet créé "myobjectx", vous feriez ce qui suit :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")  # C'est un message à l'intérieur de la classe.

    myobjectx = MyClass()

    myobjectx.variable

Donc, par exemple, ce qui suit afficherait la chaîne "blah" :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")  # C'est un message à l'intérieur de la classe.

    myobjectx = MyClass()

    print(myobjectx.variable)

Vous pouvez créer plusieurs objets différents qui sont de la même classe (ont les mêmes variables et fonctions définies). Cependant, chaque objet contient des copies indépendantes des variables définies dans la classe. Par exemple, si nous devions définir un autre objet avec la classe "MyClass" et ensuite changer la chaîne dans la variable ci-dessus :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")  # C'est un message à l'intérieur de la classe.

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Ensuite, imprimez les deux valeurs
    print(myobjectx.variable)
    print(myobjecty.variable)


### Accéder aux Fonctions d'un Objet

Pour accéder à une fonction à l'intérieur d'un objet, vous utilisez une notation similaire à celle pour accéder à une variable :

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")  # C'est un message à l'intérieur de la classe.

    myobjectx = MyClass()

    myobjectx.function()

Ce qui précède afficherait le message, "This is a message inside the class."

### __init__()

La fonction `__init__()`, est une fonction spéciale qui est appelée lors de l'initialisation de la classe. Elle est utilisée pour assigner des valeurs dans une classe.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Affiche '7'
    
Exercise
--------

We have a class defined for vehicles. Create two new vehicles called car1 and car2.
Set car1 to be a red convertible worth $60,000.00 with a name of Fer,
and car2 to be a blue van named Jump worth $10,000.00.

Tutorial Code
-------------

# define the Vehicle class
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s est un %s %s d'une valeur de $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str
# your code goes here

# test code
print(car1.description())
print(car2.description())

Expected Output
---------------

#test_output_contains('Fer is a red convertible worth $60000.00.')
#test_output_contains('Jump is a blue van worth $10000.00.')
success_msg("Great job!")

Solution
--------

# define the Vehicle class
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s est un %s %s d'une valeur de $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

# your code goes here
car1 = Vehicle()
car1.name = "Fer"
car1.color = "red"
car1.kind = "convertible"
car1.value = 60000.00

car2 = Vehicle()
car2.name = "Jump"
car2.color = "blue"
car2.kind = "van"
car2.value = 10000.00

# test code
print(car1.description())
print(car2.description())