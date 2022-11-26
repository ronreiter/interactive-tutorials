Tutorial
--------

Las funciones de C son simples, pero de la manera que funciona C, el poder de las funciones es un poco limitado.

* Las funciones reciben o una cantidad fija o variada de argumentos.
* Las funciones solo pueden devolver un valor, o no devolver ningún valor.

En C, los argumentos son copiados por valor a las funciones, lo cual significa que no podemos cambiar los argumentos para afectar su valor fuera de
la función. Para hacer eso, debemos usar punteros, los cuales serán enseñados luego.

Las funciones son definidas usando la siguiente sintáxis:

    int foo(int bar) {
        /* hacer algo */
        return bar * 2;
    }

    int main() {
        foo(1);
    }

La función `foo` recibe un argmento, el cual es `bar`. La función recibe un entero, lo multiplica por dos, y devuelve el resultado. 

Para ejecutar la función `foo` con 1 como el argumento `bar`, usamos la siguiente sintáxis:

    foo(1);

En C, las funciones deben ser definidas antes de ser usadas en el código. Pueden o ser declaradas primero y luego implementadas en un 
archivo cabecera o en el principio de un archivo de C, o pueden ser implementadas en el orden en el que son usadas (menos preferible).

La manera correcta de usar funciones es la siguiente:

    /* declaración de una función */
    int foo(int bar);

    int main() {
        /* llamando a foo desde main */
        printf("El valor de foo es %d", foo(1));
    }

    int foo(int bar) {
        return bar + 1;
    }

También podemos crear funciones que no devuelven un valor usando la palabra clave `void`:

    void moo() {
        /* hacer algo y no devolver un valor */
    }

    int main() {
        moo();
    }

Ejercicio
--------

Escribe una función llamada `print_big` la cual recibe un argumento (un entero) e imprime la línea `x es grande` (donde x es el argumento) si el argumento dado
a la función es un número mayor a 10. 

* **Importante**: No te olvides de añadir un caracter de nueva línea `\n` al final del string en printf.

Tutorial Code
-------------

    #include <stdio.h>

    /* declaración de una función */
    void print_big(int number);

    int main() {
      int array[] = { 1, 11, 2, 22, 3, 33 };
      int i;
      for (i = 0; i < 6; i++) {
        print_big(array[i]);
      }
      return 0;
    }

    /* escribe tu función aquí */

Expected Output
---------------

    11 es grande
    22 es grande
    33 es grande

Solution
--------

    #include <stdio.h>

    /* declaración de una función */
    void print_big(int number);

    int main() {
      int array[] = { 1, 11, 2, 22, 3, 33 };
      int i;
      for (i = 0; i < 6; i++) {
        print_big(array[i]);
      }
      return 0;
    }

    void print_big(int number){
        if(number > 10){
            printf("%d es grande\n",number);
        }
    }

