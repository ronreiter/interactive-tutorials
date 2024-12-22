Strings são pedaços de texto. Podem ser definidas como qualquer coisa entre aspas:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Como você pode ver, a primeira coisa que aprendeu foi imprimir uma frase simples. Esta frase foi armazenada pelo Python como uma string. No entanto, em vez de imprimir strings imediatamente, vamos explorar as várias coisas que você pode fazer com elas. Você também pode usar aspas simples para atribuir uma string. No entanto, enfrentará problemas se o valor a ser atribuído contiver aspas simples. Por exemplo, para atribuir a string nestes colchetes (aspas simples são ' '), você precisa usar apenas aspas duplas assim

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Isso imprime 12, porque "Hello world!" tem 12 caracteres, incluindo pontuação e espaços.

    astring = "Hello world!"
    print(astring.index("o"))

Isso imprime 4, porque a localização da primeira ocorrência da letra "o" está a 4 caracteres de distância do primeiro caractere. Note como há realmente dois "o" na frase - este método apenas reconhece o primeiro.

Mas por que não imprimiu 5? O "o" não é o quinto caractere na string? Para simplificar as coisas, Python (e a maioria das outras linguagens de programação) começa as contagens em 0 em vez de 1. Portanto, o índice de "o" é 4.

    astring = "Hello world!"
    print(astring.count("l"))

Para aqueles de vocês usando fontes engraçadas, isso é um L minúsculo, não um número um. Isso conta o número de l's na string. Portanto, deve imprimir 3.

    astring = "Hello world!"
    print(astring[3:7])

Isso imprime um pedaço da string, começando no índice 3 e terminando no índice 6. Mas por que 6 e não 7? Novamente, a maioria das linguagens de programação faz isso - torna mais fácil fazer cálculo dentro desses colchetes.

Se você tiver apenas um número nos colchetes, obterá o único caractere nesse índice. Se deixar de fora o primeiro número mas mantiver os dois pontos, obterá uma fatia do início até o número que você deixou. Se deixar de fora o segundo número, obterá uma fatia do primeiro número até o fim.

Você pode até colocar números negativos nos colchetes. Eles são uma maneira fácil de começar no final da string em vez do começo. Desta forma, -3 significa "3º caractere a partir do final".

    astring = "Hello world!"
    print(astring[3:7:2])

Isso imprime os caracteres da string de 3 a 7 pulando um caractere. Esta é a sintaxe de fatia estendida. A forma geral é [inicio:fim:passo].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Note que ambos produzem a mesma saída.

Não existe uma função como strrev em C para inverter uma string. Mas com o tipo de sintaxe de fatia mencionada acima, você pode facilmente inverter uma string assim

    astring = "Hello world!"
    print(astring[::-1])

Isso

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Esses comandos criam uma nova string com todas as letras convertidas para maiúsculas e minúsculas, respectivamente.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Isso é usado para determinar se a string começa com alguma coisa ou termina com alguma coisa, respectivamente. A primeira imprimirá True, pois a string começa com "Hello". A segunda imprimirá False, pois a string certamente não termina com "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Isso divide a string em um monte de strings agrupadas em uma lista. Como este exemplo divide em um espaço, o primeiro item na lista será "Hello", e o segundo será "world!".

Exercício
---------

Tente corrigir o código para imprimir as informações corretas alterando a string.