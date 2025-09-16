Ez a rész bemutatja, hogyan használjuk az alapvető operátorokat Pythonban.

### Aritmetikai operátorok

Csakúgy, mint bármely más programozási nyelvben, az összeadás, kivonás, szorzás és osztás operátorok használhatók számokkal.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Próbálja megjósolni, mi lesz az eredmény. Követi a Python a műveleti sorrendet?

Egy másik elérhető operátor a maradék (\%) operátor, amely az osztás egész maradékát adja vissza. osztandó \% osztó = maradék.

    remainder = 11 % 3
    print(remainder)

Két szorzási szimbólum használata hatványkapcsolatot hoz létre.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Operátorok használata szövegekkel

A Python támogatja a szövegek összefűzését az összeadás operátorral:

    helloworld = "hello" + " " + "world"
    print(helloworld)

A Python támogatja továbbá a szövegek szorzását, hogy ismétlődő szekvenciából álló szöveget alkosson:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Operátorok használata listákkal

A listákat összeadás operátorral össze lehet fűzni:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Csakúgy, mint a szövegeknél, a Python támogatja új listák létrehozását ismétlődő szekvenciával a szorzás operátor segítségével:

    print([1,2,3] * 3)

Exercise
--------

A feladat célja két lista létrehozása, amelyek `x_list` és `y_list` néven szerepelnek,
és amelyek 10 példányban tartalmazzák az `x` és `y` változókat, illetve.
Továbbá létre kell hozni egy `big_list` nevű listát,
amely 10-szer tartalmazza az `x` és `y` változókat az által létrehozott két lista összefűzésével.