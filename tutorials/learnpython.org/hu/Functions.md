### Mik azok a függvények?

A függvények kényelmes módot jelentenek a kód hasznos blokkokra való felosztására, amely lehetővé teszi számunkra a kódunk rendezését, olvashatóbbá tételét, újrafelhasználását, és időmegtakarítást eredményez. Emellett a függvények kulcsfontosságú módot biztosítanak az interfészek definiálására, így a programozók megoszthatják a kódjukat.

### Hogyan írjunk függvényeket Pythonban?

Ahogy azt a korábbi oktatóanyagokban láttuk, a Python blokkokat használ.

Egy blokk a következő formátumú kódrész:

    block_head:
        1st block line
        2nd block line
        ...

Ahol a blokk sorai több Python kódot tartalmaznak (akár egy másik blokkot is), és a blokk fejléce a következő formátumú:
block_keyword block_name(argument1,argument2, ...)
Azokat a blokk kulcsszavakat már ismered, mint például az "if", "for", és "while".

A függvényeket Pythonban a "def" blokk kulcsszóval lehet definiálni, amelyet a függvény neve követ mint blokk név.
Például:

    def my_function():
        print("Hello From My Function!")


A függvények paramétereket is fogadhatnak (a hívó által átadott változók).
Például:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


A függvények értéket is visszaadhatnak a hívónak a 'return' kulcsszó használatával.
Például:

    def sum_two_numbers(a, b):
        return a + b

### Hogyan hívjunk meg függvényeket Pythonban?

Egyszerűen írd le a függvény nevét a zárójelek következésében, a szükséges argumentumokkal a zárójelek között.
Például, hívjuk meg a fent írt függvényeket (a korábbi példában):

    # Határozzuk meg a 3 függvényünket
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # Nyomtassunk egy egyszerű üdvözletet
    my_function()

    # Nyomtatás - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # ezen sor után x értéke 3 lesz!
    x = sum_two_numbers(1,2)  


Exercise
--------

Ebben a gyakorlatban egy meglévő függvényt fogsz használni, miközben sajátodat is hozzáadod, hogy egy teljesen működő programot hozz létre.

1. Adj hozzá egy `list_benefits()` nevű függvényt, amely az alábbi sztringlistát adja vissza: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Adj hozzá egy `build_sentence(info)` nevű függvényt, amely egyetlen argumentumot fogad, ami egy sztringet tartalmaz, és egy olyan mondatot ad vissza, amely az adott sztringgel kezdődik, és a " is a benefit of functions!" sztringgel végződik.

3. Futtasd és nézd meg, hogy az összes függvény együtt működik!