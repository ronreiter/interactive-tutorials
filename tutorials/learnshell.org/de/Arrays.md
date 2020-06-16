Tutorial
--------
Ein Array can mehrere Werte unter einem Namen halten. Arraynamen funktionieren wie Variablennamen.
Ein Array wird initialisiert, indem man ihm leerzeichen-getrennte Werte in runden Klammern `()` übergibt.

    my_array=(apfel banane "Frucht Korb" orange)
    new_array[2]=aprikose

Arrayelemente müssen nicht durchgehend sein. Innere Elemente können uninitialisiert bleiben.

Die Anzahl an Elementen eines Arrays kann durch die Syntax `${#arrayname[@]}` abgefragt werden.

    my_array=(apfel banane "Frucht Korb" orange)
    echo  ${#my_array[@]}                   # 4

Die Arrayelemente können mit ihrem numerischen Index angesprochen werden. Der Index des ersten Elements ist 0.

    my_array=(apfel banane "Frucht Korb" orange)
    echo ${my_array[3]}                     # orange - beachte die benoetigten geschweiften Klammern
    # ein neues Arrayelement hinzufuegen
    my_array[4]="karotte"                   # Wertzuweisung ohne $ oder geschweifte Klammern
    echo ${#my_array[@]}                    # 5 - Laenge des Arrays
    echo ${my_array[${#my_array[@]}-1]}     # karotte

Übung
-----
In dieser Übung werden wir Zahlen und Strings den korrekten Arrays zuweisen. Du musst die Zahlen 1, 2 und 3 dem `numbers` Array hinzufügen, und die Worte 'Hallo' und 'Welt' zum `strings` Array.

Du müsst außerdem die Werte der Variable `NumberOfNames` und der Variable `second_name` korrigieren. `NumberOfNames` sollte die Anzahl der Namen des `NAMES` Arrays halten. Benutze die `$#` Spezialvariable. 
Die Variable `second_name` sollte den zweiten Namen des `NAMES` Arrays halten. Benutze den `[]` Operator. Beachte, dass der Index 0-basiert ist, was bedeutet, dass das zweite Element den Index 1 hat.

Tutorial Code
-------------
#!/bin/bash
NAMES=( John Eric Jessica )

# deinen Code hier
NUMBERS=()
STRINGS=()
NumberOfNames=0
second_name='Vladimir'






# Testing Code

# dieser Code sollte die ausgefuellten Arrays, die Anzahl der Namen (3)
# und den zweiten Namen des `NAMES` arrays (Eric) ausgeben
echo ${NUMBERS[@]}
echo ${STRINGS[@]}
echo "Die Anzahl der Namen im NAMES Array: $NumberOfNames"
echo "Der zweite Name des NAME Arrays ist:" ${second_name}

Erwartete Ausgabe
-----------------
1 2 3
Hallo Welt
Die Anzahl der Namen im NAMES Array: 3
Der zweite Name des NAME Arrays ist: Eric

Lösung
------
#!/bin/bash
NAMES=( John Eric Jessica )

# write your code here
NUMBERS=( 1 2 3 )
STRINGS=( Hallo Welt )
NumberOfNames=${#NAMES[@]}
second_name=${NAMES[1]}






# Testing Code

# dieser Code sollte die ausgefuellten Arrays, die Anzahl der Namen (3)
# und den zweiten Namen des `NAMES` arrays (Eric) ausgeben
echo ${NUMBERS[@]}
echo ${STRINGS[@]}
echo "Die Anzahl der Namen im NAMES Array: $NumberOfNames"
echo "Der zweite Name des NAME Arrays ist:" ${second_name}
