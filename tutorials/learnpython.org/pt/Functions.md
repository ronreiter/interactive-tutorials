### O que são Funções?

Funções são uma maneira conveniente de dividir seu código em blocos úteis, permitindo organizar o código, torná-lo mais legível, reutilizá-lo e economizar tempo. Além disso, funções são uma forma essencial de definir interfaces para que programadores possam compartilhar seu código.

### Como escrever funções em Python?

Como vimos em tutoriais anteriores, Python utiliza blocos.

Um bloco é uma área de código escrita no formato de:

    block_head:
        1a linha do bloco
        2a linha do bloco
        ...

Onde uma linha de bloco é mais código Python (até mesmo outro bloco), e a cabeça do bloco tem o seguinte formato:
block_keyword block_name(argument1,argument2, ...)
Palavras-chave que você já conhece são "if", "for" e "while".

Funções em Python são definidas usando a palavra-chave de bloco "def", seguida pelo nome da função como o nome do bloco.
Por exemplo:

    def my_function():
        print("Hello From My Function!")


Funções também podem receber argumentos (variáveis passadas do chamador para a função).
Por exemplo:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Funções podem retornar um valor para o chamador, utilizando a palavra-chave 'return'.
Por exemplo:

    def sum_two_numbers(a, b):
        return a + b

### Como chamar funções em Python?

Basta escrever o nome da função seguido de (), colocando quaisquer argumentos necessários dentro dos parênteses.
Por exemplo, vamos chamar as funções escritas acima (no exemplo anterior):

    # Defina nossas 3 funções
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # printa uma saudação simples
    my_function()

    # prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # após esta linha x terá o valor 3!
    x = sum_two_numbers(1,2)  


Exercício
--------

Neste exercício, você usará uma função existente e adicionará a sua própria para criar um programa totalmente funcional.

1. Adicione uma função chamada `list_benefits()` que retorna a seguinte lista de strings: "Mais código organizado", "Código mais legível", "Reutilização de código mais fácil", "Permitindo que os programadores compartilhem e conectem código juntos"

2. Adicione uma função chamada `build_sentence(info)` que recebe um único argumento contendo uma string e retorna uma sentença começando com a string fornecida e terminando com a string " é um benefício das funções!"

3. Execute e veja todas as funções trabalhando juntas!