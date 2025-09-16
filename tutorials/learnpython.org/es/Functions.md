### ¿Qué son las funciones?

Las funciones son una manera conveniente de dividir tu código en bloques útiles, lo que nos permite ordenar nuestro código, hacerlo más legible, reutilizarlo y ahorrar tiempo. Además, las funciones son una manera clave de definir interfaces para que los programadores puedan compartir su código.

### ¿Cómo escribes funciones en Python?

Como hemos visto en tutoriales anteriores, Python hace uso de bloques.

Un bloque es un área de código escrita en el siguiente formato:

    block_head:
        1st block line
        2nd block line
        ...

Donde una línea de bloque es más código Python (incluso otro bloque), y la cabecera del bloque tiene el siguiente formato:
block_keyword block_name(argument1,argument2, ...)
Las palabras clave de bloque que ya conoces son "if", "for", y "while".

Las funciones en Python se definen usando la palabra clave de bloque "def", seguida del nombre de la función como el nombre del bloque. 
Por ejemplo:

    def my_function():
        print("Hello From My Function!")

Las funciones también pueden recibir argumentos (variables pasadas del llamador a la función).
Por ejemplo:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))

Las funciones pueden devolver un valor al llamador, usando la palabra clave 'return'.
Por ejemplo:

    def sum_two_numbers(a, b):
        return a + b

### ¿Cómo se llaman las funciones en Python?

Simplemente escribe el nombre de la función seguido de (), colocando los argumentos requeridos dentro de los paréntesis. Por ejemplo, llamemos a las funciones escritas anteriormente (en el ejemplo anterior):

    # Define nuestras 3 funciones
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # imprimir un saludo sencillo
    my_function()

    # imprime - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # después de esta línea, x contendrá el valor 3!
    x = sum_two_numbers(1,2)  

Ejercicio
--------

En este ejercicio usarás una función existente, y mientras agregas la tuya para crear un programa completamente funcional.

1. Añade una función llamada `list_benefits()` que devuelva la siguiente lista de cadenas: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Añade una función llamada `build_sentence(info)` que reciba un único argumento que contenga una cadena y devuelva una frase que empiece con la cadena dada y termine con la cadena " is a benefit of functions!"

3. ¡Ejecuta y ve cómo todas las funciones trabajan juntas!