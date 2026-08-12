Tutorial
--------
Reguläre Ausdrücke (Regular Expressions) erlauben es dir, Muster in Text zu beschreiben. Sie werden überall in der Shell verwendet, besonders mit `grep`, `sed` und `awk`.

### Übereinstimmung mit grep

`grep` sucht Zeilen, die mit einem Muster übereinstimmen:

    echo "apple banana cherry" | grep apple

Gibt die gesamte Zeile aus, weil sie `apple` enthält:

    apple banana cherry

### Anker

`^` verankert ein Muster am Zeilenanfang, `$` am Zeilenende:

    echo "apple" | grep "^a"   # Zeilen, die mit 'a' beginnen
    echo "apple" | grep "e$"   # Zeilen, die mit 'e' enden

### Zeichenklassen

Eckige Klammern passen auf jedes einzelne Zeichen aus der Menge. Bereiche werden mit einem Bindestrich geschrieben, z.B. `[0-9]` für jede Ziffer und `[a-z]` für jeden Kleinbuchstaben.

### Quantifizierer

`*` bedeutet "null oder mehr", `+` bedeutet "eins oder mehr" und `?` bedeutet "null oder eins":

    echo "color" | grep -E "colou?r"   # passt auf color oder colour
    echo "colour" | grep -E "colou?r"

Exercise
--------
Vervollständige das `grep` unten so, dass es nur die Zeile ausgibt, die mit dem Buchstaben `a` beginnt.

Tutorial Code
-------------
    #!/bin/bash
    printf "apple\nbanana\napricot\n" > fruits.txt
    # schreibe deinen regulären Ausdruck hier
    grep "fruit" fruits.txt

Expected Output
---------------
    apple
    apricot

Solution
--------
    #!/bin/bash
    printf "apple\nbanana\napricot\n" > fruits.txt
    grep "^a" fruits.txt
