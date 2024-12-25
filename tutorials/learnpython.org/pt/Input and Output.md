Tomar entradas e mostrar saídas da maneira necessária desempenha um papel importante na codificação interativa. Então, vamos nos concentrar na entrada e saída de vários tipos de dados.

###raw_input()
isso é usado para receber entrada até alcançar o final da linha. Note que não deve haver espaços. A entrada termina com um caractere de nova linha e se houver quaisquer espaços na linha de entrada, resulta em um erro

    # Imprime a entrada recebida do stdin
    astring=raw_input()# forneça hello como entrada
    print raw_input()

após receber a entrada, podemos convertê-la para o tipo de dado que precisamos usando funções como int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
isso é especialmente usado para entrada de inteiros. A vantagem de input() sobre raw_input() pode ser esclarecida com o exemplo a seguir

    #dê 2*2 como entrada
    a=input()
    b=raw_input() #note que int(raw_input()) resulta em erro
    print a #imprime 4
    print b #imprime 2*2

###como receber dois ou mais tipos de dados em uma única linha separados por espaços?
Aqui fazemos uso das funções split() e map()

    #dê dois inteiros na primeira linha e mais de dois inteiros na terceira linha
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # imprime os dois primeiros inteiros da primeira linha e a soma dos inteiros da segunda linha

###Formatação de saída
Você já deve ter notado que a instrução print automaticamente insere uma nova linha. O uso da vírgula como no código acima imprime os valores em uma única linha separados por um espaço. O módulo sys proporciona várias funções para formatação de saída, mas aqui vamos aprender a usar conhecimento básico de formatação para produzir da forma necessária. Vamos ver alguns exemplos para aprender a formatação de saída

    a = 5
    b = 0.63
    c = "hello"
    print "a é : %d, b é %0.4f,c é %s" % (a,b,c)

A saída deve ser autoexplicativa.

Exercício
--------

Escreva um programa que peça ao usuário para inserir seu nome, idade e país. O programa deve então imprimir uma mensagem que inclua essa informação em uma frase. O programa deve incluir:

1. Tomar um nome como entrada usando `raw_input()`.
2. Tomar uma idade como entrada usando `input()` e convertê-la para um inteiro.
3. Tomar o nome de um país como entrada usando `raw_input()`.
4. Formatar a saída para exibir uma frase que inclua o nome, a idade e o país.

O programa deve demonstrar manipulação de entrada e formatação de string em Python.