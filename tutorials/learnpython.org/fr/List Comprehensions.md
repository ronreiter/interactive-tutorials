Listes en compréhension est un outil très puissant qui crée une nouvelle liste basée sur une autre liste, en une seule ligne lisible.

Par exemple, disons que nous devons créer une liste d'entiers qui spécifie la longueur de chaque mot dans une certaine phrase, mais uniquement si le mot n'est pas "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

En utilisant une liste en compréhension, nous pourrions simplifier ce processus à cette notation :

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercice
--------

En utilisant une liste en compréhension, créez une nouvelle liste appelée "newlist" à partir de la liste "numbers", qui contient uniquement les nombres positifs de la liste, sous forme d'entiers.