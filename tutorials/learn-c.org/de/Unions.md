Tutorial
--------
C Unions sind im Grunde dasselbe wie C Strukturen (structs), abgesehen davon, dass sie anstatt mehrere Variablen, die ihren eigenen Speicher besitzen, besitzen Unions die Eigenschaft mehrere Namen für die selbe Variable zu verwenden. Über diese Namen kann der Speicher als unterschiedliche Datentypen interpretiert werden (und die Größe der Union ist die des größten verwendeten typen + Puffer den ihm der Compiler eventuell mit gibt)
Also wenn Sie in der Lage sein wollen Speicher in unterschiedlichen Wegen zu interpretieren, zum Beispiel einen integer Byte für Byte zu lesen hätte man so etwas wie das:

	union intParts 
	{
    		int theInt;
    		char bytes[sizeof(int)];
	}

Man hat die Möglichkeit sich jedes Byte individuell anzusehen ohne einen Pointer zu setzen oder Pointer Arithmetik zu nutzen:

	union intParts 
	{
		int theInt;
		char bytes[sizeof(int)];
	}parts;
	parts.theInt = 5968145; // arbitrary number > 255 (1 byte)

	printf("Der Integer betraegt: %i\n Die Bytes sind: [%i, %i, %i, %i]\n",
	parts.theInt, parts.bytes[0], parts.bytes[1], parts.bytes[2], parts.bytes[3]);


	// vs


	int theInt = parts.theInt;
	printf("Der Integer betraegt: %i\n Die Bytes sind: [%i, %i, %i, %i]\n",
	theInt, *((char*)&theInt+0), *((char*)&theInt+1), *((char*)&theInt+2), *((char*)&theInt+3));

	// oder mit der Array Syntax die etwas leichter zu lesen ist

	printf("Der Integer betraegt: %i\n Die Bytes sind: [%i, %i, %i, %i]\n",
    	theInt, ((char*)&theInt)[0], ((char*)&theInt)[1], ((char*)&theInt)[2], ((char*)&theInt)[3]);
	
Kombiniert mit einer structure kann man einen "Markierten" Union deklarieren welcher mehrere verschiedene Typen speichern kann.
Zum Beispiel man hat ein "number" struct, aber man möchte etwas haben in etwa so:

	struct operator 
	{
		int intNum;
		float floatNum;
		int type;
		double doubleNum;
	};
	
Da das Programm viele davon hat und es ein bisschen zu viel Speicher belegt für alle Variablen, kann man so etwas benutzen:

	struct operator 
	{
		int type;
		union 
		{
			int intNum;
			float floatNum;
			double doubleNum;
		} types;
	};
	
Dadurch ist die Größe des structs nur die Größe des int type + die Größe des größten Typs im Union (double). Kein großer gewinn, nur 8 oder 16 Bytes, aber das Konzept kann auf ähnliche structs angewendet werden.
Benutze:

	operator op;
	op.type = 0; //int, wahrscheinlich besser als enum oder macro constant
	op.types.intNum = 352;
	
Wenn man dem union keinen Namen gibt, dann werden seine Member direkt über den struct aufgerufen:

	struct operator 
	{
		int type;
		union 
		{
			int intNum;
			float floatNum;
			double doubleNum;
		}; //kein name!
	};

	operator op;
	op.type = 0; //int
	//intNum ist teil der union, aber weil der union keinen Namen hat greift man direkt ueber den struct selbst zu
	op.intNum = 352;
	
Ein anderes, vielleicht nützliches feature, ist wenn man immer mehrere Variablen desselben Typen hat und man möchte beide Namen benutzen (für Lesbarkeit) und Indexe (für Einfachheit der Iteration), in diesem Fall kann man das benutzen:

	union Coins 
	{
		struct 
		{
			int quarter;
			int dime;
			int nickel;
			int penny;
		}; //anonyme struct funktioniert wie ein anonymes union, Member sind im äußeren Container
		int coins[4];
	};
	
In diesem Beispiel sieht man einen struct mit den 4 (häufigsten) Münzen der Vereinigten Staaten. Da der union die Variablen veranlasst sich den Speicher zu teilen, passt das coins Array zu jedem int des structs:

	union Coins change;
	for(int i = 0; i < sizeof(change) / sizeof(int); i++) 
	{
    	scanf("%i", change.coins + i); //BAD Code! input is always suspect!
	}
	printf("Es sind %i quarters, %i dimes, %i nickels, %i pennies\n",
    	change.quarter, change.dime, change.nickel, change.penny);
	
Übung

Erstelle ein Union die ein Array von 21 Zeichen enthält und 6 ints (6 da 21 / 4 == 5, aber 5 * 4 = 20 also brauchen wir für diese Übung 1 mehr), die integers werden auf 6 vorgegebene Werte gesetzt und dann gib das Zeichenarray sowohl als Serie von Zeichen, als auch als String aus.

Tutorial Code

	#include <stdio.h>

	/*union hier*/

	int main() 
	{

		//initialisierungs listen sind dem ersten Glied des unions/structs zugeordnet!
		//Hier sind 6 ints also...
		
    	<union decklaration> intCharacters = {{1853169737, 1936876900, 1684955508, 1768838432, 561213039, 0}};

    	/* test code */
	
    	printf("[");
    	//nur bist 18 gehen, da 1byte für die 0 terminierung und wir wollen diese nicht ausgeben
		for(int i = 0; i < 19; i++) 
			printf("%c, ", intCharacters.chars[i]);

    	printf("%i]\n", intCharacters.chars[19]);

    	printf("%s\n", intCharacters.chars);
	}
	
Erwartete Ausgabe

	[I, , u, n, d, e, r, s, t, a, n, d, , U, n, i, o, n, s, !]
	I understand Unions!
	
Lösung

	#include <stdio.h>

	union hiddenMessage 
	{
    	int ints[6];
    	char chars[21];
	};

	int main() 
	{

    	//initialisierungs listen sind dem ersten Glied des unions/structs zugeordnet!
    	//Hier sind 6 ints also...
   	union hiddenMessage intCharacters = {{1853169737, 1936876900, 1684955508, 1768838432, 561213039, 0}};

    	/* test code */
    	printf("[");
    		//nur bist 18 gehen, da 1byte für die 0 terminierung und wir wollen diese nicht ausgeben
    	for(int i = 0; i < 19; i++) 
        	printf("%c, ", intCharacters.chars[i]);
    	printf("%i]\n", intCharacters.chars[19]);

    	printf("%s\n", intCharacters.chars);
	}
