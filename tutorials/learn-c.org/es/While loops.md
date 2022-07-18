Tutorial
--------

Los bucles while son similares a los bucles for, pero tienen menos funcionalidad. Un bucle while continúa ejecutando el bloque de código siempre y cuando la
condición en el while sea verdadera. Por ejemplo, el siguiente código se ejecutará exactamente diez veces:

    int n = 0;
    while (n < 10) {
        n++;
    }

Los bucles while pueden ejecutarse infinitamente si una condición es dada la cual siempre se evalua como verdadera (no-zero):

    while (1) {
       /* hacer algo */
    }

### Directivas de bucles

Hay dos directivas importantes de bucles que son usadas con todos los tipos de bucles en C - las directivas `break` y `continue`.

La directiva `break` detiene un bucle luego de diez bucles, aunque el bucle while nunca termina:

    int n = 0;
    while (1) {
        n++;
        if (n == 10) {
            break;
        }
    }

En el siguiente código, la directiva `continue` causa que el comando `printf` sea salteado, así solo los números pares son impresos:

    int n = 0;
    while (n < 10) {
        n++;

        /* fijarse si n es impar */
        if (n % 2 == 1) {
            /* volver al principio del bloque while */
            continue;
        }

        /* llegamos a este código si n es par */
        printf("El número %d es par.\n", n);
    }

Ejercicio
--------

La variable `array` consiste de una secuencia de diez números. Dentro del bucle while, debes escribir dos condiciones `if`, 
las cuales cambian el flujo del bucle de la siguiente manera (sin cambiar el comando `printf`):

* Si el número el cual está a punto de ser impreso es menor que 5, no lo imprimas.
* Si el número el cual está a punto de ser impreso es mayor que 10, no lo imprimas y deten el bucle.

Nota que si no avanzas la variable iteradora `i` y usas la directiva `continue`, quedarás atrapado en un bucle infinito.

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
        int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
        int i = 0;

        while (i < 10) {
            /* tu código va aquí */

            printf("%d\n", array[i]);
            i++;
        }

        return 0;
    }

Expected Output
---------------

    7
    5
    9
    5

Solution
--------

    #include <stdio.h>

    int main() {
        int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
        int i = 0;

        while (i < 10) {
            if(array[i] < 5){
                i++;
                continue;
            }

            if(array[i] > 10){
                break;
            }

            printf("%d\n", array[i]);
            i++;
        }

        return 0;
    }
