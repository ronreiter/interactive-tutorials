Tutorial
--------

###Que son las funciones?
las funciones son una forma conveniente de dividir tu codigo en útiles bloques, permitiendo que puedas ordenar tu codigo, hacerlo mas fácil de leer y reutilizarlo así ahorrando tiempo. <br />
Tambien las funciones son una forma clave para definir interfaces para que los programadores puedan compartir su código.

###Como escribes funciones dentro de Python ?
Python hace uso de bloques de codigo para desarrollarse.

Un bloque es un area de codigo que escrita en el siguiente formato:
    block_head:
    the_1st_block_line
    the_2nd_block_line
    ...

Donde un bloque de linea es mas codigo Python (aun otro bloque),
y la cabeza del bloque es de la sigueinte manera:

    block_keyword block_name(argument1,argument2, ...)

Las palabras del codigo son "if", "for", y "while".

Funciones en python son definidas usando la palabra reservada de "def", seguida del nombre de la funcion como nombre del bloque.<br>
Por ejemplo:
    def my_function():
    print "Hello From My Function!"


Las funciones tambien pueden recibir argumentos (pasar argumentos del que llama la funcion)
Por ejemplo:
    def my_function_with_args(username, greeting):
    print "Hello, %s , From My Function!, I wish you %s"%(username, greeting)


La funcion puede regresarse un valor al que llama, usando la palabra reservada de - 'return' .<br>
Por ejemplo:
    def sum_two_numbers(a, b):
    return a + b


###Como llamas a funciones dentro de Python ?
Simplemente escribe el nombre de la funcion seguida de un (), poniendo cualquier argumento requrido dentro de los brackets..<br>
Por ejemplo, vamos a llamar a la funcion siguiente (en el ejemplo previo):

    my_function() #print a simple greeting
    my_function_with_args("Or Weis", "a great year!") #prints - "Hello, Or Weis , From My Function!, I wish you a great year!"
    x = sum_two_numbers(1,2)  #after this line x will hold the value 3 !



### Ejercicio

En este ejercicio estaras usando una funcion existente, crearas una propia formando un programa funcional.

1. Agregar una funcion llamada list_benefits()- que regresen la siguiente lista de cadenas, "codigo mas organizado", "codigo mas facil de leer", "reuso de codigo mas facil", "permitir a los programadores compartir codigo y compartirlo"
2. Agrega una funcion llamada build_sentence(info) la cual recibe un argumento sencillo conteniendo una cadena y retorna una sentencia comenzando con la cadena y terminando con cadena " es el beneficio de una funcion!"
3. Ejecuta y velo todo trabajar junto!

Tutorial Code
-------------

#Agrega una funcion aqui (antes de la funcion existente)

def name_the_benefits_of_functions():
    list_of_benefits = list_benefits()
    for benefit in list_of_benefits:
        print build_sentence(benefit)

name_the_benefits_of_functions()


Expected Output
---------------

More organized code is a benefit of functions!
More readable code is a benefit of functions!
Easier code reuse is a benefit of functions!
Allowing programmers to share and connect code together is a benefit of functions!

Solution
--------
