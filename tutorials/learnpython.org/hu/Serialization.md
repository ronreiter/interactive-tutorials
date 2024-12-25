Python beépített JSON könyvtárakat biztosít a JSON kódolására és dekódolására.

Python 2.5-ben a simplejson modult használják, míg Python 2.7-ben a json modult. Mivel ez az interpreter Python 2.7-et használ, a json modult fogjuk használni.

A json modul használatához először importálni kell:

    import json

Két alapvető formátum létezik a JSON adatok számára. Ezek lehetnek egy string formájában vagy az objektum adatszerkezetben. Az objektum adatszerkezete Pythonban listákból és szótárakból áll, amelyek egymásba vannak ágyazva. Az objektum adatszerkezete lehetővé teszi a python módszerek használatát (listák és szótárak esetén) az elemek hozzáadására, listázására, keresésére és eltávolítására az adatszerkezetből. A string formátum elsősorban arra szolgál, hogy adatokat továbbítsunk egy másik programba vagy betöltsük egy adatszerkezetbe.

Ahhoz, hogy a JSON-t visszatöltsük egy adatszerkezetbe, használjuk a "loads" metódust. Ez a metódus egy stringet vesz fel, és visszaalakítja azt a json objektum adatszerkezetévé:

    import json 
    print(json.loads(json_string))

Egy adatszerkezet JSON-ná kódolásához használjuk a "dumps" metódust. Ez a metódus egy objektumot vesz fel és visszaad egy stringet:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

A Python támogat egy saját adat-sorosítási módszert is, amit pickle-nek neveznek (és ennek gyorsabb alternatíváját, a cPickle-t).

Pontosan ugyanolyan módon használhatjuk.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Exercise--------

A gyakorlat célja, hogy kinyomtassuk a JSON stringet a "Me" : 800 kulcs-érték párral hozzáadottan.