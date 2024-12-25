Map, Filter és Reduce a funkcionális programozás paradigmái. Lehetővé teszik a programozó számára, hogy egyszerűbb, rövidebb kódot írjon anélkül, hogy szükségszerűen foglalkoznia kellene az olyan bonyolultságokkal, mint a ciklusok és az elágazások.

Alapvetően ez a három funkció lehetővé teszi, hogy egy függvényt alkalmazzunk több iterálandó elemre egyetlen lépésben. A ```map``` és a ```filter``` beépített Python funkciók (a ```__builtins__``` modulban találhatók) és nem igényelnek importálást. A ```reduce``` azonban importálást igényel, mivel a ```functools``` modulban található. Lássuk meg jobban, hogyan működnek, kezdve a ```map``` függvénnyel.

#### Map
A ```map()``` függvény szintaxisa Pythonban a következő:

```map(func, *iterables)```

Ahol a ```func``` az a függvény, amelyet az egyes elemekre az ```iterables``` (amennyi csak van) fog alkalmazni. Észrevetted a csillagot (```*```) az ```iterables``` előtt? Ez azt jelenti, hogy annyi iterálható elem lehet, amennyi csak lehetséges, amennyiben a ```func``` ennyi bemeneti argumentumot igényel. Mielőtt példákra térnénk, fontos megjegyezni a következőket:

1. A Python 2-ben a ```map()``` függvény egy listát ad vissza. A Python 3-ban viszont a függvény egy ```map object```-et ad vissza, amely egy generátor objektum. Ahhoz, hogy az eredményt listaként kapjuk meg, a beépített ```list()``` függvényt lehet meghívni a map objektumon. Azaz: ```list(map(func, *iterables))```
2. A ```func``` argumentumok száma meg kell, hogy egyezzen az ```iterables``` felsorolt elemeinek számával.

Lássuk, hogyan működnek ezek a szabályok a következő példákkal.

Tegyük fel, hogy van egy listám (```iterable```) a kedvenc háziállataim neveivel, mind kisbetűs, és nagybetűs formában szeretném őket. Hagyományosan, normál Python használatával valami ilyesmit tennék:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Amely kimeneteként így jelenne meg: ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

A ```map()``` függvényekkel nemcsak egyszerűbb, hanem sokkal rugalmasabb is. Egyszerűen ezt tenném:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Amely ugyanazt az eredményt adná. Megjegyzendő, hogy a meghatározott ```map()``` szintaxis használatával ebben az esetben a ```func``` az ```str.upper```, és az ```iterables``` a ```my_pets``` lista -- csupán egy iterálható elem. Fontos, hogy ne hívtuk meg az ```str.upper``` függvényt (így: ```str.upper()```), mivel a map függvény ezt megteszi nekünk a ```my_pets``` lista _egyik elemén sem_.

Ami még fontosabb megjegyezni, hogy az ```str.upper``` függvény definíció szerint csak **egy** argumentumot igényel, így csak **egy** iterálható elemet adtunk át neki. Tehát, _ha a függvény, amit átadsz, kettő, három vagy n argumentumot igényel_, akkor _kettő, három vagy n iterálható elemet kell átadnod neki_. Hadd tisztázzam ezt egy másik példával.

Tegyük fel, hogy van egy lista a kör területekkel, amiket valahol kiszámoltam, mind öt tizedesjegyre. És minden elemet a helyiérték tízedesjegyre kell kerekítenem, ami azt jelenti, hogy az első elemet egy tizedesjegyre, a másodikat két tizedesjegyre, a harmadikat három tizedesjegyre, stb. kell kerekítenem. A ```map()``` függvénnyel ez gyerekjáték. Lássuk, hogyan.

Python már megáldott bennünket a ```round()``` beépített függvénnyel, amely két argumentumot igényel: a kerekítendő számot és a kerekítendő szám tizedesjegyeinek számát. Tehát, mivel a függvény **két** argumentumot igényel, **két** iterálható elemet kell adnunk hozzá.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Látod a ```map()``` szépségét? El tudod képzelni, milyen rugalmasságot vált ki ez?

