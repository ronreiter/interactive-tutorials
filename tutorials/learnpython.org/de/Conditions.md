In Python wird boolesche Logik verwendet, um Bedingungen zu bewerten. Die booleschen Werte True und False werden zurückgegeben, wenn ein Ausdruck verglichen oder ausgewertet wird. Zum Beispiel:

Variable `x` wird auf 2 gesetzt, und verschiedene Vergleiche werden durchgeführt, die `True` oder `False` ausgeben.

Beachten Sie, dass die Zuweisung von Variablen mit einem einfachen Gleichheitszeichen "=" erfolgt, während der Vergleich zwischen zwei Variablen mit dem doppelten Gleichheitszeichen "==" durchgeführt wird. Der "ungleich"-Operator wird als "!=" bezeichnet.

### Boolean-Operatoren

Die booleschen Operatoren "and" und "or" ermöglichen den Aufbau komplexer boolescher Ausdrücke, beispielsweise:

Die Variablen `name` und `age` werden verglichen, um entsprechende Nachrichten auszugeben.

### Der "in" Operator

Der "in" Operator kann verwendet werden, um zu überprüfen, ob ein bestimmtes Objekt innerhalb eines iterierbaren Objektcontainers, wie z.B. einer Liste, vorhanden ist:

Die Variable `name` wird mit einer Liste verglichen, um zu prüfen, ob sie entweder "John" oder "Rick" ist.

Python verwendet Einrückungen zur Definition von Codeblöcken, anstatt Klammern. Die Standard-Python-Einrückung besteht aus 4 Leerzeichen, obwohl auch Tabs und jede andere Leerzeichengröße funktionieren, solange sie konsistent ist. Beachten Sie, dass Codeblöcke keine Beendigung benötigen.

Hier ist ein Beispiel für die Verwendung der "if"-Anweisung in Python mit Codeblöcken:

Variablen `statement` und `another_statement` werden auf `False` bzw. `True` gesetzt, und je nach Bedingung wird eine bestimmte Aktion ausgeführt.

Zum Beispiel:

Variable `x` wird auf 2 gesetzt und eine Nachricht wird ausgegeben, je nachdem, ob `x` gleich 2 ist.

Eine Anweisung wird als wahr bewertet, wenn eines der folgenden Kriterien zutrifft:
1. Die boolesche Variable "True" wird angegeben oder durch einen Ausdruck berechnet, z.B. einen arithmetischen Vergleich.
2. Ein Objekt wird übergeben, das nicht als "leer" angesehen wird.

Hier sind einige Beispiele für Objekte, die als leer gelten:
1. Ein leerer String: ""
2. Eine leere Liste: []
3. Die Zahl Null: 0
4. Die boolesche Variable False: False

### Der 'is' Operator

Im Gegensatz zum doppelten Gleichheitszeichen "==" vergleicht der "is" Operator nicht die Werte der Variablen, sondern die Instanzen selbst. Zum Beispiel:

Zwei Listen werden initialisiert und verglichen: einmal mit `==` und einmal mit `is`.

### Der "not" Operator

Die Verwendung von "not" vor einem booleschen Ausdruck kehrt diesen um:

Die Ausdrücke werden mit `not` invertiert und das Ergebnis wird ausgegeben.

Übung
--------

Ändern Sie die Variablen im ersten Abschnitt, so dass jede if-Anweisung als True aufgelöst wird.