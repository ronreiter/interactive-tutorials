Los decoradores te permiten hacer modificaciones simples a objetos invocables como [funciones](http://www.learnpython.org/en/Functions ""), [métodos o clases](http://www.learnpython.org/en/Classes%20and%20Objects ""). Nos ocuparemos de las funciones en este tutorial. La sintaxis

    @decorator
    def functions(arg):
        return "value"

Es equivalente a:

    def function(arg):
        return "value"
    function = decorator(function) # esto pasa la función al decorador y la reasigna a la función

Como puedes haber visto, un decorador es simplemente otra función que toma una función y devuelve otra. Por ejemplo, podrías hacer esto:

    def repeater(old_function):
        def new_function(*args, **kwds): # Ve learnpython.org/en/Multiple%20Function%20Arguments para ver cómo funcionan *args y **kwds
            old_function(*args, **kwds) # ejecutamos la función antigua
            old_function(*args, **kwds) # lo hacemos dos veces
        return new_function # tenemos que devolver la new_function, o no se reasignaría al valor

Esto haría que una función se repitiera dos veces.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

También puedes hacer que cambie la salida

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # modificar el valor de retorno
        return new_function

cambiar el input

    def double_Ii(old_function):
        def new_function(arg): # solo funciona si la función antigua tiene un argumento
            return old_function(arg * 2) # modificar el argumento pasado
        return new_function

y hacer comprobaciones.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Esto provoca un error, lo cual es mejor que hacer lo incorrecto
            old_function(arg)
        return new_function

Digamos que quieres multiplicar la salida por una cantidad variable. Podrías definir el decorador y usarlo de la siguiente manera:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # devuelve el nuevo generador
    
    # Uso
    @multiply(3) # multiply no es un generador, pero multiply(3) sí lo es
    def return_num(num):
        return num
        
    # Ahora return_num está decorado y reasignado a sí mismo
    return_num(5) # debería devolver 15

Puedes hacer lo que quieras con la función antigua, ¡incluso ignorarla completamente! Los decoradores avanzados también pueden manipular la cadena de documentación y el número de argumentos. Para algunos decoradores llamativos, visita <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Ejercicio
---------
Haz una fábrica de decoradores que devuelva un decorador que decore funciones con un argumento. La fábrica debe tomar un argumento, un tipo, y luego devolver un decorador que haga que la función verifique si la entrada es del tipo correcto. Si está mal, debe imprimir("Bad Type") (En realidad, debería generar un error, pero el manejo de errores no está en este tutorial). Mirar el código del tutorial y la salida esperada podría ayudarte si estás confundido (sé que yo lo estaría). Usar isinstance(object, type_of_object) o type(object) podría ser útil.