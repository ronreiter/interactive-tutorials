Sets sind Listen ohne doppelte Einträge. Nehmen wir an, Sie möchten eine Liste von Wörtern sammeln, die in einem Absatz verwendet werden:

    print(set("my name is Eric and Eric is my name".split()))

Dies wird eine Liste ausgeben, die "my", "name", "is", "Eric" und schließlich "and" enthält. Da der Rest des Satzes Wörter verwendet, die bereits in der Menge sind, werden sie nicht doppelt eingefügt.

Sets sind ein leistungsstarkes Werkzeug in Python, da sie die Fähigkeit haben, Differenzen und Schnitte zwischen anderen Sets zu berechnen. Angenommen, Sie haben eine Liste von Teilnehmern an den Veranstaltungen A und B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Um herauszufinden, welche Mitglieder an beiden Veranstaltungen teilgenommen haben, können Sie die Methode "intersection" verwenden:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Um herauszufinden, welche Mitglieder nur an einer der Veranstaltungen teilgenommen haben, verwenden Sie die Methode "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Um herauszufinden, welche Mitglieder nur an einer Veranstaltung und nicht an der anderen teilgenommen haben, verwenden Sie die Methode "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Um eine Liste aller Teilnehmer zu erhalten, verwenden Sie die Methode "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

In der folgenden Übung verwenden Sie die gegebenen Listen, um ein Set auszugeben, das alle Teilnehmer von Veranstaltung A enthält, die nicht an Veranstaltung B teilgenommen haben.