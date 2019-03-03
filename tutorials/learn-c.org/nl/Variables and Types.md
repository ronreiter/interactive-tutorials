Tutorial
--------

### Data types (Soorten Gegevens)

C heeft meerdere types variabelen, maar hier zijn een paar basis types:

* Integers - gehele getallen die zowel positief als negatief kunnen zijn. Gedefinieerd met `char`, `int`, `short`, `long` of `long long`.
* Unsigned integers - gehele getallen die enkel positief kunnen zijn. Gedefinieerd met `unsigned char`, `unsigned int`, `unsigned short`, `unsigned long` of `unsigned long long`.
* Floating point numbers - reële getallen(getallen met breuken). Gedefinieerd met `float` en `double`.
* Structures - hier komen we later op terug in de Structures sectie.

The different types of variables define their bounds. A `char` can range only from -128 to 127, whereas a `long` can range from -2,147,483,648 to 2,147,483,647 (`long` and other numeric data types may have another range on different computers, for example - from –9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 on 64-bit computer).

Merk hier op dat C _geen_ boolean type bezit. Meestal, wordt het gedefineerd op deze manier:

    #define BOOL char
    #define FALSE 0
    #define TRUE 1

C gebruikt arrays van characters om strings te definiëren, en zal worden uitgelegd in de Strings sectie.

### Variabelen definiëren

Voor getallen, zullen we meestal het type `int` gebruiken, welke een geheel getal in de grootte van een "woord" de standaard getalgrootte is van de machine waar het programma op gecompileerd wordt. Op de meeste computers vandaag de dag, is het een 32-bit getal, wat betekent dat het een bereik heeft van -2,147,483,648 tot 2,147,483,647.

Om variabelen `foo` en `bar` te definiëren , moeten we gebruik maken van deze syntax:

    int foo;
    int bar = 1;

De variabele `foo` kan gebruikt worden, maar omdat we het niet geinitializeerd hebben, weten we niet wat er in zit. De variabele `bar` bevat het getal 1.

Nu kunnen we wat wiskunde doen. Aangenomen dat `a`, `b`, `c`, `d`, en `e` variabelen zijn, kunnen we simpelweg gebruik maken van plus, min en vermenigvuldigings operatoren in de volgende notatie, en een nieuwe waarde toewijzen aan `a`:

    int a = 0,b = 1,c = 2,d = 3, e = 4;
    a = b - c + d * e;
    printf("%d", a); /* will print 1-2+3*4 = 11 */

Oefening
--------

In de volgende oefening zal u een programma moeten maken dat de som van de getallen `a`, `b`, en `c` print.

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      float sum;

      /* Your code goes here */

      printf("The sum of a, b, and c is %f.", sum);
      return 0;
    }

Verwachte Output
---------------
    The sum of a, b, and c is 12.750000.

Oplossing
--------
    #include <stdio.h>

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      float sum;
      
      sum = a + b + c;

      printf("The sum of a, b, and c is %f.", sum);
      return 0;
    }
