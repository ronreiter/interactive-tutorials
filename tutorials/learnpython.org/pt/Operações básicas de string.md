Tutorial
--------

Strings são pedaços de texto. Elas podem ser definidas por qualquer coisa entre aspas(" " ou ' '):

    umastring = "Olá, Mundo!"

Como você vê, a primeira coisa que você aprendeu foi mostrar uma simples frase. Essa frase foi armazenada pelo Python como uma string. Porém, em vez de imediatamente mostrar as strings, nós vamos explorar as várias coisas que você pode fazer com elas.

    print len(umastring)

Isso vai mostrar 11, pois "Olá, Mundo!" é composto por 12 caractéres, incluindo pontuação e espaços.

    print umastring.index("o")
    print umastring.index("O")

O primeiro irá mostrar o número 9, pois a posição da primeira ocorrência da letra "o" minúscula está 9 caractéres longe do primeiro caractére.<br><br>
O segundo irá mostrar o número 0, pois a posição da primeira ocorrência da "O" maiúscula é o primeiro caractére, deixando ela 0 caractéres longe do primeiro. Se os 'o''s fossem todos minúsculos ou maiúsculos, nós veríamos o número 0, pois esse método só funciona com a primeira ocorrência de tudo.

Mas por que não mostrar 1? A letra 'O' não é a primeira letra da string? Para simplificar as coisas, Python(e outras linguagens de programação) começam as coisas no 0 e não 1. Então o index de "O" é 0.

    print umastring.count("l")

Para vocês usando fontes maluquinhas, aquilo é um L minúsculo, não um número um. Isso conta o número de l's em uma string. Então, mostrará o número 1(O>l<á, Mundo!).

    print umastring[3:7]

Isso mostrará um pedaço da string, começando no index 3, e terminando no index 6, mas por quê 6 e não 7? Novamente, a maioria das linguagens de programação fazem isso - Fazer cálculos dentro desse colchetes fica mais fácil.

Se você tivesse apenas um número entre os colchetes, ele vai te dar o único caractére naquele index. Se você deixar o primeiro número porém manter os dois pontos, ele te dará um pedaço do começo até o número que você deixou. Se você deixar o segundo número, ele te dará um pedaço do primeiro número até o fim.

Você também pode colocar números negativos dentro dos colchetes. Eles são um jeito fácil de começar no final da string ao invés do começo. Assim, -3 singnifica "Terceiro caractére a partir do fim".

    print umastring.upper()
    print umastring.lower()

Esses acima mostram uma nova string com todas as letras, porém, maiúsculas e minúsculas respectivamente.

    print umastring.startswith("Olá")
    print umastring.endswith("asdfasdfasdf")

Isso é usado para determinar se a string começa com algo ou termina em algo, respectivamente. A primeira mostrará True, pois a string começa com "Olá". A segunda mostrará False, pois a string claramente não termina com "asdfasdfasdf".

    umaspalavras = umastring.split(" ")

Isso divide a string em um monte de strings juntas em uma lista. Já que esse exemplo divide no espaço, o primeiro item na lista será "Olá," e o segundo será "Mundo!".

Exercícios
----------

Tente consertar o código para mostrar a informação correta ao mudar a string.

Código do tutorial
------------------

s = "Olá! o que essa string será?"

# O tamanho deveria ser 20
print "Tamanho de s = %d" % len(s)

# A primeira ocorrência da letra "a" deve ser no index 8
print "A primeira ocorrência da letra a = %d" % s.index("a")


# Existirão 2 "a"s
print "a ocorre %d veze(s)" % s.count("a")

# Partindo a string em pedaços
print "Os primeiros cinco caracteres são '%s'" % s[:5] # Começo ao cinco
print "Os primeiros cinco caracteres são '%s'" % s[5:10] # Cinco ao dez
print "O décimo segundo caractere é '%s'" % s[12] # Só o número 12

print "Os últimos cinco caracteres são '%s'" % s[-5:] # Quinto do último ao fim.

# Converter tudo para letra maiúscula
print "String em maiúscula: %s" % s.upper()

# Converter para minúscula
print "String em minúscula: %s" % s.lower()

#Checar como uma string começa
if s.startswith("Str"):
    print "String começa com 'str'. Bom!"

# Checar como uma string termina
if s.endswith("ome!"):
    print "String termina com 'ome!'. Bom!"

# Partir a string em três strings separadas,
# cada contendo apenas uma palavra
print "Split the words of the string: %s" % s.split(" ")

Saída esperada
---------------

Tamanho de s = 28
A primeira ocorrência da letra a = 14
a occore 1 vez
Os primeiros cinco caracteres são 'Strin'
Os próximos cinco caracteres são 'gs ar'
O décimo terceiro caractere é 'a'
Os últimos cinco caracteres são 'será?'
String em letras maiúsculas: STRING SÃo DEMAIS!
String em letras minúsculas: string são demais!
string começa com 'Str'. Bom!
String termina com 'ome!'. Bom!\
Partir as palavras da string: ['Strings', 'são', 'demais!']

Solução
--------

s = "Strings são demais!"

# Tamanho deve ser 19
print "Tamanho de s = %d" % len(s)

# Primeira ocorrência de "a" deve ser no index 15
print "A primeira ocorrência da letra a = %d" % s.index("a")

# Número de a's deve ser 1
print "a ocorre %d vez(es)" %s.count("a") 

# Dividindo a string em pedaços
print "Os primeiros cinco caractéres '%s'" % s[:5] #Começar para 5
print "Os próximos cinco caractéres são '%s'" % s[5:10] # 5 ao 10
print "O décimo terceiro caractére é '%s'" % s[12] # Apenas o número 12
print "Os últimos cincos caractéres são '%s'" % s[-5:] # 5º do fim ao começo

# Converter tudo para letras maiúsculas
print "String em maiúscula: %s" % s.upper()

# Converter tudo para letras minúsculas
print "String em letras minúsculas: %s" % s.lower()

# Checar como uma string começa
if s.startswith("Str"):
    print "String começa com 'Str'. Bom!"

# Checar como uma string termina
if s.endswith("ais!"):
    print "String termina com 'ais!'. Bom!"

# Dividir a string em três strings separadas,
# cada contendo uma palavra apenas
print "Dividir as palavras da string: %s" % s.split(" ")
