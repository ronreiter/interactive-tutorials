Hay dos tipos de bucles en Python, for y while.

### El bucle "for"

Los bucles for iteran sobre una secuencia dada. Aquí hay un ejemplo:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

Los bucles for pueden iterar sobre una secuencia de números usando las funciones "range" y "xrange". La diferencia entre range y xrange es que la función range devuelve una nueva lista con números de ese rango específico, mientras que xrange devuelve un iterador, lo cual es más eficiente. (Python 3 usa la función range, que actúa como xrange). Ten en cuenta que la función range es basada en cero.

    # Imprime los números 0,1,2,3,4
    for x in range(5):
        print(x)

    # Imprime 3,4,5
    for x in range(3, 6):
        print(x)

    # Imprime 3,5,7
    for x in range(3, 8, 2):
        print(x)

### Bucles "while"

Los bucles while se repiten mientras se cumpla una cierta condición booleana. Por ejemplo:

    # Imprime 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Esto es lo mismo que count = count + 1

### Sentencias "break" y "continue"

**break** se utiliza para salir de un bucle for o while, mientras que **continue** se utiliza para saltar el bloque actual y volver a la sentencia "for" o "while". Algunos ejemplos:

    # Imprime 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Imprime solo números impares - 1,3,5,7,9
    for x in range(10):
        # Verificar si x es par
        if x % 2 == 0:
            continue
        print(x)

### ¿Podemos usar la cláusula "else" en bucles?

A diferencia de lenguajes como C, CPP... podemos usar **else** en bucles. Cuando la condición del bucle de la sentencia "for" o "while" falla, entonces se ejecuta la parte del código en "else". Si se ejecuta una sentencia **break** dentro del bucle for, entonces se omite la parte "else". 
Ten en cuenta que la parte "else" se ejecuta incluso si hay una sentencia **continue**.

Aquí hay algunos ejemplos:

    # Imprime 0,1,2,3,4 y luego imprime "el valor de count alcanzó 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("el valor de count alcanzó %d" %(count))

    # Imprime 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("esto no se imprime porque el bucle for se termina debido a un break pero no por fallar en la condición")


Ejercicio
--------

Recorre e imprime todos los números pares de la lista de números en el mismo orden en que se reciben. No imprimas ningún número que venga después de 237 en la secuencia.