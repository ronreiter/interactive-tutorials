Tutorial
--------
Arithmetische Operatoren

Simple arithmetische Berechnungen können mit dem arithmetischen Ausdruck `$((ausdruck))` realisiert werden.

    A=3
    B=$((100 * $A + 5)) # 305

Die grundlegenden Operatoren sind:

**a + b**  Addition (a plus b)

**a - b**  Substraction (a minus b)

**a * b**  Multiplication (a mal b)

**a / b**  Division (Ganzzahl) (a geteilt durch b)

**a % b**  modulo (der Ganzzahlrest von a geteilt durch b)

**a** ****** **b** Potenz (a hoch b)

Übung
-----
In dieser Übung musst du die gesamten Kosten (Variable `TOTAL`) eines Fruchtkorbs, der eine Ananas, zwei Bananen und drei Wassermelonen enthält, berechnen. Vergiss nicht die Kosten des Korbs selbst...

Tutorial Code
-------------
#!/bin/bash
COST_PINEAPPLE=50
COST_BANANA=4
COST_WATERMELON=23
COST_BASKET=1
TOTAL=
echo "Gesamtpreis ist: $TOTAL"

Erwartete Ausgabe
-----------------
Gesamtpreis ist: 128

Lösung
------
#!/bin/bash
COST_PINEAPPLE=50
COST_BANANA=4
COST_WATERMELON=23
COST_BASKET=1
TOTAL=$(($COST_PINEAPPLE + $COST_BANANA + $COST_WATERMELON + $COST_BASKET))
echo "Gesamtpreis ist: $TOTAL"
