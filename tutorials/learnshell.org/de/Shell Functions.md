Tutorial
--------

Wie andere Programmiersprachen, hat Shell auch Funktionen. Eine Funktion ist eine Unterroutine, die eine Liste an Befehlen und Operationen implementiert. Für wiederholte Aufgaben ist das sehr nützlich.

    # Grundlegendes Konstrukt
    function_name {
      Befehle...
    }

Funktionen werden mit ihrem Namen aufgerufen. Ein Funktionsaufruf ist das selbe wie ein Befehl. Parameter können übergeben werden, indem man sie nach dem Funktionsnamen schreibt. Der erste Parameter kann mit `$1` erreicht werden, etc.

    function function_B {
      echo "Funktion B."
    }
    function function_A {
      echo "$1"
    }
    function adder {
      echo "$(($1 + $2))"
    }

    # Funktionsaufrufe
    # Gib Funktion A einen Parameter
    function_A "Funktion A."     # Funktion A.
    function_B                   # Funktion B.
    # Gib Funktion B zwei Paramter
    adder 12 56                  # 68

Übung
-----
In dieser Übung musst du eine Funktion ENGLISH_CALC schreiben, die folgenden Satz verarbeiten kann:

'3 plus 5', '5 minus 1' oder '4 times 6' und das Ergebnis ausgibt als: '3 + 5 = 8', '5 - 1 = 4' oder '4 * 6 = 24'.

Tutorial Code
-------------
    #!/bin/bash
    # Schreibe deine Funktion hier
    
    # Testcode
    ENGLISH_CALC 3 plus 5
    ENGLISH_CALC 5 minus 1
    ENGLISH_CALC 4 times 6

Erwartete Ausgabe
---------------
    3 + 5 = 8
    5 - 1 = 4
    4 * 6 = 24

Lösung
--------
    #!/bin/bash
    # Schreibe deine Funktion hier
    
    function ENGLISH_CALC {
      a=$1
      b=$3
      sign=$2
      
      if [ $sign == "plus" ]; then
        echo "$a + $b = $(($a+$b))"
      elif [ $sign == "minus" ]; then
        echo "$a - $b = $(($a-$b))"
      elif [ $sign == "times" ]; then
        echo "$a * $b = $(($a*$b))"
      fi
    }
    
    # Testcode
    ENGLISH_CALC 3 plus 5
    ENGLISH_CALC 5 minus 1
    ENGLISH_CALC 4 times 6
