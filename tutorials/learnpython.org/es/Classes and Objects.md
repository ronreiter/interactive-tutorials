Tutorial
--------

Los objetos son encapsulamientos de variables y funciones en una entrada única. Los objetos obtienen sus variables y funciones desde las clases; las clases son esencialmente una plantilla para crear tus objetos.

Una clase muy básica se verá como esto:

     class MyClass:
          variable = "blah"
          def function(self):
               print "Este mensaje está dentro de una clase."

Explicaremos el por qué debes de incluir el "self" como parametro más adelante; primero, para asignar la clase previa (plantilla) a un objeto debes hacer lo siguiente:

     class MyClass:
          variable = "blah"
          def function(self):
               print "Este mensaje está dentro de una clase."
               
     myobjectx = MyClass()

Ahora que la variable "myobjectx" contiene un objeto de la clase "MyClass" que contiene la variable y la función definida dentro de la clase llamada "MyClass".

### Accediendo a objetos de variables

Para acceder dentro de la variable del objeto recién creado "myObjectx" se escribe lo siguiente:

     class MyClass:
          variable = "blah"
          def function(self):
               print "Este mensaje está dentro de una clase."
               
     myobjectx = MyClass()

     myobjectx.variable

El siguiente código de ejemplo imprime la variable "blah":


     class MyClass:
          variable = "blah"
          def function(self):
               print "Este mensaje está dentro de una clase."
               
     myobjectx = MyClass()

     print(myobjectx.variable)

Puedes crear múltiples objetos diferentes que pertenezcan a la misma clase (tengan las mismas variables y funciones ya definidas). Sin embargo, cada objeto contiene copias independientes de las variables definidas en las clases. Por ejemplo, si definimos otro objeto con la clase "MyClass" y después cambiamos la cadena de texto que tenía la variable anterior:


     class MyClass:
          variable = "blah"
          def function(self):
               print("Este mensaje está dentro de una clase.")

     myobjectx = MyClass()
     myobjecty = MyClass()

     myobjecty.variable = "yackity"

     # Entonces se imprimen ambos valores
     print(myobjectx.variable) # imprime "blah"
     print(myobjecty.variable) # imprime "yackity"

     myobjecty = MyClass()
     myobjecty.variable = "yackity"


### Accediendo a objetos de función

Para acceder a una función dentro del objeto para usar una notación similar a acceder una variable:

     class MyClass:
          variable = "blah"
          def function(self):
               print("Este mensaje está dentro de una clase.")

     myobjectx = MyClass()

     myobjectx.function()

La instrucción previa mostrará un mensaje "Este mensaje está dentro de una clase".

### Ejercicio

Tenemos una clase definida para un vehículo. Crea dos nuevos vehículos llamados MiCarro1 y MiCarro2.
Fija MiCarro1 para ser un convertible rojo con valor de $60,000, con el nombre "Fer", y MiCarro2 para ser una van azul en $10,000, con el nombre "Jump".

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
print(MiCarro1.description())
print(MiCarro2.description())

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
print(MiCarro1.description())
print(MiCarro2.description())
