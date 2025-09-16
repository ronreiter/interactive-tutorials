En ordbog er en datatype, der ligner arrays, men fungerer med nøgler og værdier i stedet for indekser. Hver værdi, der er gemt i en ordbog, kan tilgås ved hjælp af en nøgle, der kan være enhver type objekt (en streng, et tal, en liste, etc.) i stedet for at bruge dens indeks til at adressere den.

For eksempel, en database med telefonnumre kunne gemmes ved hjælp af en ordbog som denne:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternativt kan en ordbog initialiseres med de samme værdier i følgende notation:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterere over ordbøger

Ordbøger kan itereres over, ligesom en liste. Men en ordbog, i modsætning til en liste, beholder ikke rækkefølgen af de lagrede værdier. For at iterere over nøgle-værdi par, brug følgende syntaks:

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Fjerne en værdi

For at fjerne et specificeret indeks, brug en af følgende notations:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

eller:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


Øvelse
--------

Tilføj "Jake" til telefonbogen med telefonnummeret 938273443, og fjern Jill fra telefonbogen.