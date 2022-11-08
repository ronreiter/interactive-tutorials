Tutorial
--------
`static` es una palabra clave en el lenguaje de programación C. Puede ser usada con variables y funciones.

### ¿Qué es una variable estática?
Por defecto, las variables son locales al scope (alcance) en el cual son definidas. Las variables pueden ser declaradas como estáticas para incrementar el alcance (scope) en el archivo que las contenga. Como resultado, estas variables pueden ser accedidas en cualquier lugar dentro del archivo.

Considera el siguiente caso – queremos contar a los corredores participando en una carrera:

    #include<stdio.h>
    int runner() {
        int count = 0;
        count++;
        return count;
    }

    int main()
    {
        printf("%d ", runner());
        printf("%d ", runner());
        return 0;
    }

Veremos que `count` no es actualizada porque es removida de la memoria tan pronto la función termine.  Sin embargo, si `static` es usado:

    #include<stdio.h>
    int runner()
    {
        static int count = 0;
        count++;
        return count;
    }

    int main()
    {
        printf("%d ", runner());
        printf("%d ", runner());
        return 0;
    }

### ¿Qué es una función estática?
Por defecto, las funciones son globales en C. Si declaramos una función con `static`, el alcance de esa función es reducido al archivo que la conteniene.

La sintáxis luce así:

    static void fun(void) {
       printf("Soy una función estática.");
    }

### ¿Estático vs Global?
Mientras que las variables estáticas tienen alcance sobre el archivo que las contienen, haciéndolas accesibles solo dentro de un archivo dado, las variables globales también pueden ser accedidas fuera del archivo.

Ejercicio
--------
En este ejercicio, intenta encontrar la suma de algunos números usando la palabra clave static. No pases ninguna variable representando el total actual de la función `sum()`.

Tutorial Code
-------------

   #include <stdio.h>
   int sum (int num) {
       /**
       * encuentra la suma para n números
       */
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }

Expected Output
---------------

   55 100 150

Solution
--------

   #include <stdio.h>
   int sum (int num) {
       static int total = 0;
       total += num;
       return total;
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }

