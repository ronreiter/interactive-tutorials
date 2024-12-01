
Tutorial
---------

Anteriormente aprendiste qué es un puntero y cómo manipularlo. En este tutorial aprenderá las operaciones aritméticas con punteros.
Hay múltiples operaciones aritméticas que se pueden aplicar en punteros C: ++, —, -, +

### Incrementar un puntero con (++)
Al igual que cualquier variable, la operación ++ aumenta el valor de esa variable. En nuestro caso aquí, la variable es un puntero, por lo tanto, cuando aumentamos su valor, estamos aumentando la dirección en la memoria a la que apunta ese puntero.
Combinemos esta operación con una matriz en nuestro ejemplo:

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] tiene valor %d - y dirección @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[3]; //apunta al 4º elemento del array
	    printf("dirección: %x - tiene valor %d\n", intpointer, *intpointer); //imprimir la dirección del 4º elemento
	    
	    intpointer++; //ahora incrementa la dirección del puntero para que apunte al 5º elemento del array
	    printf("dirección: %x - tiene valor %d\n", intpointer, *intpointer); //imprimir la dirección del 5º elemento
	    
	    return 0;
	}

Disminuyendo un puntero con (- -)
Al igual que en nuestro ejemplo anterior, aumentamos la dirección apuntada del puntero en uno usando el operador ++, podemos disminuir la dirección apuntada en uno usando el operador de decremento (- -).

```
#include <stdio.h>

int main()
{
    int intarray[5] = {10,20,30,40,50};
    
    int i;
    for(i = 0; i < 5; i++)
        printf("intarray[%d] tiene valor %d - y dirección @ %x\n", i, intarray[i], &intarray[i]);
    
    
    int *intpointer = &intarray[4]; //señala el 5º elemento de la matriz
    printf("dirección: %x - tiene valor %d\n", intpointer, *intpointer); //imprime la dirección del 5º elemento
    
    intpointer--; //ahora disminuye la dirección del punto para que apunte al 4º elemento del array
    printf("dirección: %x - tiene valor %d\n", intpointer, *intpointer); //imprime la dirección del 4º elemento
    
    return 0;
}
```
### Agregar punteros con (+)
Anteriormente aumentamos en uno la dirección a la que apunta un puntero. También podemos aumentarlo en un valor entero como:

```
#include <stdio.h>

int main()
{
    int intarray[5] = {10,20,30,40,50};
    
    int i;
    for(i = 0; i < 5; i++)
        printf("intarray[%d] tiene valor: %d - y dirección @ %x\n", i, intarray[i], &intarray[i]);
    
    
    int *intpointer = &intarray[1]; //señala el 2º elemento de la matriz
    printf("dirección: %x - tiene valor %d\n", intpointer, *intpointer); //imprime la dirección del 2º elemento
    
    intpointer += 2; //ahora desplaza por dos la dirección del punto para que apunte al 4º elemento del array
    printf("dirección: %x - tiene valor %d\n", intpointer, *intpointer); //imprime la dirección del 4º elemento
    
    return 0;
}
```
Observe cómo en la salida la dirección cambió 8 pasos en la memoria. Quizás te preguntes ¿por qué?

La respuesta es simple: debido a que nuestro puntero es un puntero int y el tamaño de una variable int es de 4 bytes, la memoria se puede desplazar en 4 bloques. En nuestro código cambiamos 2 (agregamos +2) a la dirección inicial para que sean 2 x 4 bytes = 8.

### Restar punteros con (-)
De manera similar podemos restar:

	#include <stdio.h>

	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] tiene valor: %d - y dirección @ %x\n", i, intarray[i], &intarray[i]);
    
	    int *intpointer = &intarray[4]; //apunta al 5º elemento de la matriz
	    printf("dirección: %x - tiene valor %d\n", intpointer, *intpointer); //imprime la dirección del 5º elemento
    
	    intpointer -= 2; //ahora desplaza en dos la dirección del punto para que apunte al 3er elemento de la matriz
	    printf("dirección: %x - tiene valor %d\n", intpointer, *intpointer); //imprime la dirección del 3er elemento
    
	    return 0;
	}
nuevamente la dirección se desplaza en bloques de 4 bytes (en el caso de int).

### Otras operaciones
Hay más operaciones como comparación >, <, ==. La idea es muy similar a comparar variables, pero en este caso estamos comparando direcciones de memoria.

Ejercicio
----
Copie las últimas tres direcciones de intarray en parray, que es una matriz de punteros a un int.

Código de Tutorial
-------------
    #include <stdio.h>
	
    int main() {
    	int intarray[5] = {10,20,30,40,50};
        //-----------------------^
        int *pointer = &intarray[2];

        // Array de 3 punteros
        int *parray[3];

        // Copia las tres últimas direcciones de intarray en parray
        // Usar parray y puntero
        int i;
        for (i = 0; i < 3; i++) {
            // Inserte aquí el código
        }

        // Código de prueba
        for (i = 0; i < 3; i++) {
            if (parray[i] == &pointer[i]) {
                printf("Coinciden!\n");
            } else {
                printf("Fallan");
            }
        }

        return 0;
    }

Salida Esperada
---------------
    ¡Coinciden!
    ¡Coinciden!
    ¡Coinciden!

Solución
--------
    #include <stdio.h>

    int main() {
        int intarray[5] = {10,20,30,40,50};
        //-----------------------^
        int *pointer = &intarray[2];

        int *parray[3];

        int i;
        for (i = 0; i < 3; i++) {
            parray[i] = pointer + i;
        }

        for (i = 0; i < 3; i++) {
            if (parray[i] == &pointer[i]) {
                printf("¡Coinciden!\n");
            } else {
                printf("Falla\n");
            }
        }

        return 0;
    }
