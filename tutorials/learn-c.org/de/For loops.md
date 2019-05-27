Tutorial
--------

For Schleifen in C sind ziemlich unkompliziert. Sie bieten die Möglichkeit Schleifen zu erstellen - ein Code Block, der mehrfach ausgeführt wird.
For Schleifen benötigen eine Iterator Variable, meistens als `i` genannt.

For Schleifen bieten die folgende Funktionalität:

* Inititalisiere die Iterator Variable mit einem Initialwert
* Prüfe, ob die Iterator Variable ihren Endwert erreicht hat
* Erhöhe den Iterator

Zum Beispiel, wenn wir über einen Code Block 10 mal iterieren wollen, schreiben wir:

    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

Dieser Block wird die Zahlen 0 bis 9 (insgesamt 10 Zahlen) ausgeben.

For Schleifen können über Array Werte iterieren. Zum Beispiel, wenn wir alle Werte eines Arrays aufsummieren wollen, würden wir den Iterator `i` als Array Index benutzen.

    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0;
    int i;
    
    for (i = 0; i < 10; i++) {
        sum += array[i];
    }

    /* sum now contains a[0] + a[1] + ... + a[9] */
    printf("Sum of the array is %d\n", sum);

Übung
-----

Berechne die Fakultät (Multiplikation aller Werte `array[0]` bis einschließlich `array[9]`), einer Variable `array`.

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
      int factorial = 1;
      int i;

      /* Berechne hier die Fakultät mit einer For Schleife */

      printf("10! ist %d.\n", factorial);
    }

Erwartete Ausgabe
-----------------

    10! ist 3628800.

Lösung
------

    #include <stdio.h>

    int main() {
      int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
      int factorial = 1;

      int i;

      for(i=0;i<10;i++){
        factorial *= array[i];
      }

      printf("10! ist %d.\n", factorial);
    }
