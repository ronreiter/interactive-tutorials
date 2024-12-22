List Comprehensions é uma ferramenta muito poderosa, que cria uma nova lista baseada em outra lista, em uma única e legível linha.

Por exemplo, digamos que precisamos criar uma lista de inteiros que especifique o comprimento de cada palavra em uma determinada sentença, mas apenas se a palavra não for "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Usando uma list comprehension, poderíamos simplificar esse processo para esta notação:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercício
--------

Usando uma list comprehension, crie uma nova lista chamada "newlist" a partir da lista "numbers", que contenha apenas os números positivos da lista, como inteiros.