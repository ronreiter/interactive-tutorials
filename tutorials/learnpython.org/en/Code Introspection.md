Tutorial
--------

Code introspection is the ability to examine classes, functions and keywords to know what they are, what they do and what they know.

Python provides several functions and utilities for code introspection.

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

Tutorial Code
-------------

##define the Vehicle class
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

print dir(Vehicle)

Expected Output
---------------

['__doc__', '__module__', 'color', 'description', 'kind', 'name', 'value']

Solution
--------