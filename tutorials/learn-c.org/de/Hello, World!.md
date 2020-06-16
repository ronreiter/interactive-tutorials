Tutorial
--------

### Einführung

Die Programmiersprache C ist eine Allzweck-Programmiersprache, die sich stark an der Art orientiert, in der Maschinen arbeiten.
Zu verstehen wie der Arbeitsspeicher eines Computers funktioniert ist ein wichtiger Aspekt der C Programmiersprache.
Obwohl C als "schwer zu erlernen" angesehen werden kann, ist C doch eigentlich eine sehr simple Sprache, mit mächtigen Fähigkeiten.

C ist eine sehr weit verbreitete Sprache und ist die Grundlage vieler Programme, wie Windows, dem Python Interpreter, der Versionskontrollsoftware Git und vieeeeelen anderen.

C ist eine kompilierte Sprache - was bedeutet, das man einen Compiler (zum Beispiel, GCC für Linux, oder Visual Studio für Windows) braucht, der das geschriebene Programm in eine ausführbare Datei übersetzt, bevor man es ausführen kann.
Diese Datei kann man dann aufrufen und wird tun, wofür es erstellt wurde.

### Unser erstes Programm

Jedes C Programm benutzt Bibliotheken. Sie geben uns die Möglichkeit notwendige Funktionen ausführen zu können.
Zum Beispiel die grundlegendste Funktion `printf`, die Text auf dem Bildschirm ausgibt, ist in der Header Datei `stdio.h` definiert. 

Um `printf` in unserem Programm nutzen zu können, müssen wir das folgende include Derivat in unserer ersten Zeile haben:

    #include <stdio.h>

Der zweite Teil des Codes ist der tatsächliche Code, den wir schreiben werden. Der erste Code der ausgeführt wird befindet sich immer in der `main` Funktion.

    int main() {
      ... our code goes here
    }

Das `int` Schlüsselwort zeigt an, dass die Funktion `main` eine Ganzzahl (integer) zurückgeben wird.
Die Zahl, die durch die Funktion zurückgegeben wird, zeigt an, ob unser Programm korrekt gearbeitet hat, oder nicht. Wenn wir sagen wollen, dass alles funktioniert hat, geben wir die Zahl 0 zurück. Eine Zahl größer als 0 zeigt einen Fehler an und bedeutet, dass unser Programm fehlgeschlagen ist.

In diesem Tutorial werden wir 0 zurückgeben und anzeigen, dass unser Programm erfolgreich war:

    return 0;

Beachte, dass jede Zeile in C mit einem Semikolon enden muss, sodass der Compiler weiß, wann eine neue Zeile beginnt.

Zu guter Letzt, müssen wir noch die Funktion `printf` aufrufen, um unseren Satz auszugeben.

Übung
-----

Modifiziere das Programm unten, so dass es den Text "Hallo, Welt!" ausgibt.

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      printf("Goodbye, Welt!");
      return 0;
    }

Erwartete Ausgabe
-----------------

    Hallo, Welt!

Lösung
------

    #include <stdio.h>

    int main() {
      printf("Hallo, Welt!");
      return 0;
    }
