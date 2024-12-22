A dekorátorok lehetővé teszik, hogy egyszerű módosításokat hajts végre meghívható objektumokon, mint például a [függvényeken](http://www.learnpython.org/en/Functions ""), [metódusokon vagy osztályokon](http://www.learnpython.org/en/Classes%20and%20Objects ""). Ebben az oktatóanyagban a függvényekkel foglalkozunk. A szintaxis

    @decorator
    def functions(arg):
        return "value"

azonos ezzel:

    def function(arg):
        return "value"
    function = decorator(function) # ez továbbítja a függvényt a dekorátorhoz, és újrahozzá rendel

Ahogy láthattad, a dekorátor egy másik függvény, amely egy függvényt vesz fel és egyet ad vissza. Például ezt teheted:

    def repeater(old_function):
        def new_function(*args, **kwds): # Lásd learnpython.org/en/Multiple%20Function%20Arguments, hogyan működik a *args és **kwds
            old_function(*args, **kwds) # futtatjuk a régi függvényt
            old_function(*args, **kwds) # kétszer futtatjuk
        return new_function # vissza kell adnunk az új függvényt, különben nem kerülne újrahozzá

Ez egy függvényt kétszer futtat.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Képes vagy megváltoztatni a kimenetet is.

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # módosítja a visszatérési értéket
        return new_function

változtasd meg a bemenetet

    def double_Ii(old_function):
        def new_function(arg): # csak akkor működik, ha a régi függvény egy argumentumot vár
            return old_function(arg * 2) # módosítja az átadott argumentumot
        return new_function

és végezz ellenőrzést.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Ez hibát okoz, ami jobb, mint helytelen dolgot tenni
            old_function(arg)
        return new_function

Tegyük fel, hogy a kimenetet egy változó mennyiséggel szeretnéd szorozni. Meghatározhatod a dekorátort, és így használhatod: 

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # visszaadja az új generátort
    
    # Használat
    @multiply(3) # a multiply nem generátor, de a multiply(3) az
    def return_num(num):
        return num
        
    # Most a return_num dekorált, és újrahozzá van rendelve
    return_num(5) # 15-öt kell visszaadnia

Bármit megtehetsz a régi függvénnyel, akár teljesen figyelmen kívül is hagyhatod! A haladó dekorátorok a doc stringet és az argumentumok számát is manipulálhatják.
Néhány érdekes dekorátorért látogass el ide: <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
Készíts egy dekorátor gyárat, amely egy dekorátort ad vissza, ami olyan függvényeket dekorál, amelyeknek egy argumentuma van. A gyárnak egy argumentumot kell fogadnia, egy típust, majd egy olyan dekorátort kell visszaadnia, amely gondoskodik arról, hogy a függvény ellenőrizze, hogy a bemenet helyes típusú-e. Ha hibás, nyomtassa ki: "Bad Type" (A valóságban hibát kellene dobnia, de hiba dobásával nem foglalkozik ez az oktatóanyag). Nézd meg az oktatóanyag kódját és várt kimenetét, ha zavart érzel (Én biztosan úgy érezném.) Az isinstance(object, type_of_object) vagy type(object) használata segíthet.