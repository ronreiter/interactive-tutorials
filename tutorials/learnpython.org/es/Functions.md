Tutorial
--------

### ¿Qué son las Funciones?
las funciones son una forma conveniente de dividir tu codigo en útiles bloques, permitiendo que puedas ordenar tu código, hacerlo mas fácil de leer y reutilizarlo para así ahorrar tiempo. <br />
Las funciones también son una forma clave para definir interfaces para que los programadores puedan compartir su código.

### ¿Cómo escribes funciones dentro de Python?
Python hace uso de bloques de código para desarrollarse.

Un bloque es un área de código escrito en el siguiente formato:<br>

	block_head:
	the_1st_block_line
	the_2nd_block_line
	...

Un bloque en una sola línea es simplemente más código Python, y este bloque se describe de la siguiente forma:

    block_keyword block_name(argument1,argument2, ...)

Las palabras usadas en el código son "if", "for", y "while".

Las funciones en Python se definen usando la palabra reservada "def", seguida del nombre de la función como nombre del bloque.<br>
Por ejemplo:

    def my_function():
    	print "Hello From My Function!"

Las funciones también pueden recibir argumentos (pasar argumentos del que llama la funcion)
Por ejemplo:

    def my_function_with_args(username, greeting):
    	print "Hello, %s , From My Function!, I wish you %s"%(username, greeting)


La funcion puede regresarse un valor al que llama, usando la palabra reservada de - 'return' .<br>
Por ejemplo:

	def sum_two_numbers(a, b):
	    return a + b


### ¿Cómo llamar a las funciones dentro de Python ?
Simplemente escribe el nombre de la funcion seguida de un (), poniendo cualquier argumento requrido dentro de las llaves {}.<br>
Por ejemplo, vamos a llamar a la función siguiente (tomando los ejemplo previos):

	my_function() 
	#print a simple greeting
	
	my_function_with_args("Or Weis", "a great year!") 
	#prints "Hello, Or Weis , From My Function!, I wish you a great year!"
	
	x = sum_two_numbers(1,2)  
	#after this line x will hold the value 3 !

### Ejercicio

En este ejercicio usarás una función existente y crearás una propia formando un programa funcional.

1. Agrega una función llamada list_benefits() que regrese la siguiente lista de cadenas: "Código más organizado", "Código más fácil de leer", "Reuso de código más fácil", "Permitir a los programadores compartir código y compartirlo"
2. Agrega una función llamada build_sentence(info) la cual recibe un argumento sencillo conteniendo una cadena que retorne una sentencia, comenzando con la misma y terminando con la cadena " es el beneficio de una funcion!"
3. Ejecuta el código y ve cómo trabaja todo junto.

Tutorial Code
-------------

#Agrega una función aquí (antes de la función existente)

def name_the_benefits_of_functions():
    list_of_benefits = list_benefits()
    for benefit in list_of_benefits:
        print build_sentence(benefit)

name_the_benefits_of_functions()


Expected Output
---------------

Código más organizado es el beneficio de una función!
Código más fácil de leer es el beneficio de una función!
Reuso de código más fácil es el beneficio de una función!
Permitir a los programadores compartir código y compartirlo es el beneficio de una función!

Solution
--------

#Agrega una función aquí (antes de la funcion existente)

def list_benefits():
    #Devolvemos una lista con las cadenas que se nos piden.
    #Esto es lo mismo como crear primero la lista y luego retornarla.
	return ["Codigo mas organizado", "Codigo mas facil de leer", "Reuso de codigo mas facil", "Permitir a los programadores compartir codigo y compartirlo"]

def build_sentence(info):
    #Devolvemos una cadena formada por info (el parametro que recibimos) con el texto que se pide al final.
    #Devolvemos directamente la cadena, pero esto se podria hacer con una cadena auxiliar, aplicando las operaciones sobre ella y devolviéndola
	return (info + (" es el beneficio de una función!"))

def name_the_benefits_of_functions():
    list_of_benefits = list_benefits()
    for benefit in list_of_benefits:
        print (build_sentence(benefit))

name_the_benefits_of_functions()
