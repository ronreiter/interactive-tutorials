List Comprehensions - це дуже потужний інструмент, що створює новий список на основі іншого списку в одному читаємому рядку.

Наприклад, припустимо, нам потрібно створити список цілих чисел, які вказують на довжину кожного слова в певному реченні, але тільки якщо слово не є "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Використовуючи list comprehension, ми могли б спростити цей процес до такого запису:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Вправа
--------

Використовуючи list comprehension, створіть новий список під назвою "newlist" із списку "numbers", який містить тільки позитивні числа зі списку в якості цілих чисел.