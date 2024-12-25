Strings er tekstbiter. De kan defineres som alt mellom anførselstegn:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Som du kan se, var det første du lærte å skrive ut en enkel setning. Denne setningen ble lagret av Python som en streng. I stedet for å skrive ut strenger med en gang, vil vi utforske de forskjellige tingene du kan gjøre med dem. Du kan også bruke enkle anførselstegn for å tilordne en streng. Imidlertid vil du støte på problemer hvis verdien som skal tilordnes selv inneholder enkle anførselstegn. For eksempel, for å tilordne strengen i disse parentesene (enkelte anførselstegn er ' ') må du bruke dobbelte anførselstegn, slik som dette

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Dette skriver ut 12, fordi "Hello world!" er 12 tegn langt, inkludert tegnsetting og mellomrom.

    astring = "Hello world!"
    print(astring.index("o"))

Dette skriver ut 4, fordi plasseringen av den første forekomsten av bokstaven "o" er 4 tegn unna det første tegnet. Legg merke til hvordan det faktisk er to o'er i frasen - denne metoden anerkjenner bare den første.

Men hvorfor skrev det ikke ut 5? Er ikke "o" det femte tegnet i strengen? For å gjøre ting enklere, starter Python (og de fleste andre programmeringsspråk) alt på 0 i stedet for 1. Så indeksen til "o" er 4.

    astring = "Hello world!"
    print(astring.count("l"))

For de av dere som bruker rare skrifttyper, det er en liten L, ikke tallet en. Dette teller antall l'er i strengen. Derfor bør det skrive ut 3.

    astring = "Hello world!"
    print(astring[3:7])

Dette skriver ut en del av strengen, fra indeks 3, og slutter ved indeks 6. Men hvorfor 6 og ikke 7? Nok en gang, de fleste programmeringsspråk gjør dette - det gjør matematikk inne i de klammene enklere.

Hvis du bare har ett nummer i klammene, vil det gi deg det enkelttegnet ved den indeksen. Hvis du utelater det første nummeret, men holder kolonet, vil det gi deg en del fra starten til nummeret du lot stå igjen. Hvis du utelater det andre nummeret, vil det gi deg en del fra første nummer til slutten.

Du kan til og med sette negative tall i klammene. De er en enkel måte å begynne på slutten av strengen i stedet for begynnelsen. På denne måten betyr -3 "3. tegn fra slutten".

    astring = "Hello world!"
    print(astring[3:7:2])

Dette skriver ut tegnene i strengen fra 3 til 7, og hopper over ett tegn. Dette er utvidet slice-syntaks. Den generelle formen er [start:stopp:steg].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Merk at begge av dem gir samme utgang

Det finnes ikke en funksjon som strrev i C for å reversere en streng. Men med den type slice-syntaks som nevnt ovenfor kan du enkelt reversere en streng som denne

    astring = "Hello world!"
    print(astring[::-1])

Dette

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Disse lager en ny streng med alle bokstaver konvertert til henholdsvis store og små bokstaver.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Dette brukes for å bestemme om strengen starter eller slutter med noe, henholdsvis. Den første vil skrive ut True, da strengen starter med "Hello". Den andre vil skrive ut False, da strengen absolutt ikke slutter med "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Dette deler strengen inn i en haug med strenger gruppert sammen i en liste. Siden dette eksempelet deler ved et mellomrom, vil det første elementet i listen være "Hello", og det andre vil være "world!".

Exercise
--------

Forsøk å fikse koden for å skrive ut korrekt informasjon ved å endre strengen.