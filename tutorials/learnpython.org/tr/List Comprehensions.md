List Comprehensions, başka bir listeye dayalı olarak, tek bir okunabilir satırda yeni bir liste oluşturan çok güçlü bir araçtır.

Örneğin, belirli bir cümledeki her kelimenin uzunluğunu belirten bir tamsayı listesi oluşturmamız gerektiğini varsayalım, ancak yalnızca kelime "the" değilse.

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Bir liste kavraması kullanarak, bu süreci şu notasyona basitleştirebiliriz:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Alıştırma
--------

Bir liste kavramı kullanarak, "numbers" listesinden yalnızca pozitif sayıları içeren "newlist" adlı yeni bir liste oluşturun.