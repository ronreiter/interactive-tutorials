Tutorial
--------

Arrays sind spezielle Variablen, die mehr beherbergen können, als nur einen Wert. Sie werden über einen Index angesprochen. Arrays werden mit einer unkomplizierten Syntax definiert:

    /* definiert einen Array für 10 Ganzzahlen (integers) */
    int numbers[10];

Möchte man auf eine Zahl aus diesem Array zugreifen, verwendet man dieselbe Syntax. Beachte, dass Arrays in C 0-basiert sind, was bedeutet, dass wir in einem Array der Größe 10, auf die Zellen 0 bis einschließlich 9 zugreifen. `numbers[10]` bezeichnet keinen Wert.

    int numbers[10];

    /* den Array befuellen */
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    /* gebe die 7te Zahl des Arrays aus, mit dem Index 6 */
    printf("Die 7te Nummer des Arrays ist %d", numbers[6]);

Arrays können nur einen Typ Variable beherbergen, da sie als Kette von Werten im Speicher des Computers implementiert sind. Deshalb ist es sehr effizient auf eine zufällige Zelle eines Arrays zuzugreifen.

Übung
-----

* Der untere Code kompiliert nicht korrekt, da die `grades` Variable fehlt.
* Einer der Grade fehlt. Kannst du ihn so definieren, dass der Durchschnittsgrad (`average`) 85 beträgt?

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      /* TODO: definiere die Grade hier */
      int average;

      grades[0] = 80;
      /* TODO: definiere den fehlenden Grad,
         sodass der Durchschnitt 85 ergibt. */
      grades[2] = 90;

      average = (grades[0] + grades[1] + grades[2]) / 3;
      printf("Der Durchschnitt der 3 Grade betraegt: %d", average);

      return 0;
    }

Erwartete Ausgabe
-----------------

    Der Durchschnitt der 3 Grade betraegt: 85

Lösung
------

    #include <stdio.h>

    int main() {
      int grades[3];
      int average;

      grades[0] = 80;
      grades[1] = 85;
      grades[2] = 90;

      average = (grades[0] + grades[1] + grades[2]) / 3;
      printf("Der Durchschnitt der 3 Grade betraegt: %d", average);

      return 0;
    }
