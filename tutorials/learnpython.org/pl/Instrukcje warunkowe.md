Tutorial
--------

Python posiada specjalny typ danych logicznych, który jest używany w instrukcjach warunkowych i pętlach. Wartości logiczne `True` albo `False` są najczęściej zwracane, kiedy porównujemy ze sobą dwie wartości. 

    x = 2
    print x == 2 # wypisze True
    print x != 2 # wypisze False
    print x == 3 # wypisze False
    print x < 3  # wypisze True

Do przypisania zmiennej pewnej wartości używa się operatora `=`, podczas gdy do porównania ze sobą dwóch zmiennych służy podwójny znak równości `==`. Natomiast operator "różne od" zapisujemy `!=`.

### Operatory logiczne

Operatory logiczne `and` i `or` (pol. "i" i "lub") pozwalają na budowanie kompletnych zdań logicznych, na przykład:

    imie = "Jan"
    wiek = 23
    if imie == "Jan" and wiek == 23:
        print "Nazywasz sie Jan i masz 23 lata."

    if imie == "Jan" or imie == "Robert":
        print "Nazywasz sie Jan lub Robert"

### Operator "in"

Za pomocą operatora "in" możesz sprawdzić, czy konkretny obiekt znajduje sie w tablicy lub innym obiekcie gromadzącym inne obiekty:

    imie = "Robert"
    if imie in ["Jan", "Robert"]:
        print "Nazywasz sie Jan lub Robert"

Do oznaczania bloków kodu w Pythonie używamy wcięć zamiast nawiasów ani żadnych innych symboli. Standardowym wcięciem w Pythonie są 4 spacje, chociaż tabulator i inne wcięcia działają tak długo, jak trzymasz ich się konsekwentnie.

Poniżej jest przykład użycia instrukcji "if" razem z blokami kodu:

    if <wyrażenie jest prawdziwe>:
        <rób coś>
        ....
        ....
    elif <poprzednie wyrazenie jest falszywe, ale to prawdziwe>:
        <rób coś innego>
        ....
        ....
    else: # jesli zadne z powyzszych nie jest prawdziwe
        <rób jeszcze coś innego>
        ....
        ....

Jeśli chesz, możesz pominąć bloki `elif` i `else`.

Przykład:

    x = 2
    if x == 2:
        print "x wynosi dwa!"
    else:
        print "x jest rozne od dwoch."

Dane wyrażenie jest prawdziwe, jeśli jeden z następujących warunków jest spełniony:

1. Wartość logiczna "True" jest przypisywana do zmiennej lub jest wynikiem porównania arytmetycznego.
2. Kiedy przypisany do zmiennej obiekt nie jest "pusty".

Tutaj jest kilka przykładowych obiektów postrzeganych jako puste:

1. Pusty napis: `""`
2. Pusta tablica (lista): `[]`
3. Liczba zero: `0`
4. Zmienna logiczna zawierająca False: `False`

### Operator "is"

W przeciwieństwie do `==`, operator `is` nie sprawdza, czy zmienne mają taką samą wartość, ale czy wskazują na ten sam obszar w pamięci komputera. Na przykład:

    x = [1,2,3]
    y = [1,2,3]
    print x == y # Wypisze True
    print x is y # Wypisze False

    tablica = [1, 2, 3]
    tablica2 = ['a', 'b', tablica]
    print tablica == tablica2[2] # True
    print tablica is tablica2[2] # True

    # Ponizej dowod na to, ze is mowi prawde

    tablica.append(4) # Dodajemy do tablicy liczbe 4
    print tablica2[2] # [1, 2, 3, 4]

Ponieważ `tablica` i `tablica2` odnoszą się do tego samego obiektu, zmiana jednej oznacza zmianę drugiej. Niestety istnieje w tym miejscu duże ryzyko pomyłki. Stosując proste podstawienie tablica traci kontakt ze starszym obiektem i zapisuje na jego miejscu całkiem nowy i niezależny.

    tablica = [1, 2, 3]
    tablica2 = ['a', 'b', tablica]
    print tablica == tablica2[2] # True
    print tablica is tablica2[2] # True

    tablica2[2] = tablica + [4]
    print tablica is tablica2[2] # False
    print "tablica2 = ", tablica2[2]
    print "tablica = ", tablica

### Operator "not"

Używając `not` przed wyrażeniem logicznym zmieniamy jego wartość na przeciwną:

    print not False              # Wypisze True
    print (not False) == (False) # Wypisze False

### Ćwiczenie

Zmień zmienne w pierwszej części kodu tak, aby wszystkie instrukcje `if` zwracały True.

Tutorial Code
-------------

# Zmien ponizszy kod
liczba = 10
druga_liczba = 10
pierwsza_tablica = []
druga_tablica = [1,2,3]

if liczba > 15:
    print "1"

if pierwsza_tablica:
    print "2"

if len(druga_tablica) == 2:
    print "3"

if len(pierwsza_tablica) + len(druga_tablica) == 5:
    print "4"

if pierwsza_tablica and pierwsza_tablica[0] == 1:
    print "5"

if not druga_liczba:
    print "6"

Expected Output
---------------

1
2
3
4
5
6

Solution
--------
