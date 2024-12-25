List Comprehensions एक बहुत शक्तिशाली उपकरण है, जो एक नई सूची को एक अन्य सूची के आधार पर एकल, पठनीय पंक्ति में बनाता है।

उदाहरण के लिए, मान लीजिए हमें प्रत्येक शब्द की लंबाई को निर्दिष्ट करने वाली पूर्णांकों की एक सूची बनानी है, लेकिन केवल तभी जब शब्द "the" न हो।

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

लिस्ट कॉम्प्रिहेंशन का उपयोग करके, हम इस प्रक्रिया को इस संकेतन में सरल बना सकते हैं:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

व्यायाम
--------

लिस्ट कॉम्प्रिहेंशन का उपयोग करते हुए, "numbers" सूची से केवल सकारात्मक संख्याओं को पूर्णांक के रूप में शामिल करते हुए "newlist" नामक एक नई सूची बनाएं।