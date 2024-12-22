Normálisan a `def` kulcsszóval definiálunk egy függvényt valahol a kódban, és akkor hívjuk meg, amikor szükségünk van rá.

    def sum(a, b):
        return a + b

    a = 1
    b = 2
    c = sum(a, b)
    print(c)

Most, ahelyett hogy valahol definiálnánk a függvényt és meghívnánk, használhatjuk a Python lambda függvényeit, amelyek olyan inline függvények, amelyeket közvetlenül ott határozunk meg, ahol használjuk őket. Így nincs szükség a függvény deklarálására valahol, és a kód újra meglátogatására csak egy egyszeri használat miatt.

Nem szükséges nekik nevet adni, ezért hívják őket névtelen függvényeknek is. A lambda függvényt a `lambda` kulcsszóval definiáljuk.

    your_function_name = lambda inputs : output

Tehát a fenti összeg példáját lambda függvénnyel így nézne ki,

    a = 1
    b = 2
    sum = lambda x, y : x + y
    c = sum(a, b)
    print(c)

Itt a lambda függvényt az **sum** változóhoz rendeljük, és az argumentumok megadásakor, azaz a és b, úgy működik, mint egy normál függvény.



Exercise
--------
Írj egy programot lambda függvények használatával, amely ellenőrzi, hogy a megadott lista egy száma páratlan-e. Minden elemnél nyomtasd ki "True"-t, ha a szám páratlan, vagy "False"-t, ha nem.