Ein Wörterbuch ist ein Datentyp, der ähnlich wie Arrays funktioniert, jedoch mit Schlüsseln und Werten anstelle von Indizes arbeitet. Jeder im Wörterbuch gespeicherte Wert kann über einen Schlüssel abgerufen werden, der ein beliebiger Objekttyp (ein String, eine Zahl, eine Liste usw.) sein kann, anstatt seinen Index zu verwenden, um darauf zuzugreifen.

Zum Beispiel könnte eine Datenbank von Telefonnummern mit einem Wörterbuch wie diesem gespeichert werden:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternativ kann ein Wörterbuch mit den gleichen Werten in der folgenden Notation initialisiert werden:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterieren über Wörterbücher

Wörterbücher können, ähnlich wie Listen, durchlaufen werden. Ein Wörterbuch speichert im Gegensatz zu einer Liste jedoch nicht die Reihenfolge der darin gespeicherten Werte. Um über Schlüssel-Wert-Paare zu iterieren, verwenden Sie die folgende Syntax:

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Entfernen eines Wertes

Um einen bestimmten Index zu entfernen, können Sie eine der folgenden Notationen verwenden:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

oder:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

Exercise
--------

Fügen Sie "Jake" mit der Telefonnummer 938273443 zum Telefonbuch hinzu und entfernen Sie Jill aus dem Telefonbuch.