Indhold:

Strenge er stykker tekst. De kan defineres som alt mellem anførselstegn:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Som du kan se, var det første, du lærte, at udskrive en simpel sætning. Denne sætning blev gemt af Python som en streng. I stedet for at udskrive strenge med det samme, vil vi udforske de forskellige ting, du kan gøre med dem. Du kan også bruge enkle anførselstegn til at tildele en streng. Dog vil du støde på problemer, hvis den værdi, der skal tildeles, selv indeholder enkle anførselstegn. For eksempel, for at tildele strengen i disse parenteser (enkle anførselstegn er ' ') skal du kun bruge dobbelte anførselstegn som dette

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Det udskriver 12, fordi "Hello world!" er 12 tegn langt, inklusiv tegnsætning og mellemrum.

    astring = "Hello world!"
    print(astring.index("o"))

Det udskriver 4, fordi placeringen af den første forekomst af bogstavet "o" er 4 tegn væk fra det første tegn. Bemærk hvordan der faktisk er to "o" i sætningen - denne metode genkender kun det første.

Men hvorfor udskrev det ikke 5? Er "o" ikke det femte tegn i strengen? For at gøre tingene mere simple starter Python (og de fleste andre programmeringssprog) ting ved 0 i stedet for 1. Så indekset for "o" er 4.

    astring = "Hello world!"
    print(astring.count("l"))

For dem af jer, der bruger fjollede skrifttyper, det er et lille "L", ikke et tal. Dette tæller antallet af "l" i strengen. Derfor burde det udskrive 3.

    astring = "Hello world!"
    print(astring[3:7])

Dette udskriver et udsnit af strengen, der starter ved indeks 3 og slutter ved indeks 6. Men hvorfor 6 og ikke 7? Igen, de fleste programmeringssprog gør dette - det gør matematik inde i de parenteser lettere.

Hvis du kun har et tal i parenteserne, vil det give dig det enkelte tegn ved det indeks. Hvis du udelader det første tal, men beholder kolon, vil det give dig et udsnit fra start til det tal, du efterlod. Hvis du udelader det andet tal, vil det give dig et udsnit fra det første tal til slutningen.

Du kan endda indsætte negative tal i parenteserne. De er en nem måde at starte fra enden af strengen i stedet for begyndelsen. På denne måde betyder -3 "3. karakter fra slutningen".

    astring = "Hello world!"
    print(astring[3:7:2])

Dette udskriver tegnene i strengen fra 3 til 7 springende over et tegn. Dette er udvidet skive syntaks. Den generelle form er [start:stop:step].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Bemærk, at begge af dem producerer samme output

Der er ingen funktion som strrev i C til at vende en streng. Men med den ovennævnte type skive syntaks kan du nemt vende en streng sådan her

    astring = "Hello world!"
    print(astring[::-1])

Denne

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Disse laver en ny streng med alle bogstaver konverteret til henholdsvis store og små bogstaver.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Dette bruges til at afgøre, om strengen starter med noget eller slutter med noget, henholdsvis. Den første vil udskrive True, da strengen starter med "Hello". Den anden vil udskrive False, da strengen bestemt ikke slutter med "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Dette deler strengen op i en række strenge grupperet sammen i en liste. Da dette eksempel deler ved et mellemrum, vil det første element i listen være "Hello", og det andet vil være "world!".

Øvelse
--------

Prøv at rette koden for at udskrive den korrekte information ved at ændre strengen.