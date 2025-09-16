Listkomprehensioner är ett mycket kraftfullt verktyg, som skapar en ny lista baserad på en annan lista, i en enda, läsbar rad.

Till exempel, låt oss säga att vi behöver skapa en lista med heltal som specificerar längden på varje ord i en viss mening, men endast om ordet inte är ordet "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Med hjälp av en listkomprehension kan vi förenkla denna process till denna notation:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Övning
--------

Använd en listkomprehension för att skapa en ny lista kallad "newlist" från listan "numbers", som endast innehåller de positiva talen från listan som heltal.