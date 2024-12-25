Dette avsnittet forklarer hvordan man bruker grunnleggende operatorer i Python.

### Aritmetiske Operatører       

Akkurat som i andre programmeringsspråk, kan tillegg, subtraksjon, multiplikasjon og divisjonsoperatorer brukes med tall.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Forsøk å forutsi hva svaret vil være. Følger Python operasjonsrekkefølge?

En annen tilgjengelig operator er modulo (%) operatoren, som returnerer heltallsresten av divisjonen. dividende % divisor = rest.

    remainder = 11 % 3
    print(remainder)

Bruk av to multiplikasjonssymboler gjør et potensforhold.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Bruke Operatører med Strenger

Python støtter sammenkjedede strenger ved hjelp av tilleggsoperatoren:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python støtter også multiplikasjon av strenger for å danne en streng med en gjentatt sekvens:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Bruke Operatører med Lister

Lister kan kobles sammen med tilleggsoperatorer:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Akkurat som i strenger, støtter Python dannelsen av nye lister med en gjentatt sekvens ved hjelp av multiplikasjonsoperatoren:

    print([1,2,3] * 3)

Øvelse
--------

Målet med denne øvelsen er å lage to lister kalt `x_list` og `y_list`, som inneholder 10 forekomster av variablene `x` og `y`, henholdsvis. Du er også pålagt å lage en liste kalt `big_list`, som inneholder variablene `x` og `y`, 10 ganger hver, ved å sammenkoble de to listene du har opprettet.