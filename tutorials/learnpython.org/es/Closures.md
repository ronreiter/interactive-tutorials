Un Closure es un objeto función que recuerda valores en ámbitos adjuntos incluso si no están presentes en la memoria. Vamos a desglosarlo paso a paso.

Primero, una **Función Anidada** es una función definida dentro de otra función. Es muy importante destacar que las funciones anidadas pueden acceder a las variables del ámbito que las envuelve. Sin embargo, al menos en Python, solo pueden leerlas. No obstante, se puede usar explícitamente la palabra clave "nonlocal" con estas variables para modificarlas.

Por ejemplo:

    def transmit_to_space(message):
        "Esta es la función envolvente"
        def data_transmitter():
            "La función anidada"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Mensaje de prueba"))

Esto funciona bien ya que la función 'data_transmitter' puede acceder al 'mensaje'. Para demostrar el uso de la palabra clave "nonlocal", considera esto:

    def print_msg(number):
        def printer():
            "Aquí estamos usando la palabra clave 'nonlocal'"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Sin la palabra clave nonlocal, el resultado sería "3 9", sin embargo, con su uso, obtenemos "3 3", lo que significa que el valor de la variable "number" se modifica.

Ahora, ¿qué tal si devolvemos el objeto función en lugar de llamar a la función anidada dentro de él? (Recuerda que incluso las funciones son objetos. (Es Python.))

    def transmit_to_space(message):
        "Esta es la función envolvente"
        def data_transmitter():
            "La función anidada"
            print(message)
        return data_transmitter

Y llamamos a la función de la siguiente manera:

      def transmit_to_space(message):
        "Esta es la función envolvente"
        def data_transmitter():
            "La función anidada"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("¡Quema el Sol!")
  	  fun2()

Aunque la ejecución de "transmit_to_space()" se completó, el mensaje se preservó. Esta técnica por la cual los datos se adjuntan a algún código incluso después del final de esas otras funciones originales se llama closures en Python.

VENTAJA: Los closures pueden evitar el uso de variables globales y proporcionar alguna forma de ocultamiento de datos. (Por ejemplo, cuando hay pocos métodos en una clase, usar closures en su lugar).

Además, los decoradores en Python hacen un uso extensivo de los closures.

Ejercicio
--------

Haz un bucle anidado y un cierre en Python para crear funciones que obtengan múltiples funciones de multiplicación usando closures. Es decir, usando closures, uno puede crear funciones como multiply_with_5() o multiply_with_4() usando closures.