Tutorial
-----------------

Les objets sont une encapsulation de variables et fonctions en une seule entité. Les objets obtiennent leurs variables et fonctions à partir de classes. Les classes sont essentiellement un modèle pour créer vos objets.

Une classe très basique ressemblerait à ceci :

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("Ceci est un message à l'intérieur de la classe.")
```

Nous expliquerons pourquoi vous devez inclure ce "self" comme paramètre un peu plus tard. Tout d'abord, pour affecter la classe (modèle) ci-dessus à un objet, vous feriez ce qui suit :

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("Ceci est un message à l'intérieur de la classe.")

myobjectx = MyClass()
```

La variable "myobjectx" contient maintenant un objet de la classe "MyClass" qui contient la variable et la fonction définies dans la classe appelée "MyClass".

### Accès aux Variables de l'Objet

Pour accéder à la variable à l'intérieur du nouvel objet créé "myobjectx", vous feriez ce qui suit :

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("Ceci est un message à l'intérieur de la classe.")

myobjectx = MyClass()

myobjectx.variable
```

Par exemple, ce qui suit produirait la chaîne "blah" :

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("Ceci est un message à l'intérieur de la classe.")

myobjectx = MyClass()

print(myobjectx.variable)
```

Vous pouvez créer plusieurs objets différents qui sont de la même classe (ayant les mêmes variables et fonctions définies). Cependant, chaque objet contient des copies indépendantes des variables définies dans la classe. Par exemple, si nous devions définir un autre objet avec la classe "MyClass" et ensuite changer la chaîne dans la variable ci-dessus :

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("Ceci est un message à l'intérieur de la classe.")

myobjectx = MyClass()
myobjecty = MyClass()

myobjecty.variable = "yackity"

# Puis imprimez les deux valeurs
print(myobjectx.variable)
print(myobjecty.variable)
```

### Accès aux Fonctions de l'Objet

Pour accéder à une fonction dans un objet, vous utilisez une notation similaire à l'accès à une variable :

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("Ceci est un message à l'intérieur de la classe.")

myobjectx = MyClass()

myobjectx.function()
```

Ce qui précède imprimerait le message, "Ceci est un message à l'intérieur de la classe."

### __init__()

La fonction `__init__()`, est une fonction spéciale qui est appelée lorsque la classe est initiée.
Elle est utilisée pour assigner des valeurs dans une classe.

```python
class NumberHolder:
   
   def __init__(self, number):
       self.number = number
       
   def returnNumber(self):
       return self.number

var = NumberHolder(7)
print(var.returnNumber()) # Imprime '7'
```

Exercice
--------

Nous avons une classe définie pour les véhicules. Créez deux nouveaux véhicules appelés car1 et car2.
Définissez car1 comme étant un cabriolet rouge d'une valeur de $60,000.00 avec un nom de Fer,
et car2 comme étant une camionnette bleue nommée Jump d'une valeur de $10,000.00.

Tutorial Code
-------------

```python
# define the Vehicle class
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s est un(e) %s %s d'une valeur de $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str
# votre code ici

# code de test
print(car1.description())
print(car2.description())
```

Expected Output
---------------

```python
#test_output_contains('Fer is a red convertible worth $60000.00.')
#test_output_contains('Jump is a blue van worth $10000.00.')
success_msg("Great job!")
```

Solution
--------

```python
# define the Vehicle class
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s est un(e) %s %s d'une valeur de $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

# votre code ici
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

# code de test
print(car1.description())
print(car2.description())
```