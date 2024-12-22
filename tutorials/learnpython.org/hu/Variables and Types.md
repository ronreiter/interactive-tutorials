Python teljesen objektumorientált, és nem "statikusan típusos". Nem szükséges változókat deklarálni a használatuk előtt, vagy deklarálni azok típusát. Minden változó a Pythonban objektum.

Ez a tutorial áttekinti néhány alapvető változótípust.

### Numbers
A Python kétféle számot támogat - egész számokat és lebegőpontos számokat. (Támogatja a komplex számokat is, amelyek ebben a tutorialban nem kerülnek magyarázatra).

Egy egész szám definiálásához használd a következő szintaxist:

    myint = 7
    print(myint)

Egy lebegőpontos szám definiálásához az alábbi jelölések valamelyikét használhatod:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

A stringek egyes idézőjelekkel vagy dupla idézőjelekkel vannak definiálva.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

A kettő közötti különbség az, hogy a dupla idézőjelek használata megkönnyíti a felkiáltójelek beillesztését (ellenben ezek lezárnák a stringet, ha egyes idézőjelet használnánk).

    mystring = "Don't worry about apostrophes"
    print(mystring)

Vannak további variációk a stringek definiálására, amelyek megkönnyítik például a kocsivisszatérések, fordított perjelek és Unicode karakterek beillesztését. Ezek túlmutatnak ezen a tutorialon, de megtalálhatóak a [Python dokumentációban](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Egyszerű operátorok hajthatóak végre számokon és stringeken:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

A hozzárendelések egynél több változón is végrehajthatóak "egyszerre" ugyanazon a soron például így:

    a, b = 3, 4
    print(a, b)

A számok és stringek közötti operátorok keverése nem támogatott:

    # Ez nem fog működni!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercise
--------

A feladat célja, hogy készíts egy stringet, egy egész számot és egy lebegőpontos számot. A string neve legyen `mystring`, és tartalmazza a "hello" szót. A lebegőpontos szám neve legyen `myfloat`, és tartalmazza a 10.0 értéket, az egész szám neve legyen `myint`, és tartalmazza a 20 értéket.