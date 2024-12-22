Egy Zárás egy olyan függvény objektum, amely megjegyzi az értékeket a külső hatókörökben akkor is, ha nincsenek jelen a memóriában. Lépésről lépésre bemutatjuk.

Először is, egy **Beágyazott függvény** egy olyan függvény, amely egy másik függvényen belül van definiálva. Nagyon fontos megjegyezni, hogy a beágyazott függvények hozzáférhetnek a külső hatókör változóihoz. Azonban, legalábbis Pythonban, ezek csak olvashatók. Azonban a "nonlocal" kulcsszó használatával ezeket a változókat módosíthatjuk.

Például:

    def transmit_to_space(message):
        "Ez a külső függvény"
        def data_transmitter():
            "A beágyazott függvény"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Teszt üzenet"))

Ez jól működik, mivel a 'data_transmitter' függvény hozzáférhet a 'message' változóhoz. A "nonlocal" kulcsszó használatának bemutatására, tekintsük a következő példát:

    def print_msg(number):
        def printer():
            "Itt használjuk a nonlocal kulcsszót"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

A nonlocal kulcsszó nélkül a kimenet "3 9" lenne, azonban a használatával "3 3" lesz, vagyis a "number" változó értéke módosul.

Most pedig térjünk át arra, hogy a függvény objektumot adjuk vissza ahelyett, hogy a beágyazott függvényt meghívnánk. (Ne felejtsük el, hogy a függvények is objektumok. (Ez Python.))

    def transmit_to_space(message):
        "Ez a külső függvény"
        def data_transmitter():
            "A beágyazott függvény"
            print(message)
        return data_transmitter

És így hívjuk meg a függvényt:


      def transmit_to_space(message):
        "Ez a külső függvény"
        def data_transmitter():
            "A beágyazott függvény"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Égesd fel a Napot!")
  	  fun2()

Habár a "transmit_to_space()" végrehajtása befejeződött, az üzenet megmaradt. Ezt a technikát, amely során az adatok kötődnek bizonyos kódhoz még az eredeti függvények befejezése után is, zárásnak nevezik Pythonban.

ELŐNY : A zárások elkerülhetik a globális változók használatát és biztosítanak valamilyen adat elrejtést. (Például, amikor kevés metódus van egy osztályban, használjunk zárásokat helyette).

Ezenkívül a Python dekorátorok széleskörűen használják a zárásokat.

Exercise
--------

Készíts egy beágyazott ciklust és egy Python zárást olyan függvények előállításához, amelyek sokszorozó függvényeket hoznak létre zárásokkal. Vagyis zárások használatával létre lehet hozni olyan függvényeket, mint például multiply_with_5() vagy multiply_with_4() zárásokkal.