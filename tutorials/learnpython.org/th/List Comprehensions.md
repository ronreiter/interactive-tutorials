List Comprehensions เป็นเครื่องมือที่ทรงพลังมาก ซึ่งสร้างลิสต์ใหม่บนพื้นฐานของลิสต์อื่น ในบรรทัดเดียวที่อ่านได้ง่าย

ตัวอย่างเช่น สมมุติว่าเราต้องการสร้างลิสต์ของจำนวนเต็มที่ระบุความยาวของคำแต่ละคำในประโยคหนึ่ง แต่เฉพาะคำที่ไม่ใช่คำว่า "the" เท่านั้น

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

การใช้ list comprehension เราสามารถทำให้กระบวนการนี้ง่ายขึ้นเป็นรูปแบบนี้:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

ใช้ list comprehension สร้างลิสต์ใหม่ที่ชื่อว่า "newlist" จากลิสต์ "numbers" ซึ่งมีเฉพาะจำนวนบวกจากลิสต์ในรูปแบบของจำนวนเต็ม