Python utiliza la lógica booleana para evaluar condiciones. Los valores booleanos True y False se devuelven cuando una expresión es comparada o evaluada. Por ejemplo:

    x = 2
    print(x == 2) # imprime True
    print(x == 3) # imprime False
    print(x < 3) # imprime True

Observe que la asignación de variables se realiza utilizando un único operador igual "=", mientras que la comparación entre dos variables se realiza utilizando el doble operador igual "==". El operador "no igual" se marca como "!=".

### Operadores booleanos

Los operadores booleanos "and" y "or" permiten construir expresiones booleanas complejas, por ejemplo:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("Tu nombre es John y también tienes 23 años.")

    if name == "John" or name == "Rick":
        print("Tu nombre es John o Rick.")

### El operador "in"

El operador "in" podría usarse para verificar si un objeto específico existe dentro de un contenedor de objetos iterable, como una lista:

    name = "John"
    if name in ["John", "Rick"]:
        print("Tu nombre es John o Rick.")

Python utiliza la indentación para definir bloques de código, en lugar de llaves. La indentación estándar de Python es de 4 espacios, aunque las tabulaciones y cualquier otro tamaño de espacio funcionarán, siempre y cuando sea consistente. Observe que los bloques de código no necesitan ninguna terminación.

Aquí hay un ejemplo de cómo usar la declaración "if" de Python utilizando bloques de código:

    statement = False
    another_statement = True
    if statement is True:
        # hacer algo
        pass
    elif another_statement is True: # else if
        # hacer otra cosa
        pass
    else:
        # hacer una cosa diferente
        pass

Por ejemplo:

    x = 2
    if x == 2:
        print("¡x es igual a dos!")
    else:
        print("x no es igual a dos.")

Una declaración se evalúa como verdadera si se cumple una de las siguientes condiciones:
1. Se da la variable booleana "True", o se calcula utilizando una expresión, como una comparación aritmética.
2. Se pasa un objeto que no se considera "vacío".

Aquí hay algunos ejemplos de objetos que se consideran vacíos:
1. Una cadena vacía: ""
2. Una lista vacía: []
3. El número cero: 0
4. La variable booleana falsa: False

### El operador 'is'

A diferencia del operador de doble igual "==", el operador "is" no compara los valores de las variables, sino las instancias en sí. Por ejemplo:

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # Imprime True
    print(x is y) # Imprime False

### El operador "not"

Usar "not" antes de una expresión booleana la invierte:

    print(not False) # Imprime True
    print((not False) == (False)) # Imprime False

Ejercicio
--------

Cambia las variables en la primera sección para que cada declaración if se resuelva como True.