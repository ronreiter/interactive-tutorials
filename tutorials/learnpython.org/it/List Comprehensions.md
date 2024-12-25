List Comprehensions è uno strumento molto potente, che crea una nuova lista basata su un'altra lista, in una singola linea leggibile.

Ad esempio, supponiamo di dover creare una lista di interi che specificano la lunghezza di ogni parola in una certa frase, ma solo se la parola non è "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Utilizzando una list comprehension, potremmo semplificare questo processo con questa notazione:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Esercizio
--------

Utilizzando una list comprehension, crea una nuova lista chiamata "newlist" a partire dalla lista "numbers", che contenga solo i numeri positivi della lista, come interi.