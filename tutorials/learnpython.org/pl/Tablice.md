Tutorial
--------

Tablice w Pythonie również nazywane są listami.

Tablicę liczb można sobie wyobrazić jako zmienne ustawione w szereg. Każdej zmiennej jest przyporządkowany indeks, czyli oznaczenie jej miejsca w szeregu. Tablice mogą zawierać dane dowolnego typu. Poza tym nie ma ograniczeń (oprócz tych sprzętowych) dla rozmiaru tablic. Dostęp do danych w tablicy uzyskujemy poprzez indeks każdego elementu. Poniżej pokazano jak zbudować tablicę.

    tablica = []
    tablica.append(1)
    tablica.append(2)
    tablica.append(3)
    print tablica[0] # wypisze 1
    print tablica[1] # wypisze 2
    print tablica[2] # wypisze 3

    # wypisze kolejno 1, 2, 3
    for x in tablica:
        print x

Próba wywołania elementu o nieistniejącym adresie wygeneruje wyjątek (czyli błąd).

    tablica = [1,2,3]
    print tablica[10]

### Ćwiczenie

W tym ćwiczeniu dodasz liczby i napisy do odpowiednich tablic za pomocą metody "append". Dodaj liczby 1, 2 i 3 do tablicy `liczby` oraz słowa 'witaj' i 'swiecie' do tablicy `napisy`.

Zapisz także w zmiennej drugie imię z tablicy `imiona` używając do tego indeksowania. Zwróć uwagę na to, że indeksowanie w tablicach zaczyna się od 0, zatem pierwszy element w tablicy ma indeks 0, drugi 1 itd.

Tutorial Code
-------------
liczby = []
napisy = []
imiona = ["Jan", "Edward", "Joanna"]

# Tu umiesc swoj kod
drugie_imie = None


# Ten fragment kodu wypisze wypelnione przez ciebie
# tablice oraz drugie imie w tablicy imion (Edward).
print liczby
print napisy
print "Drugim imieniem w tablicy jest %s." % drugie_imie




Expected Output
---------------
[1, 2, 3]
['witaj', 'swiecie']
Drugim imieniem w tablicy jest Edward.

Solution
--------
