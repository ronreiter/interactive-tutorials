### Was ist CSV?

CSV steht für 'Comma Separated Values'. Das CSV-Format ist das am häufigsten verwendete Import- und Exportformat für Datenbanken und Tabellenkalkulationen. Eine CSV-Datei ist eine einfache Textdatei, die eine Liste von Daten enthält. Sie verwenden meistens das Komma-Zeichen (,) zur Trennung der Daten, aber manchmal werden auch andere Zeichen wie Semikolons oder Tabs verwendet.

Beispieldaten in CSV:

...
Spaltenname 1, Spaltenname 2, Spaltenname 3  
erste Zeile Daten 1, erste Zeile Daten 2, erste Zeile Daten 3  
zweite Zeile Daten 1, zweite Zeile Daten 2, zweite Zeile Daten 3  
...

### CSV-Modul in Python

Obwohl Python die eingebaute open()-Funktion hat, um mit CSV-Dateien oder anderen einfachen Textdateien zu arbeiten, gibt es ein spezielles csv-Modul, das Klassen implementiert, um Daten im CSV-Format zu lesen und zu schreiben, was die Arbeit mit CSV-Dateien viel einfacher macht.

### Wichtige Funktionen des CSV-Moduls

- csv.field_size_limit – maximale Feldgröße zurückgeben
- csv.get_dialect – den Dialekt erhalten, der mit dem Namen verbunden ist
- csv.list_dialects – alle registrierten Dialekte anzeigen
- csv.reader – Daten aus einer CSV-Datei lesen
- csv.register_dialect – Dialekt mit Namen verknüpfen
- csv.writer – Daten in eine CSV-Datei schreiben
- csv.unregister_dialect – den Dialekt im Dialektregister löschen, der mit dem Namen verknüpft ist
- csv.QUOTE_ALL – Alles zitieren, unabhängig vom Typ.
- csv.QUOTE_MINIMAL – Felder mit Sonderzeichen zitieren
- csv.QUOTE_NONNUMERIC – Alle Felder zitieren, die keine Zahlenwerte sind
- csv.QUOTE_NONE – Nichts im Ausgabe zitieren

### Wie verwendet man das csv-Modul?

Importieren Sie zuerst das csv-Modul in Ihr Python-Programm.

    import csv

Die Writer- und Reader-Funktionen ermöglichen es Ihnen, die Daten in einer CSV-Datei zu bearbeiten, zu verändern und zu transformieren.

Wie liest man eine CSV-Datei :-

Um Daten aus CSV-Dateien zu lesen, verwenden wir die Reader-Funktion, um ein Reader-Objekt zu erzeugen.

Zum Beispiel:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Hier öffnen wir zuerst die CSV-Datei im LESEN-Modus und benennen das Dateiobjekt als csvfile. Wir verwenden einen Kontext-Manager, um die Datei zu öffnen, damit wir uns nicht darum kümmern müssen, die Datei zu schließen. Die Funktion csv.reader nimmt das Dateiobjekt als Eingabe und gibt ein iterierbares Objekt zurück. Wir speichern das iterierbare Objekt als csvreader.

Da csvreader ein iterierbares Objekt ist, können wir mit einer for-Schleife iterieren:

Beispiel 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Der obige Code wird alle Zeilen drucken, die wir aus der CSV-Datei lesen. Bitte beachten Sie, dass wir die Datei mit 'r'-Modus öffnen, wenn sie bereits existiert.

Was kommt als nächstes?

csvreader ist ein iterierbares Objekt. Daher gibt die Methode .next() die aktuelle Zeile zurück und setzt den Iterator zur nächsten Zeile fort.

Beispiel 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

In Beispiel 1 würden Sie alle Zeilen zusammen mit dem Header auf der Konsole sehen. In Beispiel 2 liest die Methode .next() den Header im fields-Objekt und setzt den Iterator auf die nächste Zeile fort und daher werden alle Zeilen außer dem Header gedruckt.

Wie schreibt man in eine CSV-Datei-

Um in eine CSV-Datei zu schreiben, bietet das csv-Modul die Funktion csv.writer. Um Daten zu schreiben, öffnen wir zuerst die CSV-Datei im SCHREIBEN-Modus ('w'). Das Dateiobjekt wird als csvfile benannt. Wir speichern das csv.writer-Objekt als csvwriter.

Beispiel:
    #Header deklarieren
    fields = ['column1','column2', 'column3']

    #Zeilen deklarieren
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

Im obigen Beispiel wird die Funktion write zum Schreiben einer einzelnen Zeile verwendet, die das fields-Objekt ist, während die Methode writerows die gesamte oben definierte Liste von Zeilen in die csv-Datei schreibt.

Gehen wir einen Schritt weiter. Lesen Sie den Inhalt einer CSV-Datei und schreiben Sie ihn in eine andere CSV-Datei.

Beispiel:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # speichere die Header und setze den Leserzeiger weiter
            csvwriter.writerow(header) #schreibt den Header in eine neue Datei
            for row in reader:
                csvwriter.writerow(row)

Hier öffnen wir 'newfilename.csv' im 'W'-Modus als f2 und 'mycsvfile.csv' im 'r'-Modus als f1. Wir verwenden die Funktionen .next(), .reader(), .writer(), .writerow() des csv-Moduls. Mit .next() setzen wir den Leserzeiger fort und mit csvwriter.writerow() schreiben wir die eingehende Zeile jeweils eine.

### DictReader- und DictWriter-Klassen in Python

Nachfolgend sind zwei wichtige Klassen in Python zum Lesen und Schreiben von CSV-Dateien aufgeführt.

csv.Dictwriter-Klasse  
csv.DictReader-Klasse  

Die DictReader- und DictWriter-Klassen sind in Python verfügbar, um in CSV-Dateien zu lesen und zu schreiben. Obwohl sie den Reader- und Writer-Funktionen ähneln, verwenden diese Klassen Wörterbuchobjekte, um CSV-Dateien zu lesen und zu schreiben.

DictReader:

Es erzeugt ein Objekt, das die gelesene Information in ein Wörterbuch abbildet, dessen Schlüssel durch den Parameter fieldnames angegeben sind. Dieser Parameter ist optional, aber wenn er nicht in der Datei angegeben ist, werden die Daten der ersten Zeile zu den Schlüsseln des Wörterbuchs.

Beispiel einer CSV(info.csv)

.....
Vorname, Nachname
foo, bar
foo1, bar1
.....

Beispiel:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

Die csv.DictWriter-Klasse funktioniert wie ein regulärer Writer, aber sie ordnet Python-Wörterbücher in CSV-Zeilen. Der Parameter fieldnames ist eine Sequenz von Schlüsseln, die die Reihenfolge identifizieren, in der Werte im Wörterbuch, das an die Methode writerow() übergeben wird, in der CSV-Datei geschrieben werden. Die Klasse wird als csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds) definiert.

Beispiel:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Übung
--------

In dieser Übung werden Sie mit CSV-Daten arbeiten. Ihre Aufgabe besteht darin, ein Python-Programm zu erstellen, das Daten aus einer CSV-Datei liest und in eine andere CSV-Datei schreibt, wobei sichergestellt wird, dass nur Zeilen enthalten sind, in denen der Wert in der ersten Spalte größer als 50 ist.