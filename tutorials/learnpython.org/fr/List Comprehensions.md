Tutorial
--------

Les compréhensions de liste sont un outil très puissant, qui crée une nouvelle liste basée sur une autre liste, en une seule ligne lisible.

Par exemple, disons que nous devons créer une liste d'entiers qui spécifie la longueur de chaque mot dans une certaine phrase, mais seulement si le mot n'est pas "the".

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

Exercice
--------

En utilisant une compréhension de liste, créez une nouvelle liste appelée "newlist" à partir de la liste "numbers", qui contient uniquement les nombres positifs de la liste, en tant qu'entiers.

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