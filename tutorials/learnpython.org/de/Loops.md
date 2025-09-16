Es gibt zwei Arten von Schleifen in Python, `for` und `while`.

### Die "for"-Schleife

For-Schleifen iterieren über eine gegebene Sequenz. Hier ist ein Beispiel:

For-Schleifen können über eine Sequenz von Zahlen unter Verwendung der Funktionen `range` und `xrange` iterieren. Der Unterschied zwischen `range` und `xrange` ist, dass die `range`-Funktion eine neue Liste mit Zahlen des angegebenen Bereichs zurückgibt, während `xrange` einen Iterator zurückgibt, der effizienter ist. (Python 3 verwendet die `range`-Funktion, die wie `xrange` funktioniert). Beachten Sie, dass die `range`-Funktion nullbasiert ist.

### "while"-Schleifen

While-Schleifen wiederholen sich, solange eine bestimmte boolesche Bedingung erfüllt ist. Zum Beispiel:

### "break"- und "continue"-Anweisungen

**break** wird verwendet, um eine for- oder while-Schleife zu beenden, während **continue** verwendet wird, um den aktuellen Block zu überspringen und zur "for"- oder "while"-Anweisung zurückzukehren. Hier ein paar Beispiele:

### Können wir "else"-Klauseln für Schleifen verwenden?

Im Gegensatz zu Sprachen wie C, CPP.. können wir **else** für Schleifen verwenden. Wenn die Schleifenbedingung der "for"- oder "while"-Anweisung fehlschlägt, wird der Code im "else"-Teil ausgeführt. Wenn eine **break**-Anweisung innerhalb der for-Schleife ausgeführt wird, wird der "else"-Teil übersprungen. Beachten Sie, dass der "else"-Teil auch dann ausgeführt wird, wenn eine **continue**-Anweisung vorhanden ist.

Hier sind ein paar Beispiele:

Übung
--------

Iterieren Sie durch und drucken Sie alle geraden Zahlen aus der numbers-Liste in der gleichen Reihenfolge aus, in der sie empfangen werden. Drucken Sie keine Zahlen aus, die nach 237 in der Sequenz kommen.