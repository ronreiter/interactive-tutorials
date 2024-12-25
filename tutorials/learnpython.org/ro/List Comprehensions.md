List comprehensions sunt un instrument foarte puternic, care creează o listă nouă bazată pe o altă listă, într-o singură linie, ușor de citit.

De exemplu, să presupunem că trebuie să creăm o listă de numere întregi care specifică lungimea fiecărui cuvânt dintr-o anumită propoziție, dar numai dacă cuvântul nu este cuvântul "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Folosind o list comprehension, am putea simplifica acest proces la această notație:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercițiu
--------

Folosind o list comprehension, creează o listă nouă numită "newlist" din lista "numbers", care conține doar numerele pozitive din listă, ca numere întregi.