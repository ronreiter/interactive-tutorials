Tutorial
--------

### Strings definieren

Strings in C sind eigentlich Arrays von Zeichen. Obwohl Zeiger in C ein fortgeschrittenes Thema ist, dass später behandelt wird, werden wir Zeiger 
für unseren Zeichenarray benutzen. Und wzar folgendermaßen:

    char * name = "John Smith";

Mit dieser Methode erstellen wir einen String den wir nur lesen können.
Wollen wir einen String definieren, der auch verändert werden kann, müssen wir ihn als lokalen Zeichenarray definieren:.

    char name[] = "John Smith";

Diese Notation ist anders, da es eine Array Variable alloziert, die wir verändern können. Die leeren eckigen Klammern `[]` sagen dem Compiler, 
dass er die benötigte Größe des Arrays automatisch berechnen soll. Das ist dasselbe, als wenn man die Größe explizit angeben würde (1 mehr als die Länge des Strings):
the length of the string:

    char name[] = "John Smith";
    /* ist dasselbe wie */
    char name[11] = "John Smith";

Der Grund dass wir 1 hinzufügen müssen ist, dass, obwohl der String `John Smith` genau 10 Zeichen lang ist, wir ein extra Zeichen
für den String Terminator einplanen müssen. Der String Terminator ist ein spezielles Zeichen, das das Ende des Strings anzeigt. 
Dies ist notwendig, da das Programm nicht weiß, wie lang der String ist. Das weiß nur der Compiler.

### String formatieren mit printf

Wir können die `printf` Funktion benutzen, um einen String mit anderen Strings in ein bestimmtes Format zu bringen:

    char * name = "John Smith";
    int age = 27;

    /* gibt 'John Smith ist 27 Jahre alt.' aus */
    printf("%s ist %d Jahre alt.\n", name, age);

Beachte, dass wir beim ausgeben von Strings ein 'newline' Zeichen hinzufügen müssen, sodass der nächste `printf` Aufruf auf einer neuen Zeile anfängt.

### String Vergleiche

Die Funktion `strncmp` vergleicht zwei Strings und gibt 0 zurück, wenn beide gleich sind, oder eine andere Zahl, wenn sie unterschiedlich sind.
Die Argumente sind die beiden Strings, die verglichen werden sollen und die maximale Länge, die verglichen werden soll. Es gibt ebenfalls eine unsichere
Version dieser Funktion namens `strcmp`, aber es wird stark von ihr abgeraten. Zum Beispiel:

    char * name = "John";

    if (strncmp(name, "John", 4) == 0) {
        printf("Hallo, John!\n");
    } else {
        printf("Du bist nicht John. Verschwinde!\n");
    }

Übung
-----

Definieren einen String `first_name` mit dem Wert `John` mit der Zeigernotation und definiere einen String `last_name` mit dem Wert `Doe`
mit der lokalen Arraynotation.

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      /* definiere first_name */
      /* definiere last_name */
      char name[100];

      /* Testcode */
      if (strncmp(first_name, "John") != 0) return 1;
      if (strncmp(last_name, "Doe") != 0) return 1;

      last_name[0] = 'B';
      sprintf(name, "%s %s", first_name, last_name);
      if (strncmp(name, "John Boe", 100) == 0) {
          printf("Erledigt!\n");
      }

      return 0;
    }


Erwartete Ausgabe
-----------------

    Erledigt!

Lösung
------

    int main() {
      char first_name[] = "John";
      char last_name[] = "Doe";
      char name[100];

      /* Testcode */
      if (strncmp(first_name, "John") != 0) return 1;
      if (strncmp(last_name, "Doe") != 0) return 1;

      last_name[0] = 'B';
      sprintf(name, "%s %s", first_name, last_name);
      if (strncmp(name, "John Boe", 100) == 0) {
          printf("Erledigt!\n");
      }

      return 0;
    }
