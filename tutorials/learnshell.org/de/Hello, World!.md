Tutorial
--------
Dieses Tutorial widmet sich der Shellprogrammierung, mit einem Fokus auf die **Bash** Shell (Bourne Again Shell) als unserer Shell Interpreter. Shellprogrammierung mit anderen verbreiteten Shells wie sh, csh, tcsh, wird ebenfalls besprochen, da sie manchmal von Bash abweichen.

Mit der Shell programmieren kann man entweder indem man direkt Shellbefehle in der Kommandozeile eingibt, oder indem man sie in einer Textdatei in der Ausführungsreihenfolge speichert. Als Shellskript. Um das Skript auszuführen, schreib einfach den Namen der Datei, sobald sie die Ausführungsberechtigung hat (`chmod +x filename`).

Die erste Zeile eines Shellskripts beginnt mit einem "sha-bang" (#!), welcher nicht als Kommentar eingelesen wird, gefolgt von dem Pfad zum Shell Interpreter. Dieser Pfad sage dem Betriebssystem, dass diese Datei eine Liste von Befehlen ist, die dem angegebenen Interpreter gefüttert werden sollen. Beachte, dass, wenn der Pfad nach dem "sha-bang" falsch ist, dass dann eine Fehlermeldung, zum Beispiel "Befehl nicht gefunden", das Ergebnis der Ausführung ist. Es ist gang und gäbe ein Shellskript mit ".sh" enden zu lassen. 
Die erste Zeile könnte so lauten:

**#!/bin/bash**

Kommentare hinzufügen: Jeder Text nach einem `#` wird als Kommentar gewertet

Um herauszufinden, was die im Moment aktive Shell ist, und was ihr Pfad ist, schreibe die hervorgehobenen Befehle in die Kommandozeile:

**ps | grep $$**

987 tty1      00:00:00 bash

Diese Ausgabe zeigt, dass die Shell die benutzt wurde "bash" ist. Als nächstes bekommen wir den vollen Pfad des Interpreters heraus.

**which bash**

/bin/bash

Diese Ausgabe zeigt den vollen Pfad des Shell Interpreters. Vergiss nicht, dass die "sha-bang" Zeile am Anfang des Skriptes den selben Pfad haben sollte.

Übung 
-----
Benutze den `echo` Befehl, um die Zeile "Hallo Welt!" auszugeben.

Tutorial Code
-------------
    #!/bin/bash
    # Text rechts eines '#' Zeichens werden als Kommentar eingelesen. Der Befehl ist unten
    echo "Auf Wiedersehen, Welt!"

Erwartete Ausgabe
-----------------
    Hallo Welt!

Lösung
------
    #!/bin/bash
    # Text rechts eines '#' Zeichens werden als Kommentar eingelesen. Der Befehl ist unten
    echo "Hallo Welt!"
