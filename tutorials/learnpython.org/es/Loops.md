Tutorial
--------

Hay dos tipos de búcles en Python, for y while.

### El búcle "for"

Los búcles For iteran sobre una secuencia. Aquí un ejemplo:

    primes = [2,3,5,7]
    for prime in primes:
        print prime

Para bucles pueden iterar sobre una secuencia de números usando las funciones de "range" y "xrange". La diferencia entre rango y range el que la función de rango devuelve una nueva lista con números que el rango especifica, donde xrange devuelve un iterador, el cual es muy eficiente. (Python 3 usa la función range, el cual actua como xrange). Nota que la función xrange esta basada en zero.

    # Muestra todos los números entre 0,1,2,3,4
    for x in xrange(5):
        print x

    # Muestra 3,4,5
    for x in xrange(3,6):
        print x

### búcle "while"

Mientras que los búcles While se repiten mientras se cumpla una condición buleana sea cumplida. Por ejemplo:

    # Muestra 0,1,2,3,4

    count = 0
    while count < 5:
        print count
        count += 1  # This is the same as count = count + 1

### sentencias "break" y "continue"

**break** es usado para salir de un búcle o un búcle while, donde **continue** es usado para saltar el bloque actual, y el retorno de las sentencias "for" o "while". Aquí unos ejemplos:

    # Muestra 0,1,2,3,4

    count = 0
    while True:
        print count
        count += 1
        if count >= 5:
            break

    # Muestra solo números impares - 1,3,5,7,9
    for x in xrange(10):
        # Check if x is even
        if x % 2 == 0:
            continue
        print x

### Ejercicio

Búcles que muestra todos los números impares de los números de la lista en el mismo orden que es recibido, pero solo en el número "412" (sin incluirlos) Se pare e ignore todos los números mayores a 412 en la sentencia. (Nota que habra números superior a 412.)

Tutorial Code
-------------

numbers = [
    951, 402, 984, 651, 360, 69, 408, 319, 601, 485, 980, 507, 725, 547, 544,
    615, 83, 165, 141, 501, 263, 617, 865, 575, 219, 390, 984, 592, 236, 105, 942, 941,
    386, 462, 47, 418, 907, 344, 236, 375, 823, 566, 597, 978, 328, 615, 953, 345,
    399, 162, 758, 219, 918, 237, 412, 566, 826, 248, 866, 950, 626, 949, 687, 217,
    815, 67, 104, 58, 512, 24, 892, 894, 767, 553, 81, 379, 843, 831, 445, 742, 717,
    958, 609, 842, 451, 688, 753, 854, 685, 93, 857, 440, 380, 126, 721, 328, 753, 470,
    743, 527
]

# your code goes here


Expected Output
---------------

402
360
408
390
236
386
344
236
328
162
248
104
58
24
380
126
328

Solution
--------