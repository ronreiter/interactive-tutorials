Tutorial
--------

W Pythonie używane są dwa rodzaje pętli: `while` i `for`.

### Pętla "for"

Pętla `for` "przebiega" przez podany ciąg liczb. Przykład poniżej:

    pierwsze = [2,3,5,7]
    for pierwsza in pierwsze:
        print pierwsza

Pętlę `for` możemy zrealizować z użyciem funkcji `range` lub `xrange`. Różnica między nimi polega na tym, że range zwraca nową tablicę liczb zawartych w określonym przedziale, natomiast `xrange` zwraca pojedyńczą liczbę, co czyni ją w pętlach bardziej wydajną. Python 3 używa funkcji `range`, która działa jak `xrange`. Funkcja `xrange` zwracając liczby zaczyna od 0.

    # Wypisze liczby 0 1 2 3 4
    for x in xrange(5):
        print x,

    print

    # Wypisze 3 4 5
    for x in xrange(3,6):
        print x,

### Pętla "while"

Pętla `while` wykonuje się dopóki pewien warunek logiczny jest spełniony. Przykład:

    # Wypisze 0 1 2 3 4

    licznik = 0
    while licznik < 5:
        print licznik,
        licznik += 1  # Ma to taki sam efekt jak licznik = licznik + 1

### Instrukcje "break" i "continue"

`break` jest używany do zakończenia pętli `for` i `while`, podczas gdy `continue` pozwala opuścić blok instrukcji niżej i wrócić do nagłówka pętli. Kilka przykładów:

    # Wypisze 0 1 2 3 4

    licznik = 0
    while True:
        print licznik,
        licznik += 1
        if licznik >= 5:
            break

    print

    # Wypisze tylko liczby nieparzyste - 1 3 5 7 9
    for x in xrange(10):
        # Sprawdz, czy x jest parzyste
        if x % 2 == 0:
            continue
        print x,

### Ćwiczenie

Za pomocą pętli wypisz wszystkie liczby **parzyste** z tablicy `liczby` w takiej samej kolejności, w jakiej zostały w niej zapisane. Nie wypisuj żadnej liczby, która w tej tablicy znajduje się za liczbą 237.

Tutorial Code
-------------
liczby = [
    951, 402, 984, 651, 360, 69, 408, 319, 601, 485, 980, 507, 725, 547, 544,
    615, 83, 165, 141, 501, 263, 617, 865, 575, 219, 390, 984, 592, 236, 105, 942, 941,
    386, 462, 47, 418, 907, 344, 236, 375, 823, 566, 597, 978, 328, 615, 953, 345,
    399, 162, 758, 219, 918, 237, 412, 566, 826, 248, 866, 950, 626, 949, 687, 217,
    815, 67, 104, 58, 512, 24, 892, 894, 767, 553, 81, 379, 843, 831, 445, 742, 717,
    958, 609, 842, 451, 688, 753, 854, 685, 93, 857, 440, 380, 126, 721, 328, 753, 470,
    743, 527
]

# miejsce na twoj kod


Expected Output
---------------

402
984
360
408
980
544
390
984
592
236
942
386
462
418
344
236
566
978
328
162
758
918

Solution
--------
