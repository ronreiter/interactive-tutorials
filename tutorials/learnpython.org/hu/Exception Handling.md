Amikor programozol, hibák történnek. Ez egyszerűen az élet része. Talán a felhasználó rossz adatokat adott meg. Lehet, hogy egy hálózati erőforrás nem volt elérhető. Talán a programnak elfogyott a memóriája. Vagy akár a programozó is hibázott!

A Python megoldása a hibákra a kivételek. Lehet, hogy már láttál kivételt korábban.

    print(a)
    
    #hiba
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Hoppá! Elfelejtettünk értéket rendelni az 'a' változóhoz.

De néha nem akarod, hogy a kivételek teljesen leállítsák a programot. Elképzelhető, hogy valami különleges dolgot szeretnél tenni, amikor egy kivételt emelnek. Ezt egy *try/except* blokkban teheted meg.

Itt van egy triviális példa: Tegyük fel, hogy egy listán iterálsz. 20 számot kell átnézned, de a lista felhasználói bevitelből származik, és lehet, hogy nincs benne 20 szám. Miután elérted a lista végét, a maradék számokat 0-ként szeretnéd értelmezni. Így teheted meg:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Akkor emelkedik, amikor egy nem létező indexet próbálsz elérni a listában
                do_stuff_with_number(0)
    
    catch_this()

Na, nem is volt olyan nehéz! Ezt bármilyen kivétellel megteheted. További részletekért a kivételek kezeléséről nézd meg a [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions) oldalt.

Exercise
--------

Kezeld az összes kivételt! Gondolj vissza az előző leckékre, hogy visszaadjátok a színész vezetéknevét.