セットは重複のないリストです。たとえば、段落内で使用されている単語のリストを集めたいとしましょう。

    print(set("my name is Eric and Eric is my name".split()))

これは「my」、「name」、「is」、「Eric」、そして最後に「and」を含むリストを出力します。文の他の単語はすでにセットに含まれているため、重複して挿入されません。

Pythonにおいてセットは強力なツールです。なぜなら、他のセット間での差分や共通部分を計算する能力があるからです。たとえば、イベントAとBの参加者のリストがあるとします：

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

両方のイベントに参加したメンバーを見つけるには、「intersection」メソッドを使用します：

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

どちらか片方のイベントにのみ参加したメンバーを見つけるには、「symmetric_difference」メソッドを使用します：

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

一方のイベントには参加したが、もう一方には参加していないメンバーを見つけるには、「difference」メソッドを使用します：

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

全参加者のリストを取得するには、「union」メソッドを使用します：

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

以下の演習では、指定されたリストを使用して、イベントAからイベントBに参加しなかった全参加者を含むセットを出力してみてください。