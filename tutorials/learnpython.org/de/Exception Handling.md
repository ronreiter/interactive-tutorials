Beim Programmieren passieren Fehler. Das ist einfach ein Teil des Lebens. Vielleicht hat der Benutzer falsche Eingaben gemacht. Vielleicht war eine Netzwerkressource nicht verfügbar. Vielleicht ging dem Programm der Arbeitsspeicher aus. Oder der Programmierer hat vielleicht sogar einen Fehler gemacht!

Pythons Lösung für Fehler sind Ausnahmen. Möglicherweise haben Sie schon einmal eine Ausnahme gesehen.

    print(a)
    
    #Fehler
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Ups! Vergessen, der Variablen 'a' einen Wert zuzuweisen.

Aber manchmal möchte man nicht, dass Ausnahmen das Programm vollständig stoppen. Vielleicht möchte man etwas Besonderes tun, wenn eine Ausnahme ausgelöst wird. Dies geschieht in einem *try/except*-Block.

Hier ist ein triviales Beispiel: Angenommen, Sie iterieren über eine Liste. Sie müssen über 20 Zahlen iterieren, aber die Liste stammt aus Benutzereingaben und könnte nicht 20 Zahlen enthalten. Nachdem Sie das Ende der Liste erreicht haben, sollen die restlichen Zahlen einfach als 0 interpretiert werden. Hier ist, wie Sie das machen könnten:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Ausgelöst, wenn auf einen nicht existierenden Index einer Liste zugegriffen wird
                do_stuff_with_number(0)
    
    catch_this()

Da war nichts allzu kompliziert! Sie können das mit jeder Ausnahme machen. Für weitere Details zur Behandlung von Ausnahmen schauen Sie sich die [Python-Dokumentation](http://docs.python.org/tutorial/errors.html#handling-exceptions) an.

Übung
--------

Behandeln Sie alle Ausnahmen! Denken Sie an die vorherigen Lektionen zurück, um den Nachnamen des Schauspielers zurückzugeben.