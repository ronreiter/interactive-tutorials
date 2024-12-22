List Comprehensions היא כלי חזק מאוד, המאפשר ליצור רשימה חדשה מבוססת על רשימה אחרת, בשורה אחת וקריאה.

לדוגמה, נניח שעלינו ליצור רשימה של מספרים שלמים המצביעים על האורך של כל מילה במשפט מסוים, אבל רק אם המילה אינה המילה "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

בעזרת List Comprehension, נוכל לפשט את התהליך לנוטציה הבאה:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

באמצעות List Comprehension, צרו רשימה חדשה בשם "newlist" מתוך הרשימה "numbers", המכילה רק את המספרים החיוביים ברשימה, כמספרים שלמים.