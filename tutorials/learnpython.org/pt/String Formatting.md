Python utiliza a formatação de strings ao estilo C para criar novas strings formatadas. O operador "%" é usado para formatar um conjunto de variáveis contidas em uma "tupla" (uma lista de tamanho fixo), juntamente com uma string de formatação, que contém texto normal juntamente com "especificadores de argumento", símbolos especiais como "%s" e "%d".

Vamos supor que você tenha uma variável chamada "name" com seu nome de usuário dentro, e gostaria de imprimir uma saudação para esse usuário.

    # Isto imprime "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Para usar dois ou mais especificadores de argumento, use uma tupla (parênteses):

    # Isto imprime "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Qualquer objeto que não seja uma string pode ser formatado usando o operador %s também. A string que retorna do método "repr" desse objeto é formatada como string. Por exemplo:

    # Isto imprime: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Aqui estão alguns especificadores de argumento básicos que você deve conhecer:


`%s - String (ou qualquer objeto com uma representação em string, como números)`

`%d - Inteiros`

`%f - Números de ponto flutuante`

`%.<número de dígitos>f - Números de ponto flutuante com uma quantidade fixa de dígitos à direita do ponto.`

`%x/%X - Inteiros em representação hexadecimal (minúsculas/maiúsculas)`


Exercício
--------

Você precisará escrever uma string de formatação que imprima os dados usando a seguinte sintaxe:
    `Hello John Doe. Your current balance is $53.44.`