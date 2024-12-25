Python es un lenguaje muy simple y tiene una sintaxis muy directa. 
Anima a los programadores a programar sin código predefinido (preparado).
La directiva más simple en Python es la directiva "print" -
simplemente imprime una línea (y también incluye un salto de línea, a diferencia de C).

Existen dos versiones principales de Python, Python 2 y Python 3. Python 2 y 3 son bastante diferentes.
Este tutorial utiliza Python 3, porque es más semánticamente correcto y admite características más nuevas.

Por ejemplo, una diferencia entre Python 2 y 3 es la instrucción `print`.
En Python 2, la instrucción "print" no es una función, y por lo tanto se 
invoca sin paréntesis. Sin embargo, en Python 3, es una función, y debe invocarse 
con paréntesis.

Para imprimir una cadena en Python 3, simplemente escribe:

    print("This line will be printed.")

### Indentación

Python utiliza la indentación para los bloques, en lugar de llaves. Tanto las tabulaciones como los espacios son compatibles, pero la 
indentación estándar requiere que el código estándar de Python use cuatro espacios. Por ejemplo:

    x = 1
    if x == 1:
        # indented four spaces
        print("x is 1.")

Ejercicio
--------

Usa la función "print" para imprimir la línea "Hello, World!".