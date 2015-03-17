Tutorial
--------

Erinnerst du dich an Zeiger? Früher haben wir zu einem Array voller char's gezeigt und dann einen String aus ihnen gemacht.
Dann ist es ein bisschen interessanter geworden, als wir gelernt haben diese Zeiger zu kontrollieren.
Jetzt ist es an der Zeit etwas noch interessanteres mit Zeigern zu machen, indem wir mit ihnen auf Funktionen zeigen und diese dann aufrufen.

### Warum zu einer Funktion zeigen?

Fie erste Frage, die dir vielleicht in den Sinn kommt ist, warum wir Zeiger zum Aufrufen von Funktionen benutzen sollten, wenn wir die Funktion einfach beim Namen nennen und so aufrufen können (`function();`)? Das ist eine tolle Frage! Jetzt stell dir eine `sort` Funktion vor, die einen Array sortieren soll. Manchmal möchte man die Elemente eines Arrays in aufsteigender Ordnung, manchmal in absteigender Ordnung sortieren. Wie soll man das unterscheiden? Funktionszeiger! 


### Funktionszeiger Syntax

    void (*pf)(int);

Ich stimme dir zu. Das sieht definitiv sehr kompliziert aus, könnte man zumindest denken. Sehen wir uns den Code noch einmal an und versuchen ihn Stück für Stück zu verstehen. `*pf` ist der Zeiger zu einer Funktion. `void` ist der Typ des Rückgabewerts der Funktion und schließlich `int` ist der Typ des Arguments der Funktion. Soweit verstanden? Gut.

Versuchen wir Zeiger in den Funktionszeiger einzufügen und es noch einmal lesen:

    char* (*pf)(int*)

Nochmal:
1. `*pf` ist der Funktionszeiger.
2. `char*` ist der Typ des Rückgabewerts der Funktion.
3. `int*` ist der Typ des Arguments der Funktion.

Ok, genug mit der Theorie. Jetzt machen wir unsere Hände mit echtem Code schmutzig.
Sieh dir dieses Beispiel an:

    #include <stdio.h>
    void someFunction(int arg)
    {
		printf("Das ist someFunction, aufgerufen mit dem Argument arg: %d\n", arg);
		printf("Whoops, wir verlassen die Funktion jetzt.\n");
    }

    main()
    {
		void (*pf)(int);
		pf = &someFunction;
		printf("Wir rufen jetzt someFunction() mit einem Zeiger auf!\n");
		(pf)(5);
		printf("Wow das war cool. Zurück zur main Funktion!\n\n");
    }

Erinnerst du dich an `sort()` von vorhin? Damit können wir dasselbe machen.
Anstatt eine Menge aufsteigend zu ordnen, können wir das Gegenteil mit unserer eigenen Vergleichsfunktion folgendermaßen erreichen:

    #include <stdio.h>
	#include <stdlib.h> //for qsort()

    int compare(const void* left, const void* right)
    {
		return (*(int*)right - *(int*)left);
		// geh zurück zur Referenz, falls das zu kompliziert wirkt: http://www.cplusplus.com/reference/cstdlib/qsort/
    }
    main()
    {
		int (*cmp) (const void* , const void*);
		cmp = &compare;

		int iarray[] = {1,2,3,4,5,6,7,8,9};
		qsort(iarray, sizeof(iarray)/sizeof(*iarray), sizeof(*iarray), cmp);

		int c = 0;
		while (c < sizeof(iarray)/sizeof(*iarray))
		{
			printf("%d \t", iarray[c]);
			c++;
		}
    }

Erinnern wir uns noch einmal daran: Warum benutzen wir Funktionszeiger?
1. Um den Programmierern das benutzen von Bibliotheken für verschiedene Verwendungen zu ermöglichen -> "Flexibilität"


Übung
-----
Vervollständige den Array von Funktionszeigern und rufe jede Funktion mit dessen Zeiger im Array auf. Ein Array voller Funktionszeiger? Ja, das geht!

Tutorial Code
-------------

    #include <stdio.h>

    void f1(int var)
    {
            printf("Das ist f1 und var ist: %d\n", var);
    }

    void f2(int var)
    {
            printf("Das ist f2 und var ist: %d\n", var);
    }

    void f3(int var)
    {
            printf("Das ist f3 und var ist: %d\n", var);
    }

    int main()
    {
                /* Definiere hier einen Array voller Funktionszeiger
                die eine Ganzzahl (int) als Argument nehmen */


		int c = 0;
		while(c < 3)
		{
                        /* Rufe hier die Funktion des obigen Arrays
                        mit c als Index des Arrays und als Argument der
                        Funktion auf */

			++c;
		}

	  return 0;
    }


Erwartete Ausgabe
-----------------

    Das ist f1 und var ist: 0
    Das ist f2 und var ist: 1
    Das ist f3 und var ist: 2

Lösung
------

    #include <stdio.h>

    void f1(int var)
    {
            printf("Das ist f1 und var ist: %d\n", var);
    }

    void f2(int var)
    {
            printf("Das ist f2 und var ist: %d\n", var);
    }

    void f3(int var)
    {
            printf("Das ist f3 und var ist: %d\n", var);
    }

    int main()
    {
		void (*pf[])(int) = {f1, f2, f3};

		int c = 0;
		while(c < 3)
		{
			pf[c](c);
			++c;
		}

		return 0;
    }
