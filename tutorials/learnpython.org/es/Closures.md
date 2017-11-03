Tutorial
--------

Un Closure (cierre) es un objeto de función que recuerda los valores en los ámbitos incluídos, incluso si no están presentes en la memoria. Veámoslos paso a paso

Primero de todo, una **Función Anidada** es una función definida dentro de otra función. Es muy importante apuntar que las funciones anidadas pueden acceder a las variables de la función principal. Sin embargo, al menos en Python, son sólo de lectura, aunque se puede usar la palabra clave "nonlocal" explicitamente con esas variables para modificarlas.

For example:

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)

        data_transmitter()

    print(transmit_to_space("Test message"))

Esto funciona bien ya que la función 'data_transmitter' puede acceder al 'mensaje'. Para demostrar el uso de la clave "nonlocal", considera esto:

    def print_msg(number):
        def printer():
            "Here we are using the nonlocal keyword"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)

    print_msg(9)

Sin la palabra clave nonlocal, la salida sería "3 9", sin embargo, con su uso, obtenemos "3 3", que es el valor de la variable "number" modificada.

Ahora, ¿qué tal si devolvemos el objeto de función en lugar de llamar a la función anidada dentro?. (Recuerda que incluso las funciones son objetos. (Es Python.))

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
        return data_transmitter

Y llamamos a la función de la siguiente manera:


      def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
        return data_transmitter

  	  fun2 = transmit_to_space("Burn the Sun!")
  	  fun2()

Aunque se completó la ejecución de "transmit_to_space()", el mensaje se ha preservado. Esta técnica, mediante la cuál se adjuntan los datos a algún código incluso después de acabar esas otras funciones, se llama closures (cierres) en Python.

VENTAJA : Los Closures pueden evitar el uso de variables globales y proporcionan algún tipo de ocultación de datos. (Por ejemplo, cuando hay varios métodos en una clara, usamos instancias de closures).

Además, los decoradores en Python hacen un uso extensivo de los closures.

Exercise
--------

Haz un bucle anidado y un closure en Python para hacer múltiples funciones de multiplicación usando closures. Usando cierres, podrías crear las funciones multiply_with_5() o multiply_with_4().

Tutorial Code
-------------

# Tu código va aquí

multiplywith5 = multiplier_of(5)
multiplywith5(9)

Expected Output
---------------

test_output_contains("45")
success_msg("Great work!")

Solution
--------

def multiplier_of(n):
    def multiplier(number):
        return number*n
    return multiplier

multiplywith5 = multiplier_of(5)
print(multiplywith5(9))
