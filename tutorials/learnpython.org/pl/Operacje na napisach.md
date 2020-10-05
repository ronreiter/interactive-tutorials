Tutorial
--------

Napisy są fragmentami tekstu. W sumie jest nim każdy ciąg znaków, który ujęliśmy w cudzysłów lub apostrofy:

    napis = "Witaj swiecie!"
    napis_2 = 'Witaj swiecie!'
    print napis   # Witaj swiecie!
    print napis_2 # Witaj swiecie!

Te dwa różne sposoby zapisu dają taki sam efekt końcowy. Jedyna różnica polega na tym, że przy użyciu `""` możemy wygodnie umieścić w tekście znak apostrofu `'`. W przeciwnym razie musisz użyć znaku `\` przed apostrofem, który ma zostać wyświetlony.

    print "Nigdy nie czytalem 'Potopu'."   # Nigdy nie czytalem 'Potopu'.
    print 'Nigdy nie czytalem \'Potopu\'.' # Nigdy nie czytalem 'Potopu'.
    # Ponizej jak umiescic " w tekscie
    print "Nigdy nie czytalem \"Potopu\"." # Nigdy nie czytalem "Potopu".

Dobrze, zdecydować się na jeden rodzaj zapisu. Wiele osób preferuje `""`, bo takie samo oznaczenie występuje w innych językach.

Poniżej zaprezentowano kilka przydatnych operacji na napisach.

    napis = "AAA BBB ..."
    print len(napis) # 11

Funkcja `len()` informuje nas z jak wielu znaków składa się napis. Zliczane są również spacje i znaki przestankowe.

    napis = "abcdeabcde"
    print napis.index("a") # 0
    print napis.index("d") # 3

Metoda index zwraca numer pierwszego znaku identycznego z tym podanym w nawiasie. Znaki numerowane są od lewej i od zera, tak samo jak tablicach.

    napis = "abrakadabra"
    print napis.count("a")  # 5
    print napis.count("ab") # 2

Ta metoda sprawdza ile razy w napisie pojawia się znak lub ciąg ujęty w cudzysłów.

    napis = "abcdefghijk"
    print napis[2] # c

Za pomocą nawiasów kwadratowych możemy uzyskać dostęp do pojedynczego znaku, jeśli znamy jego indeks.

    napis = "abcdefghijklmnop"
    print napis[3:7] # defg

W ten sposób możemy wypisać interesujący nas fragment napisu, zaczynając od trzeciego indeksu i kończąc na szóstym. Ale dlaczego 6 a nie 7? Wynika to znowu z niepisanej zasady wśród twórców języków. Takie indeksowanie znacznie ułatwia obliczenia.

    napis = "abcdefg"

    print napis[0:4] # abcd
    print napis[:4]  # abcd

    print napis[::] # Wypisze caly napis

    # zamiast liczby mozemy podac wyrazenie,
    # ktorego wynikiem jest liczba
    print napis[4:len(napis)] # efg
    print napis[4:]           # efg

Jeśli przed dwukropkiem pozostawisz wolne miejsce, a po nim umieścisz jakąś liczbę, to otrzymasz fragment od początku do umieszczonego numeru. Jeśli usuniesz również drugą liczbę, to otrzymasz cały napis.

    napis = "abcdef"
    print napis[-1]    # f
    print napis[-4:-2] # cd
    print napis[-4:]   # cdef
    print napis[:-2]   # abcd

W nawiasach możesz umieścić nawet liczby ujemne. Dzięki temu znaki będą liczone od końca, a nie od początku. To oznacza, że -3 to trzeci znak od końca.

    napis = "Witaj"
    print napis.upper() # WITAJ
    print napis.lower() # witaj

Pierwsza linijka zamienia wszystkie małe litery w napisie na duże. Analogicznie druga linijka zamienia duże na małe.

    napis = "Witaj Alu"
    print napis.startswith("Witaj") # True
    print napis.startswith("Czesc") # False
    print napis.endswith("Alu")     # True
    print napis.endswith("swiecie") # False

Te fragmenty kodu służą do ustalenia, czy napis zaczyna się lub kończy od danego ciągu znaków. Pierwszy zwróci `True`, ponieważ napis zaczyna się od "Witaj". Drugi zwróci `False`, ponieważ napis oczywiście nie zaczyna się od "Czesc".

    napis = "Ala ma kota."
    tablica_slow = napis.split(" ")
    print tablica_slow # ['Ala', 'ma', 'kota']

To rozbije napis na kilka napisów zebranych razem w tablicy. Tutaj przykładowym "rozdzielaczem" jest spacja.

### Ćwiczenie

Zmień napis na początku kodu tak, aby zostały wyświetlone takie wartości, jakie podano w komentarzach

Tutorial Code
-------------

s = "Jaki powinien byc ten napis?"

# Powinien byc dlugi na 17 znakow
print "Dlugosc napisu = %d" % len(s)

# Pierwsza litera 'a' w tekscie powinna miec indeks nr 1
print "Indeks pierwszej litery 'a' = %d" % s.index("a")

# W napisie musza byc dwie litery 'a'
print "'a' wystepuje %d razy" % s.count("a")

# Dzielenie napisu na kawalki
print "Pierwszych piec znakow to '%s'" % s[:5]
print "Nastepne piec znakow to '%s'" % s[5:10]
print "Dwunastym znakiem jest '%s'" % s[12]

print "Ostatnie piec znakow to '%s'" % s[-5:]

# Zamien wszystkie male litery na duze
print "Uzywajac duzych liter: %s" % s.upper()

# Zamien wszystkie litery na male
print "Uzywajac malych liter: %s" % s.lower()

# Musi sie zaczynac od "Nap"
if s.startswith("Nap"):
    print "Napis zaczyna sie od 'Nap'. Dobrze!"

# Sprawdzamy jak konczy sie napis
if s.endswith("tne"):
    print "Napis konczy sie 'tne'. Dobrze!"

# Rozdziela napis na trzy czesci,
# z ktorych kazda zawiera tylko jedno slowo
print "Napis rozdzielony na slowa: %s" % s.split(" ")

Expected Output
---------------

Dlugosc napisu = 17
Indeks pierwszej litery 'a' = 1
'a' wystepuje 2 razy
Pierwszych piec znakow to 'Napis'
Nastepne piec znakow to 'y sa '
Dwunastym znakiem jest 'i'
Ostatnie piec znakow to 'ietne'
Uzywajac duzych liter: NAPISY SA SWIETNE
Uzywajac malych liter: napisy sa swietne
Napis zaczyna sie od 'Nap'. Dobrze!
Napis konczy sie 'tne'. Dobrze!
Napis rozdzielony na slowa: ['Napisy', 'sa', 'swietne']

Solution
--------
