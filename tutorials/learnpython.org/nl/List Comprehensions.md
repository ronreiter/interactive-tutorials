List Comprehensions is een zeer krachtig hulpmiddel, dat een nieuwe lijst creëert op basis van een andere lijst, in één enkele, leesbare regel.

Stel bijvoorbeeld dat we een lijst van gehele getallen moeten maken die de lengte van elk woord in een bepaalde zin aangeven, maar alleen als het woord niet het woord "the" is.

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Met behulp van een list comprehension kunnen we dit proces vereenvoudigen tot deze notatie:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Oefening
--------

Met behulp van een list comprehension, maak een nieuwe lijst genaamd "newlist" uit de lijst "numbers", die alleen de positieve getallen uit de lijst bevat, als gehele getallen.