Tutorial
--------

L'introspection de code est la capacité d'examiner les classes, les fonctions et les mots-clés pour savoir ce qu'ils sont, ce qu'ils font et ce qu'ils savent.

Python fournit plusieurs fonctions et utilitaires pour l'introspection de code.

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
    

Souvent, la plus importante est la fonction help, car vous pouvez l'utiliser pour savoir ce que font les autres fonctions.

Exercise
--------

Imprimer une liste de tous les attributs de l'objet Vehicle donné.

Tutorial Code
-------------

# Use the help function to see what each function does.
# Delete this when you are done.
help(dir)
help(hasattr)
help(id)

# Define the Vehicle class.
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

# Print a list of all attributes of the Vehicle class.
# Your code goes here


Expected Output
---------------

test_output_contains("['__doc__', '__module__', 'color', 'description', 'kind', 'name', 'value']")
test_student_typed("print")
success_msg("Very nice!")

Solution
--------

# Define the Vehicle class
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

# Print a list of all attributes of the Vehicle class.
print(dir(Vehicle))
