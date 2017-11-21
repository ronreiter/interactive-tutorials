Tutorial
--------

Każda funkcja w Pythonie otrzymuje określoną liczbę argumentów, jeśli została zdefiniowana w znany nam z poprzednich lekcji sposób:

    def funkcja(pierwszy, drugi, trzeci):
        # robi cos z trzema argumentami
        ...

Możliwe jest również zdefiniowanie funkcji, która otrzymuje zmienną liczbę argumentów:

    def foo(pierwszy, drugi, trzeci, *reszta):
        print "Pierwszy: %s" % pierwszy
        print "Drugi: %s" % drugi
        print "Trzeci: %s" % trzeci
        print "I cala reszta... %s" % list(reszta)

Zmienna "reszta" jest tablicą zmiennych, która przechowuje wszystkie argumenty przekazane  funkcji foo poza pierwszymi trzema argumentami. Tak więc wywołanie `foo(1,2,3,4,5)` wypisze:

    Pierwszy: 1
    Drugi: 2
    Trzeci: 3
    I cala reszta... [4, 5]

Argumenty do funkcji można przesyłać także za pomocą słów-kluczy, dzięki czemu kolejność w jakiej zostały podane argumenty nie ma znaczenia:

    def funkcja(pierwszy, drugi, trzeci, **opcje):
        if opcje.get("akcja") == "dodaj":
            print "Suma to: %d" % (pierwszy + drugi + trzeci)

        if opcje.get("zwroc") == "pierwszy":
            return pierwszy

    wynik = funkcja(1, 2, 3, akcja = "dodaj", zwroc = "pierwszy")
    print "Wynik: %d" % wynik

Po wykonaniu tego skryptu na wyjściu ujrzymy:

    Suma to: 6
    Wynik: 1


Funkcja otrzymuje 3 argumenty. Jeśli dodatkowy argument "akcja" jest dany i każe dodać liczby, to suma zostanie wypisana. Funkjca wie, że ma zwrócić wartość pierwszego argumentu, jeśli do argumentu "zwroc" podasz odpowiednią wartość.

### Ćwiczenie

Napisz funkcje "foo" i "bar" tak, aby mogły otrzymywać zmienną liczbę argumentów (3 lub więcej). 
Funkcja `foo` musi zwracać liczbę dodatkowych argumentów jakie otrzymała. 
Funkcja `bar` musi zwracać `True`, jeśli argument przypisany słowu kluczowemu `magiczna_liczba` jest równy 7, oraz `False` w przeciwnym razie.

Tutorial Code
-------------

# zmien funkcje ponizej
def foo(a, b, c):
    pass

def bar(a, b, c):
    pass


# test kodu
if foo(1,2,3,4) == 1:
    print "Dobrze."
if foo(1,2,3,4,5) == 2:
    print "Lepiej."
if bar(1,2,3,magiczna_liczba = 6) == False:
    print "Bardzo dobrze."
if bar(1,2,3,magiczna_liczba = 7) == True:
    print "Doskonale!"

Expected Output
---------------
Dobrze.
Lepiej.
Bardzo dobrze.
Doskonale!

Solution
--------
