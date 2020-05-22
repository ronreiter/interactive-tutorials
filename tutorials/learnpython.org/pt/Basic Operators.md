Tutorial
--------

Esta seção explica como usar operadores básicos no Python.

### Operadores aritméticos

Assim como qualquer outra linguagem de programação, os operadores de adição, subtração, multiplicação e divisão podem ser usados com números.<br>

    numero = 1 + 2 * 3 / 4.0
    print(numero)

Tente prever qual será a resposta. O python segue a ordem das operações?

Outro operador disponível é o operador módulo (%), que retorna o restante inteiro da divisão. dividendo% divisor = restante.

    restante = 11 % 3
    print(restante)

O uso de dois símbolos de multiplicação cria uma relação de poder.

    quadrado = 7 ** 2
    cubado = 2 ** 3
    print(quadrado)
    print(cubado)

### Usando operadores com seqüências de caracteres

O Python suporta concatenação de strings usando o operador de adição:

    olamundo = "olá" + " " + "mundo"
    print(olamundo)

O Python também suporta a multiplicação de strings para formar uma string com uma sequência repetida:

    sequenciadeola = "olá" * 10
    print(sequenciadeola)

### Usando operadores com listas

As listas podem ser unidas aos operadores de adição:

    pares = [2,4,6,8]
    ímpares = [1,3,5,7]
    all_numbers = impares + pares
    print(all_numbers)

Assim como nas strings, o Python suporta a formação de novas listas com uma sequência repetida usando o operador de multiplicação:

    print([1,2,3] * 3)

Exercício
--------

O objetivo deste exercício é criar duas listas chamadas `x_list` e `y_list`,
que contém 10 instâncias das variáveis `x` e` y`, respectivamente.
Você também precisa criar uma lista chamada `big_list`, que contém
as variáveis `x` e `y`, 10 vezes cada, concatenando as duas listas que você criou.

Código do tutorial
-------------

x = object()
y = object()

# TODO: altere este código
x_list = [x]
y_list = [y]
big_list = []

print("x_list contém %d objetos" % len(x_list))
print("y_list contém %d objetos" % len(y_list))
print("big_list contém %d objetos" % len(big_list))


# código de teste
if x_list.count(x) == 10 and y_list.count(y) == 10:
    print("Quase lá...")
if big_list.count(x) == 10 and big_list.count(y) == 10:
    print("Ótimo!")

Saída esperada
---------------

Ex().check_object('x_list').has_equal_value(expr_code = 'len(x_list)')
Ex().check_object('y_list').has_equal_value(expr_code = 'len(y_list)')
Ex().check_object('big_list').has_equal_value(expr_code = 'len(big_list)')
success_msg('Ótimo!')

Solução
--------

x = object()
y = object()

# TODO: altere este código
x_list = [x] * 10
y_list = [y] * 10
big_list = x_list + y_list

print("x_list contém %d objetos" % len(x_list))
print("y_list contém %d objetos" % len(y_list))
print("big_list contém %d objetos" % len(big_list))

# código de teste
if x_list.count(x) == 10 and y_list.count(y) == 10:
    print("Quase lá ...")
if big_list.count(x) == 10 and big_list.count(y) == 10:
    print("Ótimo!")
