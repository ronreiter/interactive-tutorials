Python verwendet C-Style-String-Formatierung, um neue, formatierte Zeichenfolgen zu erstellen. Der "%" Operator wird verwendet, um eine Reihe von Variablen, die in einem "Tuple" (einer Liste fester Größe) eingeschlossen sind, zusammen mit einem Formatstring zu formatieren, der normalen Text zusammen mit "Argumentbezeichnern" enthält, speziellen Symbolen wie "%s" und "%d".

Angenommen, Sie haben eine Variable namens "name" mit Ihrem Benutzernamen darin, und Sie möchten dann eine Begrüßung für diesen Benutzer ausgeben.

    # Dies gibt "Hello, John!" aus
    name = "John"
    print("Hello, %s!" % name)

Um zwei oder mehr Argumentbezeichner zu verwenden, verwenden Sie ein Tuple (Klammern):

    # Dies gibt "John is 23 years old." aus
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Jedes Objekt, das keine Zeichenkette ist, kann ebenfalls mit dem %s Operator formatiert werden. Die Zeichenkette, die von der "repr" Methode dieses Objekts zurückgegeben wird, wird als Zeichenkette formatiert. Zum Beispiel:

    # Dies gibt aus: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Hier sind einige grundlegende Argumentbezeichner, die Sie kennen sollten:

`%s - String (oder jedes Objekt mit einer Zeichenkettenrepräsentation, wie Zahlen)`

`%d - Ganzzahlen`

`%f - Gleitkommazahlen`

`%.<Anzahl der Ziffern>f - Gleitkommazahlen mit einer festen Anzahl von Ziffern rechts vom Punkt.`

`%x/%X - Ganzzahlen in hexadezimaler Darstellung (Kleinbuchstaben/Großbuchstaben)`

Übung
--------

Sie müssen einen Formatstring schreiben, der die Daten mit folgendem Syntax ausgibt:
    `Hello John Doe. Your current balance is $53.44.`