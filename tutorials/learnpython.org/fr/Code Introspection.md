Tutorial
--------

L'introspection du code est la capacité d'examiner les classes, fonctions et mots-clés pour savoir ce qu'ils sont, ce qu'ils font et ce qu'ils savent.

Python fournit plusieurs fonctions et utilitaires pour l'introspection du code.

    help()
    dir() 
    hasattr() 
    id() 
    type() 
    repr() 
    callable() 
    issubclass() 
    isinstance() 
    __doc__ 
    __name__ 
    

Souvent, la plus importante est la fonction help, car vous pouvez l'utiliser pour découvrir ce que font les autres fonctions.

Exercice
--------

Imprimez une liste de tous les attributs de l'objet Vehicle donné.

Tutorial Code
-------------

# Utilisez la fonction help pour voir ce que fait chaque fonction.
# Supprimez ceci lorsque vous avez terminé.
help(dir)
help(hasattr)
help(id)

# Définir la classe Vehicle.
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

# Imprimez une liste de tous les attributs de la classe Vehicle.
# Votre code va ici


Expected Output
---------------

test_output_contains("['__doc__', '__module__', 'color', 'description', 'kind', 'name', 'value']")
test_student_typed("print")
success_msg("Very nice!")

Solution
--------

# Définir la classe Vehicle
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

# Imprimez une liste de tous les attributs de la classe Vehicle.
print(dir(Vehicle))
