Tutorial
--------
Die Shell enthält mehrere mächtige Befehle zur Textverarbeitung. Die drei gebräuchlichsten sind `sed`, `awk` und `grep`, und sie werden oft zusammen mit `sort` verwendet.

### grep - Text suchen

`grep` findet Zeilen, die mit einem Muster übereinstimmen:

    echo "apple banana" | grep banana

Ausgabe:

    apple banana

### sed - Stream-Editor

`sed` transformiert Text. Jedes `apple` durch `orange` ersetzen:

    echo "apple pie" | sed 's/apple/orange/'

Ausgabe:

    orange pie

### awk - Textverarbeitung

`awk` zerlegt Zeilen in Felder und gibt ausgewählte Spalten aus:

    echo "apple banana cherry" | awk '{print $2}'

Ausgabe:

    banana

### sort - Zeilen sortieren

Zeilen können alphabetisch neu sortiert werden:

    printf "cherry\napple\nbanana\n" | sort

Ausgabe:

    apple
    banana
    cherry

Diese Befehle sind die Bausteine fast jeder Shell-Pipeline.

Exercise
--------
Vervollständige die Pipeline unten so, dass sie das dritte Feld (`$3`) der Zeile `apple banana cherry` ausgibt, also `cherry`.

Tutorial Code
-------------
    #!/bin/bash
    echo "apple banana cherry" | awk '{print }'

Expected Output
---------------
    cherry

Solution
--------
    #!/bin/bash
    echo "apple banana cherry" | awk '{print $3}'
