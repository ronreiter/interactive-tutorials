Tutorial
--------

Los arreglos son variables especiales los cuales pueden contener más de un valor bajo el mismo nombre de variable, organizado con un índice. Los arreglos son definidos usando una
sintáxis muy directa:

    /* Crea un arreglo(array) con 10 números enteros */
    int numbers[10];

Para acceder al número de un arreglo se usa la misma sintáxis. Nota que el índice de un arreglos en C empieza en el índice 0, lo cual significa que si
definimos un arreglo de tamaño 10, entonces se crean las celdas de 0 a 9 (No del 1 al 10). `numbers[10]` no es un valor.

    int numbers[10];

    /* Promedio del arreglo */
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    /* Imprime el séptimo número del arreglo, el cual tiene un índice de 6 */
    printf("El séptimo número en el arreglo es %d", numbers[6]);

Los arreglos pueden tener solo un tipo de variable, porque son implementados como una secuencia de valores en la memoria de la computadora.
Por eso, acceder una única celda específica del arreglo es muy eficiente.

Ejercicio
--------

* El código de abajo no compila, ya que no existe la variable `grades`. 
* Falta una de las calificaciones. ¿Puedes definirla para que el promedio de calificaciones sea 85?

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      /* TODO: define la variable grades aquí */
      int average;

      grades[0] = 80;
      /* TODO: define la calificación faltante
         así el promedio suma 85. */
      grades[2] = 90;

      average = (grades[0] + grades[1] + grades[2]) / 3;
      printf("El promedio de las 3 calificaciones es: %d", average);

      return 0;
    }

Output esperado
---------------

    El promedio de las 3 calificaciones es: 85

Solucion
--------

    #include <stdio.h>

    int main() {
      /* TODO: define la variable grades aquí */
      int grades[3];
      int average;

      grades[0] = 80;
      /* TODO: define la calificación faltante
         así el promedio suma 85. */
      grades[1] = 85;
      grades[2] = 90;

      average = (grades[0] + grades[1] + grades[2]) / 3;
      printf("El promedio de las 3 calificaciones es: %d", average);

      return 0;
    }
