Tutorial
--------
Wie in anderen beliebten Programmiersprachen, unterstützt auch Shellskript logische Entscheidungen.

Das grundlegende konditionelle Entscheidungskonstrukt ist:

**if [ ausdruck ]; then**

Code der ausgeführt wird, wenn 'Ausdruck' wahr ist

**fi**

    NAME="John"
    if [ "$NAME" = "John" ]; then
      echo "Wahr - Mein Name ist tatsächlich John."
    fi

Es kann mit `else` erweitert werden:

    NAME="Bill"
    if [ "$NAME" = "John" ]; then
      echo "Wahr - Mein Name ist tatsächlich John."
    else
      echo "Falsch"
      echo "Sie müssen mich mit $NAME verwechseln."
    fi

Es kann auch mit `elif` (elif) erweitert werden:

    NAME="George"
    if [ "$NAME" = "John" ]; then
      echo "John Lennon"
    elif [ "$NAME" = "George" ]; then
      echo "George Harrison"
    else
      echo "Somit bleiben uns Paul und Ringo."
    fi

Der Ausdruck des Entscheidungskonstrukts wird entweder zu 'wahr' oder 'falsch' ausgewertet.
Der Ausdruck kann ein einzelnder String, oder eine einzelne Variable sein. Ein leerer String oder ein String nur aus Leerzeichen oder ein undefinierter Variablenname werden als 'falsch' ausgewertet.
Der Ausdruck kann eine logische Kombination von Vergleichen sein. Die Negation wird als `!` dargestellt, das logische AND (Konjunktion) als `&&` und das logische OR (Disjunktion) als `||`. Conditionale Ausdrücke sollten mit doppelten eckigen Klammern `[[ ]]` umgeben sein.

### Arten numerischer Vergleiche

    Vergleich    Wird wahr, wenn
    $a -lt $b    $a < $b
    $a -gt $b    $a > $b
    $a -le $b    $a <= $b
    $a -ge $b    $a >= $b
    $a -eq $b    $a ist gleich $b
    $a -ne $b    $a ist ungleich $b

### Arten von Stringvergleichen

    Vergleich       Wird wahr, wenn
    "$a" = "$b"     $a ist das selbe wie $b
    "$a" == "$b"    $a ist das selbe wie $b
    "$a" != "$b"    $a ist anders als $b
    -z "$a"         $a ist leer

- Beachte: Leerzeichen um `=` sind notwendig.

- Beachte: Benutze `""` um Strings, um die Shell Vervollständigung von Zeichen wie `*` zu verhindern.

### Logische Kombinationen

    if [[ $VAR_A -eq 1 && ($VAR_B = "bee" || $VAR_T = "tee") ]] ; then
        Befehl...
    fi

### case Struktur

    case "$variable" in
        "$Bedingung1" )
            Befehl...
        ;;
        "$Bedingung2" )
            Befehl...
        ;;
    esac

### Simple case Bash Struktur

Beachte, dass in diesem Fall `$case` eine Variable ist und nicht 'case' heißen muss. Zum Beispiel:

    mycase=1
    case $mycase in
        1) echo "Sie haben Bash gewählt.";;
        2) echo "Sie haben Perl gewählt.";;
        3) echo "Sie haben Python gewählt.";;
        4) echo "Sie haben C++ gewählt.";;
        5) exit
    esac

Übung
--------
Ändere die Variable in der ersten Sektion, sodass jede If Bedingung wahr ergibt.

Tutorial Code
-------------
    #!/bin/bash
    # aendere diese Variablen
    NUMBER=10
    APPLES=12
    KING=GEORGE
    # um alle Bedingungen unter WAHR zu machen
    if [ $NUMBER -gt 15 ] ; then
      echo 1
    fi
    if [ $NUMBER -eq $APPLES ] ; then
      echo 2
    fi
    if [[ ($APPLES -eq 12) || ("$KING" = "LUIS") ]] ; then
      echo 3
    fi
    if [[ $(($NUMBER + $APPLES)) -le 32 ]] ; then
      echo 4
    fi

Erwartete Ausgabe
-----------------
    1
    2
    3
    4

Lösung
------

    #!/bin/bash
    # aendere diese Variablen
    NUMBER=16
    APPLES=16
    KING=LUIS
    # um alle Bedingungen unten WAHR zu machen
    if [ $NUMBER -gt 15 ] ; then
      echo 1
    fi
    if [ $NUMBER -eq $APPLES ] ; then
      echo 2
    fi
    if [[ ($APPLES -eq 12) || ("$KING" = "LUIS") ]] ; then
      echo 3
    fi
    if [[ $(($NUMBER + $APPLES)) -le 32 ]] ; then
      echo 4
    fi
