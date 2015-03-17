Tutorial
--------

### Datentypen

C++ bietet viele eingebaute Datentypen als auch Möglichkeiten Datentypen selbst zu definieren. Die folgende Auflistung zeigt 7 simple Datentypen in C++.

#### Eingebaute Datentypen
* Boolean - `boolean` - entweder `true` oder `false`
* Integers - Ganzzahlen, die positiv oder negativ sein können. Definiert mit `char` oder `int`
* Gleitkommazahlen - reelle Zahlen (Zahlen mit Brüchen). Definitert mit `float` und `double`
* Ohne Wert mit dem Schlüsselwort `void`
* Valueless	 using the `void` keyword
* 'Weite' Zeichen mit dem Schlüsselwort `wchar_t`, für Zeichen außerhalb der ASCII Zeichenkodierung

Die verschiedenen Variablentypen definieren ihre Grenzen. Ein `char` kann eine Ganzzahl von -128 bis 127 annehmen, wobei eine `long` eine Zahl von -2,147,483,648 bis 2,147,483,647 annehmen kann.

#### Typmodifikatoren

Die obigen Typen können mit den folgenden Modifikatoren verändert werden:
* `signed` und `unsigned`
* `short` und `long`

#### Benutzerdefiniert
* Strukturen - `struct` wird später erklärt.
* Klassen - `class` wird später erklärt.

C++ erlaubt einen Array von Zeichen als Strings zu definieren. Es stellt ebenfalls eine große Biblithek zum manipulieren und arbeiten mit Strings zur Verfügung, die später im Strings-Kapitel erklärt wird.

#### Typedefs
Typedefs erlauben es neue Namen (ein Alias) für bereits existierende Datentypen einzuführen. Die folgende simple Syntax zeigt dies:

    typedef int counter;
    counter tick_c = 100;  // tick_c ist eine valide int Variable

#### Enumerationstypen

Um eine Enumeration zu erstellen, wird das Schlüsselwort `enum` gebraucht. Die allgemeine Form eines Enumerationstyp ist:

    enum enum-name { list of names } var-list;

Oben steht `enum-name` für den Namen des Enumerationstyp, die `list of names` muss mit Kommata getrennt werden.

Das folgende Codebeispiel definiert eine Enumeration von Farben, namens `colour` und die Variable `a_colour` des Typs `colour`. Zuletzt wird der Variable `a_colour` der Wert `green` zugewiesen.

    enum colour {red, green, blue} a_colour, another_colour;
    a_colour = green;  // a_colour will be assigned value of '1'

### Variablen definieren

Für Zahlen werden wir meistens den Typ `int` verwenden, der die Größe eines `word` hat. Wie groß ein `word` ist, hängt davon ab auf was für einem Computer das Programm kompiliert wurde.
Die meisten Computer heutzutage haben 32 Bit Zahlen, was bedeutet, dass ein `int` die gleichen Grenzen hat wie ein `long`.

Um die Variablen `foo` und `bar` zu definieren, brauchen wir die folgende Syntax:

    int foo;
    int bar = 1;

Die Variable `foo` kann benutzt werden, aber da wir sie noch nicht instanziiert haben, wissen wir nicht, welchen Wert sie repräsentiert. Die Variable `bar` repräsentiert die Zahl 1.

Jetzt können wir Mathematik anwenden. Nehmen wir an `a`, `b`, `c`, `d`; und `e` sind Variablen, dann können wir plus, minus und Multiplicationsoperatoren in folgender Notation benutzen und der Variable `a` einen neuen Wert zuweisen.

    int a = 0,b = 1,c = 2,d = 3, e = 4;
    a = b - c + d * e;
    printf("%d", a); /* wird  1-2+3*4 = 11 ausgeben */

Übung 
-----

In der nächsten Übung wirst du ein Programm erstellen, dass die Summe der Zahlen `a`, `b` und `c` ausgibt.

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      float sum;

      /* dein code hier */

      printf("Die Summe von a, b, und c ist %f.", sum);
      return 0;
    }

Erwartete Ausgabe
-----------------
    Die Summe von  a, b, und c ist 12.750000.

Lösung 
------

    #include <stdio.h>

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      float sum;
      
      sum = a + b + c;

      printf("Die Summe von a, b, und c ist %f.", sum);
      return 0;
    }
