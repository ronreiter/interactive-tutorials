# Funciones en Python

Cada función en Python recibe un número predefinido de argumentos, si se declara normalmente, como este ejemplo:

```
def myfunction(first, second, third):
    # do something with the 3 variables
    ...
```

Es posible declarar funciones que reciban un número variable de argumentos, utilizando la siguiente sintaxis:

```
def foo(first, second, third, *therest):
    print("First: %s" % first)
    print("Second: %s" % second)
    print("Third: %s" % third)
    print("And all the rest... %s" % list(therest))
```

La variable "therest" es una lista de variables que recibe todos los argumentos que se le pasen a la función "foo" después de los primeros 3 argumentos. Entonces, llamar a `foo(1, 2, 3, 4, 5)` imprimirá:

```
def foo(first, second, third, *therest):
    print("First: %s" %(first))
    print("Second: %s" %(second))
    print("Third: %s" %(third))
    print("And all the rest... %s" %(list(therest)))
    
foo(1, 2, 3, 4, 5)
```

También es posible enviar argumentos a las funciones mediante palabras clave, de modo que el orden de los argumentos no importe, utilizando la siguiente sintaxis. El siguiente código produce la siguiente salida:
```La suma es: 6
    Resultado: 1```

```python
def bar(first, second, third, **options):
    if options.get("action") == "sum":
        print("The sum is: %d" %(first + second + third))
    
    if options.get("number") == "first":
        return first

result = bar(1, 2, 3, action = "sum", number = "first")
print("Result: %d" %(result))
```

La función "bar" recibe 3 argumentos. Si se recibe un argumento adicional "action" que indica sumar los números, entonces se imprime la suma. Alternativamente, la función también sabe que debe devolver el primer argumento si el valor del parámetro "number", pasado a la función, es igual a "first".

Exercise
--------

Complete las funciones `foo` y `bar` para que puedan recibir una cantidad variable de argumentos (3 o más). La función `foo` debe devolver la cantidad de argumentos adicionales recibidos. La función `bar` debe devolver `True` si el argumento con la palabra clave `magicnumber` es igual a 7, y `False` en caso contrario.