Ez a szakasz elmagyarázza, hogyan használhatjuk az alapvető operátorokat Pythonban.

### Arithmetic Operators

Csakúgy, mint bármely más programozási nyelven, az összeadás, kivonás, szorzás és osztás operátorokat használhatjuk a számokkal.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Próbáld megjósolni, mi lesz a válasz. Követi-e a Python a műveletek sorrendjét?

Egy másik rendelkezésre álló operátor a modulo (%) operátor, amely az osztás egész maradékát adja vissza. osztandó % osztó = maradék.

    remainder = 11 % 3
    print(remainder)

Két szorzásjel használatával hatványkapcsolatot hozhatunk létre.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

A Python támogatja a stringek összefűzését az összeadás operátor használatával:

    helloworld = "hello" + " " + "world"
    print(helloworld)

A Python azt is támogatja, hogy a szorzás operátort alkalmazzuk stringeken egy ismétlődő sorozatú string létrehozásához:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

A listákat össze lehet fűzni az összeadás operátorral:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Csakúgy, mint a stringeknél, a Python támogatja új listák létrehozását ismétlődő sorozattal a szorzás operátor segítségével:

    print([1,2,3] * 3)

Exercise
--------

Ennek a feladatnak a célja két lista létrehozása, amelyek `x_list` és `y_list` néven futnak, és amelyek a `x` és `y` változók 10-10 példányát tartalmazzák. Továbbá szükséges létrehoznod egy `big_list` nevű listát is, mely 10 alkalommal tartalmazza az `x` és `y` változókat, az általad létrehozott két lista összefűzésével.