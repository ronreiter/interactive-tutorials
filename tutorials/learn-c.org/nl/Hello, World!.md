Tutorial
--------

### Introductie

De C programmeertaal is een taal voor algemeen gebruik, die kortbij relateert naar de manier machines werken.
Begrijpen hoe computergeheugen werkt is een belangrijk aspect van de C programmeertaal. Ondanks dat C als "moeilijk te leren" gevonden kan worden
, in feite is C een erg simpele taal, met heel krachtige mogelijkheden.

C is een hele gebruikelijke taal, en het is de taal van menige applicaties zoals Windows, de Python interpreter, Git, en veel veel meer.

C is een gecompileerde taal - wat wilt zeggen dat om het te kunnen gebruiken, de compiler (bijvoorbeeld, GCC of Visual Studio) de code aan moet nemen die
we geschreven hebben, dit verwerken, en dan een uitvoerbaar bestand er van maken. Dit bestand kan dan worden uitgevoerd en zal doen wat de door ons gegeven bedoeling was.

### Ons eerste programma

Elk C programma gebruikt libraries(bibliotheken), welke de mogelijkheid geven om vereiste functies uit te voeren. Bijvoorbeeld, de meest simpele functie
heet `printf`, deze print op het scherm, is gedefineerd in het `stdio.h` header(hoofding) bestand. 

To add the ability to run the `printf` command to our program, we must add the following include directive to our first line of the code:

    #include <stdio.h>

The second part of the code is the actual code which we are going to write. The first code which will run will always reside 
in the `main` function. 

    int main() {
      ... our code goes here
    }

The `int` keyword indicates that the function `main` will return an integer - a simple number. The number which will be returned
by the function indicates whether the program that we wrote worked correctly. If we want to say that our code
was run successfully, we will return the number 0. A number greater than 0 will mean that the program that we wrote failed.

For this tutorial, we will return 0 to indicate that our program was successful:

    return 0;

Notice that every line in C must end with a semicolon, so that the compiler knows that a new line has started.

Last but not least, we will need to call the function `printf` to print our sentence.

Oefening
--------

Verander het programma hier beneden zodat het "Hello, World!" als output print. 

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      printf("Goodbye, World!");
      return 0;
    }

Verwachte Output
---------------

    Hello, World!

Oplossing
--------

    #include <stdio.h>

    int main() {
      printf("Hello, World!");
      return 0;
    }
