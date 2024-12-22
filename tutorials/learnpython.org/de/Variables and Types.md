Python ist vollständig objektorientiert und nicht "statisch typisiert". Sie müssen Variablen nicht deklarieren, bevor Sie sie verwenden, oder ihren Typ deklarieren. Jede Variable in Python ist ein Objekt.

Dieses Tutorial wird einige grundlegende Typen von Variablen behandeln.

### Zahlen
Python unterstützt zwei Arten von Zahlen - Ganzzahlen (ganze Zahlen) und Gleitkommazahlen (Dezimalzahlen). (Es unterstützt auch komplexe Zahlen, die in diesem Tutorial nicht erklärt werden).

Um eine Ganzzahl zu definieren, verwenden Sie die folgende Syntax:

    myint = 7
    print(myint)

Um eine Gleitkommazahl zu definieren, können Sie eine der folgenden Notationen verwenden:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Zeichenketten

Zeichenketten werden entweder mit einem einfachen oder einem doppelten Anführungszeichen definiert.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

Der Unterschied zwischen den beiden ist, dass die Verwendung von doppelten Anführungszeichen es einfach macht, Apostrophe einzuschließen (während diese die Zeichenkette bei der Verwendung von einfachen Anführungszeichen beenden würden).

    mystring = "Don't worry about apostrophes"
    print(mystring)

Es gibt zusätzliche Variationen bei der Definition von Zeichenketten, die es einfacher machen, Dinge wie Wagenrückläufe, Rückwärtsstriche und Unicode-Zeichen einzubeziehen. Diese werden in diesem Tutorial nicht behandelt, sind aber in der [Python-Dokumentation](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial") behandelt.

Einfache Operatoren können auf Zahlen und Zeichenketten ausgeführt werden:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Zuweisungen können auf mehr als einer Variablen "gleichzeitig" auf derselben Zeile wie folgt vorgenommen werden:

    a, b = 3, 4
    print(a, b)

Das Mischen von Operatoren zwischen Zahlen und Zeichenketten wird nicht unterstützt:

    # This will not work!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Übung
--------

Das Ziel dieser Übung ist es, eine Zeichenkette, eine Ganzzahl und eine Gleitkommazahl zu erstellen. Die Zeichenkette sollte `mystring` heißen und das Wort "hello" enthalten. Die Gleitkommazahl sollte `myfloat` heißen und die Zahl 10.0 enthalten, und die Ganzzahl sollte `myint` heißen und die Zahl 20 enthalten.