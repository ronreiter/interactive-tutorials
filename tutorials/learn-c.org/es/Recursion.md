Tutorial
--------
 
La recursión ocurre cuando una función contiene una llamada a sí misma. La recursión puede resultar en código elegante que es intuitivo de seguir. También puede resultar en una gran cantidad de memoria siendo usada si la recursión llega a ser muy profunda.
 
Ejemplos comunes donde la recursión es usada:
 
* Recorrer estructuras de datos recursivas como listas enlazadas, árboles binarios, etc.
* Explorar posibles casos en juegos como el ajedrez
 
La recursión siempre consta de dos partes principales. Un caso finalizador que indica cuándo la recursión va a terminar y una llamada a sí misma que debe hacer progreso hacia el caso finalizador.
 
Por ejemplo, esta función multiplicará sumando recursivamente:

    #include <stdio.h>

    unsigned int multiply(unsigned int x, unsigned int y)
    {
        if (x == 1)
        {
            /* Caso finalizador */
            return y;
        }
        else if (x > 1)
        {
            /* Paso recursivo */
            return y + multiply(x-1, y);
        }
 
        /* Atrapa el caso cuando x es cero */
        return 0;
    }

    int main() {
        printf("3 por 5 es %d", multiply(3, 5));
        return 0;
    }
 
Ejercicio
--------
 
Define una nueva función llamada `factorial()` que calculará el factorial con multiplicación recursiva (5! = 5 x 4 x 3 x 2 x 1). Nota que por definición, el factorial de 0 es igual a 1 (0! = 1).
 
Tutorial Code
-------------

    #include <stdio.h>

    int main() {
        /* código de prueba */
        printf("0! = %i\n", factorial(0));
        printf("1! = %i\n", factorial(1));
        printf("3! = %i\n", factorial(3));
        printf("5! = %i\n", factorial(5));
    }
    
    /* define tu función aquí (no olvides declararla) */

Expected Output
---------------

    0! = 1
    1! = 1
    3! = 6
    5! = 120

Solution
--------

    #include <stdio.h>

    int factorial(int number);

    int main() {
        /* código de prueba */
        printf("0! = %i\n", factorial(0));
        printf("1! = %i\n", factorial(1));
        printf("3! = %i\n", factorial(3));
        printf("5! = %i\n", factorial(5));
    }

    int factorial(int number) {
        if (number > 1) {
            return number * factorial(number-1);
        }
        else {
	           return 1;
        }
    }
