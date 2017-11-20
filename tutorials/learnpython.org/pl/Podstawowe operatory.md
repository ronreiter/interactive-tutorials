Tutorial
--------

Ta sekcja wyjaśnia jak posługiwać się podstawowymi operatorami w Pythonie.

### Operatory arytmetyczne

Tak jak w innych językach programowania dostępne są operatory dodawania, odejmowania, mnożenia i dzielenia na liczbach.

    suma = 1 + 2 * 3 / 4.0

Spróbuj przewidzieć jaką wartość będzie miała ta zmienna. Czy Python przestrzega reguł kolejności działań?

Innym dostępnym operatorem jest modulo (`%`), który zwraca resztę z dzielenia (`dzielna % dzielnik = reszta`).

    reszta = 11 % 3

Używając dwoch znaków mnożenia otrzymujemy symbol potęgowania.

    kwadrat = 7 ** 2
    szescian = 2 ** 3

### Operacje na napisach

Python umożliwia łączenie napisów za pomocą symbolu dodawania:

    witajswiecie = "witaj" + " " + "swiecie"

Python pozwala także na "mnożenie" napisów, czyli uzyskanie ciągu powtarzających się sekwencji:

    wielewitaj = "witaj" * 10

### Operacje na tablicach

Tablice mogą być łączone za pomocą symbolu dodawania:

    parzyste_dodatnie = [2,4,6,8]
    nieparzyste_dodatnie = [1,3,5,7]
    naturalne = parzyste_dodatnie + nieparzyste_dodatnie

Tak jak w przypadku stringów możliwe jest tworzenie tablic o powtarzającym się ciągu elementów za pomocą znaku mnożenia:

    print [1,2,3] * 3

### Ćwiczenie

Wypełnij tablice `x_tab` i `y_tab` tak, aby zawierały odpowiednio 10 obiektów `x` i 10 `y`. Stwórz także tablicę o nazwie `duza_tab`, która będzie zawierała po 10 zmiennych `x` i `y`. Zrób to dodając do siebie wspomniane wyżej tablice.

Dociekliwych informuję, że funkcja `object` powołuje do życia obiekt najbardziej podstawowego typu, jaki jest dostępny w pythonie. Natomiast metoda `.count()` zwraca liczbę elementów zapisanych w tablicy.

Tutorial Code
-------------

x = object()
y = object()

# zmien ten kod
x_tab = [x]
y_tab = [y]
duza_tab = []

print "x_tab zawiera %d obiektow" % len(x_tab)
print "y_tab zawiera %d obiektow" % len(y_tab)
print "duza_tab zawiera %d obiektow" % len(duza_tab)

# sprawdzenie poprawnosci
if x_tab.count(x) == 10 and y_tab.count(y) == 10:
    print "Prawie zrobione..."
if duza_tab.count(x) == 10 and duza_tab.count(y) == 10:
    print "Doskonale!"

Expected Output
---------------

x_tab zawiera 10 obiektow
y_tab zawiera 10 obiektow
duza_tab zawiera 20 obiektow
Prawie zrobione...
Doskonale!

Solution
--------
