Tutorial
--------

Los arreglos son variables especiales los cuales pueden sostener más de un valor bajo el mismo nombre de variable, organizado con un índice. Los arreglos son definidos usando una
sintáxis muy directa:

    /* define un arreglo de 10 enteros */
    int numbers[10];

Para acceder a un número del arreglo se usa la misma sintáxis. Nótese que los arreglos en C empiezan en 0, lo cual significa que si
definimos un arreglo de tamaño 10, entonces se definen las celdas de 0 a 9 (inclusive). `numbers[10]` no es un valor.

    int numbers[10];

    /* popular el arreglo */
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    /* imprime el 7mo número del arreglo, el cual tiene un índice de 6 */
    printf("El 7mo número en el arreglo es %d", numbers[6]);

Los arreglos pueden tener un solo tipo de variable, porque son implementados como una secuencia de valores en la memoria de la computadora.
Por eso, acceder una celda específica del arreglo es muy eficiente.

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

Expected Output
---------------

    El promedio de las 3 calificaciones es: 85

Solution
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
