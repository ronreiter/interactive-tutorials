Tutorial
--------
Die Shell erlaubt uns simple Stringoperationen durchzuführen, was uns in Skripten zu Gute kommt.

### String Länge

    #       123456789012345678
    STRING="das ist ein String"
    echo ${#STRING}            # 18

### Index

Finde die numerische Position in `$STRING` irgendeines Zeichens in `$SUBSTRING`. Beachte, dass der `expr` Befehl benutzt wird.

    STRING="das ist ein String"
    SUBSTRING="asd"
    expr index "$STRING" "$SUBSTRING"     # 1 ist die Position des ersten 'd' in $STRING

### Substring Extraktion

Extrahiere einen Substring der Länge `$LEN` von `$POS` ausgehend aus `$STRING`. Beachte, dass der erste Buchstabe der 0te ist.

    STRING="das ist ein String"
    POS=4
    LEN=3
    echo ${STRING:$POS:$LEN}   # ist

Wenn `$LEN` weggelassen wird, wird der Substring von `$POS` bis zum ende der Zeile extrahiert.

    STRING="das ist ein String"
    echo ${STRING:1}           # $STRING Inhalt, ohne das erste Zeichen
    echo ${STRING:14}          # ring

### Simples Datenextraktion Beispiel:

    # Code um den Vornamen des Datensatzes zu extrahieren
    DATARECORD="last=Clifford,first=Johnny Boy,state=CA"
    COMMA1=$(expr index "$DATARECORD" ',')  # 14 position of first comma
    CHOP1FIELD=${DATARECORD:$COMMA1}       #
    COMMA2=$(expr index "$CHOP1FIELD" ',')
    LENGTH=$(expr $COMMA2 - 6 - 1)
    FIRSTNAME=${CHOP1FIELD:6:$LENGTH}      # Johnny Boy
    echo $FIRSTNAME

### Substring ersetzen

    STRING="sein oder nicht sein"

Ersetze das erste Vorkommen des Substrings

    STRING="sein oder nicht sein"
    echo ${STRING[@]/sein/essen}        # essen oder nicht sein

Ersetze alle Vorkommen des Substrings

    STRING="to be or not to be"
    echo ${STRING[@]//sein/essen}       # essen oder nicht essen

Lösche alle Vorkommen des Substrings (mit einem leeren String ersetzen)

    STRING="sein oder nicht sein"
    echo ${STRING[@]// nicht/}          # sein oder sein

Ersetze den Substring, wenn er am Anfang des `$STRING`s ist

    STRING="sein oder nicht sein"
    echo ${STRING[@]/#sein/jetzt essen} # jetzt essen oder nicht sein

Ersetze den Substring, wenn er am Ende des `$STRING`s ist

    STRING="sein oder nicht sein"
    echo ${STRING[@]/%sein/essen}       # sein oder nicht essen

Ersetze den Substring, mit der Ausgabe eines Shellbefehls

    STRING="sein oder nicht sein"
    echo ${STRING[@]/%sein/sein am $(date +%Y-%m-%d)}    # sein oder nicht sein am 20xx-xx-xx

Übung
-----
In dieser Übung werden wir Warren Buffetts bekanntes Zitat verändern. Zuerst müssen wir die Variable `ISAY` erstellen und den Wert auf das Originalzitat setzen. Dann müssen wir den Wert mit den gelernten Operationen verändern und den gegebenen 4 Veränderungen folgen:
Veränderung1: Ersetze das erste Vorkommen von 'snow' mit 'foot'.
Veränderung2: Lösche das zweite Vorkommen von 'snow'.
Veränderung3: Ersetze 'finding' mit 'getting'.
Veränderung4: Lösche alle Zeichen nach 'wet'. Tip: Eine Möglichkeit #4 umzusetzen ist, den Index von 'w' zu finden und Substring Extraktion zu benutzen.

Tutorial Code
-------------
#!/bin/bash

BUFFETT="Life is like a snowball. The important thing is finding wet snow and a really long hill."
# dein Code hier
ISAY=
ISAY=










# Tes code - nicht verändern 
echo "Warren Buffett said:"
echo $BUFFETT
echo "and I say:"
echo $ISAY

Erwartete Ausgabe
-----------------
Warren Buffett said:
Life is like a snowball. The important thing is finding wet snow and a really long hill.
and I say:
Life is like a football. The important thing is getting wet

Lösung
--------
#!/bin/bash

BUFFETT="Life is like a snowball. The important thing is finding wet snow and a really long hill."

    # dein Code hier
    ISAY=$BUFFETT
    change1=${ISAY[@]/snow/foot}
    change2=${change1[@]//snow/}
    change3=${change2[@]/finding/getting}
    loc=`expr index "$change3" 'w'`
    ISAY=${change3::$loc+2}

# Testcode - nicht verändern
echo "Warren Buffett said:"
echo $BUFFETT
echo "and I say:"
echo "$ISAY"
