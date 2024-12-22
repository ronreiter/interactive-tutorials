List Comprehensions to bardzo potężne narzędzie, które tworzy nową listę w oparciu o inną listę, w jednym czytelnym wierszu.

Na przykład, załóżmy, że musimy stworzyć listę liczb całkowitych, które określają długość każdego słowa w danym zdaniu, ale tylko wtedy, gdy słowo nie jest słowem "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Używając list comprehensions, moglibyśmy uprościć ten proces do takiej notacji:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Ćwiczenie
--------

Używając list comprehensions, stwórz nową listę o nazwie "newlist" z listy "numbers", która zawiera tylko liczby dodatnie z listy, jako liczby całkowite.