Python é completamente orientado a objetos e não é "tipado estaticamente". Você não precisa declarar variáveis antes de usá-las, nem declarar seu tipo. Toda variável em Python é um objeto.

Este tutorial abordará alguns tipos básicos de variáveis.

### Numbers
Python suporta dois tipos de números - inteiros (números inteiros) e números de ponto flutuante (decimais). (Também suporta números complexos, que não serão explicados neste tutorial).

Para definir um inteiro, use a seguinte sintaxe:

    myint = 7
    print(myint)

Para definir um número de ponto flutuante, você pode usar uma das seguintes notações:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

Strings são definidas com aspas simples ou aspas duplas.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

A diferença entre os dois é que usar aspas duplas facilita a inclusão de apóstrofos (enquanto que esses terminariam a string se usássemos aspas simples)

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
Existem variações adicionais na definição de strings que facilitam a inclusão de coisas como quebras de linha, barras invertidas e caracteres Unicode. Estas estão além do escopo deste tutorial, mas são cobertas na [documentação do Python](http://docs.python.org/tutorial/introduction.html#strings "Strings no Tutorial de Python").

Operadores simples podem ser executados em números e strings:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Atribuições podem ser feitas em mais de uma variável "simultaneamente" na mesma linha assim:

    a, b = 3, 4
    print(a, b)

Misturar operadores entre números e strings não é suportado:

    # Isto não vai funcionar!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercício
--------

O objetivo deste exercício é criar uma string, um inteiro e um número de ponto flutuante. A string deve ser chamada de `mystring` e deve conter a palavra "hello". O número de ponto flutuante deve ser chamado de `myfloat` e deve conter o número 10.0, e o inteiro deve ser chamado de `myint` e deve conter o número 20.