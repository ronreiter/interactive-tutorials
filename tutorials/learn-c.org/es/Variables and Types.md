Tutorial
--------

### Tipos de datos

C tiene varios tipos de variables, pero hay unos cuantos tipos básicos:

* Enteros - números enteros los cuales pueden ser positivos o negativos. Definidos usando `char`, `int`, `short`, `long` o `long long`.
* Enteros sin signo - números enteros los cuales solo pueden ser positivos. Definidos usando `unsigned char`, `unsigned int`, `unsigned short`, `unsigned long` o `unsigned long long`.
* Números con punto flotante - números reales (números con fracciones). Definidos usando `float` y `double`.
* Booleanos - o verdadero o falso: o `true` o `false`. Definidos usando `bool`. En versiones viejas de C, el tipo `char` se usaba para representar a los booleanos.
* Estructuras - serán explicadas luego, en la sección de estructuras.

Los distintos tipos de variables definen sus límites. Un `char` tiene un rango de -128 a 127, mientras que un `long` puede tener un rango de -2,147,483,648 a 2,147,483,647 (`long` y otros tipos de datos numéricos pueden tener otro rango en diferentes computadoras, por ejemplo - de –9,223,372,036,854,775,808 a 9,223,372,036,854,775,807 en una computadora de 64 bits).

C usa arreglos de caractéres para definir strings, y será explicado en la sección de Strings.

### Definiendo variables

Para los números, usualmente se usa el tipo `int`. En muchas computadoras hoy en día, es un número de 32 bits, lo cual significa que el número irá de -2,147,483,648 a 2,147,483,647.

Para definir las variables `foo` y `bar`, debemos usar la siguiente sintáxis:

    int foo;
    int bar = 1;

La variable `foo` puede ser usada, pero como no la inicializamos, no sabemos qué hay en ella. La variable `bar` contiene el número 1.

Ahora, podemos hacer un poco de matemática. Asumiendo que `a`, `b`, `c`, `d`, y `e` son variables, podemos simplemente usar los operadores de suma, resta y multiplicación
en la siguiente notación, y asignar un nuevo valor a `a`:

    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d", a); /* will print 1-2+3*4 = 11 */

Ejercicio
--------

En el siguiente ejercicio, tendrás que crear un programa el cual imprime la suma de los números `a`, `b`, y `c`.

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      float sum;

      /* Tu código va aquí */

      printf("La suma de a, b, y c es %f.", sum);
      return 0;
    }

Expected Output
---------------
    La suma de a, b, y c es 12.750000.

Solution
--------
    #include <stdio.h>

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      float sum;

      sum = a + b + c;

      printf("La suma de a, b, y c es %f.", sum);
      return 0;
    }
