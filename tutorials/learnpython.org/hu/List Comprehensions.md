A List Comprehensions egy nagyon hatékony eszköz, amely egy meglévő lista alapján hoz létre egy új listát, egyetlen, könnyen olvasható sorban.

Például, tegyük fel, hogy létre kell hoznunk egy olyan egész számokat tartalmazó listát, melyek meghatározzák egy adott mondat minden szavának a hosszát, de csak akkor, ha a szó nem a "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

List Comprehension használatával egyszerűsíthetjük ezt a folyamatot erre a jelölésre:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

List Comprehension használatával hozz létre egy új listát "newlist" néven, a "numbers" listából, amely csak a pozitív számokat tartalmazza a listából, egészként.