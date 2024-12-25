Python é uma linguagem muito simples, e possui uma sintaxe bastante direta. Ela incentiva os programadores a programar sem código boilerplate (pré-pronto). A diretiva mais simples em Python é a diretiva "print" - que simplesmente imprime uma linha (e também inclui uma nova linha, ao contrário de C).

Existem duas principais versões do Python, Python 2 e Python 3. Python 2 e 3 são bastante diferentes. Este tutorial usa o Python 3, porque ele é mais semanticamente correto e suporta recursos mais novos.

Por exemplo, uma diferença entre Python 2 e 3 é a instrução `print`. No Python 2, a instrução "print" não é uma função e, portanto, é invocada sem parênteses. No entanto, no Python 3, ela é uma função e deve ser invocada com parênteses.

Para imprimir uma string em Python 3, basta escrever:

    print("This line will be printed.")

### Indentação

Python usa indentação para blocos, em vez de chaves. Ambos os tabs e espaços são suportados, mas o padrão de indentação exige que o código padrão Python use quatro espaços. Por exemplo:

    x = 1
    if x == 1:
        # indented four spaces
        print("x is 1.")

Exercício
--------

Use a função "print" para imprimir a linha "Hello, World!".