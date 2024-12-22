Jede Funktion in Python erhält eine vordefinierte Anzahl von Argumenten, wenn sie normal deklariert wird, wie hier:

Es ist möglich, Funktionen zu deklarieren, die eine variable Anzahl von Argumenten empfangen, indem die folgende Syntax verwendet wird:

Die Variable "therest" ist eine Liste von Variablen, die alle Argumente enthält, die der "foo"-Funktion nach den ersten 3 Argumenten übergeben wurden. Ein Aufruf von `foo(1, 2, 3, 4, 5)` wird folgendes ausgeben:

Es ist auch möglich, Funktionsargumente per Schlüsselwort zu senden, sodass die Reihenfolge der Argumente keine Rolle spielt, durch Verwendung der folgenden Syntax. Der folgende Code erzeugt die folgende Ausgabe: 
```Die Summe ist: 6
    Ergebnis: 1```

Die "bar"-Funktion erhält 3 Argumente. Wenn ein zusätzliches "action"-Argument empfangen wird und es die Anweisung gibt, die Zahlen zu summieren, dann wird die Summe ausgegeben. Alternativ weiß die Funktion auch, dass sie das erste Argument zurückgeben muss, wenn der Wert des "number"-Parameters, der an die Funktion übergeben wird, gleich "first" ist.

Exercise
--------

Füllen Sie die Funktionen `foo` und `bar` so aus, dass sie eine variable Anzahl von Argumenten (3 oder mehr) empfangen können.
Die `foo`-Funktion muss die Anzahl der zusätzlich empfangenen Argumente zurückgeben.
Die `bar`-Funktion muss `True` zurückgeben, wenn das Argument mit dem Schlüsselwort `magicnumber` den Wert 7 hat, und `False` ansonsten.