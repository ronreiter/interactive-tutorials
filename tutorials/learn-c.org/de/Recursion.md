Tutorial
--------
 
Rekursion tritt auf, wenn eine Funktion sich selbst aufruft. Rekursion kann ein Teil von sehr elegantem Code sein, der intuitiv zu verstehen ist. Es kann auch einen sehr hohen Speicherverbrauch nach sich ziehen, wenn die Rekursion zu tief geht.
 
Häufige Beispiele von Rekursion sind: 
 
* Rekursive Datenstrukturen wie gelinkte Listen, Binäre Bäume etc.
* Möglichkeiten in Spielen wie Schach erkunden, ohne einen internen Status verändern zu müssen
 
Rekursion besteht immer aus 2 Teilen. Einen Zielzustand, der anzeigt, wann die Rekursion abbrechen soll und ein Funktionsaufruf auf sich selbst, der weiter zum Zielzustand fortschreiten muss.
 
Diese Funktion, zum Beispiel, multipliziert 2 Zahlen, indem es sie rekursiv addiert:

    #include <stdio.h>

    unsigned int multiply(unsigned int x, unsigned int y)
    {
        if (x == 1)
        {
            /* Zielzustand */
            return y;
        }
        else if (x > 1)
        {
            /* der rekursive Schritt */
            return y + multiply(x-1, y);
        }
 
        /* Absicherung für den Fall, dass x=0 */
        return 0;
    }

    int main() {
        printf("3 mal 5 ist %d", multiply(3, 5));
        return 0;
    }
 
Übung
-----
 
Definiere eine Funktion namens `factorial()`, welche die Fakultät einer Zahl durch rekursive Multiplication ausführt (5! = 5 x 4 x 3 x 2 x 1).
 
Tutorial Code
-------------

    #include <stdio.h>

    int main() {
        /* Testcode */
        printf("1! = %i\n", factorial(1));
        printf("3! = %i\n", factorial(3));
        printf("5! = %i\n", factorial(5));
    }
    
    /* definiere deine Funktion hier (vergiss nicht sie rechtzeitig zu deklarieren!) */

Erwartete Ausgabe
-----------------

    1! = 1
    3! = 6
    5! = 120

Lösung
--------

    #include <stdio.h>

    int factorial(int number);

    int main() {
        /* Testcode */
        printf("1! = %i\n", factorial(1));
        printf("3! = %i\n", factorial(3));
        printf("5! = %i\n", factorial(5));
    }

    int factorial(int number){
        int f = number;
        if(number > 1){
            f *= factorial(number-1);
        }
    return f;
    }
