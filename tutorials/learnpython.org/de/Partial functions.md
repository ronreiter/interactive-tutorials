Sie können in Python partielle Funktionen erstellen, indem Sie die Funktion `partial` aus der Bibliothek `functools` verwenden.

Partielle Funktionen ermöglichen es, aus einer Funktion mit x Parametern eine Funktion mit weniger Parametern abzuleiten, wobei feste Werte für die begrenzte Funktion festgelegt werden.

Erforderlicher Import:

    from functools import partial

Dieser Code wird 8 zurückgeben.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Ein wichtiger Hinweis: Die Standardwerte werden beginnen, die Variablen von links zu ersetzen. Die 2 wird x ersetzen.
y wird 4 entsprechen, wenn dbl(4) aufgerufen wird. In diesem Beispiel macht es keinen Unterschied, aber im folgenden Beispiel tut es das.

Übung
--------
Bearbeiten Sie die bereitgestellte Funktion, indem Sie partial() aufrufen und die ersten drei Variablen in func() ersetzen. Dann drucken Sie mit der neuen partiellen Funktion, indem Sie nur eine Eingabevariable verwenden, sodass die Ausgabe 60 ergibt.