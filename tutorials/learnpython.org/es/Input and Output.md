Tutorial
--------
Coger la entrada y mostrar la salida de la forma requerida juega un papel importante en la codificación interactiva. Así que vamos a centrarnos en la entrada y salida de varios tipos de datos

###raw_input()
Esto se usa para coger la entrada hasta el final de la línea. Hay que tomar en cuenta que no debe haber ningún espacio. La entrada finaliza con un caracter de nueva linea y si hay espacios en la línea de entrada se produce un error.

    # Prints out the input received from stdin
    astring=raw_input()# give hello as input
    print raw_input()

Después de coger la entrada podemos convertila en el tipo de dato que necesitemos usando funciones como int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
Esto se usa especialmente para introducir enteros. Las ventajas de input() respeto a raw_input() pueden clarificarse con el siguiente ejemplo

    #give 2*2 as input
    a=input()
    b=raw_input() #note that int(raw_input()) results in error
    print a #prints 4
    print b #prints 2*2

###¿Cómo coger dos o más tipos de datos de entrada de una línea separada por espacios?
Aquí vamos a usar las funciones split() y map()

    #Coge dos enteros en la primera línea y más de dos en la tercera
    a,b=map(int,raw_input().split()
    array=raw_input().split()
    sum=0
    for each in array:
        sum=sum+int(each)
    print a,b,sum #imprime los dos primeros enteros desde la primera linea y suma los enteros de la segunda

###Formateo de salida
You might have already noticed that print statement automatically inserts a new line. The use of comma like in the above code prints the values in a single line separated by a space.Es posible que hayas notado que imprimir la declaración automáticamente inserta una nueva línea. El uso de la coma cómo en el código anterior imprime los varoes en una sola línea separada por un espacio.

    a=5
    b=0.63
    c="hello"
    print "a is : %d, b is %0.4f,c is %s" %(a,b,c)

La salida debe explicarse por sí sola
