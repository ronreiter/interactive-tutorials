Tutorial
--------

La introspección de código es la habilidad de examinar clases, funciones y claves para conocer qué son, qué hacen y qué conocen

Python provee varias funciones y utilidades para la instrospección de código.

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


A menudo la más importante es la función de ayuda, ya que puedes usarla para buscar qué hacen otras funciones.

Exercise
--------

Imprime una lista de todos los atributos del objeto Vehicle.

Tutorial Code
-------------

# Usa la función de ayuda para ver qué hace cada función.
# Borra esto cuando estés listo.
help(dir)
help(hasattr)
help(id)

# Define la clase Vehicle.
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

# Imprime una lista de todos los atributos de la clase Vehiculo.
# Tu código va aquí


Expected Output
---------------

test_output_contains("['__doc__', '__module__', 'color', 'description', 'kind', 'name', 'value']")
test_student_typed("print")
success_msg("Very nice!")

Solution
--------

# Define la clase Vehicle.
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

# Imprime una lista de todos los atributos de la clase Vehiculo.
print(dir(Vehicle))
