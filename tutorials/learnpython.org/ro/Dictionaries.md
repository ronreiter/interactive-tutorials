Un dicționar este un tip de date similar cu tablourile, dar funcționează cu chei și valori în loc de indici. Fiecare valoare stocată într-un dicționar poate fi accesată folosind o cheie, care poate fi orice tip de obiect (un șir de caractere, un număr, o listă etc.) în loc să-și folosească indexul pentru a o adresa.

De exemplu, o bază de date de numere de telefon ar putea fi stocată folosind un dicționar astfel:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternativ, un dicționar poate fi inițializat cu aceleași valori în următoarea notație:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterarea peste dicționare

Dicționarele pot fi parcurse, la fel ca o listă. Cu toate acestea, un dicționar, spre deosebire de o listă, nu menține ordinea valorilor stocate în el. Pentru a parcurge perechile cheie-valoare, utilizați următoarea sintaxă:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Eliminarea unei valori

Pentru a elimina un index specificat, folosiți oricare dintre următoarele notații:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

sau:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


Exercițiu
--------

Adăugați "Jake" în agenda telefonică cu numărul de telefon 938273443 și eliminați-o pe Jill din agenda telefonică.