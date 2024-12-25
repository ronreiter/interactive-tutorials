List Comprehensions е много мощен инструмент, който създава нов списък на базата на друг списък, в един ред, който е лесен за четене.

Например, да кажем, че трябва да създадем списък от цели числа, които указват дължината на всяка дума в дадено изречение, но само ако думата не е "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Използвайки list comprehension, можем да опростим този процес до следната нотация:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

С помощта на list comprehension, създайте нов списък, наречен "newlist", от списъка "numbers", който съдържа само положителните числа от списъка, като цели числа.