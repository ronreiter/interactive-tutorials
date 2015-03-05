Tutorial
--------

### Datentypen

C hat viele Variablentypen, aber es gibt ein paar grundlegende Typen:

* Integer - Ganzzahlen, die sowohl positiv als auch negativ sein können. Deklariert mit: `char`, `int`, `short`, `long` oder `long long`.
* Unsigned Integer - Ganzzahlen, die nur positiv sein können. Deklariert mit: `unsigned char`, `unsigned int`, `unsigned short`, `unsigned long` oder `unsigned long long`.
* Floating point numbers - Reelle Zahlen (Zahlen mit Brüchen). Deklariert mit:`float` oder `double`.
* Strukturen - werden in einem späteren Tutorial erklärt.

Die verschiedenen Arten von Variablen definieren ihre Grenzen. Ein `char` can einen Wert von -128 bis 127 annehmen, ein `long` einen Wert von -2,147,483,648 bis 2,147,483,647.

Beachte, dass C _keinen_ boolean Typ hat. Normalerweise wird er durch diese Notation definiert:

    #define BOOL char
    #define FALSE 0
    #define TRUE 1

C benutzt Arrays von Zeichen um Strings zu definieren. Das wird später in der Strings Sektion erklärt.

### Variablen definieren

Für Zahlen werden wir meistens den Typ `int` benutzen. Es ist eine Ganzzahl, die die Größe eines "word", einer Standardspeichergröße der Maschine, auf der 
Das Programm kompiliert wurde. Auf den meisten Computern heutzutage ist dies eine 32Bit Zahl, also ein Zahl zwischen -2,147,483,648 und 2,147,483,647 (dasselbe wie `long`).

Um die Variablen `foo` und `bar` zu definieren, benutzen wir die folgende Syntax:

    int foo;
    int bar = 1;

Die Variable `foo` can benutzt werden, aber da wir sie nicht initialisiert haben, wissen wir nicht, was sich in ihr befindet. Die Variable `bar` enthält die Zahl 1.

Jetzt können wir Berechnungen durchführen. Wenn wir annehmen, dass `a`, `b`, `c`, `d` und `e` Variablen sind, können wir einfach Additions-, Subtraktions- und Multiplikationsoperatoren
verwenden, um `a` einen neuen Wert zuzuweisen:

    int a = 0,b = 1,c = 2,d = 3, e = 4;
    a = b - c + d * e;
    printf("%d", a); /* gibt 1-2+3*4 = 11 aus */

Übung
-----

In dieser Übung werden wir ein Programm erstellen, dass die Summe der Zahlen `a`, `b` und `c` ausgibt.

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
    Die Summe von a, b, und c ist 12.750000.

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
