A stringek szövegek darabjai. Bármilyen idézőjelbe tett szöveg stringnek tekinthető:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Amint látható, az első dolog, amit megtanultál, egy egyszerű mondat kiíratása volt. Ezt a mondatot a Python egy stringként tárolta. Azonban, ahelyett hogy azonnal kiírnánk a stringeket, felfedezzük, hogy milyen különféle dolgokat tehetünk velük.
Egyszeres idézőjeleket is használhatsz egy string hozzárendeléséhez. Ugyanakkor problémákba ütközhetsz, ha az érték, amit hozzárendelsz, maga is egyszeres idézőjeleket tartalmaz. Például ha a zárójelben lévő stringet (egyszeres idézőjelek vannak ' ') szeretnéd hozzárendelni, csakis dupla idézőjelek használatával teheted meg, így

    astring = "Hello world!"
    print("egyszeres idézőjelek vannak ' '")

    print(len(astring))

Ez 12-t fog kiírni, mivel a "Hello world!" 12 karakter hosszú, beleértve az írásjeleket és a szóközöket.

    astring = "Hello world!"
    print(astring.index("o"))

Ez 4-et ír ki, mivel az "o" betű első előfordulásának helye 4 karakterre van az első karaktertől. Figyeld meg, hogy valójában két "o" is van a mondatban - ez a módszer csak az elsőt ismeri fel.

De miért nem 5-öt írt ki? Nem az "o" az ötödik karakter a stringben? Hogy egyszerűbb legyen, a Python (és a legtöbb más programozási nyelv) 0-tól kezdi a számozást, nem 1-től. Tehát az "o" indexe 4.

    astring = "Hello world!"
    print(astring.count("l"))

Azok számára, akik vicces betűtípusokat használnak, ez egy kisbetűs L, nem egyes szám. Ez megszámolja az "l" betűk számát a stringben. Ennélfogva 3-at kell kiírnia.

    astring = "Hello world!"
    print(astring[3:7])

Ez a string egy szeletét írja ki, a 3-as indextől kezdődően, és a 6-os indexig, de a 7-es indexet nem beleértve. De miért 6 és nem 7? Ismétlem, a legtöbb programozási nyelv így működik - ez megkönnyíti a számolást a zárójelek között.

Ha csak egy szám van a zárójelben, akkor az adott indexen lévő egyetlen karaktert adja vissza. Ha kihagyod az első számot, de a kettőspontot meghagyod, akkor egy szeletet ad vissza az elejétől a benne meghagyott számig. Ha kihagyod a második számot, akkor egy szeletet ad vissza az első számtól a végéig.

Még negatív számokat is betehetsz a zárójelbe. Ezek egy egyszerű módjai annak, hogy a string végéről kezdd a számolást az eleje helyett. Ily módon a -3 azt jelenti, hogy "a harmadik karakter a végétől".

    astring = "Hello world!"
    print(astring[3:7:2])

Ez a string karaktereinek kiírását jelenti a 3-tól 7-ig, minden második karaktert kihagyva. Ez egy kibővített szelet szintaxis. Az általános forma [kezdés:megállás:lépés].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Megjegyzendő, hogy mindkettő ugyanazt az eredményt adja

Nincs olyan függvény, mint a strrev a C-ben, amely visszafordít egy stringet. De a fent említett szelet szintaxissal könnyen megfordíthatsz egy stringet így

    astring = "Hello world!"
    print(astring[::-1])

Ez

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Ezek egy új stringet hoznak létre, ahol az összes betű nagybetűsre, illetve kisbetűsre van alakítva.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Ez arra van, hogy megállapítsd, hogy a string valamivel kezdődik vagy valamivel végződik. Az első kiírja, hogy True, mivel a string "Hello"-val kezdődik. A második kiírja, hogy False, mivel a string bizonyosan nem végződik "asdfasdfasdf"-fel.

    astring = "Hello world!"
    afewwords = astring.split(" ")

Ez a stringet több stringre darabolja, amelyeket egy listában csoportosít. Mivel ebben a példában szóköznél történik a darabolás, a lista első eleme "Hello", a második pedig "world!" lesz.

Exercise
--------

Próbáld megjavítani a kódot, hogy a megfelelő információkat írassa ki a string megváltoztatásával.