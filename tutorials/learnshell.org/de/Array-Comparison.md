Tutorial
--------
In diesem Kapitel wirst du lernen, wie man zwei oder mehr Arrays miteinander vergleicht. Arrays können mehrere Werte unter einem Namen speichern. Die Benennung von Arrays folgt denselben Regeln wie die Benennung von Variablen.

Ein Array wird initialisiert, indem man leerzeichengetrennte Werte in Klammern `()` setzt:

    my_array=(apple banana "Fruit Basket" orange)

Um alle Elemente eines Arrays zu erhalten, verwendet man `${array[@]}`:

    my_array=(apple banana "Fruit Basket" orange)
    echo ${my_array[@]}

Die Gesamtzahl der Elemente erhält man mit `${#array[@]}`:

    my_array=(apple banana "Fruit Basket" orange)
    echo ${#my_array[@]}

Exercise
--------
In dieser Aufgabe musst du die Elemente in drei verschiedenen Arrays vergleichen und das gemeinsame Element dieser drei Arrays ausgeben.

`a=(3 5 8 10 6)`, `b=(6 5 4 12)`, `c=(14 7 5 7)`

Das gemeinsame Element dieser drei Arrays ist 5.

Tutorial Code
-------------
    #!/bin/bash
    # Gib deinen Code zum Vergleichen der Arrays hier ein:

    a=(3 5 8 10 6)
    b=(6 5 4 12)
    c=(14 7 5 7)

Expected Output
---------------
    5

Solution
--------
    #!/bin/bash
    # Gib deinen Code zum Vergleichen der Arrays hier ein:

    # Array-Definition
    a=(3 5 8 10 6)
    b=(6 5 4 12)
    c=(14 7 5 7)

    # Vergleich der Arrays
    for index in ${a[@]}; do
        for jindex in ${b[@]}; do
            for kindex in ${c[@]}; do
                if [ $index -eq $jindex ]; then
                    if [ $index -eq $kindex ]; then
                        echo $index;
                    fi
                fi
            done
        done
    done
