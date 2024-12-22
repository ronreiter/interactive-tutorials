Cuando se programa, ocurren errores. Es simplemente un hecho de la vida. Tal vez el usuario dio una entrada incorrecta. Quizás un recurso de red no estaba disponible. Puede que el programa se quedó sin memoria. ¡O incluso el programador pudo haber cometido un error!

La solución de Python a los errores son las excepciones. Es posible que hayas visto una excepción antes.

    print(a)
    
    #error
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

¡Vaya! Se olvidó de asignar un valor a la variable 'a'.

Pero a veces no quieres que las excepciones detengan completamente el programa. Podrías querer hacer algo especial cuando se levanta una excepción. Esto se hace en un bloque *try/except*.

Aquí hay un ejemplo trivial: Supongamos que estás iterando sobre una lista. Necesitas iterar sobre 20 números, pero la lista se crea a partir de la entrada del usuario, y podría no tener 20 números en ella. Después de llegar al final de la lista, simplemente quieres que el resto de los números se interpreten como un 0. Así es como podrías hacer eso:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Raised when accessing a non-existing index of a list
                do_stuff_with_number(0)
    
    catch_this()

¡Ahí lo tienes, no fue tan difícil! Puedes hacer eso con cualquier excepción. Para más detalles sobre el manejo de excepciones, no busques más allá de los [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Ejercicio
--------

¡Maneja todas las excepciones! Piensa en las lecciones anteriores para devolver el apellido del actor.