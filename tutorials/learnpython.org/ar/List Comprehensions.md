قوائم الاستيعاب هي أداة قوية جداً، تُتيح إنشاء قائمة جديدة بناءً على قائمة أخرى، في سطر واحد وقابل للقراءة بسهولة.

على سبيل المثال، لنفترض أننا نحتاج إلى إنشاء قائمة بالأعداد الصحيحة التي تحدد طول كل كلمة في جملة معينة، ولكن فقط إذا لم تكن الكلمة هي "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

باستخدام قوائم الاستيعاب، يمكننا تبسيط هذه العملية إلى هذه الصيغة:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

تمرين
--------

باستخدام قوائم الاستيعاب، أنشئ قائمة جديدة تُسمى "newlist" من القائمة "numbers"، والتي تحتوي فقط على الأرقام الموجبة من القائمة كأعداد صحيحة.