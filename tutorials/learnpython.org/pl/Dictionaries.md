Słownik to typ danych podobny do tablic, ale działa z kluczami i wartościami zamiast indeksów. Każda wartość przechowywana w słowniku może być dostępna za pomocą klucza, który może być dowolnym typem obiektu (ciągiem znaków, liczbą, listą itp.) zamiast używania jego indeksu do adresowania.

Na przykład baza danych numerów telefonicznych mogłaby być przechowywana za pomocą słownika w następujący sposób:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternatywnie, słownik można zainicjować za pomocą tych samych wartości w następującej notacji:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterowanie po słownikach

Słowniki można iterować, podobnie jak listę. Jednak słownik, w przeciwieństwie do listy, nie zachowuje porządku wartości przechowywanych w nim. Aby iterować po parach klucz-wartość, użyj następującej składni:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Usuwanie wartości

Aby usunąć określony indeks, użyj jednej z następujących notacji:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

lub:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


Ćwiczenie
--------

Dodaj "Jake" do książki telefonicznej z numerem telefonu 938273443 i usuń Jill z książki telefonicznej.