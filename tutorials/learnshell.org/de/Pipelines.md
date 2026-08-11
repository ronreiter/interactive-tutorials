Tutorial
--------
In der Shell kannst du die Ausgabe eines Befehls mit einem senkrechten Strich `|` in einen anderen Befehl einspeisen. Das nennt man eine Pipeline.

### Einfache Pipeline

Die Ausgabe von `echo` wird an `wc -c` weitergeleitet, um die Anzahl der Zeichen zu zählen:

    echo "Hallo Welt!" | wc -c

### Mehrere Stufen

Du kannst mehrere Befehle verketten. Die Ausgabe eines Befehls wird die Eingabe des nächsten:

    echo "hallo welt" | tr '[:lower:]' '[:upper:]' | rev

### Befehl ausgeben und weiterleiten

Pipelines sind besonders nützlich, um die Ausgabe von `grep`, `sort`, `uniq` und `head` zu kombinieren:

    cat /etc/passwd | grep bash | sort | head

Beachte, dass eine Pipeline nur die Standardausgabe des vorhergehenden Befehls als Standardeingabe des nächsten weiterleitet; die Standardfehlerausgabe wird nicht weitergeleitet, es sei denn, du verwendest `2>&1` oder `|&`.

Exercise
--------
Vervollständige die Pipeline unten so, dass die Zeile `apple banana cherry` nur mit `banana` ausgegeben wird.

Tutorial Code
-------------
    #!/bin/bash
    echo "apple banana cherry" | 

Expected Output
---------------
    banana

Solution
--------
    #!/bin/bash
    echo "apple banana cherry" | awk '{print $2}'
