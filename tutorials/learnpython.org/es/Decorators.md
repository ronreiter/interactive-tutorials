Tutorial
--------

Los decorqadores te permiten hacen modificaciones simples a objetos invocables como [functions](http://www.learnpython.org/en/Functions ""), [methods, or classes](http://www.learnpython.org/en/Classes%20and%20Objects ""). Nos ocuparemos de las funciones para este tutorial. La sintaxis

    @decorator
    def functions(arg):
        return "Return"

Es equivalente a:

    def function(arg):
        return "Return"
    function=decorator(function) #this passes the function to the decorator, and reassigns it to the functions

Como habrás visto, un decorador es simplemente otra función que toma varias funciones y devuelve una. Por ejemplo podrías hacer esto:

    def repeater(old_function):
        def new_function(*args, **kwds): #See learnpython.org/page/Multiple%20Function%20Arguments for how *args and **kwds works
            old_function(*args, **kwds) #we run the old function
            old_function(*args, **kwds) #we do it twice
        return new_function #we have to return the new_function, or it wouldn't reassign it to the value

Esto haría que una función se repita dos veces

    >>> @repeater
    def Multiply(num1, num2):
        print(num1*num2)


    >>> Multiply(2, 3)
    6
    6

También puedes hacer que cambie la salida:

    def Double_Out(old_function):
        def new_function(*args, **kwds):
            return 2*old_function(*args, **kwds) #modify the return value
        return new_function

cambiar la entrada

    def Double_In(old_function):
        def new_function(arg): #only works if the old function has one argument
            return old_function(arg*2) #modify the argument passed
        return new_function

y hacer comprobaciones

    def Check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # This causes an error, which is better than it doing the wrong thing
            old_function(arg)
        return new_function

Digamos que quieres multiplicar la salida por una cantidad variable. Podrías hacerlo

    def Multiply(multiplier):
        def Multiply_Generator(old_function):
            def new_function(*args, **kwds):
                return multiplier*old_function(*args, **kwds)
            return new_function
        return Multiply_Generator #it returns the new generator

Ahora, podrías hacer:

    @Multiply(3) #Multiply no es un generador, pero Multiply(3) sí lo es
    def Num(num):
        return num

Puedes hacer lo que quieras con la función antigua, ¡incluso ignorarla completamente! Los decoradores avanzados también pueden manipular el doc string y el número de argumentos
Para conocer algunos decoradores elegantes, visita <http://wiki.python.org/moin/PythonDecoratorLibrary>.
Exercise
--------
Haz un manejador de decoradores que devuelva un decorador que decore funciones con un argumento. El manjeador debería coger un argumento, un tipo, y luego devolver un decorador que haga que la función verifique si la entrada es del tipo correcto. Si es errónea, debería imprimir "Bad Type" (En realidad, debería lanzar un error - y manejarlo - pero el manejo de errores no es parte de este tutorial). Mira el códugo del tutorial y la salida esperada si estás confundido respecto a esto (sé que es confuso). Usar isinstance(object, type_of_object) o type(object) tal vez te ayude.

Tutorial Code
-------------
def type_check(correct_type):
    #put code here

@type_check(int)
def times2(num):
    return num*2

print(times2(2))
times2('Not A Number')

@type_check(str)
def first_letter(word):
    return word[0]

print(first_letter('Hello World'))
first_letter(['Not', 'A', 'String'])


Expected Output
---------------

test_output_contains("4")
test_output_contains("Bad Type")
test_output_contains("H")
test_output_contains("Bad Type")
success_msg("Good job!")

Solution
--------

def type_check(correct_type):
    def check(old_function):
        def new_function(arg):
            if (isinstance(arg, correct_type)):
                return old_function(arg)
            else:
                print("Bad Type")
        return new_function
    return check

@type_check(int)
def times2(num):
    return num*2

print(times2(2))
times2('Not A Number')

@type_check(str)
def first_letter(word):
    return word[0]

print(first_letter('Hello World'))
first_letter(['Not', 'A', 'String'])
