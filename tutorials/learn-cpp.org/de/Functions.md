Tutorial
--------
### Funktionen
Eine Funktion, ähnlich wie die in Mathe, ist eine Sammlung von "Befehlen" um bestimmte Aufgaben zu erfüllen. Normalerweise nehmen Funktionen eine Eingabe (Parameter) an, welche dann verarbeitet und ausgegeben wird. Folgend die generelle Form von Funktionen in C++:


    typ name_der_funktion (parameter, parameter2...){
    code / Befehle
    }

* **typ**: Typ der Variablen, den die Funktion ausgeben wird.
* **name_der_funktion**: Name der Funktion. Dieser wird genutzt um auf die Funktion zuzugreifen und sie auszuführen.
* **parameter**: Eingaben, die die Funktion benutzen / verarbeiten wird.Diese Parameter werden mit dem Datentyp übergeben (übergibst du z.B. die Variable x und in x befindet sich die 4, so schreibt man als parameter int x) Mehrere Eingaben werden mit ',' (Kommas) getrennt.
* **Befehle**: Codezeilen, die die Aufgabe der Funktion erfüllen.

Um eine Funktion aufzurufen, schreibt man einfach den Namen der Funktion mit den Parametern in Klammern dahinter. Hat die Funktion keine Parameter so bleiben die Klammern leer. Im folgenden Beispiel wird eine Funktion mit Parametern behandelt:

    int QuadratZahl(int x){ // Erzeugt eine Funktion "QuadratZahl" welche eine ganze Zahl x oder eine Variable vom Typ int, was auch eine ganze Zahl wäre, als Parameter annimmt.
        y=x*x; //erzeugt eine temporäre Variable y welche x im Quadrat (x*x) beinhaltet.
        return y; //gibt den Inhalt von y aus
    }
    
    int main(){ 
        int Eingabe = 9; 
        int Ausgabe = squareNumbers(input); 
        //die Funktion wird aufgerufen und füllt die Variable "Ausgabe" mit dem Wert, den sie ausgibt
    }

Weiteres Beispiel:

    void halloDu(string name){//void bedeutet, dass die Funktion nichts ausgibt (bzw. nichts mit "return" ausgibt, es kann dennoch z.B. text angezeigt werden)
        cout << "Hallo, " << name;
    }
    
    int main(){
        halloDu("Celina"); //zeigt den Text "Hallo, Celina"
    }

Im Normalfall werden Funktionen außerhalb der "main()" Funktion geschireben / definiert.

Übung
---------
In dieser Übung wirst du eine Funktion erstellen, die die Summe der eingegeben Variablen a, b und c ausgibt. Folgend der gegebene Code:

Tutorial Code
-------------

    #include <iostream>
    using namespace std;
    
    // dein code kommt hierher (schreibe eine Funktion)
    
    int main (){
        int a = 1;
        int b = 4;
        int c = 3;
        // dein code kommt hierher (rufe die Funktion auf)
    }

Erwartete Ausgabe
---------------

    8

Lösung
--------

    #include <iostream>
    using namespace std;
    
    void addition(int a, int b, int c){
    cout << a+b+c;
    }
    
    int main (){
    int a = 1;
    int b = 4;
    int c = 3;
    addition(a,b,c);
    }




