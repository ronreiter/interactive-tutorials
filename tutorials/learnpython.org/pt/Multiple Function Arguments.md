Cada função em Python recebe um número pré-definido de argumentos, se declarada normalmente, assim:

    def myfunction(first, second, third):
        # faça algo com as 3 variáveis
        ...

É possível declarar funções que recebem um número variável de argumentos, usando a seguinte sintaxe:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

A variável "therest" é uma lista de variáveis, que recebe todos os argumentos que foram passados para a função "foo" após os primeiros 3 argumentos. Assim, chamar `foo(1, 2, 3, 4, 5)` imprimirá:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

Também é possível enviar argumentos para funções por palavra-chave, de modo que a ordem dos argumentos não importa, usando a seguinte sintaxe. O código seguinte produz a seguinte saída:
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))

A função "bar" recebe 3 argumentos. Se um argumento adicional "action" é recebido, e ele instrui sobre somar os números, então a soma é impressa. Alternativamente, a função também sabe que deve retornar o primeiro argumento, se o valor do parâmetro "number", passado para a função, for igual a "first".

Exercício
--------

Complete as funções `foo` e `bar` para que elas possam receber uma quantidade variável de argumentos (3 ou mais)
A função `foo` deve retornar a quantidade de argumentos extras recebidos.
A `bar` deve retornar `True` se o argumento com a palavra-chave `magicnumber` for 7, e `False` caso contrário.