Tutorial
--------

###  Was ist ein Array

Frage 1: Angenommen, Sie müssen die Noten von 5 Schülern in einem CPP-Test speichern (5 Integer- oder Gleitkommawerte). Was würden Sie tun?

Wenn Sie keine Arrays kennen, würden Sie für Frage 1 einfach 5 Variablen seperat erstellen. Das ist aber keines Falles zu empfehlen, bei sowas sind Arrays zu verwenden!
Ein Array können Sie erstellen indem Sie folgende Syntax verwenden:

    <Variablen Typ> Name[Anzahl der zu erstellenden Variablen];

Da Sie jetzt die Syntax für die deklarierung von Arrays kennen, können wir doch direkt ein Array des Types Integer mit 5 Integern anglegen:

    int noten[5];

Jetzt können wir die Variablen aus unseren Array initializieren! Mit den eckigen Klammern wird angegeben, auf welche der 5 von uns erstellten Variablen wir zugreifen möchten.

    noten[0] = 1;
    noten[1] = 4;
    noten[2] = 5;
    noten[3] = 2;
    noten[4] = 3;

Also, unser ganze Code für das erstellen und initialisieren eines Arrays würde folgendermaßen aussehen:

    int noten[5];
    noten[0] = 1;
    noten[1] = 4;
    noten[2] = 5;
    noten[3] = 2;
    noten[4] = 3;

Anstatt das wir jede Note einzeln initialisieren, können wir auch nur in einer einzigen Zeile ein Array erstellen und die Werte direkt angeben.
    int noten[5] = { 96, 92, 78, 54, 86};

Falls man sich nicht sicher ist wie viele Werte man in ein Array speichern möchte, kann man alternativ in den eckigen Klammern nichts angeben, und die Werte nach Wunsch in 
die geschweiften Klammern angeben. Das funktioniert jedoch nur bei der einzeiligen Variante.

    int noten[] = {96, 92, 78, 54, 86};
    
Nun können wir dir die Werte aus unserem Array in der Konsole ausgeben. Wichtig dabei zu wissen ist das ein Array immer anfängt bei 0 zu zählen.

    cout << noten[0] << endl;
    
Ihr zweites Element kann als noten[1], das dritte Element als noten[2] usw. indiziert werden. Da wie schon gesagt Arrays bei 0 anfangen zu zählen.

Jetzt können wir unser ganzes Array ausgeben, indem wir eine sogennante For-Schleife benutzen, mehr über die For-Schleife wird es in den nächsten Tutorials geben.

    for(int i=0;i<5;i++)
    {
      cout << noten[i] << endl;
    }
    
Die For-Schleife wird folgendes Ausgeben:

    96
    92
    78
    54
    86


## Exercise

Erstellen Sie ein Array, das 6 Integer enthaltet. Initialisieren Sie alle 6 Integer und geben Sie das 4. in der Konsole aus.


Tutorial Code
-------------

    #include <iostream>
    using namespace std;
    int main() {
      char keys[6] = {'a','b','a','c','d','c'};
      return 0;
    }

Expected Output
---------------

    
    d
    


Solution
--------

    #include <iostream>
    using namespace std;
    int main() {
      char keys[6] = {'b','c','d','a','b','b'};
      cout<< keys[2]<<endl;
      return 0;
    }
