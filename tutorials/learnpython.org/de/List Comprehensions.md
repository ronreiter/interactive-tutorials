Listenverständnisse sind ein sehr mächtiges Werkzeug, das eine neue Liste basierend auf einer anderen Liste in einer einzigen, gut lesbaren Zeile erstellt.

Zum Beispiel, nehmen wir an, wir müssen eine Liste von ganzen Zahlen erstellen, die die Länge jedes Wortes in einem bestimmten Satz angeben, aber nur, wenn das Wort nicht das Wort "the" ist.

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Mit einer Listenverständnis könnten wir diesen Prozess zu folgender Notation vereinfachen:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Übung
--------

Verwenden Sie ein Listenverständnis, um eine neue Liste namens "newlist" aus der Liste "numbers" zu erstellen, die nur die positiven Zahlen aus der Liste als Ganzzahlen enthält.