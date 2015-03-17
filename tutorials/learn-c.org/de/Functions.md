Tutorial
--------

C Funktionen sind einfach, aber, auf Grund der Art wie C arbeitet, ist die Macht von Funktionen ist ein bisschen eingeschränkt.

* Funktionen bekommen entweder eine feste oder variable Anzahl an Argumenten
* Funktionen können entweder einen oder keinen Wert zurück liefern

In C werden Argumente als Wert an Funktionen übergeben, was bedeutet, dass die den Wert nicht so ändern können, dass es den Wert außerhalb der Funktion verändert.
Dafür müssen wir Zeiger verwenden, über die wir später etwas lernen.

Funktionen werden mit der folgenden Syntax definiert:

    int foo(int bar) {
        /* tu etwas */
        return bar * 2;
    }

    int main() {
        foo(1);
    }

Die Funktion `foo`, die wir definiert haben, bekommt ein Argument names `bar`. Die Funktion bekommt eine Ganzzahl (integer), multipliziert sie mit 2 und gibt das Resultat zurück.

Um die Funktion `foo` mit 1 als Wert für das Argument `bar` auszuführen, benutzen wir die folgende Syntax:

    foo(1);

In C müssen Funktionen erst definiert werden, bevor man sie im Code benutzen kann. Sie können entweder schon in einer Header Datei, oder oben in der C Datei definiert und später implementiert werden, oder sie können in der Reihenfolge definiert werden, wie sie gebraucht werden (weniger gern gesehen).

Die richtige Art Funktionen zu benutzen ist folgendermaßen:

    /* Funktionsdeklaration */
    int foo(int bar);

    int main() {
        /* Aufrufen von `foo` in `main` */
        printf("Das Ergebnis von foo ist: %d", foo(1));
    }

    int foo(int bar) {
        return bar + 1;
    }

Wir können ebenfalls Funktionen erstellen, die keinen Rückgabewert liefern, indem wir das Schlüsselwort `void` benutzen.

    void moo() {
        /* tu etwas und gebe keinen Wert zurück */
    }

    int main() {
        moo();
    }

Übung
-----

Schreibe eine Function names `print_big`, die ein Argument (eine Ganzzahl/integer) annimmt und die Zeile `x ist groß` ausgibt, wenn das Argument eine Zahl größer als 10 ist.

* **Wichtig**: Vergiss nicht ein "newline Zeichen" `\n` am Ende des Strings in `printf` zu setzen.

Tutorial Code
-------------

    #include <stdio.h>

    /* Funktionsdeklaration */
    int print_big(int number);

    int main() {
      int array[] = { 1, 11, 2, 22, 3, 33 };
      int i;
      for (i = 0; i < 6; i++) {
        print_big(array[i]);
      }
      return 0;
    }

    /* Schreib deine Funktion `print_big` hier */

Expected Output
---------------

    11 ist groß
    22 ist groß
    33 ist groß

Solution
--------

    #include <stdio.h>

    /* Funktionsdeklaration */
    int print_big(int number);

    int main() {
      int array[] = { 1, 11, 2, 22, 3, 33 };
      int i;
      for (i = 0; i < 6; i++) {
        print_big(array[i]);
      }
      return 0;
    }

    int print_big(int number){
        if(number > 10){
            printf("%d ist groß\n",number);
        }
    }

