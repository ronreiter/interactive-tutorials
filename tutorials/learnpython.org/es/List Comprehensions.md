List Comprehensions es una herramienta muy poderosa, que crea una nueva lista basada en otra lista, en una sola línea legible.

Por ejemplo, supongamos que necesitamos crear una lista de enteros que especifique la longitud de cada palabra en una determinada oración, pero solo si la palabra no es la palabra "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Usando una list comprehension, podríamos simplificar este proceso a esta notación:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Ejercicio
--------

Usando una list comprehension, crea una nueva lista llamada "newlist" a partir de la lista "numbers", que contenga solo los números positivos de la lista, como enteros.