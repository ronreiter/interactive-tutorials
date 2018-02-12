Tutorial
--------
Cuando programas, los errores aparecen. Es sólo un hecho de la vida.
Quizás el usuario haya puesto un mal dato. Tal vez un recurso de la web estaba indisponible. Quizás el programa corrió fuera de memoria. ¡O incluso el programador pudo haber cometido un error!

La solución de Python a los errores son las excepciones. Es posible que hayas visto una excepción antes.

    print(a)

    #error
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

¡Ups! Olvidamos asignar un valor a la variable 'a'.

Pero a veces no quieres excepciones que paren completamente el programa. Es posible que quieras hacer algo especial cuando se lance una excepción. Esto se hace en un bloque *try/catch*.

Aquí tienes un ejemplo trivial: Spongamos que vas a iterar sobre una lista. Necesitas iterar sobre veinte elementos, pero la lista está hecha desde las entradas escritas por un usuario, y puede que no haya veinte elementos en ella. Después de llegar al final de la lista, solo quieres que el resto de números se interprete como 0. Así es como puedes hacerlo:

      def do_stuff_with_number(n):
              print(n)

      the_list = (1, 2, 3, 4, 5)

      for i in range(20):
          try:
              do_stuff_with_number(the_list[i])
          except IndexError: # Salta cuando accedemos a un index de la lista que no existe
              do_stuff_with_number(0)

¡No fue tan dificil! Puedes hacerlo con cualquier excepción. Para más detalles de como manejar excepciones, puedes buscar [aquí](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Tutorial Code
-------------

# ¡Manejar todas las excepciones!
#Configuración
actor = {"name": "John Cleese", "rank": "awesome"}

#Función a modificar, debe devolver el último nombre del actor - piensa en lecciones anteriores sobre como hacerlo
def get_last_name():
    return actor["last_name"]

#Código de Test
get_last_name()
print("All exceptions caught! Good job!")
print("The actor's last name is %s" % get_last_name())

Expected Output
---------------

test_output_contains("Cleese")
test_output_contains("All exceptions caught! Good job!")
test_output_contains("The actor's last name is Cleese")
success_msg("Great work!")

Solution
--------
actor = {"name": "John Cleese", "rank": "awesome"}

def get_last_name():
    return actor["name"].split()[1]

get_last_name()
print("All exceptions caught! Good job!")
print("The actor's last name is %s" % get_last_name())
