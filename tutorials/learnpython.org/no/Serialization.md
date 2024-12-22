Python gir innebygde JSON-biblioteker for å kode og dekode JSON.

I Python 2.5 brukes "simplejson"-modulen, mens i Python 2.7 brukes "json"-modulen. Siden denne tolken bruker Python 2.7, vil vi bruke json.

For å bruke "json"-modulen må den først importeres:

    import json

Det finnes to grunnleggende formater for JSON-data. Enten i en streng eller som objekt-datastruktur. Objekt-datastrukturen, i Python, består av lister og ordbøker som er nestet inni hverandre. Objekt-datastrukturen lar en bruke python-metoder (for lister og ordbøker) for å legge til, liste, søke og fjerne elementer fra datastrukturen. Strengformatet brukes hovedsakelig for å sende data til et annet program eller laste inn i en datastruktur.

For å laste JSON tilbake til en datastruktur, bruk "loads"-metoden. Denne metoden tar en streng og gjør den tilbake til json objekt-datastrukturen:

    import json 
    print(json.loads(json_string))

For å kode en datastruktur til JSON, bruk "dumps"-metoden. Denne metoden tar et objekt og returnerer en streng:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python støtter en Python proprietær dataserialiseringsmetode kalt pickle (og et raskere alternativ kalt cPickle).

Du kan bruke den på nøyaktig samme måte.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Målet med denne øvelsen er å skrive ut JSON-strengen med nøkkel-verdi paret "Me" : 800 lagt til.