Formateo de Cadenas
-----------------

Tutorial
--------

Python usa estilo de formato de cadenas parecido a C para crear nuevas cadenas. El operador "%" es usado para dar formato y fijar las variables encerradas en una "tupla" (uja lista de tamaño fijo), juntos con una cadena con formato, el cual contiene el texto normal junto con "argumentos especificados", como los simbolos especiales "%s" y "%d". 

Digamos que tienes una variable llamada "nombre" con tu nombre de usuario en el y querras darle un saludo al usuario.

    # Esto imprime "Hola, Juan!"
    nombre = "Juan"
    print "Hola, %s!" % nombre

Usa dos o mas especificadores de argumento, usa un tupla (con parentesis):

    # Esto imprime "John is 23 years old."
    nombre = "John"
    edad = 23
    print "%s tiene %d años." % (nombre, edad)

Cualquier objeto del cual no sea una cadena puede ser formateado usando el operador %s. La cadena que retorne de un metodo "repr" de ese objeto, será formateada como cadena, por ejemplo:

    # Esto muestra lo siguiente: Una Lista: [1, 2, 3]
    milista = [1,2,3]
    print "Una lista: %s" % milista

Aquí hay algunos especificadores de argumentos basicos como debes saber:

    %s - Cadena (or any object with a string representation, like numbers)
    %d - Integral
    %f - Números de punto flotante
    %.<numero de digitos>f - Números de punto flotante con una cantidad de números fijos a la derecha del punto.
    %x/%X - Integral con representacion hex (minuscula/mayuscula)

### Ejercicios

Deberás escribir una cadena de formato el cual pone los datos usando las siguientes sintaxis:
    Hola Juan Perez. Tu balance es 53.44$.

Tutorial Code
-------------

datos = ("Juan", "Perez", 53.44)
format_string = "Hola"

print format_string % datos

Expected Output
---------------

Hola Juan Perez. Tu balance es de 53.44$.

Solution
--------

datos = ("Juan", "Perez", 53.44)
format_string = "Hola %s %s. Tu balance es de %.2f$."

print format_string % datos
