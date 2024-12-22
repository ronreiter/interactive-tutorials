Strings är textbitar. De kan definieras som allt mellan citattecken:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Som du kan se, den första saken du lärde dig var att skriva ut en enkel mening. Den här meningen lagrades av Python som en sträng. Istället för att direkt skriva ut strängar kommer vi att utforska de olika saker du kan göra med dem. Du kan också använda enkla citattecken för att tilldela en sträng. Du kommer dock att möta problem om värdet som ska tilldelas innehåller enkla citattecken. Till exempel, för att tilldela strängen i dessa parenteser (enkla citattecken är ' ') behöver du använda dubbla citattecken bara så här

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Det skriver ut 12, eftersom "Hello world!" är 12 tecken långt, inklusive skiljetecken och mellanslag.

    astring = "Hello world!"
    print(astring.index("o"))

Det skriver ut 4, eftersom platsen för den första förekomsten av bokstaven "o" är 4 tecken bort från det första tecknet. Notera hur det faktiskt finns två o i frasen - denna metod känner bara igen den första.

Men varför skrev det inte ut 5? Är inte "o" det femte tecknet i strängen? För att göra saker enklare, Python (och de flesta andra programmeringsspråk) startar saker vid 0 istället för 1. Så indexet för "o" är 4.

    astring = "Hello world!"
    print(astring.count("l"))

För er som använder dumma typsnitt, det är en liten bokstav L, inte en etta. Detta räknar antalet L i strängen. Därför bör det skriva ut 3.

    astring = "Hello world!"
    print(astring[3:7])

Detta skriver ut en del av strängen, som börjar vid index 3 och slutar vid index 6. Men varför 6 och inte 7? Återigen gör de flesta programmeringsspråk detta - det gör det enklare att göra matematik inom dessa parenteser.

Om du bara har ett nummer i parenteserna, kommer det att ge dig det enda tecknet vid det indexet. Om du utelämnar det första numret men behåller kolon, kommer det att ge dig en skiva från början till numret du lämnade kvar. Om du utelämnar det andra numret, kommer det att ge dig en skiva från det första numret till slutet.

Du kan till och med använda negativa tal inom parenteserna. De är ett enkelt sätt att börja i slutet av strängen istället för början. På så sätt betyder -3 "3:e tecknet från slutet".

    astring = "Hello world!"
    print(astring[3:7:2])

Detta skriver ut tecknen i strängen från 3 till 7 genom att hoppa över ett tecken. Detta är utökad slice-syntax. Den allmänna formen är [start:stop:steg].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Observera att båda ger samma resultat.

Det finns ingen funktion som strrev i C för att vända en sträng. Men med den ovan nämnda typen av slice-syntax kan du enkelt vända en sträng så här

    astring = "Hello world!"
    print(astring[::-1])

Detta

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Dessa skapar en ny sträng med alla bokstäver omvandlade till versaler respektive gemener.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Detta används för att avgöra om strängen börjar med något eller slutar med något, respektive. Den första kommer att skriva ut True, eftersom strängen börjar med "Hello". Den andra kommer att skriva ut False, eftersom strängen definitivt inte slutar med "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Detta delar upp strängen i en bunt strängar grupperade tillsammans i en lista. Eftersom detta exempel delar vid ett mellanslag, kommer det första objektet i listan att vara "Hello", och den andra kommer att vara "world!".

Övning
--------

Försök att fixa koden för att skriva ut korrekt information genom att ändra strängen.