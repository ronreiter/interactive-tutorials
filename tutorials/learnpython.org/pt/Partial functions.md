Você pode criar funções parciais em Python usando a função `partial` da biblioteca `functools`.

Funções parciais permitem derivar uma função com x parâmetros para uma função com menos parâmetros e valores fixos definidos para a função mais limitada.

Importação necessária:

    from functools import partial

Este código retornará 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Uma nota importante: os valores padrão começarão a substituir as variáveis da esquerda. O 2 substituirá x. y será igual a 4 quando dbl(4) for chamado. Isso não faz diferença neste exemplo, mas faz no exemplo abaixo.

Exercício
--------
Edite a função fornecida chamando `partial()` e substituindo as três primeiras variáveis em func(). Em seguida, imprima com a nova função parcial usando apenas uma variável de entrada para que a saída seja igual a 60.