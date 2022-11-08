Tutorial
--------

Los bucles for en C son directos. Dan la habilidad de crear un bucle - un bloque de código que corre multiples veces. 
Los bucles for requieren una variable iteradora, usualmente denominada `i`.

Los bucles for dan la siguiente funcionalidad:

* Inicializar la variable iteradora usando un valor inicial
* Revisar si el iterador ha llegado a su valor final
* Incrementa el iterador

Por ejemplo, si deseamos iterar un bloque 10 veces, escribimos:

    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

Este bloque imprimirá los números del 0 al 9 (10 números en total).

Los bucles for pueden iterar en valores de arreglos. Por ejemplo, si fuesemos a sumar todos los valores de un arreglo, usaríamos
el iterador `i` como el índice del arreglo:

    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0;
    int i;
    
    for (i = 0; i < 10; i++) {
        sum += array[i];
    }

    /* sum ahora contiene a[0] + a[1] + ... + a[9] */
    printf("La suma del arreglo es %d\n", sum);

Ejercicio
--------

Calcula el factorial (multiplicación de todos los items `array[0]` a `array[9]`, inclusive), de la variable `array`.

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
      int factorial = 1;
      int i;

      /* calcula el factorial usando un bucle for aquí*/

      printf("10! es %d.\n", factorial);
    }

Expected Output
---------------

    10! es 3628800.

Solution
--------

    #include <stdio.h>

    int main() {
      int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
      int factorial = 1;

      int i;

      for(i=0;i<10;i++){
        factorial *= array[i];
      }

      printf("10! es %d.\n", factorial);
    }
