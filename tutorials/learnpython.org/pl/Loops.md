Istnieją dwa rodzaje pętli w Pythonie: for i while.

### Pętla "for"

Pętle for iterują po podanej sekwencji. Oto przykład:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

Pętle for mogą iterować po sekwencji liczb przy użyciu funkcji "range" i "xrange". Różnica między range a xrange polega na tym, że funkcja range zwraca nową listę z liczbami z tego zakresu, podczas gdy xrange zwraca iterator, co jest bardziej efektywne. (Python 3 używa funkcji range, która działa jak xrange). Zwróć uwagę, że funkcja range zaczyna od zera.

    # Wypisuje liczby 0,1,2,3,4
    for x in range(5):
        print(x)

    # Wypisuje 3,4,5
    for x in range(3, 6):
        print(x)

    # Wypisuje 3,5,7
    for x in range(3, 8, 2):
        print(x)

### Pętle "while"

Pętle while powtarzają się, dopóki spełniony jest określony warunek logiczny. Na przykład:

    # Wypisuje 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # To samo co count = count + 1

### Instrukcje "break" i "continue"

**break** służy do wychodzenia z pętli for lub while, natomiast **continue** służy do pomijania bieżącego bloku i powrotu do instrukcji "for" lub "while". Kilka przykładów:

    # Wypisuje 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Wypisuje tylko liczby nieparzyste - 1,3,5,7,9
    for x in range(10):
        # Sprawdza, czy x jest parzyste
        if x % 2 == 0:
            continue
        print(x)

### Czy możemy używać klauzuli "else" dla pętli?

W przeciwieństwie do języków takich jak C, CPP.. możemy używać **else** dla pętli. Kiedy warunek pętli instrukcji "for" lub "while" zawiedzie, wtedy wykonywany jest kod w części "else". Jeśli wewnątrz pętli for wykonana zostanie instrukcja **break**, to część "else" zostanie pominięta. Zwróć uwagę, że część "else" jest wykonywana nawet, jeśli istnieje instrukcja **continue**.

Oto kilka przykładów:

    # Wypisuje 0,1,2,3,4, a następnie wypisuje "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Wypisuje 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")

Ćwiczenie
--------

Przejdź przez listę numbers i wypisz wszystkie liczby parzyste w kolejności, w jakiej się pojawiają. Nie wypisuj żadnych liczb, które pojawiają się po liczbie 237 w sekwencji.