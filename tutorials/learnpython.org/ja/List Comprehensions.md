List Comprehensionsは非常に強力なツールであり、他のリストに基づいて新しいリストを単一の読みやすい行で作成します。

例えば、特定の文章内の各単語の長さを指定する整数のリストを作成する必要があるとしましょう。ただし、単語が「the」でない場合に限ります。

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

リスト内包表記を使用すると、このプロセスを以下のように簡略化できます：

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

リスト内包表記を使用して、リスト「numbers」から「newlist」という新しいリストを作成し、その中には元のリストからの正の数のみを整数として含めてください。