Tutorial
--------

Essa seção lhe ensina a usar operadores básicos em Python.

### Operadores Aritméticos

Assim como qualquer outra linguagem de programação, subtração, multiplicação, e operadores de divisão podem ser usados com números.<br>

    número = 1 + 2 * 3 / 4.0

Tente adivinhar qual será a resposta. Será que Python segue a ordem de operações?

Outro operador disponível é o operador de módulo (%), que retorna o número que é o resto da divisão. Dividendo % divisor = resto.

    resto = 11 % 3

Usar dois símbolos de multiplicação forma um relacionamento de potenciação.

    quadrado = 7 ** 2
    cubo = 2 ** 3

### Usando Operadores Com Strings

Python suporta concatenar strings usando o operador de adição:

    olamundo = "ola" + " " + "mundo"

Python também suporta multiplicar strings para formar uma string com uma sequência repetida:

    varios-ois = "oi" * 10

### Usando Operadores Com Listas

Listas podem ser combinadas com operadores de adição:

    numeros_pares = [2,4,6,8]
    numeros_impares = [1,3,5,7]
    todos_numeros = numeros_impares + numeros_pares

Assim como em strings, Python suporta a formação de novas listas com uma sequência repetida usando o operador de multiplicação:

    print [1,2,3] * 3

Exercício
--------

O objetivo deste exercício é criar duas listas chamadas `lista_x` e `lista_y`,
que contenham 10 instâncias das variáveis `x` e `y` respectivamente.
Você também precisa criar uma lista chamada `grande_lista` que contenha
as variáveis `x` e `y`, 10 vezes cada, concatenando as duas listas que você criou.

Código Tutorial
---------------

x = objeto()
y = objeto()

#FAZER: mudar esse código
lista_x = [x]
lista_y = [y]
grande_lista = []

print "lista_x contém %d objetos" % len(lista_x)

print "lista_y contém %d objetos" % len(lista_y)

print "grande_lista contém %d objetos" % len(grande_lista)

# código de teste
  if lista_x.count(x) == 10 and lista_y.count(y) == 10:<br>
    print "Quase lá"<br>
  if grande_lista.count(x) == 10 and grande_lista.count(y) == 10:<br>
    print "Ótimo"

Resultado Esperado
---------------

lista_x contém 10 objetos
lista_y contém 10 objetos
grande_lista contém 10 objetos
Quase lá...
Ótimo!

Solução
--------

x = objeto()
y = objeto()

# FAZER: mudar esse código
lista_x = [x] * 10
lista_y = [y] * 10
grande_lista = lista_x + lista_y

print "lista_x contém %d objetos" % len(lista_x)
print "lista_y contém %d objetos" % len(lista_y)
print "grande_lista contém %d objetos" % len(grande_lista)

# Código de teste
if lista_x.count(x) == 10 and lista_y.count(y) == 10:<br>
    print "Quase lá..."<br>
if grande_lista.count(x) == 10 and grande_lista.count(y) == 10:<br>
    print "Ótimo!"
