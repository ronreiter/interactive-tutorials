This section explains how to use basic operators in Python.

### Aritmetiske Operatorer

Ligesom i andre programmeringssprog kan additions-, subtraktions-, multiplikations- og divisionsoperatorerne bruges med tal.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Prøv at forudsige, hvad svaret vil være. Følger Python rækkefølgen af operationer?

En anden tilgængelig operator er modulo (%) operatoren, som returnerer heltalsresten af divisionen. dividende % divisor = rest.

    remainder = 11 % 3
    print(remainder)

Ved at bruge to multiplikationssymboler dannes et potensforhold.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Brug af Operatorer med Strenge

Python understøtter sammenkædning af strenge ved brug af additionsoperatoren:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python understøtter også multiplikation af strenge for at danne en streng med en gentagende sekvens:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Brug af Operatorer med Lister

Lister kan sammenføjes med additionsoperatoren:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Ligesom med strenge understøtter Python at danne nye lister med en gentagende sekvens ved brug af multiplikationsoperatoren:

    print([1,2,3] * 3)

Øvelse
--------

Målet med denne øvelse er at oprette to lister kaldet `x_list` og `y_list`, som indeholder 10 forekomster af variablerne `x` og `y`, henholdsvis. Du skal også oprette en liste kaldet `big_list`, som indeholder variablerne `x` og `y`, 10 gange hver, ved at sammenkæde de to lister, du har oprettet.