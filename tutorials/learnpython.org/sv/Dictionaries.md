En ordbok är en datatyp som liknar arrayer, men fungerar med nycklar och värden istället för index. Varje värde som lagras i en ordbok kan nås med en nyckel, som kan vara vilken typ av objekt som helst (en sträng, ett nummer, en lista, etc.) istället för att använda dess index för att adressera den.

Till exempel, en databas av telefonnummer kan lagras med en ordbok så här:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternativt kan en ordbok initieras med samma värden i följande notation:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterera över ordböcker

Ordböcker kan itereras över, precis som en lista. Men en ordbok, till skillnad från en lista, behåller inte ordningen på de värden som lagras i den. För att iterera över nyckel-värde-par, använd följande syntax:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Ta bort ett värde

För att ta bort ett specificerat index, använd någon av följande notationer:
    
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


Exercise
--------

Lägg till "Jake" i telefonboken med telefonnumret 938273443 och ta bort Jill från telefonboken.