Tutorial
--------
**If-else** Anweisungen werden in der Programmierung verwendet, um einen Block Code nur auszuführen, wenn eine bestimmte Bedingung erfüllt ist.

### if Anweisung

Code innerhalb der **if-Anweisung** wird nur ausgeführt, wenn die Bedingung in der if-Anweisung `true` ist. Der allgemeine Syntax ist:

    if(Bedingung)
    {
        // Anweisungen, die hier stehen werden ausgeführt,
        // wenn die Bedingung true ist.
    }

Das folgende Beispiel gibt *"ich habe die Zahl 4 gefunden"* aus, wenn die [Variable](/de/Variables_and_Types) `num` 4 entspricht.

    if(num == 4)
    {
        cout << "ich habe die Zahl 4 gefunden" << endl;
    }    

Das folgende Beispiel gibt *"dies ist eine gerade Zahl"* aus, wenn die [Variable](/de/Variables_and_Types) `num` eine **gerade** Zahl ist (`num % 2 == 0`):

    if(num % 2 == 0)  // % ist der modulo-operator. Er gibt den Rest einer Division zurück. Bei einer geraden Zahl wird er 0 zurückgeben.
    {
        cout << "dies ist eine gerade Zahl"<< endl;
    }

Stelle dir vor, du möchtest etwas anderes machen, wenn die Bedingung nich erfüllt wird. Man könnte für das Beispiel oben *"dies ist keine gerade Zahl"* ausgeben, wenn die Zahl ungerade ist. Für solche Fälle gibt es die **else-Anweisung**.

### else Anweisung

**Else-Anweisungen** können nie ohne eine **if-Anweisung** stehen. Der Code innerhalb der **else-Anweisung** wird nur ausgeführt, wenn die Bedingung in der **if-Anweisung** `false` ergibt.

Nehmen wir folgendes Beispiel:

    if(num % 2 == 0)
    {
        cout << "dies ist eine gerade Zahl"<< endl;
    }
    else
    {
        cout << "dies ist keine gerade Zhal" << endl;
    }

Der obere Code gibt *"dies ist eine gerade Zahl"* für alle geraden Zahlen und *"dies ist keine gerade Zahl"* für alle ungeraden Zahlen aus.

### else if Anweisung

Man kann auch mehrere verschachtelte **if-else-Anweisungen** benutzen, wenn man mehr als nur eine Bedingung überprüfen möchte. Sehen wir uns dazu dieses `else if` Beispiel an:

    if(num % 2 == 0)
    {
        cout << "Zahl ist durch 2 teilbar" << endl;
    }
    else if(num % 3 == 0)
    {
        cout << "Zahl ist durch 3 teilbar" << endl;
    }
    else
    {
        cout << "Blöde Zahl" << endl;
    }

Im oberen Code wird auf Teilbarkeit durch 2 geprüft. Wenn die Zahl nicht durch 2 teilbar ist, wird auf Teilbarkeit durch 3 geprüft. Wenn die Zahl weder durch 2, noch durch 3 teilbar ist, wird *"Blöde Zahl"* ausgegeben.

Übung
--------
Geben sie aus, zu welcher Altersgruppe die Personen gemäß dem hier angegebenen Alter gehören. Hinweis: schaue dir vorher eventuell [**For-Schleifen**](/de/For_loops) an.
######
- Kind ( < 20 Jahre alt )
- Erwachsener ( >= 20 und < 65 Jahre alt ) 
- Rentner ( >= 65 Jahre alt )


Tutorial Code
-------------
#include <iostream>
using namespace std;

int main()
{
    int ages[] = {16,48,72,66,23};
    
    for(int i = 0; i < 5; i++)
    {        
        # Hier ist Platz für deinen Code. 
        # Nutze eine if-else Anweisung, um die Person als Kind/Erwachsener/Rentner zuzuordnen
    }
    return 0;
}

Expected Output
---------------
Kind
Erwachsener
Rentner
Rentner
Erwachsener

Solution
--------
#include <iostream>
using namespace std;

int main()
{
    int ages[] = {16,48,72,66,23};
    
    for(int i = 0; i < 5; i++)
    {
        
        if(ages[i] < 20)
        {
            cout << "Kind" << endl;
        }
        else if( ages[i] >= 20 && ages[i] < 65)
        {
            cout << "Erwachsener" << endl;
        }
        else
        {
            cout << "Rentner" << endl;
        }
    }
    return 0;
}