Tato sekce vysvětluje, jak používat základní operátory v Pythonu.

### Aritmetické operátory       

Stejně jako v jiných programovacích jazycích mohou být s čísly používány operátory sčítání, odčítání, násobení a dělení.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Zkuste předpovědět, jaká bude odpověď. Dodržuje Python pořadí operací?

Dalším dostupným operátorem je modulo (%) operátor, který vrací celočíselný zbytek dělení. Dividend % divisor = remainder.

    remainder = 11 % 3
    print(remainder)

Použití dvou symbolů násobení vytváří mocninný vztah.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Používání operátorů s řetězci

Python podporuje zřetězení řetězců pomocí sčítacího operátoru:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python také podporuje násobení řetězců pro vytvoření řetězce s opakujícím se vzorem:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Používání operátorů s listy

Listy mohou být spojovány sčítacím operátorem:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Stejně jako u řetězců, Python podporuje tvorbu nových listů s opakujícím se vzorem použitím násobicího operátoru:

    print([1,2,3] * 3)

Cvičení
--------

Cílem tohoto cvičení je vytvořit dva seznamy nazvané `x_list` a `y_list`,
které obsahují 10 instancí proměnných `x` a `y`, v uvedeném pořadí.
Také je třeba vytvořit seznam nazvaný `big_list`, který obsahuje
proměnné `x` a `y`, každou 10krát, spojením dvou seznamů, které jste vytvořili.