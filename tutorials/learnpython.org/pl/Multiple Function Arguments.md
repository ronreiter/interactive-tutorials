Every function in Python otrzymuje z góry określoną liczbę argumentów, jeśli została zadeklarowana normalnie, w taki sposób:

Możliwe jest zadeklarowanie funkcji, które otrzymują zmienną liczbę argumentów, używając następującej składni:

Zmienne "therest" to lista zmiennych, która otrzymuje wszystkie argumenty przekazane do funkcji "foo" po pierwszych 3 argumentach. Dlatego wywołanie `foo(1, 2, 3, 4, 5)` wyświetli:

Możliwe jest także przekazywanie funkcji argumentów przez słowo kluczowe, dzięki czemu kolejność argumentów nie ma znaczenia, korzystając z następującej składni. Następujący kod daje następujący wynik:
```The sum is: 6
    Result: 1```

Funkcja "bar" otrzymuje 3 argumenty. Jeśli otrzymany zostanie dodatkowy argument "action" i nakaże on zsumować liczby, wtedy suma zostanie wyświetlona. Alternatywnie, funkcja wie również, że musi zwrócić pierwszy argument, jeśli wartość parametru "number" przekazanego do funkcji jest równa "first".

Exercise
--------

Wypełnij funkcje `foo` i `bar` tak, aby mogły otrzymać zmienną liczbę argumentów (3 lub więcej)
Funkcja `foo` musi zwracać ilość dodatkowych otrzymanych argumentów.
Funkcja `bar` musi zwracać `True`, jeśli argument ze słowem kluczowym `magicnumber` ma wartość 7, a `False` w przeciwnym przypadku.