A dictionary je datový typ podobný poli, ale pracuje s klíči a hodnotami namísto indexů. Každá hodnota uložená ve slovníku může být přístupná pomocí klíče, který může být jakýkoliv typ objektu (řetězec, číslo, seznam, atd.) místo použití indexu k adrese.

Například, databáze telefonních čísel může být uložena pomocí slovníku takto:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternativně, slovník může být inicializován se stejnými hodnotami v následující notaci:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterating over dictionaries

Slovníky mohou být procházeny, stejně jako seznam. Nicméně, slovník, na rozdíl od seznamu, neudržuje pořadí hodnot uložených v něm. Pro procházení dvojic klíč-hodnota použijte následující syntax:

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Removing a value

K odstranění specifikovaného indexu použijte jednu z následujících notací:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

nebo:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

Exercise
--------

Přidejte "Jake" do telefonního seznamu s telefonním číslem 938273443 a odstraňte Jill z telefonního seznamu.