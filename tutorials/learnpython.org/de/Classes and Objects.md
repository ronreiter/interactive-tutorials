Objekte sind eine Kapselung von Variablen und Funktionen in einer einzigen Einheit. Objekte erhalten ihre Variablen und Funktionen von Klassen. Klassen sind im Wesentlichen eine Vorlage zur Erstellung Ihrer Objekte.

Eine sehr einfache Klasse sieht ungefähr so aus:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Wir werden später erklären, warum Sie "self" als Parameter einfügen müssen. Zuerst, um die obige Klasse (Vorlage) einem Objekt zuzuweisen, würden Sie Folgendes tun:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Nun hält die Variable "myobjectx" ein Objekt der Klasse "MyClass", das die Variable und die Funktion enthält, die innerhalb der Klasse "MyClass" definiert sind.

### Zugriff auf Objektvariablen

Um auf die Variable innerhalb des neu erstellten Objekts "myobjectx" zuzugreifen, würden Sie Folgendes tun:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

So würde zum Beispiel das Folgende die Zeichenkette "blah" ausgeben:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Sie können mehrere verschiedene Objekte erstellen, die von derselben Klasse sind (haben dieselben Variablen und Funktionen definiert). Jedes Objekt enthält jedoch unabhängige Kopien der in der Klasse definierten Variablen. Zum Beispiel, wenn wir ein weiteres Objekt mit der "MyClass"-Klasse definieren und dann die Zeichenkette in der obigen Variable ändern:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Dann beide Werte ausdrucken
    print(myobjectx.variable)
    print(myobjecty.variable)


### Zugriff auf Objektfunktionen

Um auf eine Funktion innerhalb eines Objekts zuzugreifen, verwenden Sie eine Notation, die der des Zugriffs auf eine Variable ähnlich ist:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Das obige würde die Nachricht "This is a message inside the class." ausgeben.

### __init__()

Die `__init__()`-Funktion ist eine spezielle Funktion, die aufgerufen wird, wenn die Klasse initiiert wird. Sie wird verwendet, um Werte innerhalb einer Klasse zuzuweisen.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Prints '7'
    
Übung
--------

Wir haben eine Klasse für Fahrzeuge definiert. Erstellen Sie zwei neue Fahrzeuge namens car1 und car2. Setzen Sie car1 auf ein rotes Cabriolet im Wert von 60.000,00 $ mit dem Namen Fer und car2 auf einen blauen Van namens Jump im Wert von 10.000,00 $.