Los objetos son una encapsulación de variables y funciones en una sola entidad. Los objetos obtienen sus variables y funciones de las clases. Las clases son esencialmente una plantilla para crear tus objetos.

Una clase muy básica se vería algo así:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Explicaremos por qué tienes que incluir ese "self" como un parámetro un poco más adelante. Primero, para asignar la clase (plantilla) anterior a un objeto, harías lo siguiente:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Ahora la variable "myobjectx" contiene un objeto de la clase "MyClass" que contiene la variable y la función definidas dentro de la clase llamada "MyClass".

### Accediendo a Variables del Objeto

Para acceder a la variable dentro del objeto recién creado "myobjectx" harías lo siguiente:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Por ejemplo, lo siguiente imprimiría la cadena "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Puedes crear múltiples objetos diferentes que sean de la misma clase (tengan las mismas variables y funciones definidas). Sin embargo, cada objeto contiene copias independientes de las variables definidas en la clase. Por ejemplo, si definimos otro objeto con la clase "MyClass" y luego cambiamos la cadena en la variable anterior:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Entonces imprime ambos valores
    print(myobjectx.variable)
    print(myobjecty.variable)


### Accediendo a Funciones del Objeto

Para acceder a una función dentro de un objeto, utilizas una notación similar a la de acceder a una variable:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Lo anterior imprimiría el mensaje, "This is a message inside the class."

### __init__()

La función `__init__()`, es una función especial que se llama cuando la clase está siendo iniciada. Se utiliza para asignar valores en una clase.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Prints '7'
    
Ejercicio
--------

Tenemos una clase definida para vehículos. Crea dos vehículos nuevos llamados car1 y car2. Establece que car1 sea un convertible rojo valorado en $60,000.00 con el nombre de Fer, y que car2 sea una camioneta azul llamada Jump valorada en $10,000.00.