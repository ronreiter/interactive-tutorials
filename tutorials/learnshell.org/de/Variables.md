Tutorial
--------
Shellvariablen werden erstellt, wenn ihnen ein Wert zugewiesen wird. Eine Variable kann eine Zahl enthalten, ein Zeichen, oder einen String. Bei Variablennamen wird auf Groß- und Kleinschreibung geachtet, sie können aus Buchstaben und einem Unterstrich '_' bestehen.
Wertzuweisungen werden mit einem '=' Zeichen durchgeführt. Beachte, dass keine Leerzeichen um das '=' erlaubt sind.

    PRICE_PER_APPLE=5
    MyFirstLetters=ABC
    greeting='Hello        world!'

Ein Backslash "\\" wird benutzt, um spezielle Zeichen darzustellen.

    PRICE_PER_APPLE=5
    echo "Der Preis eines Apfels ist: \$ $PRICE_PER_APPLE"

Man kann die Variable mit `${}` umgeben, um Zweideutigkeiten zu verhindern.

    MyFirstLetters=ABC
    echo "Die ersten 10 Buchstaben des Alphabets sind: ${MyFirstLetters}DEFGHIJ"

Eine Variable mit `""` zu umgeben, sorgt dafür, dass die Leerzeichen erhalten bleiben.
   
    greeting='Hello        world!'
    echo $greeting "Jetzt mit Leerzeichen: $greeting"

Variablen können die Ausgabe eines Befehls zugewiesen werden. Dies nennt man Substitution. Substitution erreicht man, indem man den Befehl mit `$()` oder \`\` umgibt.

    FILELIST=`ls`
    FileWithTimeStamp=/tmp/my-dir/file_$(/bin/date +%Y-%m-%d).txt

Beachte, dass wenn das Skript läuft, wird der Befehl innerhalb der `$()` Klammern ausgeführt und die Ausgabe abgegriffen.

Übung 
-----
Das Ziel dieser Übung ist einen String, eine Ganzzahl und eine komplexe Variable durch Befehlsubstitution zu erstellen. Der String sollte `BIRTHDATE` heißen und sollte "Jan 1, 2000" enthalten. Die Ganzzahl sollte `Presents` genannt werden und sollte die Zahl 10 enthalten. Die komplexe Variable sollte `BIRTHDAY` heißen und den vollen Wochentag des Tages, in `BIRHTDATE`, zum Beispiel 'Samstag' (vielleicht in einer anderen Sprache). Beachte, dass der `date` Befehl dafür benutzt werden kann, Daten in andere Datenformate zu konvertieren. Zum Beispiel, um das Datum in `$date1` zu dessen Wochentag zu konvertieren:

    date -d "$date1" +%A

Tutorial Code
-------------
    #!/bin/bash
    # Bearbeite diesen Code
    BIRTHDATE=
    Presents=
    BIRTHDAY=
    
    # Testcode 
    
    if [ "$BIRTHDATE" == "Jan 1, 2000" ] ; then
        echo "BIRTHDATE ist korrekt, es ist $BIRTHDATE"
    else
        echo "BIRTHDATE ist nicht korrekt"
    fi
    if [ $Presents == 10 ] ; then
        echo "Ich habe $Presents Geschenke bekommen."
    else
        echo "Presents ist nicht korrekt"
    fi
    if [ "$BIRTHDAY" == "Samstag" ] ; then
        echo "Ich wurde an einem $BIRTHDAY geboren."
    else
        echo "BIRTHDAY ist nicht korrekt"
    fi

Erwartete Ausgabe
-----------------
    BIRTHDATE ist korrekt, es ist Jan 1, 2000
    Ich habe 10 Geschenke bekommen.
    Ich wurde an einem Samstag geboren.

Lösung
------
    #!/bin/bash
    # Bearbeite diesen Code
    BIRTHDATE="Jan 1, 2000"
    Presents=10
    BIRTHDAY=`date -d "$BIRTHDATE" +%A`
    
    # Testcode 
    
    if [ "$BIRTHDATE" == "Jan 1, 2000" ] ; then
        echo "BIRTHDATE ist korrekt, es ist $BIRTHDATE"
    else
        echo "BIRTHDATE ist nicht korrekt"
    fi
    if [ $Presents == 10 ] ; then
        echo "Ich habe $Presents Geschenke bekommen."
    else
        echo "Presents ist nicht korrekt"
    fi
    if [ "$BIRTHDAY" == "Samstag" ] ; then
        echo "Ich wurde an einem $BIRTHDAY geboren."
    else
        echo "BIRTHDAY ist nicht korrekt"
    fi
