Ein Closure ist ein Funktionsobjekt, das sich an Werte in umgebenden Gültigkeitsbereichen erinnert, selbst wenn diese nicht mehr im Speicher vorhanden sind. Lassen Sie uns Schritt für Schritt dazu kommen.

Zuerst ist eine **Eingebettete Funktion** eine Funktion, die innerhalb einer anderen Funktion definiert ist. Es ist sehr wichtig zu beachten, dass eingebettete Funktionen auf die Variablen des umgebenden Gültigkeitsbereichs zugreifen können. In Python sind sie jedoch nur lesbar. Man kann jedoch das Schlüsselwort "nonlocal" explizit mit diesen Variablen verwenden, um sie zu verändern.

Zum Beispiel:

    def transmit_to_space(message):
        "Dies ist die umgebende Funktion"
        def data_transmitter():
            "Die eingebettete Funktion"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Testnachricht"))

Dies funktioniert gut, da die Funktion 'data_transmitter' auf die 'message' zugreifen kann. Um die Verwendung des Schlüsselworts "nonlocal" zu demonstrieren, betrachten Sie dies:

    def print_msg(number):
        def printer():
            "Hier verwenden wir das Schlüsselwort nonlocal"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Ohne das Schlüsselwort "nonlocal" wäre die Ausgabe "3 9", jedoch erhalten wir mit seiner Verwendung "3 3", das heißt, der Wert der Variablen "number" wird modifiziert.

Nun, was wäre, wenn wir das Funktionsobjekt zurückgeben, anstatt die eingebettete Funktion aufzurufen. (Denken Sie daran, dass auch Funktionen Objekte sind. (Es ist Python.))

    def transmit_to_space(message):
        "Dies ist die umgebende Funktion"
        def data_transmitter():
            "Die eingebettete Funktion"
            print(message)
        return data_transmitter

Und wir rufen die Funktion wie folgt auf:

      def transmit_to_space(message):
        "Dies ist die umgebende Funktion"
        def data_transmitter():
            "Die eingebettete Funktion"
            print(message)
        return data_transmitter
        
      fun2 = transmit_to_space("Burn the Sun!")
      fun2()

Obwohl die Ausführung von "transmit_to_space()" abgeschlossen war, wurde die Nachricht dennoch beibehalten. Diese Technik, mit der die Daten an einigen Code angehängt werden, auch nachdem diese anderen Originalfunktionen beendet sind, wird in Python als Closures bezeichnet.

VORTEIL: Closures können die Verwendung globaler Variablen vermeiden und bieten eine gewisse Form der Datenverbergung. (Z.B. Wenn es wenige Methoden in einer Klasse gibt, verwenden Sie stattdessen Closures).

Auch Dekoratoren in Python nutzen Closures ausgiebig.

Exercise
--------

Erstellen Sie eine verschachtelte Schleife und ein Python-Closure, um Funktionen zu erstellen, um mehrere Multiplikationsfunktionen mithilfe von Closures zu erhalten. Das heißt, mithilfe von Closures könnte man Funktionen erstellen, um Funktionen wie multiply_with_5() oder multiply_with_4() zu erstellen.