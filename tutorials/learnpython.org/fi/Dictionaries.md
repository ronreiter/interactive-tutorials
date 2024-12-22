Sanakirja on tietotyyppi, joka muistuttaa taulukoita, mutta toimii avaimilla ja arvoilla indeksien sijaan. Jokainen sanakirjaan tallennettu arvo voidaan hakea käyttäen avainta, joka voi olla minkä tahansa tyyppinen objekti (merkkijono, numero, lista jne.) sen sijaan, että käytettäisiin indeksiä sen osoittamiseen.

Esimerkiksi puhelinnumerotietokanta voitaisiin tallentaa sanakirjan avulla näin:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Vaihtoehtoisesti sanakirja voidaan alustaa samoilla arvoilla seuraavalla merkintätavalla:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Sanakirjojen läpikäynti

Sanakirjoja voidaan käydä läpi, aivan kuten listaa. Kuitenkin sanakirja, toisin kuin lista, ei säilytä arvojen tallennusjärjestystä. Avain-arvoparien läpikäyntiin voidaan käyttää seuraavaa syntaksia:

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Arvon poistaminen

Määritetyn indeksin poistamiseen voit käyttää jompaa kumpaa seuraavista merkinnöistä:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

tai:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

Exercise
--------

Lisää "Jake" puhelinluetteloon puhelinnumerolla 938273443, ja poista Jill puhelinluettelosta.