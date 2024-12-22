Ta sekcja wyjaśnia, jak używać podstawowych operatorów w Pythonie.

### Operatory Arytmetyczne

Podobnie jak w innych językach programowania, można używać operatorów dodawania, odejmowania, mnożenia i dzielenia z liczbami.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Spróbuj przewidzieć, jaka będzie odpowiedź. Czy Python przestrzega kolejności działań?

Dostępny jest także operator modulo (%), który zwraca resztę z dzielenia całkowitego. dzielna % dzielnik = reszta.

    remainder = 11 % 3
    print(remainder)

Użycie dwóch symboli mnożenia oznacza potęgowanie.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Używanie Operatorów z Łańcuchami

Python obsługuje łączenie łańcuchów za pomocą operatora dodawania:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python także obsługuje mnożenie łańcuchów, aby utworzyć łańcuch z powtarzającą się sekwencją:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Używanie Operatorów z Listami

Listy mogą być łączone za pomocą operatorów dodawania:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Podobnie jak w przypadku łańcuchów, Python obsługuje tworzenie nowych list z powtarzającą się sekwencją przy użyciu operatora mnożenia:

    print([1,2,3] * 3)

Ćwiczenie
--------

Celem tego ćwiczenia jest utworzenie dwóch list o nazwach `x_list` i `y_list`,
które zawierają po 10 instancji zmiennych `x` i `y`. Wymagane jest również utworzenie listy o nazwie `big_list`, która zawiera zmienne `x` i `y` po 10 razy każda, przez połączenie dwóch stworzonych list.