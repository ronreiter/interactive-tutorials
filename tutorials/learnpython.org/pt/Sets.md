Sets são listas sem entradas duplicadas. Digamos que você queira coletar uma lista de palavras usadas em um parágrafo:

    print(set("my name is Eric and Eric is my name".split()))

Isso exibirá uma lista contendo "my", "name", "is", "Eric", e finalmente "and". Como o resto da frase usa palavras que já estão no conjunto, elas não são inseridas duas vezes.

Sets são uma ferramenta poderosa em Python, já que têm a capacidade de calcular diferenças e interseções entre outros conjuntos. Por exemplo, digamos que você tenha uma lista de participantes nos eventos A e B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Para descobrir quais membros participaram de ambos os eventos, você pode usar o método "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Para descobrir quais membros participaram de somente um dos eventos, use o método "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Para descobrir quais membros participaram de somente um evento e não do outro, use o método "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Para receber uma lista de todos os participantes, use o método "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

No exercício abaixo, use as listas dadas para imprimir um conjunto contendo todos os participantes do evento A que não participaram do evento B.