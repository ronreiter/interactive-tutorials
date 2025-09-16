Quando se está programando, erros acontecem. É apenas um fato da vida. Talvez o usuário tenha fornecido uma entrada ruim. Talvez um recurso de rede não esteja disponível. Talvez o programa tenha ficado sem memória. Ou o programador possa até ter cometido um erro!

A solução do Python para erros são as exceções. Você pode já ter visto uma exceção antes.

    print(a)
    
    #erro
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Ops! Esqueci de atribuir um valor à variável 'a'.

Mas às vezes você não quer que as exceções interrompam completamente o programa. Você pode querer fazer algo especial quando uma exceção é levantada. Isso é feito em um bloco *try/except*.

Aqui está um exemplo trivial: Suponha que você esteja iterando sobre uma lista. Você precisa iterar sobre 20 números, mas a lista é criada a partir da entrada do usuário e pode não ter 20 números nela. Depois de chegar ao final da lista, você só quer que o restante dos números seja interpretado como 0. Veja como você poderia fazer isso:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Levantado quando acessando um índice inexistente de uma lista
                do_stuff_with_number(0)
    
    catch_this()

Pronto, isso não foi muito difícil! Você pode fazer isso com qualquer exceção. Para mais detalhes sobre como lidar com exceções, consulte os [Docs do Python](http://docs.python.org/tutorial/errors.html#handling-exceptions).

Exercício
--------

Trate todas as exceções! Pense nas lições anteriores para retornar o sobrenome do ator.