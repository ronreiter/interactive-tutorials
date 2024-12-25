# Python har indbyggede JSON-biblioteker til at kode og dekode JSON.

I Python 2.5 anvendes simplejson modulet, mens i Python 2.7 anvendes json modulet. Da denne fortolker bruger Python 2.7, vil vi bruge json.

For at bruge json modulet skal det først importeres:

    import json

Der er to grundlæggende formater for JSON data. Enten i en streng eller objektets datastruktur. Objektets datastruktur i Python består af lister og ordbøger, der er indlejret i hinanden. Objektets datastruktur giver mulighed for at bruge python-metoder (for lister og ordbøger) til at tilføje, liste, søge og fjerne elementer fra datastrukturen. Strengformatet bruges hovedsageligt til at overføre dataene til et andet program eller indlæse dem i en datastruktur.

For at indlæse JSON tilbage til en datastruktur anvendes "loads" metoden. Denne metode tager en streng og omdanner den tilbage til json objektets datastruktur:

    import json 
    print(json.loads(json_string))

For at kode en datastruktur til JSON anvendes "dumps" metoden. Denne metode tager et objekt og returnerer en streng:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python understøtter en Python-ejet dataserialiseringsmetode kaldet pickle (og en hurtigere alternativ kaldet cPickle).

Du kan bruge det præcis på samme måde.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Formålet med denne øvelse er at udskrive JSON-strengen med nøgle-værdi parret "Me" : 800 tilføjet til den.