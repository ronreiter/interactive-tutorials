Tutorial
--------
Normalmente definimos una función utilizando la palabra clave "def" en algún lugar del código y la llamamos cuando necesitamos usarla.

    def suma(a,b):
        return a + b

    a = 1
    b = 2
    c = suma(a,b)
    print(c)

Ahora, en lugar de definir la función en algún lugar y llamarla, podemos usar las funciones lambda de Python, que son funciones en línea definidas en el mismo lugar donde las usamos. Así que no necesitamos declarar una función en otro lugar y volver al código solo para usarla una sola vez.

Estas funciones no necesitan tener un nombre, por lo que también se les llama funciones anónimas. Definimos una función lambda utilizando la palabra clave "lambda".

    nombre_de_la_funcion = parametros lambda : salida

Entonces, el ejemplo de suma anterior usando una función lambda sería así:

    a = 1
    b = 2
    suma = lambda x,y : x + y
    c = suma(a,b)
    print(c)

Aquí estamos asignando la función lambda a la variable suma, y al proporcionar los argumentos, es decir, a y b, funciona como una función normal.



Ejercicio
--------
Escribe un programa usando funciones lambda para verificar si un número en la lista dada es impar. Imprime "True" si el número es impar o "False" si no lo es, para cada elemento.

Código del tutorial
-------------
    l = [2,4,7,3,14,19]
    for i in l:
        # tu código aquí

Salida esperada
---------------
    test_output_contains("False")
    test_output_contains("False")
    test_output_contains("True")
    test_output_contains("True")
    test_output_contains("False")
    test_output_contains("True")
    success_msg("¡Buen trabajo!")

Solución
--------
    l = [2,4,7,3,14,19]
    for i in l:
        # tu código aquí
        mi_lambda = lambda x : (x % 2) == 1
        print(mi_lambda(i))