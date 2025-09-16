List Comprehensions je velmi mocný nástroj, který vytváří nový seznam na základě jiného seznamu, a to v jednom čitelném řádku.

Například, řekněme, že potřebujeme vytvořit seznam celých čísel, který určuje délku každého slova v určité větě, ale pouze pokud to slovo není "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Pomocí list comprehension bychom tento proces mohli zjednodušit na tuto notaci:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Cvičení
--------

Pomocí list comprehension vytvořte nový seznam zvaný "newlist" z seznamu "numbers", který obsahuje pouze kladná čísla ze seznamu, jako celá čísla.