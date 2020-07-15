Tutorial
--------

Cadenas son bits de texto. Estas pueden ser definidas como cualquier cosa entre comillas:

	unacadena = "Hola Mundo!"

Como puedes ver, la primera cosas que aprendes es la de mostrar una simple oración. Esta oración es ordenada por Python como cadena. Sin embargo, en vez de imprimir la cadena inmediatamente, debemos explorar varias cosas que puedes hacerle.

	print len(unacadena)

Esta muestra 12, porque "Hola mundo!" es de 12 caracteres incluyendo puntuación y espacios.

	print unacadena.index("o")

Esto imprime 1, porque la ubicación de la primera letra que cumple, en este caso la letra "o" esta en el primer caracter a partir del primero. Nota que aunque hay dos "o"s en la frase, este método solo reconoce el primero.

Pero por que no imprime 2? No es "o" el segundo caracter de la cadena? Para hacer las cosas mas sencillas, Python (y mucho de los otros lenguajes de programación) comienzan con 0 en vez de 1. Asi que el lugar de "o" es 1.

	print unacadena.count("l")

Para quienes estén usando fuentes especiales, tal como un l minúscula, en vez del número uno. Este cuenta el número de eles en la cadena. Así que debe mostrar 1.

	print astring[3:7]

Esto imprime una sección de la cadena, comenzando en el indice 3, y terminando en el 6. Pero por que el 6 y no el 7? De nuevo, la mayoría de los lenguajes de programación hacen esto - facilita la forma de hacer matemáticas dentro de esos corchetes.

Si hay solamente un número entre los corchetes, devolverá el caracter que esté en ese índice. Si dejas en blanco el primer número pero mantienes la coma, devolverá una porción desde el principio hasta el número que dejó. Si dejas en blanco el segundo número, devolverá una porción desde el primer número hasta el final.

Incluso es posible poner números negativos en los corchetes. Son una forma fácil de comenzar la cadena por el final en lugar de por el principio. De esta forma -3 significa "el tercer caracter desde el final".

	print astring.upper()
	print astring.lower()

Esto muestra nuevas cadenas con todas las letras convertidas de mayúsculas a minúsculas respectivamente.

	print astring.startswith("Hola")
	print astring.endswith("asdfasdfasdf")

Esto se usa para determinar si la cadena empieza con algo o termina con algo, respectivamente. La primera imprimirá True porque la cadena empieza con "Hola". La segunda imprimirá False porque la cadena no termina con "asdfasdfasdf".

	afewwords = astring.split(" ")

Esto separa la cadena en un montón de cadenas agrupadas en una lista. Ya que este ejemplo separa con un espacio, el primer elemento en la lista sera "Hola", y el segundo "Mundo!".

### Ejercicio

Intenta arreglar el código para mostrar la información correcta al cambiar la cadena.

Tutorial Code
-------------

s = "Hola! ¿Qué debe ser esta cadena?"

# Longitud debe ser 37
print "Longitud de s = %d" % len(s)

# La primera ocurrencia de "a" deberá estar en la posición 1
print "Primera ocurrencia de la letra a = %d" % s.index("a")

# El número de a's deberá ser 5
print "Hay %d a's" % s.count("a")

# Partiendo el string en trozos
print "Los primeros cinco caracteres son '%s'" % s[:5] # Desde el inicio hasta 5
print "Los siguientes cinco caracteres son '%s'" % s[5:10] # Desde 5 hasta 10
print "El treceavo caracter es '%s'" % s[12] # Solo el 12
print "Los últimos cinco caracteres son '%s'" % s[-5:] # 5 a partir del final

# Convertir todo a mayúsculas
print "La cadena en mayúsculas: %s" % s.upper()

# Convertir todo a minúsculas
print "La cadena en minúsculas: %s" % s.lower()

# Revisar cómo inicia un string
if s.startswith("Las"):
	print "La cadena empieza con 'Las'. ¡Bien!"

# Revisar cómo termina un string
if s.endswith("tes!"):
	print "La cadena termina con 'tes!'. ¡Bien!"

# Separar el string en seis partes,
# una por palabra.
print "Las palabras de la cadena: %s" % s.split(" ")

Expected Output
---------------

Longitud de s = 37
La primera ocurrencia de la letra a = 1
Hay 5 a's
Los primeros cinco caracteres son 'Strin'
Los siguientes cinco caracteres son 'gs ar'
El treceavo caracter es 'a'
Los últimos cinco caracteres son 'some!'
La cadena en mayúsculas: STRINGS ARE AWESOME!
La cadena en minúsculas: strings are awesome!
La cadena empieza con 'Las'. ¡Bien!
La cadena termina con 'tes!'. ¡Bien!
Las palabras de la cadena: ['Las', 'cadenas', 'de', 'texto', 'son', 'fascinantes!']

Solution
--------
