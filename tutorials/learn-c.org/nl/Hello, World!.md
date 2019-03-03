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
heet `printf`, deze print op het scherm, is gedefineerd in het `stdio.h` header (hoofding) bestand. 

Om de mogelijkheid om het `printf` commando te gebruiken aan ons programma toe te voegen, moeten we het volgende toevoegen 'include directive' in onze eerste lijn code:

    #include <stdio.h>

Het tweede deel van de code is de feitelijke code die we gaan schrijven. De eerste code die zal 'runnen', zal altijd deze code bevatten in de `main` functie. 

    int main() {
      ... our code goes here
    }

Het `int` sleutelwoord geeft aan dat de functie `main` een geheel getal zal teruggeven - een simpel getal. Het getal dat zal worden teruggegeven  door de functie geeft aan of het programma dat we schreven wel of niet correct werkte.
Als we willen zeggen dat onze code succesvol heeft gedraaid, geven we het getal 0 terug. Een getal groter dan 0 zal betekenen dat het programma dat we schreven faalde.

Voor deze tutorial, gebruiken we 'return 0' om aan te geven dat ons programma succesvol was:

    return 0;

Merk op dat elke lijn in C met een semicolon moet eindigen, zodat de compiler weet dat een nieuwe lijn is begonnen.

En als laatste, gaan de we de functie `printf` oproepen zodat we onze zin kunnen printen.

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
