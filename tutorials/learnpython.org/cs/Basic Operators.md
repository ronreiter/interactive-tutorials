This section explains how to use basic operators in Python.

### Aritmetické operátory       

Stejně jako v jiných programovacích jazycích lze operátory pro sčítání, odčítání, násobení a dělení používat s čísly.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Zkuste odhadnout, jaká bude odpověď. Dodržuje python pořadí operací?

Další dostupný operátor je modulo (%) operátor, který vrací celočíselný zbytek dělení. dividend % divisor = zbytek.

    remainder = 11 % 3
    print(remainder)

Použití dvou symbolů násobení vytváří mocninný vztah.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Použití operátorů s řetězci

Python podporuje spojování řetězců pomocí sčítacího operátoru:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python také podporuje násobení řetězců k vytvoření řetězce s opakující se sekvencí:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Použití operátorů se seznamy

Seznamy mohou být spojeny pomocí sčítacího operátoru:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Stejně jako u řetězců, Python podporuje vytvoření nových seznamů s opakující se sekvencí pomocí násobícího operátoru:

    print([1,2,3] * 3)

Cvičení
--------

Cílem tohoto cvičení je vytvořit dva seznamy nazvané `x_list` a `y_list`, které obsahují 10 instance proměnných `x` a `y`, respektive. Je také požadováno vytvořit seznam nazvaný `big_list`, který obsahuje proměnné `x` a `y` 10krát každou, spojením dvou seznamů, které jste vytvořili.