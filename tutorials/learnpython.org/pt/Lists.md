Listas são muito semelhantes a arrays. Elas podem conter qualquer tipo de variável, e podem conter tantas variáveis quanto você desejar. Listas também podem ser iteradas de uma maneira muito simples. Aqui está um exemplo de como construir uma lista.

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # prints 1
    print(mylist[1]) # prints 2
    print(mylist[2]) # prints 3

    # prints out 1,2,3
    for x in mylist:
        print(x)

Acessar um índice que não existe gera uma exceção (um erro).

    mylist = [1,2,3]
    print(mylist[10])

Exercício
--------

Neste exercício, você precisará adicionar números e strings às listas corretas usando o método "append" das listas. Você deve adicionar os números 1, 2 e 3 à lista "numbers" e as palavras 'hello' e 'world' à variável strings.

Você também terá que preencher a variável second_name com o segundo nome na lista names, usando o operador de colchetes `[]`. Note que o índice é baseado em zero, então se você quiser acessar o segundo item na lista, seu índice será 1.