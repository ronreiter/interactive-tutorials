Tutorial
--------
Oft möchtest du einige Dateitests auf dem Dateisystem ausführen, auf dem du arbeitest. In diesem Fall bietet die Shell mehrere nützliche Befehle, um dies zu erreichen.

Der Befehl sieht wie folgt aus:

* `-<command> [filename]`
* `[filename1] -<command> [filename2]`

Wir stellen kurz einige gängige Befehle vor, die dir im Alltag begegnen könnten.

**"-e" verwenden, um zu testen, ob eine Datei existiert**

    #!/bin/bash
    filename="sample.md"
    if [ -e "$filename" ]; then
        echo "$filename exists as a file"
    fi

**"-d" verwenden, um zu testen, ob ein Verzeichnis existiert**

    #!/bin/bash
    directory_name="test_directory"
    if [ -d "$directory_name" ]; then
        echo "$directory_name exists as a directory"
    fi

**"-r" verwenden, um zu testen, ob eine Datei eine Leseeberechtigung für den Benutzer hat, der das Skript ausführt**

    #!/bin/bash
    filename="sample.md"
    if [ ! -f "$filename" ]; then
        touch "$filename"
    fi
    if [ -r "$filename" ]; then
        echo "you are allowed to read $filename"
    else
        echo "you are not allowed to read $filename"
    fi

Weitere häufige Testflags sind `-w` (schreibbar), `-x` (ausführbar), `-f` (reguläre Datei) und `-s` (nicht leere Datei).

Exercise
--------
`filename` wird unten als reguläre Datei erstellt. Korrigiere die Bedingung so, dass der `-f`-Test verwendet wird und die Datei nur dann gemeldet wird, wenn sie als reguläre Datei existiert.

Tutorial Code
-------------
    #!/bin/bash
    filename="sample.md"
    touch "$filename"
    # korrigiere die Bedingung, um den -f-Test zu verwenden
    if [ -e "$filename" ]; then
        echo "$filename exists"
    fi

Expected Output
---------------
    sample.md exists

Solution
--------
    #!/bin/bash
    filename="sample.md"
    touch "$filename"
    if [ -f "$filename" ]; then
        echo "$filename exists"
    fi
