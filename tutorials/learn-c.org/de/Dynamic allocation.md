Tutorial
--------

Dynamische Allokation von Speicher ist ein sehr wichtiges Thema in C - es erlaubt komplexe Datenstrukturen zu erstellen, wie bspw. gelinkte Listen. Speicher dynamisch zu belegen hilft uns dabei Daten zu speichern, ohne vorher wissen zu müssen, wie groß die Daten werden können.

Um ein Stück Speicher dynamisch zu belegen, müssen wir einen Zeiger bereit halten, welcher den Ort des neu belegten Speicher beinhaltet. Wir können den Speicher, der für uns reserviert wurde, mit diesem Zeiger erreichen und wir können den Zeiger benutzen, um den Speicher wieder freizugeben, sobald wir mit ihm fertig sind.

Nehmen wir an wir wollen eine Personen Struktur dynamisch belegen. Sie Person ist folgendermaßen definiert:

    typedef struct {
        char * name;
        char age;
    } person;

Um eine neue Person im `myperson` Argument anzulegen, benutzen wir die folgende Syntax:

    person * myperson = malloc(sizeof(person));

Das lässt den Compiler wissen, dass wir gerade genug Speicher belegen wollen, um eine Person Struktur zu halten und das er einen Pointer zu dem neu angelegten Speicher zurückgeben soll.

Beachte, dass `sizeof` keine wirkliche Funktion ist. Der Compiler interpretiert es und übersetzt es in die tatsächliche Größe des Zeiger Structs.

Um auf die Variablen einer Person zu zugreifen, können wir die `->` Notation benutzen:

    myperson->name = "John";
    myperson->age = 27;

Wenn wir mit dem dynamisch angelegten Strukt fertig sind, können wir es mit `free` freigeben:

    free(myperson);

Beachte, dass `free` die `myperson` Variable nicht löscht. Es gibt lediglich den Speicher, auf den der Zeiger `myperson` zeigt frei, allerdings zeigt er immer noch auf eine Speicheradresse. Allerdings dürfen wir nicht mehr darauf zugreifen, nachdem wir ihn freigegeben haben. Das ist eine große Fehlerquelle.

Übung
-----

Benutze `malloc` um eine `point` Struktur dynamisch zu belegen.
Use `malloc` to dynamically allocate a point structure.

Tutorial Code
-------------

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct {
      int x;
      int y;
    } point;

    int main() {
      point * mypoint;

      /* Belege ein neues point Strukt hier,
         sodass mypoint darauf zeigt */

      mypoint->x = 10;
      mypoint->y = 5 ;
      printf("mypoint Koordinaten: %d, %d\n", mypoint->x, mypoint->y);

      free(mypoint);
      return 0;
    }

Erwartete Ausgabe
-----------------

    mypoint Koordinaten: 10, 5

Lösung
------

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct {
      int x;
      int y;
    } point;

    int main() {
      point * mypoint;

      mypoint = malloc(sizeof(point));

      mypoint->x = 10;
      mypoint->y =5 ;
      printf("mypoint Koordinaten: %d, %d\n", mypoint->x, mypoint->y);

      free(mypoint);
      return 0;
    }
