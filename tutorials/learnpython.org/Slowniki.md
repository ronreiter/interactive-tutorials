Tutorial
--------

Słownik jest strukturą danych podobną do tablicy, ale pracuje się na nim w oparciu o hasła (zwane też kluczami), a nie indeksy. Hasła mogą być obiektem o dowolnego typu (napisy, liczby, tablice itp.).

Na przykład baza danych zawierająca numery telefoniczne znajomych może być utworzona w następujący sposób:

    kontakty = {}
    kontakty["Jan"] = 938477566
    kontakty["Jacek"] = 938377264
    kontakty["Janusz"] = 947662781

Powyższą operację można także zapisać w bardziej zwięzły sposób:

    kontakty = {
        "Jan" : 938477566,
        "Jacek" : 938377264,
        "Janusz" : 947662781
    }

### Przeszukiwanie słowników 

Słowniki mogą być przeszukiwane tak jak tablice. Jednak słowniki, w przeciwieństwie do tablic, nie przechowują danych w kolejności, w której zostały zapisane. Aby wypisać pary klucz - wartość, wystarczy użyć następującej składni:

    for imie, numer in kontakty.iteritems():
        print "%s ma numer telefonu: %d" % (imie, numer)
Albo

    for imie in kontakty:
        print "%s ma numer telefonu: %d" % (imie, kontakty[imie])

### Usuwanie wartości

Aby usunąć pojedyńczą parę klucz, wartość użyj następującej notacji:

    del ksiazkatelef["Jan"]

albo:

    ksiazkatelef.pop("Jan")

### Ćwiczenie

Do istniejącej książki telefonicznej dodaj nowy kontakt: Jakub o nr 938273443. Musisz także usunąć z niej Kamilę.

Tutorial Code
-------------

kontakty = {
    "Bartek" : 938477566,
    "Monika" : 938377264,
    "Kamila" : 947662781
}

# miejsce na twoj kod


# sprawdzenie poprawnosci koadu
if "Jakub" in kontakty and kontakty["Jakub" ] == 938273443:
    print "Jakub jest w kontaktach."
    print "Jego numer to ", kontakty["Jakub"], "."
if "Kamila" not in kontakty:
    print "Kamili nie ma w kontaktach."

Expected Output
---------------
Jakub jest w kontaktach.
Jego numer to  938273443 .
Kamili nie ma w kontaktach.

Solution
--------