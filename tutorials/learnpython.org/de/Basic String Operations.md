Strings sind Textstücke. Sie können als alles zwischen Anführungszeichen definiert werden:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Wie Sie sehen können, war das Erste, was Sie gelernt haben, einen einfachen Satz zu drucken. Dieser Satz wurde von Python als String gespeichert. Anstatt jedoch Strings direkt auszugeben, werden wir uns die verschiedenen Dinge ansehen, die man mit ihnen machen kann. Sie können auch einfache Anführungszeichen verwenden, um einen String zuzuweisen. Wenn der zuzuweisende Wert jedoch selbst einfache Anführungszeichen enthält, treten Probleme auf. Zum Beispiel, um den String in diesen Klammern (einfache Anführungszeichen sind ' ') zuzuweisen, müssen Sie nur Doppelpunkte verwenden, wie in diesem Fall:

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Das druckt 12 aus, da "Hello world!" 12 Zeichen lang ist, einschließlich Satzzeichen und Leerzeichen.

    astring = "Hello world!"
    print(astring.index("o"))

Das druckt 4 aus, da die Position des ersten Vorkommens des Buchstabens "o" 4 Zeichen vom ersten Zeichen entfernt ist. Beachten Sie, dass es tatsächlich zwei o's in der Phrase gibt - diese Methode erkennt nur das erste.

Aber warum druckt es nicht 5 aus? Ist "o" nicht der fünfte Buchstabe im String? Um die Dinge einfacher zu machen, beginnen Python (und die meisten anderen Programmiersprachen) bei 0 statt bei 1. Daher ist der Index von "o" 4.

    astring = "Hello world!"
    print(astring.count("l"))

Für diejenigen unter Ihnen, die absurde Schriftarten verwenden, das ist ein kleines L, keine Zahl eins. Dies zählt die Anzahl der l's im String. Daher sollte es 3 drucken.

    astring = "Hello world!"
    print(astring[3:7])

Dies druckt einen Abschnitt des Strings, der bei Index 3 beginnt und bei Index 6 endet. Aber warum 6 und nicht 7? Auch hier machen die meisten Programmiersprachen dies - es erleichtert die Mathematik innerhalb der Klammern.

Wenn Sie nur eine Zahl in den Klammern haben, erhalten Sie das einzelne Zeichen an diesem Index. Wenn Sie die erste Zahl weglassen, aber den Doppelpunkt behalten, erhalten Sie einen Abschnitt vom Anfang bis zur Zahl, die Sie belassen haben. Wenn Sie die zweite Zahl weglassen, erhalten Sie einen Abschnitt von der ersten Zahl bis zum Ende.

Sie können sogar negative Zahlen in den Klammern verwenden. Sie sind eine einfache Möglichkeit, am Ende des Strings zu beginnen, anstatt am Anfang. Auf diese Weise bedeutet -3 "3. Zeichen vom Ende".

    astring = "Hello world!"
    print(astring[3:7:2])

Dies druckt die Zeichen des Strings von 3 bis 7 und überspringt jedes zweite Zeichen. Dies ist eine erweiterte Abschnittssyntax. Die allgemeine Form ist [start:stop:step].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Beachten Sie, dass beide dasselbe Ergebnis produzieren.

Es gibt keine Funktion wie strrev in C, um einen String umzukehren. Aber mit der bereits erwähnten Abschnittssyntax können Sie einen String problemlos so umkehren:

    astring = "Hello world!"
    print(astring[::-1])

Dies

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Diese erstellen einen neuen String, wobei alle Buchstaben jeweils in Groß- und Kleinschreibung umgewandelt werden.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Damit kann man feststellen, ob der String mit etwas anfängt oder endet. Der erste wird True drucken, da der String mit "Hello" beginnt. Der zweite wird False drucken, da der String sicherlich nicht mit "asdfasdfasdf" endet.

    astring = "Hello world!"
    afewwords = astring.split(" ")

Dies teilt den String in eine Reihe von Strings auf, die in einer Liste zusammengefasst sind. Da dieses Beispiel bei einem Leerzeichen teilt, wird das erste Element in der Liste "Hello" und das zweite "world!" sein.

Übung
--------

Versuchen Sie, den Code so zu ändern, dass die korrekten Informationen ausgegeben werden, indem Sie den String ändern.