Tutorial
--------

Las cadenas son bits de texto; estas pueden ser definidas como cualquier cosa entre comillas:

    unacadena = "Hola Mundo!"

Como puedes ver, la primera cosa que aprendes es la de mostrar una simple oración. Esta oración es procesada por Python como una cadena. Sin embargo, en vez de imprimir la cadena inmediatamente, debemos explorar varias cosas que puedes hacerle.

    print len(unacadena)

Esta muestra 12, porque "Hola mundo!" es de 12 caracteres incluyendo puntuación y espacios.

    print unacadena.index("o")

Esto imprime 1, porque la ubicación de la primera letra que imprime, en este caso la letra "o" esta en el primer caracter a partir del primero. Nota que aunque hay dos "o" en la frase, este método solo reconocerá al primero.

Pero ¿Por qué no imprime 2? ¿No es "o" el segundo caracter de la cadena? Para hacer las cosas mas sencillas, Python (y mucho de los otros lenguajes de programación) comienzan con 0 en vez de 1. Asi que el lugar de "o" es 1.

    print unacadena.count("l")

Para quienes estén usando fuentes especiales, tal como la 'l' minúscula, en vez del número uno. Este cuenta el número de eles en la cadena, así que debe mostrar 1.

    print astring[3:7]

Esto imprime una sección de la cadena, comenzando en el indice 3, y terminando en el 6. Pero ¿Por qué el 6 y no el 7? De nuevo, la mayoría de los lenguajes de programación hacen esto - facilita la forma de hacer matemáticas dentro de esos corchetes.

Si hay solamente un número entre los corchetes, devolverá el caracter que esté en ese índice. Si dejas en blanco el primer número pero mantienes los dos puntos, devolverá una porción desde el índice 0 hasta el número que quedó. Si dejas en blanco el segundo número, devolverá una porción desde el primer número hasta el final.

Incluso es posible poner números negativos en los corchetes. Son una forma sencilla de comenzar la cadena por el final en lugar de por el principio. De esta forma -3 significa "el tercer caracter desde el final".

    print astring.upper()
    print astring.lower()

Esto muestra nuevas cadenas con todas las letras convertidas de mayúsculas a minúsculas respectivamente.

    print astring.startswith("Hola")
    print astring.endswith("asdfasdfasdf")

Esto se usa para determinar si la cadena empieza con algo o termina con algo, respectivamente. La primera imprimirá True porque la cadena empieza con "Hola". La segunda imprimirá False porque la cadena no termina con "asdfasdfasdf".

    afewwords = astring.split(" ")

Esto separa la cadena en un montón de cadenas agrupadas en una lista. Ya que este ejemplo hace una separación con un espacio; el primer elemento en la lista sera "Hola", y el segundo "Mundo!". 

### Ejercicio

Intenta arreglar el código para mostrar la información correcta al cambiar la cadena.

Tutorial Code
-------------

s = "Hola ahi! Que debe ser esta cadena?"

# Longitud debe ser 35
print "Longitud de s = %d" % len(s)

# Primer evento de "a" deberá estar en el lugar 3
print "Primer evento de la letra a = %d" % s.index("a")

# El número de a's deberá ser 5
print "a ocurre %d veces" % s.count("a")

# Slicing the string into bits
print "The first five characters are '%s'" % s[:5] # Start to 5
print "The next five characters are '%s'" % s[5:10] # 5 to 10
print "The thirteenth character is '%s'" % s[12] # Just number 12

print "The last five characters are '%s'" % s[-5:] # 5th-from-last to end

# Convert everything to uppercase
print "String in uppercase: %s" % s.upper()

# Convert everything to lowercase
print "String in lowercase: %s" % s.lower()

# Check how a string starts
if s.startswith("Str"):
    print "String starts with 'Str'. Good!"

# Check how a string ends
if s.endswith("ome!"):
    print "String ends with 'ome!'. Good!"

# Split the string into three separate strings,
# each containing only a word
print "Split the words of the string: %s" % s.split(" ")

Expected Output
---------------

Length of s = 35
The first occurrence of the letter a = 3
a occurs 5 times
The first five characters are 'Strin'
The next five characters are 'gs ar'
The thirteenth character is 'a'
The last five characters are 'some!'
String in uppercase: STRINGS ARE AWESOME!
String in lowercase: strings are awesome!
String starts with 'Str'. Good!
String ends with 'ome!'. Good!
Split the words of the string: ['Strings', 'are', 'awesome!']

Solution
--------
