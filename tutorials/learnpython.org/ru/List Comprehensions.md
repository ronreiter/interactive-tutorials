List Comprehensions - это очень мощный инструмент, который создает новый список на основе другого списка в одной читаемой строке.

Например, допустим, нам нужно создать список целых чисел, которые определяют длину каждого слова в определенном предложении, но только если слово не является словом "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Используя генератор списков, мы можем упростить этот процесс до следующего варианта:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Упражнение
----------

Используя генератор списков, создайте новый список под названием "newlist" из списка "numbers", который содержит только положительные числа из списка, в виде целых чисел.