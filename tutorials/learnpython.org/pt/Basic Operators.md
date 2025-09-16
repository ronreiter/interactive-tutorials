This section explains how to use basic operators in Python.

### Operadores Aritméticos       

Assim como em qualquer outra linguagem de programação, os operadores de adição, subtração, multiplicação e divisão podem ser usados com números.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Tente prever qual será a resposta. O Python segue a ordem das operações?

Outro operador disponível é o operador de módulo (%), que retorna o restante inteiro da divisão. dividendo % divisor = resto.

    remainder = 11 % 3
    print(remainder)

Usar dois símbolos de multiplicação cria uma relação de potência.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Usando Operadores com Strings

O Python suporta a concatenação de strings usando o operador de adição:

    helloworld = "hello" + " " + "world"
    print(helloworld)

O Python também suporta a multiplicação de strings para formar uma sequência repetida:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Usando Operadores com Listas

Listas podem ser unidas com os operadores de adição:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Assim como em strings, o Python suporta formar novas listas com uma sequência repetida usando o operador de multiplicação:

    print([1,2,3] * 3)

Exercício
--------

O objetivo deste exercício é criar duas listas chamadas `x_list` e `y_list`,
que contêm 10 instâncias das variáveis `x` e `y`, respectivamente.
Você também deve criar uma lista chamada `big_list`, que contém
as variáveis `x` e `y`, 10 vezes cada, concatenando as duas listas que você criou.