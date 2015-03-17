Tutorial
--------
### bash for Schleife

    # grundlegendes Konstrukt
    for argument in [list]
    do
      Befehle...
    done

Mit jedem neuen Durchlauf der Befehle in der Schleife, nimmt das `argument` den nächsten Wert in `list` an. Dann werden die Befehle ausgeführt.

    # Schleife ueber einen Array
    NAMES=(Joe Jenny Sara Tony)
    for N in ${NAMES[@]} ; do
      echo "Mein Name ist $N"
    done

    # Schleife ueber die Ausgabe eines Befehls
    for f in $( ls prog.sh /etc/localtime ) ; do
      echo "Datei ist: $f"
    done

### bash while Schleife

    # grundlegendes Konstrukt
    while [ Bedingung ]
    do
      Befehle...
    done

Das while Konstrukt testet die Bedingung und, falls wahr, führt die Befehle aus. Es wiederholt dies solange, wie die Bedingung wahr ergibt.

    COUNT=4
    while [ $COUNT -gt 0 ]; do
      echo "Wert von count ist: $COUNT"
      COUNT=$(($COUNT - 1))
    done

### bash until Schleife

    # grundlegendes Konstrukt
    until [ Bedingung ]
    do
      Befehle...
    done

Das until Konstrukt testet die Bedingung und, falls falsch, führt die Befehle aus. Es wiederholt dies solange, wie die Bedingung wahr ergibt (das Gegenteil des while Konstrukt).

    COUNT=1
    until [ $COUNT -gt 5 ]; do
      echo "Wert von count ist: $COUNT"
      COUNT=$(($COUNT + 1))
    done

### "break" und "continue" Schlüsselwort

`break` und `continue` beeinflussen den Kontrollfluss einer `for`, `while` und `until` Schleife. `break` benutzt man um den Rest der Schleifenausführung abzubrechen. `continue` hingegen bricht nur den aktuellen Durchgang ab und macht mit dem nächsten weiter.
Ein paar Beispiele:

    # Gibt 0,1,2,3,4 aus

    COUNT=0
    while [ $COUNT -ge 0 ]; do
      echo "Wert von COUNT ist: $COUNT"
      COUNT=$((COUNT+1))
      if [ $COUNT -ge 5 ] ; then
        break
      fi
    done

    # Gibt nur ungerade Zahlen aus - 1,3,5,7,9
    COUNT=0
    while [ $COUNT -lt 10 ]; do
      COUNT=$((COUNT+1))
      # Checke ob COUNT gerade ist
      if [ $(($COUNT % 2)) = 0 ] ; then
        continue
      fi
      echo $COUNT
    done

übung
-----
In dieser Übung iterieren wir über eine Liste von Zahlen und geben nur die geraden von ihnen aus. Wir hören auf, wenn wir die Zahl 237 in der Liste erreicht haben.

Tutorial Code
-------------
    #!/bin/bash
    NUMBERS=(951 402 984 651 360 69 408 319 601 485 980 507 725 547 544 615 83 165 141 501 263 617 865 575 219 390 237 412 566 826 248 866 950 626 949 687 217 815 67 104 58 512 24 892 894 767 553 81 379 843 831 445 742 717 958 609 842 451 688 753 854 685 93 857 440 380 126 721 328 753 470 743 527)
    
    # Schreibe deinen Code hier

Erwartete Ausgabe
-----------------
402
984
360
408
980
544
390

Lösung
--------
    #!/bin/bash
    NUMBERS=(951 402 984 651 360 69 408 319 601 485 980 507 725 547 544 615 83 165 141 501 263 617 865 575 219 390 237 412 566 826 248 866 950 626 949 687 217 815 67 104 58 512 24 892 894 767 553 81 379 843 831 445 742 717 958 609 842 451 688 753 854 685 93 857 440 380 126 721 328 753 470 743 527)
    
    # Schreibe deinen Code hier
    for gg in ${NUMBERS[@]}; do
    	
        if [ $gg == 237 ]; then
            break;
        elif [ $(($gg % 2)) == 0 ]; then
    	    echo $gg
        fi
    done
