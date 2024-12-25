Een woordenboek is een gegevenstype vergelijkbaar met arrays, maar werkt met sleutels en waarden in plaats van indexen. Elke waarde opgeslagen in een woordenboek kan worden benaderd met behulp van een sleutel, die elk type object kan zijn (een string, een nummer, een lijst, enz.) in plaats van het gebruiken van zijn index om het aan te spreken.

Een database van telefoonnummers kan bijvoorbeeld worden opgeslagen met behulp van een woordenboek zoals dit:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Als alternatief kan een woordenboek worden geïnitialiseerd met dezelfde waarden in de volgende notatie:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Itereren over woordenboeken

Woordenboeken kunnen worden geïtereerd, net als een lijst. Een woordenboek, in tegenstelling tot een lijst, behoudt echter niet de volgorde van de waarden die erin zijn opgeslagen. Om over sleutel-waardeparen te itereren, gebruik je de volgende syntax:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Een waarde verwijderen

Om een specifieke index te verwijderen, gebruik je een van de volgende notaties:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

of:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


Oefening
--------

Voeg "Jake" toe aan het telefoonboek met het telefoonnummer 938273443 en verwijder Jill uit het telefoonboek.