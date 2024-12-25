Normalmente, definimos uma função usando a palavra-chave def em algum lugar do código e a chamamos sempre que precisamos usá-la.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

Agora, em vez de definir a função em algum lugar e chamá-la, podemos usar as funções lambda do Python, que são funções inline definidas no mesmo local em que as usamos. Assim, não precisamos declarar uma função em algum lugar e revisitar o código apenas para um uso único.

Elas não precisam ter um nome, então também são chamadas de funções anônimas. Definimos uma função lambda usando a palavra-chave lambda.

    your_function_name = lambda inputs : output

Então, o exemplo de soma acima usando a função lambda seria,

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Aqui estamos atribuindo a função lambda à variável **sum**, e ao fornecer os argumentos, ou seja, a e b, ela funciona como uma função normal.

Exercício
--------
Escreva um programa usando funções lambda para verificar se um número na lista dada é ímpar. Imprima "True" se o número for ímpar ou "False" caso contrário para cada elemento.