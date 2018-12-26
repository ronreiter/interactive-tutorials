Tutorial
--------

Cadenas son bits de texto. Estas pueden ser definidas como cualquier cosa entre comillas:

    unacadena = "Hola Mundo!"

Como puedes ver, la primera cosas que aprendes es la de mostrar una simple oración. Esta oración es ordenada por Python como cadena. Sin embargo, en vez de imprimir la cadena inmediatamente, debemos explorar varias cosas que puedes hacerle.

    print len(unacadena)

Esta muestra 12, por que "Hola mundo!" es de 12 caracteres incluyendo puntuación y espacios.

    print unacadena.index("o")

Esto imprime 4, pro que la ubicación de la primera letra que cumple, en este caso la letra "o" esta en el cuarto caracter a partir del primero. Nota de como hay dos "o"s en la frace - este método solo reconoce el primero.

Pero por que no imprime 5? No es "o" el quinto caracter de la cadena? Para hacer las cosas mas sencillas, Python (y mucho de los otros lenguajes de programación) comienzan con 0 en vez de 1. Asi que el lugar de "o" es 4.

    print unacadena.count("l")

Para estos que estén usando fuentes especiales, tal como un l minúscula, en vez de el numero uno. Este cuenta el numero de eles en la cadena. Así que debe mostrar 3.

    print astring[3:7]

Esto imprime una sección de la cadena, comenzando en el indice 3, y terminando en el 6. Pero por que el 6 y no el 7? De nuevo, la mayoría de los lenguajes de programación hacen esto - facilita la forma de hacer matemáticas dentro de esos corchetes.

If you just have one number in the brackets, it will give you the single character at that index. If you leave out the first number but keep the colon, it will give you a slice from the start to the number you left in. If you leave out the second number, it will give you a slice from the first number to the end.

You can even put negative numbers inside the brackets. They are an easy way of starting at the end of the string instead of the beginning. This way, -3 means "3rd character from the end".

    print astring.upper()
    print astring.lower()

Esto hace que nuevas cadenas con todas las letras convertidas de mayúsculas a minúsculas respectivamente.

    print astring.startswith("Hello")
    print astring.endswith("asdfasdfasdf")

This is used to determine whether the string starts with something or ends with something, respectively. The first one will print True, as the string starts with "Hello". The second one will print False, as the string certainly does not end with "asdfasdfasdf".

    afewwords = astring.split(" ")

Esto separa la cadena en un montón de cadenas agrupadas en una lista. Ya que este ejemplo separa con un espacio, el primer elemento en la lista sera "Hello", y el segundo "World!". 

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
