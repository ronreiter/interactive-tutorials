Python utiliza el formato de cadena al estilo C para crear nuevas cadenas formateadas. El operador "%" se usa para formatear un conjunto de variables encerradas en una "tupla" (una lista de tamaño fijo), junto con una cadena de formato que contiene texto normal junto con "especificadores de argumentos", símbolos especiales como "%s" y "%d".

Supongamos que tienes una variable llamada "name" con tu nombre de usuario, y luego quisieras imprimir un saludo para ese usuario.

    # Esto imprime "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Para usar dos o más especificadores de argumentos, utiliza una tupla (paréntesis):

    # Esto imprime "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Cualquier objeto que no sea una cadena también puede formatearse usando el operador %s. La cadena que devuelve el método "repr" de ese objeto se formatea como la cadena. Por ejemplo:

    # Esto imprime: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Estos son algunos especificadores de argumentos básicos que debes conocer:

`%s - Cadena (o cualquier objeto con una representación de cadena, como números)`

`%d - Enteros`

`%f - Números de punto flotante`

`%.<número de dígitos>f - Números de punto flotante con una cantidad fija de dígitos a la derecha del punto.`

`%x/%X - Enteros en representación hexadecimal (minúsculas/mayúsculas)`

Exercise
--------

Necesitarás escribir una cadena de formato que imprima los datos usando la siguiente sintaxis:
    `Hello John Doe. Your current balance is $53.44.`