Tutorial
--------

Las compresiones de listas son una herramienta muy poderosa, que crea una lista basada en otra, en una única linea legible.

For example, let's say we need to create a list of integers which specify the length of each word in a certain sentence, but only if the word is not the word "the".

Por ejemplo, vamos a decir que necesitamos crear una lista de enteros  que especifique la longitud de cada palabra en una frase en concreto, pero solo si la palabra no es "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)

Usando una comprensión de lista podemos simplificar éste proceso a ésta notación:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)

Exercise
--------

Usando una comprensión de lista, crea una nueva lista llamada "newlist" fuera de la lista "numbers", que contenga solo los números positivos de la lista, como enteros.

Tutorial Code
-------------
numbers = [34.6, -203.4, 44.9, 68.3, -12.2, 44.6, 12.7]
newlist = []
print(newlist)

Expected Output
---------------

test_output_contains("[34, 44, 68, 44, 12]")
success_msg("Very nice!")

Solution
--------
numbers = [34.6, -203.4, 44.9, 68.3, -12.2, 44.6, 12.7]
newlist = [int(x) for x in numbers if x > 0]
print(newlist)
