Normalerweise definieren wir eine Funktion im Code mit dem Schlüsselwort `def` und rufen sie auf, wann immer wir sie benötigen.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

Anstatt die Funktion irgendwo zu definieren und aufzurufen, können wir Pythons Lambda-Funktionen verwenden, die Inline-Funktionen sind und an derselben Stelle definiert werden, an der wir sie verwenden. Wir müssen also keine Funktion irgendwo deklarieren und den Code für eine einmalige Nutzung erneut besuchen.

Sie müssen keinen Namen haben, daher werden sie auch anonyme Funktionen genannt. Wir definieren eine Lambda-Funktion mit dem Schlüsselwort `lambda`.

    your_function_name = lambda inputs : output

Das obige Summenbeispiel mit einer Lambda-Funktion wäre also:

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Hier weisen wir die Lambda-Funktion der Variable **sum** zu, und bei Eingabe der Argumente, also a und b, funktioniert sie wie eine normale Funktion.

Übung
--------
Schreiben Sie ein Programm mit Lambda-Funktionen, um zu überprüfen, ob eine Zahl in der gegebenen Liste ungerade ist. Drucken Sie "True", wenn die Zahl ungerade ist, oder "False", wenn nicht, für jedes Element.