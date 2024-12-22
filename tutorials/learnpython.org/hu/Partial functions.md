A Pythonban részleges függvényeket hozhatsz létre a functools könyvtár partial függvényének használatával.

A részleges függvények lehetővé teszik, hogy egy x paraméterrel rendelkező függvényt olyan függvényre vezessünk le, amely kevesebb paraméterrel és rögzített értékekkel rendelkezik a korlátozottabb függvény számára.

Szükséges importálás:

    from functools import partial

Ez a kód 8-at fog visszaadni.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # hozzon létre egy új függvényt, amely megszorozza 2-vel
    dbl = partial(multiply, 2)
    print(dbl(4))

Fontos megjegyzés: a kitöltő értékek balról kezdve fogják lecserélni a változókat. A 2 az x-et fogja lecserélni. y-nek 4 lesz az értéke, amikor a dbl(4) kerül meghívásra. Ebben a példában nem számít, de az alábbi példában igen.

Exercise
--------
Szerkeszd a megadott függvényt a partial() meghívásával, és a func() első három változójának kicserélésével. Ezután az új részleges függvény segítségével csak egy bemeneti változót használva nyomtasd ki, hogy az eredmény 60 legyen.