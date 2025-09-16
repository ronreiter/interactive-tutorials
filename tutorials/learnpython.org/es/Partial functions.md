Puedes crear funciones parciales en Python utilizando la función `partial` de la biblioteca `functools`.

Las funciones parciales permiten derivar una función con x parámetros a una función con menos parámetros y valores fijos establecidos para la función más limitada.

Importación requerida:

    from functools import partial

Este código devolverá 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # crear una nueva función que multiplica por 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Una nota importante: los valores predeterminados comenzarán a reemplazar variables desde la izquierda. El 2 reemplazará a x. y será igual a 4 cuando se llame a dbl(4). No hace diferencia en este ejemplo, pero sí en el ejemplo a continuación.

Ejercicio
--------
Edita la función proporcionada llamando a `partial()` y reemplazando las tres primeras variables en `func()`. Luego imprime con la nueva función parcial usando solo una variable de entrada para que la salida sea igual a 60.