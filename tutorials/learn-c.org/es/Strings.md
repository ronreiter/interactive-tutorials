Tutorial
--------

### Definiendo strings

Los strings en C son arreglos de caracteres. Aunque usar punteros en C es un tema avanzado, explicado más adelante, usaremos punteros para definir strings simples, de la siguiente manera:

    char * name = "John Smith";

Este método crea un string el cual solo se puede usar para leerlo. 
Si deseamos definir un string que puede ser manipulado, tendremos que definirlo como un arreglo de caracteres locales:

    char name[] = "John Smith";

Esta notación es diferente porque aloca un arreglo para que podamos manipularlo. La notación de corchetes vacíos `[]` le dice al
compilador que calcule el tamaño del arreglo automaticamente. De hecho, esto es lo mismo que alocarlo explicitamente, añadiendo uno a 
la longitud del string:

    char name[] = "John Smith";
    /* es lo mismo que */
    char name[11] = "John Smith";

La razón por la que debemos añadir uno, aunque el string `John Smith` tiene exactamente 10 caracteres, se debe a la terminación de strings:
un caracter especial (igual a 0) el cual indica el final del string. El final del string es marcado porque el programa
no sabe la longitud del string - solo el compilador la sabe según el código.

### Formateando strings con printf

Podemos usar el comando `printf` para formatear un string junto a otros strings, de la siguiente manera:

    char * name = "John Smith";
    int age = 27;

    /* imprime 'John Smith tiene 27 años.' */
    printf("%s tiene %d años.\n", name, age);

Notemos que cuando imprimimos strings, debemos añadir un caracter de nueva línea (`\n`) para que nuestra próxima sentencia `printf` se imprima en una nueva línea.

### Longitud de Strings

La función 'strlen' devuelve la longitud del string que es pasado como su argumento:

    char * name = "Nikhil";
    printf("%d\n",strlen(name));        

### Comparación de strings

La función `strncmp` compara entre dos strings, devolviendo 0 si son iguales, o un número distinto si son diferentes.
Los argumentos son los dos strings a comparar, y la longitud máxima de comparación. También existe una versión poco segura de esta función
llamada `strcmp`, pero no es recomendada usarla. Por ejemplo:

    char * name = "John";

    if (strncmp(name, "John", 4) == 0) {
        printf("Hola, John!\n");
    } else {
        printf("No eres John. Vete.\n");
    }

### Concatenación de Strings

La función 'strncat' junta los primeros n caracteres del string fuente al string destino donde n es min(n,length(src));
Los argumentos pasados son el string destino, el string fuente, y n - el máximo número de caracteres a juntar. Por ejemplo:

    char dest[20]="Hola";
    char src[20]="Mundo";
    strncat(dest,src,3);
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);

Ejercicio
--------

Define el string `first_name` con el valor `John` usando la notación de punteros, y define el string `last_name` con el valor `Doe`
usando la notación de arreglo local.

Tutorial Code
-------------

    #include <stdio.h>
    #include <string.h>
    int main() {
      /* define first_name */
      /* define last_name */
      char name[100];

      last_name[0] = 'B';
      sprintf(name, "%s %s", first_name, last_name);
      if (strncmp(name, "John Boe", 100) == 0) {
          printf("Hecho!\n");
      }
      name[0]='\0';
      strncat(name,first_name,4);
      strncat(name,last_name,20);
      printf("%s\n",name);
      return 0;
    }


Expected Output
---------------

    Hecho!
    JohnBoe

Solution
--------

    #include <stdio.h>
    #include <string.h>
    int main() {
      char * first_name = "John";
      char last_name[] = "Doe";
      char name[100];

      last_name[0] = 'B';
      sprintf(name, "%s %s", first_name, last_name);
      if (strncmp(name, "John Boe", 100) == 0) {
          printf("Hecho!\n");
      }
      name[0]='\0';
      strncat(name,first_name,4);
      strncat(name,last_name,20);
      printf("%s\n",name);
      return 0;
    }
