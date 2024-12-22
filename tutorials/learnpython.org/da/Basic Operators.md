Dette afsnit forklarer, hvordan man bruger grundlæggende operatorer i Python.

### Arithmetic Operators       

Ligesom i andre programmeringssprog kan additions-, subtraktions-, multiplikations- og divisionsoperatorerne bruges med tal.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Prøv at forudsige, hvad svaret vil være. Følger Python regneoperationernes rækkefølge?

En anden tilgængelig operator er modulo (%) operatoren, som returnerer heltalsresten af divisionen. Dividend % divisor = rest.

    remainder = 11 % 3
    print(remainder)

Brug af to multiplikationssymboler skaber en potensrelation.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Brug af operatorer med strenge

Python understøtter sammenkædning af strenge ved hjælp af additionsoperatoren:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python understøtter også multiplikation af strenge for at danne en streng med en gentaget sekvens:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Brug af operatorer med lister

Lister kan sammenføjes med additionsoperatorerne:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Ligesom med strenge understøtter Python også at danne nye lister med en gentagen sekvens ved hjælp af multiplikationsoperatoren:

    print([1,2,3] * 3)

Øvelse
--------

Målet med denne øvelse er at skabe to lister kaldet `x_list` og `y_list`,
som indeholder 10 forekomster af variablerne `x` og `y`, henholdsvis.
Du skal også oprette en liste kaldet `big_list`, som indeholder
variablerne `x` og `y`, hver 10 gange, ved at sammenkæde de to lister, du har oprettet.