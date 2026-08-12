Tutorial
--------
Im vorherigen Abschnitt haben wir gesehen, wie man die Ausgabe eines Befehls an den nächsten weiterleitet.
Aber was, wenn du die Ausgabe von zwei oder mehr Befehlen an einen anderen weiterleiten möchtest?
Was, wenn du einen Befehl hast, der eine Datei als Argument nimmt, du aber das verarbeiten möchtest, was an diese Datei gesendet wird?

Prozess-Substitution erlaubt es, auf die Ein- oder Ausgabe eines Prozesses mithilfe eines Dateinamens zu verweisen.
Sie hat zwei Formen: Ausgabe `<(...)`, und Eingabe `>(...)`.

### Beispiel: Ausgabe
Stell dir vor, du hast zwei Dateien, deren Inhalt du vergleichen möchtest. Mit `diff datei1 datei2` könnten falsch-positive Ergebnisse entstehen, falls die Zeilen nicht sortiert sind.
Wenn du also diese Dateien vergleichen möchtest, könntest du zwei neue, sortierte Dateien erstellen und diese vergleichen. Das würde so aussehen:

    sort datei1 > sortierte_datei1
    sort datei2 > sortierte_datei2
    diff sortierte_datei1 sortierte_datei2

Mit Prozess-Substitution kannst du das in einer Zeile tun:

    diff <(sort datei1) <(sort datei2)

### Beispiel: Eingabe
Stell dir vor, du möchtest Logs einer Anwendung in einer Datei speichern und gleichzeitig auf der Konsole ausgeben. Ein sehr praktischer Befehl dafür ist `tee`.

    echo "Hello, world!" | tee /tmp/hello.txt

Nehmen wir an, du möchtest nur Kleinbuchstaben in der Datei haben, aber die normale Groß-/Kleinschreibung auf der Ausgabe behalten.
Du könntest Prozess-Substitution so verwenden:

    echo "Hello, world!" | tee >(tr '[:upper:]' '[:lower:]' > /tmp/hello.txt)

Exercise
--------
Die zwei Dateien `f1.txt` und `f2.txt` werden unten erstellt. Vervollständige die Zeile so, dass die Dateien mit `sort` sortiert und mit `diff` verglichen werden, wobei Prozess-Substitution für beide Eingaben verwendet wird.

Tutorial Code
-------------
    #!/bin/bash
    printf "c\na\nb\n" > f1.txt
    printf "b\nc\nd\n" > f2.txt
    # schreibe die Prozess-Substitution hier
    diff f1.txt f2.txt

Expected Output
---------------
    < a
    ---
    > d

Solution
--------
    #!/bin/bash
    printf "c\na\nb\n" > f1.txt
    printf "b\nc\nd\n" > f2.txt
    diff <(sort f1.txt) <(sort f2.txt)
