Strings zijn stukjes tekst. Ze kunnen worden gedefinieerd als alles tussen aanhalingstekens:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Zoals je kunt zien, was het eerste dat je leerde het afdrukken van een eenvoudige zin. Deze zin werd door Python opgeslagen als een string. In plaats van meteen strings af te drukken, zullen we de verschillende dingen verkennen die je ermee kunt doen. Je kunt ook enkele aanhalingstekens gebruiken om een string toe te wijzen. Je zult echter problemen tegenkomen als de waarde die moet worden toegewezen zelf enkele aanhalingstekens bevat. Om bijvoorbeeld de string binnen deze haakjes (enkele aanhalingstekens zijn ' ') toe te wijzen, moet je alleen dubbele aanhalingstekens gebruiken, zoals dit:

    astring = "Hello world!"
    print("enkele aanhalingstekens zijn ' '")

    print(len(astring))

Dat drukt 12 af, omdat "Hello world!" 12 tekens lang is, inclusief leestekens en spaties.

    astring = "Hello world!"
    print(astring.index("o"))

Dat drukt 4 af, omdat de locatie van de eerste keer dat de letter "o" voorkomt 4 tekens verwijderd is van het eerste teken. Merk op hoe er eigenlijk twee o's in de zin zitten - deze methode herkent alleen de eerste.

Maar waarom wordt er geen 5 afgedrukt? Is "o" niet het vijfde teken in de string? Om het eenvoudiger te maken, begint Python (en de meeste andere programmeertalen) dingen bij 0 in plaats van bij 1. Dus de index van "o" is 4.

    astring = "Hello world!"
    print(astring.count("l"))

Voor degenen onder jullie die grappige lettertypen gebruiken, dat is een kleine letter L, geen cijfer één. Dit telt het aantal l's in de string. Daarom zou het 3 moeten afdrukken.

    astring = "Hello world!"
    print(astring[3:7])

Dit print een uitsnede van de string, beginnend bij index 3 en eindigend bij index 6. Maar waarom 6 en niet 7? Nogmaals, de meeste programmeertalen doen dit - het maakt het gemakkelijker om berekeningen binnen die haakjes te doen.

Als je slechts één getal in de haakjes hebt, krijg je het enkele teken op die index. Als je het eerste getal weglaat maar de dubbele punt behoudt, krijg je een uitsnede van het begin tot het getal dat je inzette. Als je het tweede getal weglaat, krijg je een uitsnede van het eerste getal tot het einde.

Je kunt zelfs negatieve getallen in de haakjes zetten. Ze zijn een gemakkelijke manier om vanaf het einde van de string te beginnen in plaats van het begin. Op deze manier betekent -3 "3e teken vanaf het einde".

    astring = "Hello world!"
    print(astring[3:7:2])

Dit drukt de tekens van de string van 3 tot 7 af waarbij één teken wordt overgeslagen. Dit is uitgebreide uitsnedesyntaxis. De algemene vorm is [start:stop:stap].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Merk op dat beide hetzelfde resultaat produceren.

Er is geen functie zoals strrev in C om een string om te keren. Maar met de bovengenoemde soort uitsnedesyntaxis kun je gemakkelijk een string omkeren zoals dit:

    astring = "Hello world!"
    print(astring[::-1])

Dit

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Dit maken een nieuwe string met alle letters omgezet naar respectievelijk hoofdletters en kleine letters.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Dit wordt gebruikt om te bepalen of de string ergens mee begint of eindigt, respectievelijk. De eerste zal True afdrukken, omdat de string begint met "Hello". De tweede zal False afdrukken, omdat de string zeker niet eindigt met "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Dit splitst de string in een aantal strings die samen gegroepeerd zijn in een lijst. Aangezien dit voorbeeld splitst bij een spatie, zal het eerste item in de lijst "Hello" zijn, en het tweede "world!".

Exercise
--------

Probeer de code te corrigeren om de juiste informatie af te drukken door de string te veranderen.