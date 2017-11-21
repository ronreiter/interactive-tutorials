Tutorial
--------

### Czym są funkcje?

Funkcja to wydzielony fragment kodu, który można wielokrotnie używać w różnych miejscach programu. Tak się składa, że już wykorzystywaliśmy funkcje, a jedną z nich była funkcja `xrange`. Nie trzeba było jej pisać samodzielnie, bo zrobił to już za ciebie inny programista. Wystarczyło, że wiesz jak ona działa. Bez funkcji praca zespołowa nad nawet średnim programem byłaby prawie niemożliwa. Większość funkcji wymaga informacji z zewnątrz. Są to liczby, tekst i inne obiekty. Większość zwraca również informacje.

### Jak napisać funkcję w Pythonie?

W Pythonie bloki kodu (w tym również funkcje) są wyróżniane za pomocą wcięć w następujący sposób:
naglowek_kodu: 

    naglowek_bloku: 
        1. linia bloku 
        2. linia bloku 
        ... 

Najczęściej nagłówek bloku ma następującą budowę

    slowo_koluczowe_bloku nazwa_bloku(argument1, argument2, ...)

Słowami kluczowymi, które już znasz są `if`, `for` i `while`, ale one nie wymagały nazwy.

Funkcje są definiowane z użyciem słowa kluczowego `def`, po którym umieszcza się nazwę funkcji, a potem nawiasy. Jeżeli funkcja nie wymaga informacji z zewnątrz nawiasy pozostawiamy puste.

    def przywitanie():
        print "Pozdrowienia z mojej funckji!"

    def przywitanie_imienne(imie, zyczenia):
        print "Witaj" + imie + ". Zycze Tobie " + zyczenia

    przywitanie() # Wypisze "Pozdrowienia z mojej funckji!"
    przywitanie_imienne("Jacek", "zdrowia") # Wypisze immienne zyczenia

Aby przerwać działanie funkcji i zwrócić wartość, musisz użyć słowa `return`, a za nim umieścić zwracaną wartość. Jeżeli pominiesz wartość, to funkcja tylko zakończy swoje działanie i nic nie zwróci.
Przykład:

    def dzielenie(dzielna, dzielnik):
        if(dzielnik == 0):
            return # zakoncz funkcje nic nie zwracajac
        else:
            return dzielna / dzielnik

    print dzielenie(5, 0)
    print "#########################"
    print dzielenie(10, 2)

### Jak wywoływać funkcje w Pythonie?

Po prostu napisz nazwę funkcji razem z argumentami w nawiasach, jak widać w przykładach poniżej:

    def dzielenie(dzielna, dzielnik):
        if(dzielnik == 0):
            return # zakoncz funkcje nic nie zwracajac
        else:
            return dzielna / dzielnik

    def przywitanie():
        print "Pozdrowienia z mojej funckji!"

    def przywitanie_imienne(imie, zyczenia):
        print "Witaj", imie, ". Zycze ci", zyczenia

    # brak argumentow i zwracanej wartosci
    przywitanie()

    # brak zwracanej wartosci, ale sa juz argumenty
    przywitanie_imienne("Jacek", "zdrowia")

    # jak przypisac zmiennej wartosc zwrocona przez funkcje
    x = dzielenie(9, 3)
    print x

### Ćwiczenie

W tym ćwiczeniu użyjesz istniejącej funkcji oraz dodasz swoją własną, aby stworzyć w pełni funkcjonalny program.

1. Dodaj funkcję nazwaną `lista_korzysci()` – która zwraca tablicę następujących napisów: "Lepiej zorganizowany kod", "Wieksza czytelnosc kodu", "Latwiejsze wielokrotne uzycie kodu", "Mozliwosc dzielenia sie kodem i laczenia go w calosc przez rozne osoby"

2. Dodaj funkcję nazwaną `buduj_zdanie(info)`, która otrzymuje pojedynczy argument zawierający napis i zwraca zdanie zaczynające się podanym napisem i kończące się " jest zaleta funkcji!"

3. Wykonaj i zobacz jak funkcje ze sobą współpracują.

Tutorial Code
-------------

# Ta funkcja powinna zwracac tablice napisow, ktore wymieniono w punkcie 1.
def lista_korzysci():
    pass

# Funkcja powinna dolaczyc do kazdej korzysci – " jest zaleta funkcji!"
def buduj_zdanie(korzysc):
    pass

def nazwij_korzysci_z_funkcji():
    tabela = lista_korzysci()
    for korzysc in tabela:
        print buduj_zdanie(korzysc)

nazwij_korzysci_z_funkcji()


Expected Output
---------------

Lepiej zorganizowany kod jest zaleta funkcji!
Wieksza czytelnosc kodu jest zaleta funkcji!
Latwiejsze wielokrotne uzycie kodu jest zaleta funkcji!
Mozliwosc dzielenia sie kodem i laczenia go w calosc przez rozne osoby jest zaleta funkcji!

Solution
# Ta funkcja powinna zwracac tablice napisow, ktore wymieniono w punkcie 1.
def lista_korzysci():
    return tablica
tablica = ["Lepiej zorganizowany kod", "Wieksza czytelnosc kodu",
               "Latwiejsze wielokrotne uzycie kodu", 
               "Mozliwosc dzielenia sie kodem i laczenia go w calosc przez rozne osoby"]


# Funkcja powinna dolaczyc do kazdej korzysci – " jest zaleta funkcji!"
def buduj_zdanie(korzysc):
    return korzysc + " jest zaleta funkcji!"
    

def nazwij_korzysci_z_funkcji():
    tabela = lista_korzysci()
    for korzysc in tabela:
        print buduj_zdanie(korzysc)

nazwij_korzysci_z_funkcji()
