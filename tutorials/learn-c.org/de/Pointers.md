Tutorial
--------

Zeiger sind ebenfalls Variablen und spielen eine sehr wichtige Rolle in C. Sie werden aus vielen Gründen benutzt:

* Strings
* Dynamische Speicher Belegung
* Referenzen als Funktionsargumente benutzen
* Komplexe Datenstrukturen zusammenstellen
* Zu Funktionen verweisen
* Spezielle Datenstrukturen erstellen (Bäume, etc. )

Und viele andere.

### Was ist ein Zeiger?

Ein Zeiger ist im Prinzip eine simple Ganzzahl(integer)-Variable, die eine Speicheradresse hält, die zu einem Wert zeigen, anstatt den Wert selbst zu halten.

Der Arbeitsspeicher eines Computers ist ein sequentieller Datenspeicher und ein Zeiger zeigt auf einen bestimmte Punkt in diesem Speicher. Unser Programm kann Zeiger benutzen um riesige Mengen an Speicher zu lesen - abhängig davon wieviel wir von unserem Startpunkt aus lesen.

### Strings sind Zeiger

Wir haben bereits über Strings geredet, aber jetzt gehen wir ein bisschen tiefer in die Materie, um zu verstehen was Strings in C wirklich sind. Wir nennen sie auch C-Strings, um sie von anderen Strings wie in C++ zu unterscheiden.

Die folgende Zeile:

    char * name = "John";

tut 3 Dinge:

1. Es legt eine lokale (stack) Variable namens `name` an, die ein Zeiger auf ein einzelnes Zeichen ist.
2. Es sorgt dafür das der String "John" irgendwo im Arbeitsspeicher erscheint (nachdem das Programm kompiliert und ausgeführt wurde, natürlich).
3. Es initialisiert das `name` Argument so, dass es dorthin zeigt, wo das 'J' Zeichen im Speicher liegt (gefolgt von den anderen Zeichen des Strings).

Versuchen wir die `name` Variable wie einen Array anzusprechen, funktioniert dies und sie wird den Ordinalwert des Zeichens "J" zurückgeben, da die `name` Variable tatsächlich an den Anfang des Strings zeigt.

Da wir wissen, dass der Arbeitsspeicher sequentiell ist, können wir annehmen das wir das nächste Zeichen des Strings bekommen, wenn wir uns im Speicher nach vorne bewegen, bis wir das Ende des Strings erreichen, das mit einem Null Zeichen gekennzeichnet ist. (Das Zeichen mit dem Ordinalwert 0, geschrieben `\0`)

### Dereferenzierung

Dereferenzierung nennt man den Zugriff auf den Wert auf den ein Zeiger zeigt, anstatt auf die Speicheradresse. Wir benutzen Dereferenzierung bereits bei Arrays - wir wussten es nur noch nicht. Der Zugriffsoperator, gekennzeichnet durch eckige Klammern - `[0]` zum Beispiel, um das erste Element zu erreichen. Und da Arrays eigentlich Zeiger sind, ist der Zugriff auf das erste Element eines Arrays genau dasselbe wie das Dereferenzieren eines Zeigers. Zeiger dereferenziert man mit dem Sternchen Operator: `*`.

Wenn wir einen Array erstellen wollen, der zu einer anderen Variable auf unserem Stack zeigt, schreiben wir den folgenden Code:

    /* definiere eine lokale Variable a */
    int a = 1;

    /* definiere eine Zeigervariable und richte sie auf a mit Hilfe des & Operators */
    int * pointer_to_a = &a;

    printf("Der Wert von a ist %d\n", a);
    printf("Der Wert von a ist auch %d\n", *pointer_to_a);

Beachte, dass wir den `&` Operator benutzt haben, um auf die Variable `a` zu zeigen, die wir gerade erstellt hatten.

Danach haben wir mit dem Dereferenzierungsoperator auf sie verwiesen. Wir können auch den Inhalt der dereferenzierten Variable verändern:

    int a = 1;
    int * pointer_to_a = &a;

    /* lass uns die Variable a veraendern */
    a += 1;

    /* wir haben die Variable a gerade schon wieder veraendert! */
    *pointer_to_a += 1;

    /* wir werden 3 ausgeben */
    printf("Der Wert von a ist jetzt %d\n", a);

Übung
-----

Erstelle einen Zeiger auf eine lokale Variable `n`, namens `pointer_to_n` und nutze ihn um den Wert von `n` um 1 zu erhöhen.

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      int n = 10;

      /* dein Code hier */

      /* Testcode */
      if (pointer_to_n != &n) return 1;
      if (*pointer_to_n != 11) return 1;

      printf("Erledigt!\n");
      return 0;
    }

Erwartete Ausgabe
-----------------

    Erledigt!

Lösung
------

    #include <stdio.h>

    int main() {
      int n = 10;

      int * pointer_to_n = &n;

      *pointer_to_n += 1;

      /* Testcode */
      if (pointer_to_n != &n) return 1;
      if (*pointer_to_n != 11) return 1;

      printf("Erledigt!\n");
      return 0;
    }
