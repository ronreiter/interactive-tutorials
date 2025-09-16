List Comprehensions הוא כלי חזק מאוד, המייצר רשימה חדשה בהתבסס על רשימה אחרת, בשורה אחת קריאה.

לדוגמה, נניח שאנו צריכים ליצור רשימה של מספרים שלמים המציינים את האורך של כל מילה במשפט מסוים, אך רק אם המילה אינה המילה "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

באמצעות List Comprehension, נוכל לפשט תהליך זה לנוטרציה זו:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

תרגיל
--------

באמצעות List Comprehension, צרו רשימה חדשה בשם "newlist" מתוך הרשימה "numbers", המכילה רק את המספרים החיוביים מהרשימה, כמספרים שלמים.