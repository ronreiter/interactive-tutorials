Python bietet integrierte JSON-Bibliotheken zum Kodieren und Dekodieren von JSON.

In Python 2.5 wird das Modul simplejson verwendet, während in Python 2.7 das Modul json verwendet wird. Da dieser Interpreter Python 2.7 verwendet, werden wir json verwenden.

Um das Modul json zu verwenden, muss es zuerst importiert werden:

    import json

Es gibt zwei grundlegende Formate für JSON-Daten. Entweder in einem String oder in einer Objekt-Datenstruktur. Die Objekt-Datenstruktur besteht in Python aus Listen und Dictionaries, die ineinander verschachtelt sind. Die Objekt-Datenstruktur ermöglicht es, Python-Methoden (für Listen und Dictionaries) zu verwenden, um Elemente hinzuzufügen, aufzulisten, zu suchen und zu entfernen. Das String-Format wird hauptsächlich verwendet, um die Daten in ein anderes Programm zu übergeben oder in eine Datenstruktur zu laden.

Um JSON in eine Datenstruktur zurückzuladen, verwenden Sie die Methode "loads". Diese Methode nimmt einen String und wandelt ihn zurück in die JSON-Objekt-Datenstruktur:

    import json 
    print(json.loads(json_string))

Um eine Datenstruktur in JSON zu kodieren, verwenden Sie die Methode "dumps". Diese Methode nimmt ein Objekt und gibt einen String zurück:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python unterstützt eine proprietäre Daten-Serialisierungsmethode namens pickle (und eine schnellere Alternative namens cPickle).

Sie können es genau auf die gleiche Weise verwenden.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Exercise--------

Ziel dieser Übung ist es, den JSON-String mit dem hinzugefügten Schlüssel-Wert-Paar "Me" : 800 auszugeben.