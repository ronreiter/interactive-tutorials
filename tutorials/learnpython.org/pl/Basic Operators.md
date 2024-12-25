This section explains how to use basic operators in Python.

### Operatory Arytmetyczne

Podobnie jak w innych językach programowania, operatory dodawania, odejmowania, mnożenia i dzielenia mogą być używane z liczbami.

    number = 1 + 2 * 3 / 4.0
    print(number)

Spróbuj przewidzieć, jaka będzie odpowiedź. Czy Python przestrzega kolejności operacji?

Innym dostępnym operatorem jest operator modulo (%), który zwraca resztę z dzielenia. Divisor % Dzielenie = reszta.

    remainder = 11 % 3
    print(remainder)

Użycie dwóch symboli mnożenia tworzy potęgowanie.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Używanie Operatorów z Napisami

Python obsługuje łączenie napisów za pomocą operatora dodawania:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python obsługuje także mnożenie napisów, aby utworzyć napis z powtarzającą się sekwencją:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Używanie Operatorów z Listami

Listy mogą być łączone za pomocą operatorów dodawania:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Podobnie jak w przypadku napisów, Python obsługuje tworzenie nowych list z powtarzającą się sekwencją za pomocą operatora mnożenia:

    print([1,2,3] * 3)

Ćwiczenie
--------

Celem tego ćwiczenia jest utworzenie dwóch list o nazwach `x_list` i `y_list`, które zawierają 10 wystąpień zmiennych `x` i `y`, odpowiednio. Jesteś także zobowiązany do utworzenia listy o nazwie `big_list`, która zawiera zmienne `x` i `y`, po 10 razy każdą, poprzez połączenie dwóch stworzonych list.