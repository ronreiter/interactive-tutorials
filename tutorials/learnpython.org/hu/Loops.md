There are two types of loops in Python, for and while.

### The "for" loop

A for ciklusok végigiterálnak egy adott sorozaton. Itt van egy példa:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

A for ciklusok számok sorozatán is végigiterálhatnak a "range" és "xrange" függvények használatával. A különbség a range és xrange között az, hogy a range függvény egy új listát ad vissza a megadott tartomány számaival, míg az xrange egy iterátort ad vissza, ami hatékonyabb. (A Python 3 a range függvényt használja, amely az xrange-hez hasonlóan működik). Vegyük figyelembe, hogy a range függvény nullától indul.

    # Kinyomtatja a számokat 0,1,2,3,4
    for x in range(5):
        print(x)

    # Kinyomtatja a számokat 3,4,5
    for x in range(3, 6):
        print(x)

    # Kinyomtatja a számokat 3,5,7
    for x in range(3, 8, 2):
        print(x)

### "while" loops

A while ciklusok addig ismételnek, amíg egy bizonyos logikai feltétel teljesül. Például:

    # Kinyomtatja a számokat 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Ez ugyanaz, mint a count = count + 1

### "break" és "continue" utasítások

A **break** a for vagy while ciklusból való kilépésre szolgál, míg a **continue** a jelenlegi blokk kihagyására és a "for" vagy "while" utasításhoz való visszatérésre használható. Néhány példa:

    # Kinyomtatja a számokat 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Csak a páratlan számokat nyomtatja ki - 1,3,5,7,9
    for x in range(10):
        # Ellenőrzi, hogy x páros-e
        if x % 2 == 0:
            continue
        print(x)

### Használhatunk "else" ágat ciklusokhoz?

Ellentétben a C, CPP stb. nyelvekkel, használhatunk **else** ágat a ciklusokhoz. Amikor a "for" vagy "while" utasítás ciklusfeltétele meghiúsul, akkor az "else" ág kódja kerül végrehajtásra. Ha egy **break** utasítás fut le a for ciklusban, akkor az "else" rész kimarad. Vegyük figyelembe, hogy az "else" rész akkor is végrehajtódik, ha van **continue** utasítás.

Íme néhány példa:

    # Kinyomtatja a számokat 0,1,2,3,4, majd kiírja "A count értéke elérte az 5-öt"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("A count értéke elérte a %d-et" %(count))

    # Kinyomtatja a számokat 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("ez nem jelenik meg, mert a for ciklus megszakítás miatt leállt, nem pedig feltétel elbukása miatt")

Exercise
--------

A numbers lista összes páros számán végigiterál és azokat kiírja abban a sorrendben, ahogy megérkeznek. Ne írjon ki semmilyen számot, ami a szekvenciában a 237 után következik.