Tutorial
--------

Wir haben bereits gelernt, was ein Zeiger ist und wie man mit ihnen umgeht. In diesem Tutorial werden wir über arithmetische Operationen Operationen
an Zeigern lernen. Diese Operationen sind: ++, --, -, +

### Einen Zeiger mit ++ inkrementieren

Der ++ Operator erhöht den Wert einer Variable. In diesem Fall ist unsere Variable ein Zeiger, was bedeutet, dass wir die Adresse im Speicher, auf die der Zeiger verweist, erhöhen.
In diesem Beispiel kombinieren wir diese Operation mit einem Array:

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] hat den Wert %d - und Adresse @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[3]; // zeige zum 4ten Element des Arrays
	    printf("Adresse: %x - hat den Wert %d\n", intpointer, *intpointer); // gib die Adresse des 4ten Elements aus
	    
	    intpointer++; // jetzt erhoehe die Adresse des Zeigers, sodass er auf das 5te Element zeigt
	    printf("Adresse: %x - hat den Wert %d\n", intpointer, *intpointer); // gib die Adresse des 5ten Elements aus
	    
	    return 0;
	}


### Einen Zeiger mit -- verringern

Wie in dem vorherigen Beispiel, in dem wir die Adresse des Zeigers mit ++ erhöht haben, können wir sie mit dem -- Operator verringern.

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] hat den Wert %d - und die Adresse @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[4]; // zeige zum 5ten Element des Arrays
	    printf("Adresse: %x - hat den Wert %d\n", intpointer, *intpointer); // gib die Adresse des 5ten Elements aus
	    
	    intpointer--; // jetzt verringere die Adresse des Zeigers, sodass er auf das 4te Element zeigt
	    printf("Adresse: %x - hat den Wert %d\n", intpointer, *intpointer); // gib die Adresse des 4ten Elements aus
	    
	    return 0;
	}

### Zeiger addieren mit +
Zuvor haben wir die Adresse eines Zeigers um 1 erhöht. Wir können ihn aber auch um eine beliebige Ganzzahl erhöhen:

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] hat den Wert %d - und die Adresse @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[1]; // zeige zum 2ten Element des Arrays
	    printf("Adresse: %x - hat den Wert %d\n", intpointer, *intpointer); // gib die Adresse des 2ten Elements aus
	    
	    intpointer += 2; // jetzt verschieben wir die Adresse des Zeigers um 2 Stellen, sodass er zum 4ten Element zeigt
	    printf("Adresse: %x - hat den Wert %d\n", intpointer, *intpointer); // gib die Adresse des 4ten Elements aus
	    
	    return 0;
	}

Beachte, das die Ausgabe der Adressen um 8 Schritte im Speicher verschoben wurde. Du fragst dich vielleicht warum.
Die Antwort ist einfach: Unser Zeiger ist ein Ganzzahl(integer)-Zeiger. Die Größe einer Ganzzahl im Speicher ist 4 Bytes 
und wird mit jedem Mal um jeweils 4 Bytes verschoben.
In unserem Code verschieben wir die Adresse des Zeigers um 2, sodass die neue Adresse um 2 x 4 Bytes = 8 von der Ausgangsadresse abweicht.

### Zeiger subtrahieren mit -

Auf ähnliche Weise können wir subtrahieren:

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] hat den Wert %d - und die Adresse @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[4]; // zeige zum 5ten Element im Array
	    printf("Adresse: %x - hat den Wert %d\n", intpointer, *intpointer); // gib die Adresse des 5ten Elements aus
	    
	    intpointer -= 2; // jetzt verschieben wir die Adresse des Zeigers um 2 Stellen, sodass es zum 3ten Element zeigt
	    printf("Adresse: %x - hat den Wert %d\n", intpointer, *intpointer); // gib die Adresse des 3ten Elements aus
	    
	    return 0;
	}
Auch hier wurde die Adresse um 4 Byte Blöcke verschoben (bei Ganzzahlzeigern )

### Andere Operationen
Es gibt noch mehr Operationen, zum Beispiel die Vergleiche >, <, ==. Die Idee ist ähnlich wie beim Vergleichen von Variablen, allerdings werden hier die Speicheradressen verglichen.

Übung
-----
Erstelle einen Zeiger, der in die Mitte des `intArray` zeigt und gib die Adresse jedes Elements aus, angefangen von der Mitte.

Tutorial Code
-------------
	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    //-----------------------^
	    int *pointer = &intarray[2];
	    
	    /* hier deinen Code einfuegen */
	    return 0;
	}


Erwartete Ausgabe
-----------------
	304050
	
Lösung
------
	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    //-----------------------^                   
	    int *pointer = &intarray[2];
	    
	    while (pointer < &intarray[5])
	    {
	        printf("%d", *pointer);
	        pointer++;
	    }
	    return 0;
	}
