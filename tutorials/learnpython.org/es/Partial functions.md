Tutorial
--------

En Python puedes crear funciones parciales usando la función parcial desde la librería functools.

Las funciones parciales permiten derivar una función con X parámetros a una función con menos parámetros y valores fijos establecidos por la función más limitada.

Import requerido:

    from functools import partial

Éste código devolverá 8.

    from functools import partial

    def multiply(x,y):
            return x * y

    # Crear una nueva función que multiplica por dos
    dbl = partial(multiply,2)
    print(dbl(4))

Nota importante: Los valores por defecto comenzarán a reemplazar las variables por la izquierda. El 2 reemplazará a x.
y será igual a 4 cuando dbl(4) sea llamado. Esto no marca la diferencia en este ejemplo, pero lo hace en el ejemplo de abajo.

Exercise
--------
Edita la función proporcionada llamándo a partial() y reemplaza las primeras tres variables en func(). Luego imprime con la nueva función parcial usando solo una variable de enrtada de modo que la salida sea igual a 60.


Tutorial Code
-------------
#Sigue en el ejercicio la función proporcionada
from functools import partial
def func(u,v,w,x):
    return u*4 + v*3 + w*2 + x
#Introduce tu código aquí para crear e imprimir con tu función parcial

Expected Output
---------------
#test_object('p')
test_output_contains('60')
success_msg('Good job!')

Solution
--------
from functools import partial
def func(u,v,w,x):
    return u*4 + v*3 + w*2 + x

p = partial(func,5,6,7)
print(p(8))
