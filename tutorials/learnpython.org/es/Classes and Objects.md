Tutorial
--------

Objetos son encapsulamientos de variables y funciones en una entrada única. Objetos que obtienen sus variables y funciones desde las clases. Clases son esencialmente una plantilla para crear tus objetos.

Una clase muy básica se verá como esto:

     class MyClass:
          variable = "blah"

          def function(self):
               print "This is a message inside the class."

Explicaremos por que debes incluir el "self" como parametro un poco mas adelante.  Primero, para asignar la clase (template) a un objeto debes hacer lo siguiente:

     myobjectx = MyClass()

Ahora que la variable "myobjectx" sostiene un objeto de una clase "MyClass" que contiene la variable y que la función definida dentro de la clase llamada "MyClass".

### Accediendo a objetos de variables

Para acceder dentro de la variable del objeto recién creado "MyObject" harás lo siguiente:

     myobjectx.variable

Así que por ejemplo deberá mandar la variable "blah":

     print myobjectx.variable

Puedes crear múltiples objetos diferentes que pertenezcan a la misma clase (tengan las mismas variables y funciones previamente definidas). Sin embargo, cada objeto contiene copias independientes de las variables definidas en las clases. Por ejemplo, si fuéramos a definir otro objeto como "MyClass" y después cambiar la cadena en la variable previa:

     myobjecty = MyClass()
     myobjecty.variable = "yackity"

Entonces saca ambos valores:
     
     print myobjectx.variable   # Esto mostrará "blah".
     print myobjecty.variable   # Esto mostrará "yackity".

### Accediendo a objetos de función

Para acceder una función dentro del objeto para usar una notación similar a acceder una variable:

     myobjectx.function()

La instrucción previa mostrará un mensaje, "Este mensaje esta dentro de una clase."



### Ejercicio

Tenemos una clase definida para vehículo. Crea dos nuevos vehículos llamados MiCarro1 y MiCarro2. Fija MiCarro1 para ser un convertible rojo con valor de $60,000, con nombre de Fer, y MiCarro2 para ser una van azul en $10,000, con nombre de Jump.

Tutorial Code
-------------

#define the Vehicle class
class Vehicle:
    name = ""
    kind = "carro"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s es un %s %s con valor de $%.2f." % (self.name, self.kind, self.color, self.value)
        return desc_str
#your code goes here

#checking code
print MiCarro1.description()
print MiCarro2.description()

Expected Output
---------------

Fer es un convertible rojo con valor de $60000.00.
Jump es una van azul con valor de $10000.00.

Solution
--------

#define the Vehicle class
class Vehicle:
    name = ""
    kind = "carro"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s es un %s %s con valor de $%.2f." % (self.name, self.kind, self.color, self.value)
        return desc_str
#your code goes here
MiCarro1=Vehicle()
MiCarro1.color="rojo"
MiCarro1.value=60000
MiCarro1.name="Fer"

MiCarro2=Vehicle()
MiCarro2.color="azul"
MiCarro2.value=10000
MiCarro2.name="Jump"

#checking code
print MiCarro1.description()
print MiCarro2.description()
