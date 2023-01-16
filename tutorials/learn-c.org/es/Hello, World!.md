Tutorial
--------

### Introducción

El lenguaje de programación C es un lenguaje de programación de propósito general, el cual se relaciona mucho con la manera de cómo funcionan las máquinas.
Entender cómo la memoria de la computadora funciona es un aspecto importante del lenguaje  de programación C.
A pesar de que C puede ser considerado como "difícil de aprender", C es de hecho un lenguaje muy simple, con capacidades poderosas.

C es un lenguaje muy común, y es el lenguaje de muchas aplicaciones como Windows, el intérprete de Python, Git y muchas muchas más.

C es un lenguaje compilado - lo cual significa que para ejecutarlo, el compilador (por ejemplo, GCC o Visual Studio) debe tomar el código que escribimos, procesarlo y luego crear un archivo ejecutable. Luego este archivo puede ser ejecutado, y hará lo que nosotros le dijimos al programa que haga.

### Nuestro primer programa

Todo programa en C usa librerías, las cuales dan la habilidad de ejectuar funciones necesarias. Por ejemplo, la función más básica llamada `printf`, la cual imprime a la pantalla, está definida en el archivo cabecera `stdio.h`.

Para añadir la habilidad de correr el comando `printf` a nuestro programa, debemos añadir la siguiente directiva include a nuestra primera línea del código:

    #include <stdio.h>

La segunda parte del código es el código que vamos a escribir. El primer código que correra siempre estará dentro de la función `main`. 

    int main() {
      ... nuestro código va aquí
    }

La palabra clave `int` indica que la función `main` devolverá un entero - un simple número. El número devuelto por la función indica si el programa que escribimos funciona correctamente. Si queremos decir que nuestro código corrió exitosamente, devolveremos el número 0. Un número mayor que 0 significará que el programa que escribimos falló.

Para este tutorial, devolveremos 0 para indicar que nuestro programa fue exitoso:

    return 0;

Tenga en cuenta que cada declaración en C debe terminar con un punto y coma, para que el compilador sepa que ha comenzado una nueva declaración.

Por último pero no menos importante, deberemos llamar a la función `printf` para imprimir nuestra oración.

Ejercicio
--------

Cambia el programa de abajo para que imprima a la salida "Hola, Mundo!". 

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      printf("Adios, Mundo!");
      return 0;
    }

Expected Output
---------------

    Hola, Mundo!

Solución
--------

    #include <stdio.h>

    int main() {
      printf("Hola, Mundo!");
      return 0;
    }
