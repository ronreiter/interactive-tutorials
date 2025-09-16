List Comprehensions είναι ένα πολύ ισχυρό εργαλείο, το οποίο δημιουργεί μια νέα λίστα βασισμένη σε μια άλλη λίστα, σε μια μόνο κατανοητή γραμμή.

Για παράδειγμα, ας πούμε ότι χρειάζεται να δημιουργήσουμε μια λίστα με ακέραιους αριθμούς που δηλώνουν το μήκος κάθε λέξης σε μια ορισμένη πρόταση, αλλά μόνο αν η λέξη δεν είναι η λέξη "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Χρησιμοποιώντας μια λίστα comprehensions, θα μπορούσαμε να απλοποιήσουμε αυτή τη διαδικασία σε αυτή τη σημειογραφία:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Άσκηση
--------

Χρησιμοποιώντας μια λίστα comprehensions, δημιουργήστε μια νέα λίστα που να ονομάζεται "newlist" από τη λίστα "numbers", η οποία θα περιέχει μόνο τους θετικούς αριθμούς από τη λίστα, ως ακέραιους.