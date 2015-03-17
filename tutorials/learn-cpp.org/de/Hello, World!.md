Tutorial
--------

### Einführung

C++ (zeh plus plus ausgesprochen) is eine kompilierte Allzweck Programmiersprache. Ihre Komplexität liegt zwischen Einsteiger und Fortgeschritten, da sie sowohl High-Level als auch Low-Level Sprachelemente vereint.
Sie bietet imperative, objekt-orientierte und generische Programmiermerkmale.

C++ ist eine der beliebtesten Programmiersprachen und ist auf vielen Hardwareplattformen und Betriebssystemem verfügbar. Da sie besonders effizient ist, wird es für Systemprogramme, Applikationen, Gerätetreiber, eingebettete Software, Server-Client und Unterhaltungsprogramme, z. B. Videospiele, eingesetzt. Verschiedene Hersteller bieten Open Source und proprietäre C++ Compiler an, bspw. FSF, LLVM, Microsoft und Intel.

### Unser erstes Programm

Jedes C++ Programm benutzt Bibliotheken, die nützliche Funktionen bereitstellen. Zum Beispiel, die grundlegendste Funktion `cout`, die Text auf den Bildschirm ausgibt, ist in der 'Header' Datei `iostream` definiert.

Um uns die Möglichkeit zu geben `cout` in unserem Programm zu benutzen, müssen wir noch das folgende 'include Derivate' zu unserer ersten Zeile hinzufügen:

    #include <iostream>
    using namespace std;

Der zweite Teil des Codes ist der tatsächliche Code, den wir schreiben werden. Der Code der als erstes ausgeführt wird befindet sich immer in der `main` Funktion.

    int main() {
      Code kommt hier hin...
    }

Das Schlüsselword `int` zeigt an, dass die Funktion `main` eine Integer zurückliefern wird - eine Ganzzahl. Die Zahl, die von der 
Funktion zurückgegeben wird zeigt an, ob das Programm fehlerfrei beendet wurde oder nicht. Wollen wir ausdrücken, dass alles funktioniert hat
geben wir eine 0 zurück. Eine Zahl größer als 0 bedeutet einen Fehler bei der Ausführung des Programms.

In diesem Tutorial werden wir 0 zurückgeben, um auszudrücken, dass unser Programm erfolgreich war:

    return 0;

Beachte, dass jede Zeile in C++ mit einem Semikolon enden muss, sodass der Compuler weiß, dass eine neue Zeile anfängt.

Zu guter Letzt, müssen wir noch eine Umleitung benutzen, um unseren Text zum `cout` Strom.

Übung
-----

Verändere das Programm unten, sodass es den Text 'Hallo, Welt!' ausgibt.

Tutorial Code
-------------

    #include <iostream>
    using namespace std;

    int main() {
      cout << "Goodbye, Welt!" << std::endl;
      return 0;
    }

Erwartete Ausgabe
---------------

    Hallo, Welt!

Lösung
------

    #include <iostream>
    using namespace std;

    int main() {
      cout << "Hallo, Welt!" << std::endl;
      return 0;
    }
