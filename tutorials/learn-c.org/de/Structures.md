Tutorial
--------

C Strukturen sind spezielle, große Variablen, die mehrere benannte Variablen in sich tragen. Strukturen sind die Basis für Objekte und Klassen in C++, einer Programmiersprache, die aus C entstanden ist.
Strukturen werden benutzt zum:

* Serialisieren von Daten
* Übergeben mehrerer Argumente in und aus Funktionen durch eine einzelnes Argument
* Erstellen von komplexen Datenstrukturen wie gelinkte Listen, binäre Bäume, etc.

Das einfachste Beispiel einer Struktur sind **points**, die eine Einheit zweier Variablen - `x` und `y` - darstellen. Definieren wir diesen zweidimensionalen Punkt:

    struct point {
        int x;
        int y;
    };

Jetzt definieren wir einen `point` und benutzen ihn. Nehmen wir an die Funktion `draw` bekommt einen `point` übergeben und malt ihn auf den Bildschirm. Diese Funktion würde 2 Argumente benötigen:

    /* malt einen Punkt bei 10, 5 */
    int x = 10;
    int y = 5;
    draw(x, y);

Mit Strukturen, können wir ein `point` Argument übergeben:

    /* malt einen Punkt bei 10, 5 */
    struct point p;
    p.x = 10;
    p.y = 5;
    draw(p);

Um auf die Variablen des `point`s zuzugreifen, benutzt man den `.` Operator.

### Typedefs

Typedefs erlauben uns Typen mit verschiedenen Namen zu definieren - was beim Umgang mit Strukturen und Zeigern nützlich werden kann. In diesem Fall wollen wir die lange Definition einer `point` Struktur loswerden. Wir können die folgende Syntax verwendern um uns das Schlüsselwort `struct` zu sparen, wenn wir einen neuen `point` definieren.

    typedef struct {
        int x;
        int y;
    } point;

Das erlaubt uns neue `point`s so zu erstellen:

    point p;

Strukturen können ebenfalls Zeiger enthalten - was bedeutet, dass sie auch Strings und andere Strukturen halten können. Das macht die Macht von Strukturen aus. Wir können eine Vehikelstruktur folgendermaßen definieren:

    typedef struct {
        char * brand;
        int model;
    } vehicle;

Da `brand` eine `char` Zeiger ist, kann der Vehikel Typ einen String enthalten (der in diesem Fall die Marke des Vehikels darstellt).

    vehicle mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;

Übung
-----

Definiere eine neue Datenstruktur, namens "person", die einen String (Zeiger auf `char`) namens `name` und eine Ganzzahl (integer) namens `age` enthält.

Tutorial Code
-------------

    #include <stdio.h>

    /* definiere die person Struktur hier mit Hilfe der typedef Syntax */

    int main() {
        person john;

        /* Testcode */
        john.name = "John";
        john.age = 27;
        printf("%s ist %d Jahre alt.", john.name, john.age);
    }

Erwartete Ausgabe
-----------------

    John ist 27 Jahre alt.

Lösung
------

    #include <stdio.h>

    typedef struct {
        char * name;
        int age;
    } person;

    int main() {
        person john;

        /* Testcode */
        john.name = "John";
        john.age = 27;
        printf("%s ist %d Jahre alt.", john.name, john.age);
    }
