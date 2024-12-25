Diese Abschnitt erklärt, wie man grundlegende Operatoren in Python verwendet.

### Arithmetische Operatoren

Wie in vielen anderen Programmiersprachen können die Operatoren zur Addition, Subtraktion, Multiplikation und Division mit Zahlen verwendet werden.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Versuchen Sie vorherzusagen, was das Ergebnis sein wird. Befolgt Python die Punkt-vor-Strich-Rechnung?

Ein weiterer verfügbarer Operator ist der Modulo-Operator (%), der den ganzzahligen Rest der Division zurückgibt. Dividend % Divisor = Rest.

    remainder = 11 % 3
    print(remainder)

Die Verwendung von zwei Multiplikationssymbolen stellt eine Potenzierung dar.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Verwenden von Operatoren mit Zeichenfolgen

Python unterstützt das Konkatenieren von Zeichenfolgen mit dem Additionsoperator:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python unterstützt auch das Multiplizieren von Zeichenfolgen, um eine Zeichenfolge mit einer sich wiederholenden Sequenz zu bilden:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Verwenden von Operatoren mit Listen

Listen können mit dem Additionsoperator verbunden werden:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Wie bei Zeichenfolgen unterstützt Python die Bildung neuer Listen mit einer sich wiederholenden Sequenz mithilfe des Multiplikationsoperators:

    print([1,2,3] * 3)

Übung
--------

Das Ziel dieser Übung ist es, zwei Listen namens `x_list` und `y_list` zu erstellen, die jeweils 10 Instanzen der Variablen `x` und `y` enthalten. Sie müssen auch eine Liste namens `big_list` erstellen, die die Variablen `x` und `y` jeweils 10-mal enthält, indem Sie die beiden erstellten Listen zusammenfügen.