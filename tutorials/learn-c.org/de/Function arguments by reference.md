Tutorial
--------

Funktionsargument werden als Wert übergeben, was bedeutet, dass eine Kopie in die Funktion gegeben wird. Aber was wenn wir den Zeiger auf die Variable, anstatt den Wert der Variable kopieren und in die Funktion übergeben? Das ermöglicht uns den Funktionen Kontrolle über die Variablen und Strukte der Elternfunktion zu geben und nicht über eine Kopie derer.

Nehmen wir an wir schreiben eine Funktion, die eine Zahl um eins erhöhen soll, namens `addone`. Folgendes wird nicht funktionieren:

    void addone(int n) {
        n++;
    }

    int n;
    printf("Vorher: %d\n", n);
    addone(n);
    printf("Nachher: %d\n", n);

Dies funktioniert, allerdings:

    void addone(int * n) {
        (*n)++;
    }

    int n;
    printf("Vorher: %d\n", n);
    addone(&n);
    printf("Nachher: %d\n", n);

Der Unterschied ist, dass die zweite Version einen Zeiger auf die Variable `n` als Argument übergeben bekommt und den Wert auf den er zeigt manipulieren kann, da sie dadurch weiß wo im Speicher er sich befindet.

Beachte, dass wir der `addone` Funktion **immer** eine Referenz auf eine Variable übergeben müssen und nicht die Variable selbst. Dadurch kennt die Funktion die Adresse der Variable im Speicher und erhält nicht nur eine Kopie des Wertes an einer anderen Position.

### Zeiger auf Strukturen

Nehmen wir an, wir wollen eine Funktion erstellen, die einen Punkt in die `x` und die `y` Richtung bewegt. Wir nennen sie `move`. Anstatt zwei Zeiger zu übergeben, können wir einen Zeiger auf die `point` Struktur übergeben.

    void move(point * p) {
        (*p).x++;
        (*p).y++;
    }

Wollen wir eine der Variablen innerhalb der Struktur benutzen, können wir eine andere, kurze Syntax benutzen, da es eine so oft benötigte Funktion ist.  Wir können die Funktion folgendermaßen umschreiben: 

    void move(point * p) {
        p->x++;
        p->y++;
    }

Übung
-----

Schreibe eine Funktion namens `birthday`, die der `age` Variable einer `person` um 1 erhöht.

Tutorial Code
-------------

    #include <stdio.h>

    typedef struct {
      char * name;
      int age;
    } person;

    /* Funktionsdeklaration */
    void birthday(person * p);

    /* Schreibe deine Funktion hier */

    int main() {
      person john;
      john.name = "John";
      john.age = 27;

      printf("%s ist %d Jahre alt.\n", john.name, john.age);
      birthday(&john);
      printf("Happy birthday! %s ist jetzt %d Jahre alt.\n", john.name, john.age);

      return 0;
    }

Erwartete Ausgabe
-----------------

    John ist 27 Jahre alt.
    Happy birthday! John ist jetzt 28 Jahre alt.

Lösung
------

    #include <stdio.h>

    typedef struct {
      char * name;
      int age;
    } person;

    /* Funktionsdeklaration */
    void birthday(person * p);

    void birthday(person * p){
        (*p).age += 1;
    }

    int main() {
      person john;
      john.name = "John";
      john.age = 27;

      printf("%s ist %d Jahre alt.\n", john.name, john.age);
      birthday(&john);
      printf("Happy birthday! %s ist jetzt %d Jahre alt.\n", john.name, john.age);

      return 0;
    }
