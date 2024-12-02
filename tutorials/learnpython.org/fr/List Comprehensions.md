Tutorial
--------

Les compréhensions de listes sont un outil très puissant, qui permet de créer une nouvelle liste à partir d'une autre liste, en une seule ligne lisible.

Par exemple, disons que nous devons créer une liste d'entiers qui spécifie la longueur de chaque mot dans une certaine phrase, mais uniquement si le mot n'est pas le mot "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

En utilisant une compréhension de liste, nous pourrions simplifier ce processus à cette notation :

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

Using a list comprehension, create a new list called "newlist" out of the list "numbers", which contains only the positive numbers from the list, as integers.

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