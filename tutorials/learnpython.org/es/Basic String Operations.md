Strings son fragmentos de texto. Se pueden definir como cualquier cosa entre comillas:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Como puedes ver, lo primero que aprendiste fue a imprimir una oración simple. Esta oración fue almacenada por Python como una cadena de texto. Sin embargo, en lugar de imprimir cadenas inmediatamente, exploraremos las varias cosas que puedes hacer con ellas.
También puedes usar comillas simples para asignar una cadena. Sin embargo, enfrentarás problemas si el valor que se va a asignar contiene comillas simples. Por ejemplo, para asignar la cadena en este paréntesis (comillas simples son ' ') necesitas usar comillas dobles de esta manera

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Eso imprime 12, porque "Hello world!" tiene 12 caracteres, incluyendo puntuación y espacios.

    astring = "Hello world!"
    print(astring.index("o"))

Eso imprime 4, porque la ubicación de la primera aparición de la letra "o" está a 4 caracteres del primer carácter. Observa cómo en realidad hay dos "o" en la frase, pero este método solo reconoce el primero.

¿Pero por qué no imprimió 5? ¿No es "o" el quinto carácter de la cadena? Para simplificar las cosas, Python (y la mayoría de los otros lenguajes de programación) comienzan las cosas en 0 en lugar de 1. Por lo tanto, el índice de "o" es 4.

    astring = "Hello world!"
    print(astring.count("l"))

Para aquellos que usan fuentes extrañas, eso es una "l" minúscula, no un número uno. Esto cuenta el número de "l" en la cadena. Por lo tanto, debería imprimir 3.

    astring = "Hello world!"
    print(astring[3:7])

Esto imprime un segmento de la cadena, comenzando en el índice 3 y terminando en el índice 6. ¿Pero por qué 6 y no 7? Nuevamente, la mayoría de los lenguajes de programación hacen esto, lo que facilita hacer cálculos dentro de esos corchetes.

Si solo pones un número en los corchetes, te dará un único carácter en ese índice. Si omites el primer número pero mantienes el dos puntos, te dará un segmento desde el inicio hasta el número que dejaste. Si omites el segundo número, te dará una porción desde el primer número hasta el final.

Incluso puedes poner números negativos dentro de los corchetes. Son una forma fácil de comenzar desde el final de la cadena en lugar del principio. De esta manera, -3 significa "tercer carácter desde el final".

    astring = "Hello world!"
    print(astring[3:7:2])

Esto imprime los caracteres de la cadena del 3 al 7 saltando un carácter. Esta es la sintaxis extendida de corte. La forma general es [start:stop:step].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Observa que ambos producen el mismo resultado.

No existe una función como strrev en C para invertir una cadena. Pero con el tipo de sintaxis de corte mencionada anteriormente, puedes fácilmente invertir una cadena así

    astring = "Hello world!"
    print(astring[::-1])

Esto

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Esto crea una nueva cadena con todas las letras convertidas a mayúsculas y minúsculas, respectivamente.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Esto se utiliza para determinar si la cadena comienza con algo o termina con algo, respectivamente. El primero imprimirá True, ya que la cadena comienza con "Hello". El segundo imprimirá False, ya que la cadena ciertamente no termina con "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Esto divide la cadena en un montón de cadenas agrupadas en una lista. Dado que este ejemplo se divide en un espacio, el primer elemento de la lista será "Hello", y el segundo será "world!".

Ejercicio
--------

Trata de corregir el código para imprimir la información correcta cambiando la cadena.