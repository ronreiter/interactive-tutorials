List Comprehensions er et veldig kraftig verktøy som lager en ny liste basert på en annen liste, på en enkel og lesbar linje.

For eksempel, la oss si at vi trenger å lage en liste med heltall som spesifiserer lengden på hvert ord i en viss setning, men bare hvis ordet ikke er ordet "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Ved å bruke en list comprehension, kunne vi forenkle denne prosessen til denne notasjonen:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

Bruk en list comprehension for å lage en ny liste kalt "newlist" ut av listen "numbers", som inneholder bare de positive tallene fra listen, som heltall.