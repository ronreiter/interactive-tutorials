Python tillhandahåller inbyggda JSON-bibliotek för att kodifiera och avkodifiera JSON.

I Python 2.5 används modulen simplejson, medan i Python 2.7 används modulen json. Eftersom denna tolk använder Python 2.7, kommer vi att använda json.

För att använda json-modulen måste den först importeras:

    import json

Det finns två grundläggande format för JSON-data. Antingen i en sträng eller objektets datastruktur. Objektets datastruktur, i Python, består av listor och ordböcker inbäddade i varandra. Objektets datastruktur tillåter en att använda python-metoder (för listor och ordböcker) för att lägga till, lista, söka och ta bort element från datastrukturen. Strängformatet används främst för att överföra data till ett annat program eller laddas in i en datastruktur.

För att ladda JSON tillbaka till en datastruktur, använd "loads"-metoden. Denna metod tar en sträng och omvandlar den tillbaka till json objektets datastruktur:

    import json 
    print(json.loads(json_string))

För att kodifiera en datastruktur till JSON, använd "dumps"-metoden. Denna metod tar ett objekt och returnerar en Sträng:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python stöder en egen dataserialiseringsmetod kallad pickle (och ett snabbare alternativ kallat cPickle).

Du kan använda den på exakt samma sätt.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Målet med denna övning är att skriva ut JSON-strängen med nyckel-värde-paret "Me" : 800 lagt till den.