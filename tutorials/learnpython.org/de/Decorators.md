Dekoratoren ermöglichen es Ihnen, einfache Modifikationen an aufrufbaren Objekten wie [Funktionen](http://www.learnpython.org/en/Functions ""), [Methoden oder Klassen](http://www.learnpython.org/en/Classes%20and%20Objects "") vorzunehmen. In diesem Tutorial werden wir uns mit Funktionen beschäftigen. Die Syntax

    @decorator
    def functions(arg):
        return "value"

ist äquivalent zu:

    def function(arg):
        return "value"
    function = decorator(function) # dies übergibt die Funktion an den Dekorator und weist sie der Funktion wieder zu

Wie Sie vielleicht gesehen haben, ist ein Dekorator nur eine weitere Funktion, die eine Funktion nimmt und eine zurückgibt. Zum Beispiel könnten Sie dies tun:

    def repeater(old_function):
        def new_function(*args, **kwds): # Siehe learnpython.org/en/Multiple%20Function%20Arguments, um zu verstehen, wie *args und **kwds funktionieren
            old_function(*args, **kwds) # wir führen die alte Funktion aus
            old_function(*args, **kwds) # wir machen das zwei Mal
        return new_function # wir müssen die new_function zurückgeben, sonst würde sie nicht der Funktion zugewiesen

Dies würde eine Funktion zweimal ausführen.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Sie können auch den Ausgabe ändern

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # den Rückgabewert modifizieren
        return new_function

oder den Input ändern

    def double_Ii(old_function):
        def new_function(arg): # funktioniert nur, wenn die alte Funktion ein Argument hat
            return old_function(arg * 2) # das übergebene Argument modifizieren
        return new_function

und Überprüfungen durchführen.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Dies verursacht einen Fehler, was besser ist, als wenn es das Falsche tut
            old_function(arg)
        return new_function

Angenommen, Sie möchten die Ausgabe mit einem variablen Betrag multiplizieren. Sie könnten den Dekorator definieren und wie folgt verwenden:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # es gibt den neuen Generator zurück
    
    # Verwendung
    @multiply(3) # multiply ist kein Generator, aber multiply(3) ist es
    def return_num(num):
        return num
        
    # Jetzt ist return_num dekoriert und wieder zu sich selbst zugewiesen
    return_num(5) # sollte 15 zurückgeben

Sie können mit der alten Funktion alles machen, was Sie wollen, sie sogar komplett ignorieren! Fortgeschrittene Dekoratoren können auch die doc-Strings und Argumentzahlen manipulieren.
Für einige tolle Dekoratoren besuchen Sie <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Übung
--------
Erstellen Sie eine Dekorator-Fabrik, die einen Dekorator zurückgibt, der Funktionen mit einem Argument dekoriert. Die Fabrik sollte ein Argument vom Typ annehmen und dann einen Dekorator zurückgeben, der prüft, ob die Eingabe von der richtigen Art ist. Wenn sie falsch ist, sollte sie print("Bad Type") ausgeben (In Wirklichkeit sollte ein Fehler ausgelöst werden, aber Fehlerauslösung ist nicht Teil dieses Tutorials). Schauen Sie sich den Tutorial-Code und die erwartete Ausgabe an, um zu sehen, was gemeint ist, falls Sie verwirrt sind (ich wäre es jedenfalls). Die Verwendung von isinstance(object, type_of_object) oder type(object) könnte hilfreich sein.