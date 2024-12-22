List Comprehensions er et meget kraftfuldt værktøj, der skaber en ny liste baseret på en anden liste i en enkelt, læsbar linje.

For eksempel, lad os sige, at vi skal lave en liste af heltal, der angiver længden af hvert ord i en bestemt sætning, men kun hvis ordet ikke er ordet "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Ved hjælp af en list comprehension kunne vi forenkle denne proces til denne notation:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Øvelse
--------

Ved hjælp af en list comprehension, lav en ny liste kaldet "newlist" ud fra listen "numbers", som kun indeholder de positive tal fra listen som heltal.