Normalmente definimos una función usando la palabra clave def en algún lugar del código y la llamamos cada vez que necesitamos usarla.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

Ahora, en lugar de definir la función en algún lugar y llamarla, podemos usar las funciones lambda de Python, que son funciones en línea definidas en el mismo lugar donde las usamos. Así que no necesitamos declarar una función en algún lugar y revisar el código solo para un uso único.

No necesitan tener un nombre, por lo que también se llaman funciones anónimas. Definimos una función lambda usando la palabra clave lambda.

    your_function_name = lambda inputs : output

Entonces, el ejemplo de suma anterior usando una función lambda sería,

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Aquí estamos asignando la función lambda a la variable **sum**, y al proporcionar los argumentos, es decir, a y b, funciona como una función normal.



Ejercicio
--------
Escribe un programa usando funciones lambda para verificar si un número en la lista dada es impar. Imprime "True" si el número es impar o "False" si no lo es para cada elemento.