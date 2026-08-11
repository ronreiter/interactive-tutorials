Tutorial
--------
Manchmal möchtest du ein spezielles Signal, eine Unterbrechung oder eine Benutzereingabe in deinem Skript abfangen, um Unvorhersehbares zu verhindern.

`trap` ist dein Befehl dafür:

* `trap <arg/function> <signal>`

Wenn ein Signal empfangen wird, läuft der Befehl oder die Funktion, die als `<arg>` angegeben wurde. Einige der häufigsten Signaltypen, die du abfangen kannst:

* `SIGINT` - der Benutzer sendet ein Unterbrechungssignal (Ctrl + C)
* `SIGQUIT` - der Benutzer sendet ein Quitsignal (Ctrl + D)
* `SIGFPE` - ein illegaler mathematischer Vorgang wurde versucht

Du kannst alle Signaltypen mit dem folgenden Befehl anzeigen:

    kill -l

Beachte die Nummern vor jedem Signalnamen. Du kannst diese Nummer verwenden, um lange Strings in trap zu vermeiden:

    # 2 entspricht SIGINT und 15 entspricht SIGTERM
    trap booh 2 15

Eine häufige Verwendung von trap ist das Aufräumen von temporären Dateien:

    trap "rm -f folder; exit" 2

Hier ist ein vollständiges ausführbares Beispiel. Das Skript setzt einen trap für SIGINT, sendet sich das Signal selbst, und der Handler läuft:

    #!/bin/bash
    trap 'echo "Caught SIGINT"' SIGINT
    echo "before kill"
    kill -SIGINT $$
    echo "after kill"

Dies gibt aus:

    before kill
    Caught SIGINT
    after kill

Exercise
--------
Korrigiere den trap-Handler unten so, dass er statt `TODO: replace me` den Text `Bye!` ausgibt, wenn SIGINT empfangen wird.

Tutorial Code
-------------
    #!/bin/bash
    trap 'echo "TODO: replace me"' SIGINT
    echo "waiting..."
    kill -SIGINT $$
    echo "done"

Expected Output
---------------
    waiting...
    Bye!
    done

Solution
--------
    #!/bin/bash
    trap 'echo "Bye!"' SIGINT
    echo "waiting..."
    kill -SIGINT $$
    echo "done"
