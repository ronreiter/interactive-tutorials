Listatun ymmärrys on erittäin tehokas työkalu, joka luo uuden listan toisen listan perusteella yhdellä, luettavalla rivillä.

Esimerkiksi, sanotaan että meidän pitää luoda lista kokonaisluvuista, jotka määrittelevät jokaisen sanan pituuden tietyssä lauseessa, mutta vain jos sana ei ole "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Listatun ymmärryksen avulla voisimme yksinkertaistaa tämän prosessin seuraavaan merkintään:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

Listatun ymmärryksen avulla luo uusi lista nimeltään "newlist" listasta "numbers", joka sisältää vain positiiviset luvut listasta kokonaislukuina.