Tutorial
--------

En el tutorial previo sobre [Arreglos](https://www.learn-c.org/es/Arrays), cubrimos los arreglos y cómo funcionan. Los arreglos que vimos eran unidimensionales, pero C puede crear y usar arreglos multidimensionales. Aquí está la forma general de una declaración de un arreglo multidimensional:

	tipo nombre[tamaño1][tamaño2]...[tamañoN];

Por ejemplo, aquí hay uno básico para que lo veas -

	int foo[1][2][3];

o tal vez éste -

	char vowels[1][5] = {
		{'a', 'e', 'i', 'o', 'u'}
	};

### Arreglos bidimensionales

La forma más simple de los arreglos multidimensionales son los arreglos bidimensionales. Un arreglo bidimensionales es básicamente una lista de arreglos unidimensionales. Para declarar un arreglo bidimensionales de enteros de tamaño [ x ][ y ], lo escribirías algo así −

	tipo nombreDeArreglo [x][y];

Donde __tipo__ puede ser cualquier tipo de datos de C (int, char, long, long long, double, etc.) y __nombreDeArreglo__ será un identificador válido de C, o variable. Un arreglo bidimensional puede ser considerado como una tabla que tendrá [ x ] número de hileras y [ y ] número de columnas. Un arreglo bidimensional "a", el cual contiene tres hileras y cuatro columnas puede ser visto y pensado de la siguiente manera −

![Table 1A](https://www.tutorialspoint.com/cprogramming/images/two_dimensional_arrays.jpg)

En este sentido, todos los elementos en el arreglo a son identificados por un nombre de elemento en la forma __a[i][j]__, donde 'a' es el nombre del arreglo, e 'i' y 'j' son los índices que identifican, o muestran, cada elemento en 'a'.

Y realmente no necesitas poner un valor [ x ], porque si hicieses algo así -

	char vowels[][5] = {
		{'A', 'E', 'I', 'O', 'U'},
		{'a', 'e', 'i', 'o', 'u'}
	};

podríamos decir que el compilador ya sabría que hay dos "dimensiones", pero, __NECESITAS__ un valor [ y ]!! El compilador puede ser inteligente, pero _no sabrá_ cuantos enteros, caracteres, floats, lo que sea que estés usando tienes en las dimensiones. Ten eso en cuenta.

### Inicializando arreglos bidimensionales

Los arreglos multidimensionales pueden ser inicializados usando valores encorchados[] por cada hilera. Debajo hay un arreglo con 3 hileras y cada hilera tiene 4 columnas. Para hacerlo más sencillo, te puedes olvidar del 3 y dejarlo en blanco, todavía funcionaría.

	int a[3][4] = {  
	   {0, 1, 2, 3} ,   /*  inicializadores para la hilera con indice 0 */
	   {4, 5, 6, 7} ,   /*  inicializadores para la hilera con indice 1 */
	   {8, 9, 10, 11}   /*  inicializadores para la hilera con indice 2 */
	};

Las llaves internas, las cuales indican la hilera deseada, son opcionales. La siguiente inicialización es la misma a la del ejemplo previo −

	int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

### Accediendo a elementos de arreglos bidimensionales

Un elemento de un arreglo bidimensional es accedido usando los suscriptos, e.g., índice de la hilera e índice de la columna del arreglo. Por ejemplo −

	int val = a[2][3];

La sentencia previa tomará el 4to elemento de la 3er hilera del arreglo.

Ejercicio
--------

Intentemos encontrar las calificaciones promedio de un grupo de cinco estudiantes para dos materias, Matemática y Física. Para hacer esto, usamos un arreglo bidimensional llamado ```grades```. Las calificaciones que corresponden a Matemática serán guardadas en la primer hilera (```grades[0]```), mientras que las correspondientes a Física serán guardadas en la segunda hilera (```grades[1]```). Complete los siguientes pasos para que pueda ejecutar este programa.

- Declara grades como un arreglo bidimensional de enteros
- Completa los bucles for especificando sus condiciones finalizadoras
- Calcula las calificaciones promedio obtenidas en cada materia

Tutorial Code
-------------

	#include <stdio.h>

	int main() {
		/* TODO: declara el arreglo 2D grades aquí */
		float average;
		int i;
		int j;

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		/* TODO: completa el bucle for con las condiciones finalizadoras apropiadas */
		for (i = 0; i < ; i++) {
			average = 0;
			for (j = 0; j < ; j++) {
				average += grades[i][j];
			}

			/* TODO: calcula las calificaciones promedio para la materia i */
			printf("La calificación promedio de la materia %d es: %.2f\n", i, average);
		}

		return 0;
	}


Expected Output
---------------

    La calificación promedio de la materia 0 es: 78.80
    La calificación promedio de la materia 1 es: 82.80

Solution
--------

	#include <stdio.h>

	int main() {
		int grades[2][5];
		float average;
		int i;
		int j;

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		for (i = 0; i < 2; i++) {
			average = 0;
			
			for (j = 0; j < 5; j++) {
				average += grades[i][j];
			}

			average /= 5.0;
			printf("La calificación promedio de la materia %d es: %.2f\n", i, average);
		}

		return 0;
	}
