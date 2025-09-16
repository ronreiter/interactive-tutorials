A listák nagyon hasonlítanak a tömbökhöz. Bármilyen típusú változót tartalmazhatnak, és tetszőleges számú változót is tárolhatnak. A listák iterálása is nagyon egyszerű módon elvégezhető. Íme egy példa arra, hogyan lehet listát építeni.

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # prints 1
    print(mylist[1]) # prints 2
    print(mylist[2]) # prints 3

    # prints out 1,2,3
    for x in mylist:
        print(x)

Egy nem létező index elérése kivételt (hibát) generál.

    mylist = [1,2,3]
    print(mylist[10])

Exercise
--------

Ebben a feladatban számokat és sztringeket kell hozzáadnod a megfelelő listákhoz az "append" lista módszerrel. Hozzá kell adnod az 1, 2 és 3 számokat a "numbers" listához, és a 'hello' és 'world' szavakat a "strings" változóhoz.

A "second_name" változót is ki kell töltened a "names" lista második nevével, a zárójel operátor `[]` használatával. Ne feledd, hogy az indexelés nullától kezdődik, tehát ha a lista második eleméhez akarsz hozzáférni, az indexe 1 lesz.