A ```range(1, 7)``` függvény a második argumentumként járul hozzá a ```round``` függvényhez (az egyes iterációkhoz szükséges tizedesjegyek száma szerint). Amint a ```map``` iterál a ```circle_areas``` elemein, az első iteráció során a ```circle_areas``` első eleme, ```3.56773``` és a ```range(1,7)``` első eleme, ```1``` is átadásra kerül a ```round``` függvénynek, így azt hatékonyan ```round(3.56773, 1)```-re teszi. A második iteráció során a második elem a ```circle_areas```-ból, ```5.57668``` és a második elem a ```range(1,7)```-ből, ```2``` átadásra kerül a ```round``` függvénynek, ezáltal a művelet ```round(5.57668, 2)``` lesz. Ez az iteráció addig folytatódik, ameddig el nem ér az ```circle_areas``` lista végére.

Biztosan azon gondolkodsz: „Mi történik, ha az egyik iterálható elemet kevesebbel vagy többel adom meg, mint a másik iterálhatót? Azaz mi történik, ha a ```range(1, 3)```-t vagy a ```range(1, 9999)```-t adom meg mint második iterálható elemet a fenti függvényben?”. A válasz egyszerű: semmi! Oké, ez nem igaz. A „semmi” azt jelenti, hogy a ```map()``` függvény nem generál semmilyen hibát, egyszerűen iterál az elemeken, amíg nem talál második argumentumot a függvényhez, ekkor egyszerűen megáll és visszatér az eredménnyel.

Például, ha a ```result = list(map(round, circle_areas, range(1, 3)))```-t értékesíted, nem kapsz hibát, még akkor sem, ha a ```circle_areas``` hossza és a ```range(1, 3)``` hossza eltér. Ehelyett Python ezt teszi: Az első elemet a ```circle_areas```-ból és az első elemet a ```range(1,3)```-ból átadja a ```round``` függvénynek. A ```round``` kiértékeli, majd elmenti az eredményt. Ezután a második iteráció, a második elem a ```circle_areas```-ból és a második elem a ```range(1,3)```-ból szintén mentésre kerül. Most, a harmadik iterációban (a ```circle_areas```-nak van harmadik eleme), Python megpróbálja megkeresni a harmadik elemet a ```range(1,3)```-ból, de mivel a ```range(1,3)```-nak nincs harmadik eleme, Python egyszerűen megáll és visszatér az eredménnyel, amely ebben az esetben egyszerűen ```[3.6, 5.58]``` lesz.

Próbáld ki!

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

Ugyanez történik, ha a ```circle_areas``` rövidebb, mint a második iterálható elemek hossza. Python egyszerűen megáll, ha nem találja a következő elemet valamelyik iterálható elemből.

A ```map()``` függvényről szerzett tudásunk megerősítése érdekében saját ```zip()``` függvényünket fogjuk megvalósítani. A ```zip()``` függvény egy olyan függvény, amely számos iterálható elemet vesz fel, és egy tuple-t készít, amely az iterálható elemek minden elemét tartalmazza. Mint a ```map()```, Python 3-ban ez egy generátor objektumot ad vissza, amelyet könnyen listára lehet konvertálni úgy, hogy a beépített ```list``` függvényt meghívjuk rá. Használjuk az alábbi interpreter munkamenetet a ```zip()``` megértéséhez, mielőtt saját magunkét készítenénk a ```map()```-pal.

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Bónuszként, tudnád tippelni, mi történne a fenti munkamenetben, ha a ```my_strings``` és a ```my_numbers``` nem azonos hosszúságúak? Nem? Próbáld ki! Változtasd meg egyikük hosszát.

Menjünk a saját egyedi ```zip()``` függvényünkre!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Csak nézd meg! Ugyanazt az eredményt kaptuk, mint a ```zip```.

Azt is észrevetted, hogy nem is kellett létrehoznom egy függvényt a ```def my_function()``` standard módszerrel? Ez a rugalmasság a ```map()```-ben, és általában a Pythonban! Egyszerűen lambda függvényt használtam. Ez nem azt jelenti, hogy a szokásos függvénydefiníciós módszer használata (azaz ```def function_name()```) nem megengedett, továbbra is az. Egyszerűen azért választottam kevesebb kód írását (legyek „pythonic”).

Ez minden a map függvényről. Most jöjjön a ```filter()```

