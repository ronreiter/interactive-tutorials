Taking Input and showing Output in required way plays an important role in interactive coding. So lets focus on input and output of various data types.

###raw_input()
Dies wird verwendet, um Eingaben zu machen, solange das Ende der Zeile erreicht ist. Beachten Sie, dass keine Leerzeichen vorhanden sein sollten. Die Eingabe endet mit einem neuen Zeilenzeichen und bei Leerzeichen in der Eingabezeile führt dies zu einem Fehler.

    # Gibt die Eingabe aus, die von stdin empfangen wurde
    astring=raw_input()# geben Sie hello als Eingabe
    print raw_input()

Nach der Eingabe können wir diese mit Funktionen wie int(), float(), str() in unseren gewünschten Datentyp umwandeln.

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
Dies wird speziell zur Eingabe von ganzen Zahlen verwendet. Der Vorteil von input() gegenüber raw_input() kann mit dem folgenden Beispiel verdeutlicht werden.

    # geben Sie 2*2 als Eingabe
    a=input()
    b=raw_input() # beachten Sie, dass int(raw_input()) zu einem Fehler führt
    print a # gibt 4 aus
    print b # gibt 2*2 aus

###Wie nimmt man zwei oder mehr Datentypen als Eingabe aus einer einzigen Zeile, getrennt durch Leerzeichen?
Hier verwenden wir die Funktionen split() und map().

    # geben Sie zwei ganze Zahlen in der ersten Zeile und mehr als zwei ganze Zahlen in der dritten Zeile
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # gibt die ersten zwei ganzen Zahlen aus der ersten Zeile und die Summe der ganzen Zahlen der zweiten Zeile aus

###Ausgabeformatierung
Sie haben vielleicht schon bemerkt, dass der print-Befehl automatisch eine neue Zeile einfügt. Die Verwendung von Kommas, wie im obigen Code, gibt die Werte in einer einzigen Zeile aus, getrennt durch ein Leerzeichen. Das sys-Modul bietet verschiedene Funktionen zur Ausgabeformatierung, aber hier lernen wir, wie man grundlegendes Formatierungswissen nutzt, um die Ausgabe in der gewünschten Weise anzuzeigen. Lassen Sie uns einige Beispiele zur Ausgabeformatierung ansehen.

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

Die Ausgabe muss selbsterklärend sein.

Exercise
--------

Schreiben Sie ein Programm, das den Benutzer nach seinem Namen, Alter und Land fragt. Das Programm sollte dann eine Nachricht ausgeben, die diese Informationen in einem Satz enthält. Das Programm sollte beinhalten:

1. Die Eingabe eines Namens mit `raw_input()`.
2. Die Eingabe eines Alters mit `input()` und die Umwandlung in eine ganze Zahl.
3. Die Eingabe eines Ländernamens mit `raw_input()`.
4. Die Formatierung der Ausgabe zur Anzeige eines Satzes, der den Namen, das Alter und das Land enthält.

Das Programm sollte die Eingabebehandlung und Zeichenfolgenformatierung in Python demonstrieren.