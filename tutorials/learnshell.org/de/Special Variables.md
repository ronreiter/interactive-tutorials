Tutorial
--------
Im letzten Tutorial über Shell-Funktionen hast du `$1` verwendet, um das erste Argument darzustellen, das an `function_A` übergeben wurde. Außerdem gibt es hier einige spezielle Variablen in der Shell:

* `$0` - Der Dateiname des aktuellen Skripts.
* `$n` - Das n-te Argument, das an das Skript übergeben wurde oder die Funktion aufgerufen wurde.
* `$#` - Die Anzahl der Argumente, die an das Skript oder die Funktion übergeben wurden.
* `$@` - Alle Argumente, die an das Skript oder die Funktion übergeben wurden.
* `$*` - Alle Argumente, die an das Skript oder die Funktion übergeben wurden.
* `$?` - Der Exit-Status des zuletzt ausgeführten Befehls.
* `$$` - Die Prozess-ID der aktuellen Shell. Für Shell-Skripte ist dies die Prozess-ID, unter der sie ausgeführt werden.
* `$!` - Die Prozessnummer des letzten Hintergrundbefehls.

### Beispiel:

    #!/bin/bash
    echo "Skriptname: $0"
    function func {
        for var in $*
        do
            let i=i+1
            echo "Das \$${i} Argument ist: ${var}"
        done
        echo "Gesamtzahl der Argumente: $#"
    }
    func Wir sind Argument

`$@` und `$*` verhalten sich unterschiedlich, wenn sie in doppelten Anführungszeichen stehen:

    #!/bin/bash
    function func {
        echo "--- \"\$*\""
        for ARG in "$*"
        do
            echo $ARG
        done

        echo "--- \"\$@\""
        for ARG in "$@"
        do
            echo $ARG
        done
    }
    func Wir sind Argument

Exercise
--------
Eine Funktion `func` gibt die Gesamtzahl der Argumente aus, die sie empfängt. Rufe `func` unten mit den drei Argumenten `Wir`, `sind` und `Argument` auf, sodass die Ausgabe `Gesamtzahl der Argumente: 3` lautet.

Tutorial Code
-------------
    #!/bin/bash
    function func {
        echo "Gesamtzahl der Argumente: $#"
    }
    # schreibe deinen Code hier
    func

Expected Output
---------------
    Gesamtzahl der Argumente: 3

Solution
--------
    #!/bin/bash
    function func {
        echo "Gesamtzahl der Argumente: $#"
    }
    func Wir sind Argument
