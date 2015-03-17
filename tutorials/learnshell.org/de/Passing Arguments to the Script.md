Tutorial
--------
Argumente können einem Skript übergeben werden, wenn es ausgeführt wird. Man schreibt sie, mit Leerzeichen getrennt, nach dem Skriptnamen.

In dem Skript kann das erste Argument mit der Variable `$1` referenziert werden, das Zweite mit `$2`, etc.
Die Variable `$0` referenziert das aktuelle Skript. Im folgenden Beispiel, wird der Skriptname von 6 Argumenten begleitet.

**./bin/Einkaufsliste.sh Apfel 5 Banane 8 "Frucht Korb" 15**

**echo $3                          --> Resultat: banana**

**BIG=$5**

**echo "Ein $BIG kostet nur $6"      --> Resultat: Ein Frucht Korb kostet nur 15**

Die Variable `$#` hält die Anzahl der Argumente, die dem Skript übergeben wurden.

**echo $#               --> Resultat: 6**

Die Variable `$@` hält einen String aller Argumente, die dem Skript übergeben wurden, mit Leerzeichen getrennt.

Übung
-----
In dieser Sektion gibt es keine Übung. 

Tutorial Code
-------------
    #!/bin/bash
    # In dieser Sektion gibt es keine Uebung.

Lösung
------
    #!/bin/bash
    # In dieser Sektion gibt es keine Uebung.

Erwartete Ausgabe
-----------------
    #!/bin/bash
    # In dieser Sektion gibt es keine Uebung.
