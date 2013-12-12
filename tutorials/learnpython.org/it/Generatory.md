Tutorial
--------

Generatory są bardzo łatwe w implementacji, ale ze zrozumieniem stojącej za nimi idei jest już trochę gorzej.

Generatory są używane do tworzenia iteratorów (tablice, krotki itp.), ale inaczej niż robiliśmy to do tej pory. Generatory to proste funkcje, które od razu zwracają nam iterowalny zbiór obiektów.

Kiedy za pomocą pętli for zaczynamy przechodzić przez zbiór obiektów, generator wykonuje swoją pracę. Gdy generator napotka instrukcję `yield`, zwraca obiekt znajdujący się przy tym słowie, czyli działa podobnie do 'return'. Jednak w następnym kroku pętli generator zacznie się on wykonywać od linijki pod ostatnio użytym 'yield', a zmienne lokalne generatora będą nienaruszone.
Mamy tu prosty generator, który zwraca 7 losowych liczb całkowitych:

    import random

    def losuj():
        # zwraca 5 liczb z przedzialu miedzy 1 i 5
        for i in xrange(5):
            yield random.randint(1, 5)

        # zwraca nastepne 5 liczb z przedzialu miedzy 5 i 10
        for i in xrange(5):
            yield random.randint(5,10)

    tablica_losowych = []
    for losowa in losuj():
        tablica_losowych.append(losowa)

    print tablica_losowych

Ta funkcja decyduje jak generować liczbby lasowe na swój własny sposób. Po jej pierwszym wywołaniu wykonuje się do napotkania instrukcji 'yield', kiedy to zwraca losową liczbę i zatrzymuje się. Po jej drugim wywołniu wykonuje się do napotkania następnego 'yield'.

### Ćwiczenie

Napisz funkcję generującą, która zwróci ciąg Fibonacciego. Kolejne wyrazy tego ciągu są obliczane według następującej zasady: Dwa pierwsze wyrazy są równe 1 i każdy następny wyraz jest sumą dwóch poprzednich. (1, 1, 2, 3, 5, ...)
Wskazówka: Możliwe jest użycie tylko dwóch zmiennych w naszym generatorze. Pamiętaj tylko, że Python umożliwia wykonanie dwóch operacji przypisania naraz. Następujący kod

    a = 1
    b = 2
    a, b = b, a

zamieni miejscami wartości zmiennych a i b.

Tutorial Code
-------------

# wypelnij ta funkcje
def fib():
    pass #ta instrukcja doslownie nic nie robi ,
    #wiec jest swietna do jako tymczasowe wypelnienie

# sprawdzamy czy funkcja fib jest generatorem
import types
if type(fib()) == types.GeneratorType:
    print "Dobrze, funkcja fib jest generatorem."

    licznik = 0
    for n in fib():
        print n
        licznik += 1
        if licznik == 10:
            break
else:
    print "Funkcja fib nadal nie jest generatorem."


Expected Output
---------------

Dobrze, funkcja fib jest generatorem.
1
1
2
3
5
8
13
21
34
55

Solution
--------