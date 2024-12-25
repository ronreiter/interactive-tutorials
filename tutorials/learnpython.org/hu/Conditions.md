A Python logikai műveletek segítségével értékeli a feltételeket. A logikai értékek, igaz (True) és hamis (False), akkor kerülnek visszatérítésre, amikor egy kifejezés összehasonlításra vagy kiértékelésre kerül. Például:

    x = 2
    print(x == 2) # kiírja az True értéket
    print(x == 3) # kiírja a False értéket
    print(x < 3) # kiírja az True értéket

Figyeld meg, hogy a változók értékadása egyenlőségjel "=" használatával történik, míg két változó összehasonlítása dupla egyenlőségjel "==" használatával. A "nem egyenlő" operátor jelölése pedig: "!=".

### Logikai operátorok

Az "and" és az "or" logikai operátorok lehetővé teszik összetett logikai kifejezések építését, például:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("A neved John, és 23 éves is vagy.")

    if name == "John" or name == "Rick":
        print("A neved John vagy Rick.")

### Az "in" operátor

Az "in" operátor használható annak ellenőrzésére, hogy egy adott objektum létezik-e egy iterálható objektumtartóban, például egy listában:

    name = "John"
    if name in ["John", "Rick"]:
        print("A neved John vagy Rick.")

A Python a behúzás segítségével határoz meg kódtömböket, szemben a kapcsos zárójelekkel. Az alapértelmezett Python behúzás 4 szóköz, bár a tabulátorok és bármilyen más méretű szóköz is működni fog, amennyiben következetes. Észre lehet venni, hogy a kódtömbök nem igényelnek semmilyen lezárást.

Itt van egy példa a Python "if" utasításának használatára kódtömbökkel:

    statement = False
    another_statement = True
    if statement is True:
        # valamilyen művelet
        pass
    elif another_statement is True: # máskülönben
        # másik művelet
        pass
    else:
        # újabb művelet
        pass

Például:

    x = 2
    if x == 2:
        print("az x egyenlő kettővel!")
    else:
        print("az x nem egyenlő kettővel.")

Egy állítás igaznak számít, ha az alábbiak közül valamelyik helyes:
1. Az "True" logikai változó kerül megadásra, vagy kifejezéssel, mint például aritmetikai összehasonlítással kerül kiszámításra.
2. Egy objektum, amely nem tekintendő "üresnek", kerül átadásra.

Íme néhány példa azokra az objektumokra, amelyeket üresnek tekintünk:
1. Üres karakterlánc: ""
2. Üres lista: []
3. A nulla szám: 0
4. A hamis logikai változó: False

### Az "is" operátor

Ellentétben a dupla egyenlőségjel "==" operátorral, az "is" operátor nem a változók értékeit, hanem magukat az instance-eket hasonlítja össze. Például:

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # Kinyomtatja az True értéket
    print(x is y) # Kinyomtatja a False értéket

### A "not" operátor

A "not" használatával egy logikai kifejezés előtt annak értéke megfordítható:

    print(not False) # Kinyomtatja az True értéket
    print((not False) == (False)) # Kinyomtatja a False értéket

Exercise
--------

Változtasd meg a változókat az első részben úgy, hogy minden if utasítás igazként kerüljön kiértékelésre.