List Comprehensions는 한 줄로 읽기 쉬운 방식으로 다른 리스트를 기반으로 새로운 리스트를 생성하는 매우 강력한 도구입니다.

예를 들어, 특정 문장의 각 단어의 길이를 지정하는 정수 리스트를 생성하되, 단어가 "the"가 아닐 경우에만 생성해야 한다고 가정해 봅시다.

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

리스트 컴프리헨션을 사용하면 이 과정을 다음과 같이 간단하게 표현할 수 있습니다:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

리스트 컴프리헨션을 사용하여 "numbers" 리스트에서 양수만 정수로 포함하는 "newlist"라는 새로운 리스트를 생성하세요.