Tutorial
--------
Cada función en Python recibe un predeterminado número de argumentos, si es declarada normalmente, como esta:

    def myfunction(first, second, third):
        # Haz algo con las tres variables
        ...

Es posible declarar funciones que reciban un número variable de argumentos, usando la siguiente sintaxis:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

La variable "therest" es una lista de variables, que recibe todos los argumentos que fueron dados a la función "foo" después de los tres primeros argumentos. Así que llamando `foo(1,2,3,4,5)` imprimiremos:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))

    foo(1,2,3,4,5)

También es posible enviar argumentos de funciones por clave, para que el orden del argumento no importa, usando la siguiente sintaxis. El siguiente código produce la siguiente salida:

```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))

        if options.get("number") == "first":
            return first

    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))



La función "bar" recibe tres argumentos. Si se recibe un argumento "action" adicional, y ordena que se haga un resumen de los números,  se imprimirá el resumen. Alternativamente, la función tambien debe devolver el primer argumento, si el valor del parámetro "number", pasado a la función, es igual a "first".

Exercise
--------

Rellena las funciones `foo` y `bar` para que puedan recibir una cantidad variable de argumentos (tres o más)
La función `foo` debe devolver la cantidad de argumentos extra recibidos.
`bar` debe devolver `True` si el argumento con la clave `magicnumber` vale 7, y `False` en cualquier otro caso.

Tutorial Code
-------------

# Edita el prototipo de las funciones y la implementación
def foo(a, b, c):
    pass

def bar(a, b, c):
    pass


# Código de Test
if foo(1,2,3,4) == 1:
    print("Good.")
if foo(1,2,3,4,5) == 2:
    print("Better.")
if bar(1,2,3,magicnumber = 6) == False:
    print("Great.")
if bar(1,2,3,magicnumber = 7) == True:
    print("Awesome!")

Expected Output
---------------

test_output_contains("Good.")
test_output_contains("Better.")
test_output_contains("Great.")
test_output_contains("Awesome!")
success_msg("Great work!")

Solution
--------
# Edita el prototipo de las funciones y la implementación
def foo(a, b, c, *args):
    return len(args)

def bar(a, b, c, **kwargs):
    return kwargs["magicnumber"] == 7


# Código de Test
if foo(1,2,3,4) == 1:
    print("Good.")
if foo(1,2,3,4,5) == 2:
    print("Better.")
if bar(1,2,3,magicnumber = 6) == False:
    print("Great.")
if bar(1,2,3,magicnumber = 7) == True:
    print("Awesome!")
