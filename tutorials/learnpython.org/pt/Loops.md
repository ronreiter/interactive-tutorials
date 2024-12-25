Existem dois tipos de loops em Python, for e while.

### O loop "for"

Loops for iteram sobre uma sequência dada. Aqui está um exemplo:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

Loops for podem iterar sobre uma sequência de números usando as funções "range" e "xrange". A diferença entre range e xrange é que a função range retorna uma nova lista com números daquele intervalo especificado, enquanto xrange retorna um iterador, que é mais eficiente. (Python 3 usa a função range, que age como xrange). Note que a função range é baseada em zero.

    # Imprime os números 0,1,2,3,4
    for x in range(5):
        print(x)

    # Imprime 3,4,5
    for x in range(3, 6):
        print(x)

    # Imprime 3,5,7
    for x in range(3, 8, 2):
        print(x)

### Loops "while"

Loops while repetem enquanto uma certa condição booleana é satisfeita. Por exemplo:

    # Imprime 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Isso é o mesmo que count = count + 1

### Instruções "break" e "continue"

**break** é usado para sair de um loop for ou de um loop while, enquanto **continue** é usado para pular o bloco atual e retornar à instrução "for" ou "while". Alguns exemplos:

    # Imprime 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Imprime apenas os números ímpares - 1,3,5,7,9
    for x in range(10):
        # Verifica se x é par
        if x % 2 == 0:
            continue
        print(x)

### Podemos usar cláusula "else" para loops?

Diferente de linguagens como C, CPP, podemos usar **else** em loops. Quando a condição do loop da instrução "for" ou "while" falha, então a parte do código em "else" é executada. Se uma instrução **break** for executada dentro do loop for, então a parte "else" é pulada. Note que a parte "else" é executada mesmo que haja uma instrução **continue**.

Aqui estão alguns exemplos:

    # Imprime 0,1,2,3,4 e então imprime "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Imprime 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("isso não é impresso porque o loop for é terminado por causa do break mas não por falha na condição")


Exercício
--------

Percorra e imprima todos os números pares da lista de números na mesma ordem em que são recebidos. Não imprima nenhum número que venha após 237 na sequência.