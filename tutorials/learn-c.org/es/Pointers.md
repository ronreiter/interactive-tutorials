
Tutorial
--------
Los punteros también son variables y juegan un papel muy importante en el lenguaje de programación C. Se utilizan por varias razones, tales como:

* Strings
* Asignación de memoria dinámica 
* Envío de argumentos a funciones por referencia
* Construcción de estructuras de datos complicadas
* Apuntar a funciones
* Construcción de estructuras de datos especiales (es decir, árbol, intentos, etc.)

Y muchos más.

### ¿Qué es un puntero?

Un puntero es esencialmente una variable entera simple que contiene una **dirección de memoria** que apunta a un valor, en lugar de contener el valor real en sí.

La memoria de la computadora es un almacén secuencial de datos y un puntero apunta a una parte específica de la memoria. Nuestro programa puede usar punteros de tal manera que los punteros apunten a una gran cantidad de memoria, dependiendo de cuánto decidamos leer a partir de ese momento.

### Cadenas como punteros

Ya hemos hablado de las cadenas, pero ahora podemos profundizar un poco más y comprender qué son realmente las cadenas en C (que se llaman C-Strings para diferenciarlas de otras cadenas cuando se mezclan con C++).

La siguiente línea:

	char * nombre = "John";

hace tres cosas:

1. Asigna una variable local (pila) llamada ` nombre` , que es un puntero a un solo carácter. 
2. Hace que la cadena "John" aparezca en algún lugar de la memoria del programa (después de compilarlo y ejecutarlo, por supuesto). 
3. Inicializa el argumento ` nombre ` para señalar dónde reside el carácter ` J ` (que es seguido por el resto de la cadena en la memoria).

Si intentamos acceder a la variable ` nombre` como una matriz, funcionará y devolverá el valor ordinal del carácter ` J` , ya que la variable ` nombre` en realidad apunta exactamente al comienzo de la cadena.

Como sabemos que la memoria es secuencial, podemos asumir que si avanzamos en la memoria al siguiente carácter, recibiremos la siguiente letra de la cadena, hasta llegar al final de la cadena, marcado con un terminador nulo. (el carácter con el valor ordinal de 0, anotado como ` \0 ` ).

### Desreferenciación

La desreferenciación es el acto de hacer referencia a dónde apunta el puntero, en lugar de a la dirección de memoria. Ya estamos usando la desreferenciación en matrices, pero aún no lo sabíamos. El operador de corchetes - ` [0] ` por ejemplo, accede al primer elemento de la matriz. Y dado que las matrices son en realidad punteros, acceder al primer elemento de la matriz es lo mismo que desreferenciar un puntero. La desreferenciación de un puntero se realiza utilizando el operador de asterisco ` * ` .

Si queremos crear una matriz que apunte a una variable diferente en nuestra pila, podemos escribir el siguiente código:

	/* definir una variable local a */
	int a = 1;
	/* define una variable de puntero y apúntala a usando el operador & */
	int * pointer_to_a = &a;
	printf("El valor a es %d\n", a);
	printf("El valor de a también es %d\n", *pointer_to_a);

Observe que usamos el operador ` & ` para señalar la variable ` a` , que acabamos de crear.

Luego nos referimos a él utilizando el operador de desreferenciación. También podemos cambiar el contenido de la variable desreferenciada:     				

	int a = 1;
	int * pointer_to_a = &a;     

	/* cambiemos la variable a */
	a += 1;

	/* ¡acabamos de cambiar la variable nuevamente! */
	*pointer_to_a += 1;
	/* imprimirá 3 */
	printf("El valor de a ahora es %d\n", a);

Ejercicio 
--------
Cree un puntero a la variable local ` n ` llamada ` pointer_to_n ` y utilícelo para aumentar el valor de ` n ` en uno.

Código del tutorial 
-------------      
```
#include <stdio.h>

int main() {
  int n = 10;

  /* tu código va aquí */

  /* código de prueba */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;

  printf("Listo!\n");
  return 0;
}
```
Resultado esperado 
---------------
     ¡Listo!

Solución 
-------- 
```
#include <stdio.h>

int main() {
  int n = 10;

  int * pointer_to_n = &n;

  *pointer_to_n += 1;

  /* testing code */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;

  printf("Done!\n");
  return 0;
}
```
