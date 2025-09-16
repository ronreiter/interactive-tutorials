Az interaktív kódolásban fontos szerepet játszik az adatok megfelelő módon történő beolvasása és megjelenítése. Most koncentráljunk a különböző adattípusok be- és kimenetére.

###raw_input()
Ez akkor használatos, amikor a bemenetet addig vesszük, amíg el nem érjük a sor végét. Figyeljünk arra, hogy ne legyenek szóközök. A bemenet a sorvégi karakterrel zárul, és ha a bemeneti sorban vannak szóközök, az hibát eredményez.

    # Kiírja a szabvány bemenetről érkezett adatot
    astring=raw_input()# adja meg a hello-t bemenetként
    print raw_input()

A bemenet felvétele után a szükséges adattípusra konvertálhatjuk őket olyan függvények segítségével, mint az int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
Ez kifejezetten egészek bevitelére szolgál. Az input() előnye a raw_input() -tal szemben a következő példával szemléltethető:

    # adja meg 2*2-t bemenetként
    a=input()
    b=raw_input() # figyeljünk rá, hogy az int(raw_input()) hibát eredményez
    print a # kiírja a 4-et
    print b # kiírja a 2*2-t

###hogyan vehetünk fel két vagy több különböző adattípust egyetlen sorból, szétválasztva őket szóközökkel?
Itt használjuk a split() és map() függvényeket.

    # adjon meg két egész számot az első sorban és több mint két egész számot a harmadik sorban
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # kiírja az első két egész számot az első sorból és a második sor egész számainak összegét

###Kimenet formázása
Már észrevehette, hogy a print utasítás automatikusan új sort illeszt be. Az előző kódban használt vessző használata a kimeneti értékeket egy sorban, szóközzel elválasztva írja ki.
A sys modul többféle függvényt biztosít a kimenet formázásához, de itt megtanuljuk, hogyan használjuk az alapvető formázási ismereteket, hogy a kimenetet a kívánt módon jelenítsük meg. Nézzünk meg néhány példát, hogy megértsük a kimenet formázását

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

A kimenetnek önmagáért beszélőnek kell lennie.

Exercise
--------

Írjon egy programot, amely megkéri a felhasználót, hogy adja meg a nevét, életkorát és országát. A programnak ezután egy mondatban kell megjelenítenie ezt az információt. A programnak tartalmaznia kell:

1. Név felvétele bemenetként a `raw_input()` használatával.
2. Életkor felvétele bemenetként az `input()` segítségével, és annak egésszé alakítása.
3. Ország nevének felvétele bemenetként a `raw_input()` segítségével.
4. A kimenet formázása úgy, hogy a név, életkor és ország egy mondatban szerepeljen.

A programnak be kell mutatnia a bemeneti kezelés és a szövegformázás használatát Pythonban.