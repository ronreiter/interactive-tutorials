Geradores são muito fáceis de implementar, mas um pouco difíceis de entender.

Os geradores são usados para criar iteradores, mas com uma abordagem diferente. Geradores são funções simples que retornam um conjunto iterável de itens, um de cada vez, de uma maneira especial.

Quando uma iteração sobre um conjunto de itens começa usando a instrução for, o gerador é executado. Assim que o código da função do gerador chega a uma instrução "yield", o gerador cede sua execução de volta para o loop for, retornando um novo valor do conjunto. A função do gerador pode gerar quantos valores (possivelmente infinitos) quiser, retornando cada um na sua vez.

Aqui está um exemplo simples de uma função geradora que retorna 7 inteiros aleatórios:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("E o próximo número é... %d!" %(random_number))

Esta função decide como gerar os números aleatórios por conta própria e executa as instruções yield uma de cada vez, pausando entre elas para ceder a execução de volta para o loop for principal.

Exercício
--------

Escreva uma função geradora que retorne a série de Fibonacci. Eles são calculados usando a seguinte fórmula: Os dois primeiros números da série são sempre iguais a 1, e cada número consecutivo retornado é a soma dos dois últimos números.
Dica: Você pode usar apenas duas variáveis na função geradora? Lembre-se de que as atribuições podem ser feitas simultaneamente. O código

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

irá alternar simultaneamente os valores de a e b.