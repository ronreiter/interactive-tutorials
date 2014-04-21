Tutorial
--------

Python hace uso de variables booleanas para evaluar condiciones. 
Cuando una expresión es comparada o evaluada los valores que boleanos que se retorna son falso o verdadero. Por ejemplo:

    x = 2
    print x == 2 # Imprimira en pantalla TRUE
    print x == 3 # Imprimira en pantalla FALSE
    print x < 3  # Imprimira en pantalla TRUE

Nota: para asignar valores a una variable se utiliza el operador de igualdad "=", mientras que para comprar las variables entre ellas se hace uso de dos signos de igualdad "==". La no igualdad se realiza con el operador "!="

### Operadores boleanos
Los operadores boleanos "y " (and) y "o " (or) permite construir complejas expresiones boleanas, por ejemplo:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print "tu nombre es John, y tu tienes 23 años."

    if name == "John" or name == "Rick":
        print "Tu nombre es John o puede ser  Rick."

### El operador "in"

El operador "in" puede ser usado para checar si un objeto especifico existe mientras el mismo objeto itera en un contenedor, tanto com una lista:

    if name in ["John", "Rick"]:
        print "Su nombre puede ser John or Rick."

Python usa indentacion para definir bloques de código, en lugar de llaves o paréntesis. El estandar de indentacion de python es 4 espacios,  aunque el tab y algunos otros espacios funcionará, siempre y cuando sean consistente, es decir tengan el mismo tipo de sangrado (separación). Los bloques de código no necesitan de una terminación.

Este es un ejemplo de como usar en python la declaración de la sentencia if usando bloques de códigos:

    if <declariación a evaluar>:
        <líneas de código>
        ....
        ....
    elseif <alguna otra declaración a evuluar>: # else if
        <líneas de código del elseif>
        ....
        ....
    else:
        <código>
        ....
        ....

Por ejemplo:

    x = 2
    if x == 2:
        print "x igual dos!"
    else:
        print "x no es igual a dos."

Una declaración es evaluada como verdadera, si solo su iteración o flujo es correcta:
- El resultado verdadero de una variable booleana se obtiene, o se calcula utilizando una expresión, como una compración aritmética.
- Un objeto que no es considerado vacío es pasado.
- An object which is not considered "empty" is passed.

Se presenta algunos ejemplos donde los objetos son considerados como vacíos:

- Una Cadena vacia: ""
- Una lista vacia: []
- El numero cero: 0
- La variable boelana falsa: False

### El operador "is"

A diferencia del doble operador de igualdad "==", el operador "is" no sola iguala los valores de las varialbes, si no entre ellos. Por ejemplo

    x = [1,2,3]
    y = [1,2,3]
    print x == y # Imprime en pantalla TRUE
    print x is y # Imprime en pantalla FALSE

### El operador "not"

Usando "not" delante de una expresión booleana se invierte:

    print not False # Imprime en pantalla TRUE
    print (not False) == (False) # Imprime en pantalla FALSE

### Ejercicios

Cambia las variables de la primera sección, tanto que el código en la sección se ejecute a través de un if

Tutorial Code
-------------

    # cambia este codigo
    number = 10
    second_number = 10
    first_array = []
    second_array = [1,2,3]
    
    if number > 15:
        print "1"
    
    if first_array:
        print "2"
    
    if len(second_array) == 2:
        print "3"

    if len(first_array) + len(second_array) == 5:
        print "4"
    
    if first_array and first_array[0] == 1:
        print "5"

    if not second_number:
        print "6"

Expected Output
---------------

1
2
3
4
5
6

Solution
--------
