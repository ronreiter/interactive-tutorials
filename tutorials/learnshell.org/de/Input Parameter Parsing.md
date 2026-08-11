Tutorial
--------
Wenn ein Skript mit Parametern aufgerufen wird, musst du sie oft validieren oder in benannte Variablen zerlegen. Die Shell gibt dir einige gängige Möglichkeiten, dies zu handhaben.

### Verwendung von Positionsparametern

Der einfachste Weg ist, `$1`, `$2`, ... direkt zu lesen:

    #!/bin/bash
    echo "Erstes Argument: $1"
    echo "Zweites Argument: $2"

### Verwendung eines Standardwerts

Du kannst einen Standardwert bereitstellen, wenn ein Argument fehlt, indem du `${var:-default}` verwendest:

    #!/bin/bash
    echo "Benutzer: ${1:-gast}"
    echo "Home: ${2:-/home/gast}"

### Über alle Argumente iterieren

Verwende `$@`, um über jedes übergebene Argument zu iterieren:

    #!/bin/bash
    for arg in "$@"
    do
        echo "Erhalten: $arg"
    done

### Argumente zählen

`$#` gibt die Anzahl der Argumente:

    #!/bin/bash
    echo "Anzahl der Argumente: $#"

Exercise
--------
Vervollständige das Skript so, dass es das zweite übergebene Argument ausgibt. Rufe das Skript mit den zwei Argumenten `apple` und `banana` auf.

Tutorial Code
-------------
    #!/bin/bash
    # schreibe deinen Code hier
    echo "Zweites Argument: "

Expected Output
---------------
    Zweites Argument: banana

Solution
--------
    #!/bin/bash
    echo "Zweites Argument: $2"