#### Filter
Míg a ```map()``` minden elemet az iterálhatóból átfuttat egy függvényen, és visszaadja az összes elem eredményét, amely átment a függvényen, a ```filter()```, először is megköveteli a függvénytől, hogy logikai értékeket (true vagy false) adjon vissza, majd minden elemet az iterálhatóból átfuttat a függvényen, "kiszelektálva" azokat, amelyek hamisak. Ennek a szintaxisa a következő:

```filter(func, iterable)```

Fel kell jegyezni a következő pontokat a ```filter()```-rel kapcsolatban:

1. A különbség a ```map()```-hoz képest, hogy csak egy iterálható elem szükséges.
2. A ```func``` argumentum megköveteli, hogy logikai típust adjon vissza. Ha nem teszi, a ```filter``` egyszerűen visszaadja az általa kapott ```iterable```-t. Emellett, mivel csak egy iterálható szükséges, implicit módon a ```func``` csak egy argumentumot vár el.
3. A ```filter``` az iterálható minden elemét átadja a ```func```-nak, és csak azokat adja vissza, amelyek true értéket adnak vissza. Gondolj bele, ott van a nevükben - egy "filter".

Nézzünk néhány példát

A következő egy lista (```iterable```) tíz diák pontszámairól egy kémia vizsgán. Szelektáljuk ki azokat, akik több mint 75 ponttal mentek át...a ```filter```-t használva.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

A következő példa egy palindróma detektor lesz. A "palindróma" egy szó, kifejezés vagy sorozat, ami visszafelé olvasva is ugyanaz. Szelektáljuk ki a palindrómákat egy feltételezett palindrómákból álló tuple-ból (```iterable```).

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Amely azt kell hogy kiadja: ```['madam', 'anutforajaroftuna']```.

Elég menő, ugye? Végül a ```reduce()```.

#### Reduce
A ```reduce``` egy **két argumentumos** függvényt alkalmaz az iterálható elemekre kumulatívan, opcionálisan egy kezdő argumentummal indulva. Ennek a szintaxisa a következő:

```reduce(func, iterable[, initial])```

Ahol a ```func``` az a függvény, amelyre az ```iterable``` minden eleme kumulatív módon alkalmazásra kerül, és az ```initial``` az az opcionális érték, amely az iterálható elemek elejére kerül a számítás során, és alapértelmezett értékként szolgál, ha az iterálható üres. A következőket kell megjegyezni a ```reduce()```-ről:
1. A ```func``` két argumentumot igényel, amelyek közül az első az iterálható első eleme (ha az ```initial``` nincs megadva), és az iterálható második eleme. Ha az ```initial``` meg van adva, akkor ez lesz az első argumentum az ```func```-nak, és az iterálható első elem lesz a második elem.
2. A ```reduce``` "csökkenti" (tudom, bocsáss meg) az ```iterable``` elemeit egyetlen értékké. 

Mint mindig, nézzük meg a példákat.

Hozzuk létre a saját verziónkat a Python beépített ```sum()``` függvényéről. A ```sum()``` függvény visszaadja az átadott iterálható elemek összes elemének összegét.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

Az eredmény, ahogyan elvárható, ```68```.

Tehát mi történt?

Ahogy megszokhattuk, az iterációk a lényeg: A ```reduce``` fogja az első és második elemet a ```numbers``` listából, és átadja őket a ```custom_sum```-nak. A ```custom_sum``` kiszámítja azok összegét, és visszaküldi a ```reduce```-nak. A ```reduce``` ezután az eredményt első elemként alkalmazza a ```custom_sum```-hoz, és a következő elemet (harmadik) a ```numbers```-ból második elemként, amitől egy folyamat felgyorsul (kumulatív módon), amíg a ```numbers```-t ki nem merítik.

Lássuk, mi történik, ha opcionális ```initial``` értéket használok.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Az eredmény, ahogy elvárható, ```78```, mivel a ```reduce```, eleinte, a ```10```-et használja első argumentumként a ```custom_sum```-nak.

Ez minden a Python Map, Reduce, és Filter funkcióiról. Próbáld ki az alábbi gyakorlatokat, hogy biztosan megértsd mindegyik funkciót.

Exercise
--------
E gyakorlatban a ```map```, ```filter```, és ```reduce``` használatával kell javítanod hibás kódokat.