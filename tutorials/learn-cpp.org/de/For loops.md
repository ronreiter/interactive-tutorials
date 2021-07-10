Tutorial
--------

## Was sind Schleifen (loops)?
Schleifen werden in der Programmierung verwendet, um einen bestimmten Block Code zu *wiederholen*. In C ++ gibt es drei verschiedene Arten von Schleifen:
######
* [`for`](/de/For_loops) Schleifen
* [`while`](/de/While_loops) Schleifen
* `do-while` Schleifen.

Man kann die Ausführung von Schleifen mithilfe der folgenden *Schlüsselwörter* kontrollieren:
######
* `break` - unterbricht eine Schleife. Es werden als nächstes die Befehle nach der Schleife ausgeführt. 
* `continue` - unterbricht den aktuellen durchlauf einer Schleife. Es wird mit dem nächsten durchlauf der Schleife fortgefahren.

## einen Code x-mal wiederholen

Wenn man ganz genau weiß, wie oft ein bestimmter Code wiederholt werden soll, kommt eine **for-Schleife** zum einsatz.
Mit folgendem Syntax lässt sich eine **for-Schleife** realisieren:

    // Syntax einer for-Schleife
    for (Initialisierung; Bedingung; Aktualisierung) {
        // auszuführende Befehle
    }

Dabei gilt:
######
- **Initialisierung:** Anweisungen, die hier stehen werden vor dem ersten durchlauf der Schleife ausgeführt.
- **Bedingung:** Die Schleife wird nur erneut ausgeführt, solange die Bedingung `true` ist.
- **Aktualisierung:** Anweisungen, die hier stehen werden nach jedem durchlauf der Schleife ausgeführt.

Lass uns folgendes Beispiel anschauen:

    // gibt "Hallo C++" 10-mal aus
    for(int i=0; i<10; i++)
    {
        cout << "Hallo C++" << endl;
    }

In diesem Beispiel wird eine [*Variable*](/de/Variables_and_Types) *i* mit dem Wert *0* definiert. Dann, wenn die Bedingung `true` ist, also wenn *i* kleiner als *10* ist, werden die Befehle in der Schleife ausgeführt (`Hallo C++` wird ausgegeben). Die Aktualisierung ist hier den Wert der [*Variable*](/de/Variables_and_Types) *i* um *1* zu erhöhen.
Dieser Vorgang wird wiederholt, bis die Bedingung `false` ist, das heißt bis *i* den Wert *10* erhält.

Man könnte auch sagen:
**Solange *i* kleiner als *10* ist, führe alle Befehle in der Schleife aus.**

Die Initialisierung kann auch vor der Schleife stattfinden und die Aktualisierung innerhalb der Schleife:

    // gibt 0 - 9 aus
    int i=0;
    for( ; i<10; )
    {
        cout << i << endl;
        i++;
    }

Es ist ebenfalls möglich mehrere Initialisierungen und Updates innerhalb einer Schleife durchzuführen:

    // gibt i und j 5 mal aus
    for(int i=0, j=4; i<5 and j>0; i++, j--) {
        cout << i << "  " << j << endl;
    }

Die **for-Schleife** kann auch dafür genutzt werden, um Werte eines [*Array*](/de/Arrays) zu durchlaufen. In anderen Programmiersprachen wird das auch als *for-each Schleife* bezeichnet:

    // jedes element aus dem Array ausgeben
    int arr[] = {1,2,3,4,5,6};
    
    for(int n : arr)
    {
        cout << n << endl;
    }

Übung
--------
Versuche alle **geraden** Nummern **unter 20** mithilfe einer *for-Schleife* auszugeben (in *aufsteigender* Reihenfolge).

Tutorial Code
-------------
#include <iostream>
using namespace std;

int main()
{
    // Platz für deinen Code.
    return 0;
}

Expected Output
---------------
0
2
4
6
8
10
12
14
16
18

Solution
--------
#include <iostream>
using namespace std;

int main()
{
    for(int i=0; i<20; i++)
    {
        // Prüfen ob die Zahl gerade ist (Modulo operator)
        if(i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}