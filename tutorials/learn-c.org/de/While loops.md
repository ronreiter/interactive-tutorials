Tutorial
--------

While Schleifen sind For Schleifen ähnlich, haben aber weniger Funktionalität. Eine While Schleife führt den While Code Block aus so 
lange die Bedingung wahr ist. Zum Beispiel wird der untere Code 10 Mal ausgeführt:

    int n = 0;
    while (n < 10) {
        n++;
    }

While Schleifen können endlos ausgeführt werden, wenn die Bedingung niemals falsch werden kann (nicht 0):

    while (1) {
       /* tu etwas */
    }

### Schleifenanweisungen

Es gibt zwei wichtige Schleifenanweisungen, die zusammen mit allen Schleifenarten in C benutzt werden können - `break` und `continue`.

Die `break` Anweisung stoppt die folgende Schleife nach 10 durchgängen, obwohl die Schleife selbst niemals enden würde:

    int n = 0;
    while (1) {
        n++;
        if (n == 10) {
            break;
        }
    }

Im folgenden Code, sorgt die `continue` Anweisung dafür, dass die `printf` Funktion übersprungen wird, sodass nur gerade Zahlen ausgegeben werden:

    int n = 0;
    while (n < 10) {
        n++;

        /* check, dass n ungerade ist */
        if (n % 2 == 1) {
            /* geh zurück zum Anfang des while Blocks */
            continue;
        }

        /* wir kommen hier nur an, wenn n gerade ist */
        printf("Die Zahl %d ist gerade.\n", n);
    }

Übung
-----

Die `array` Variable besteht aus 10 Zahlen. In der While Schleife müssen wir 2 `if` Bedingungen einbauen, die den 
Fluss der Schleife folgendermaßen verändern (ohne den `printf` Aufruf zu verändern):

* Wenn die aktuelle Zahl kleiner als 5 ist, gib sie nicht aus
* Wenn die momentane Zahl größer als 10 ist, gib sie nicht aus und beende die Schleife

Beachte, dass du in einer Endlosschleife hängen bleibst, wenn du die Iteratorvariable `i` nicht erhöhst und die `continue` Anweisung benutzt.

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
        int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
        int i = 0;

        while (i < 10) {
            /* dein Code hier */

            printf("%d\n", array[i]);
            i++;
        }

        return 0;
    }

Erwartete Ausgabe
-----------------

    7
    5
    9
    5

Lösung
------

    #include <stdio.h>

    int main() {
        int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
        int i = 0;

        while (i < 10) {
            if(array[i] < 5){
                i++;
                continue;
            }

            if(array[i] > 10){
                break;
            }

            printf("%d\n", array[i]);
            i++;
        }

        return 0;
    }
