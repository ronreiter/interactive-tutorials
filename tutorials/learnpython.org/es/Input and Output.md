Tomar entrada y mostrar salida de la manera requerida juega un papel importante en la codificación interactiva. Así que centrémonos en la entrada y salida de varios tipos de datos.

### raw_input()
Esto se usa para tomar entrada mientras no se haya alcanzado el final de la línea. Tenga en cuenta que no deben haber espacios. Tomar entrada termina con un carácter de nueva línea y si hay espacios en la línea de entrada, resulta en un error.

    # Imprime la entrada recibida desde stdin
    astring=raw_input() # da hello como entrada
    print raw_input()

Después de tomar la entrada, podemos convertirla a nuestro tipo de dato requerido usando funciones como int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

### input()
Esto se usa especialmente para ingresar enteros. La ventaja de input() sobre raw_input() se puede aclarar con el siguiente ejemplo

    # da 2*2 como entrada
    a=input()
    b=raw_input() # tenga en cuenta que int(raw_input()) resulta en error
    print a # imprime 4
    print b # imprime 2*2

### ¿Cómo tomar dos o más tipos de datos como entrada desde una sola línea separada por espacios?
Aquí hacemos uso de las funciones split() y map()

    # da dos enteros en la primera línea y más de dos enteros en la tercera línea
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # imprime los dos primeros enteros de la primera línea y la suma de los enteros de la segunda línea

### Formato de salida
Quizás ya hayas notado que la instrucción print automáticamente inserta una nueva línea. El uso de comas como en el código anterior imprime los valores en una sola línea separados por un espacio. El módulo sys proporciona varias funciones para el formato de salida, pero aquí aprenderemos cómo usar el conocimiento básico de formato para obtener el resultado de nuestra manera requerida. Veamos algunos ejemplos para aprender el formato de salida

    a = 5
    b = 0.63
    c = "hello"
    print "a es : %d, b es %0.4f,c es %s" % (a,b,c)

La salida debe ser autoexplicativa.

Ejercicio
--------

Escribe un programa que pida al usuario que ingrese su nombre, edad y país. El programa debe luego imprimir un mensaje que incluya esta información en una oración. El programa debe incluir:

1. Tomar un nombre como entrada usando `raw_input()`.
2. Tomar una edad como entrada usando `input()` y convertirla a un entero.
3. Tomar un nombre de país como entrada usando `raw_input()`.
4. Formatear la salida para mostrar una oración que incluya el nombre, edad y país.

El programa debe demostrar manejo de entrada y formato de cadena en Python.