Generátorokat nagyon könnyű megvalósítani, de kicsit nehéz megérteni.

A generátorokat iterátorok létrehozására használják, de egy más megközelítéssel. A generátorok egyszerű függvények, amelyek egy speciális módon egy iterálható elemek halmazát adják vissza, egyesével.

Amikor egy elemhalmazon való iterálás elkezdődik a for utasítással, a generátor fut. Amint a generátor függvénykódja eléri a "yield" utasítást, a generátor visszaadja a vezérlést a for ciklusnak, egy új értékkel az elemek halmazából. A generátor függvény annyi értéket generálhat (esetleg végtelen sokat), amennyit csak akar, mindegyiket egymás után adva vissza.

Itt van egy egyszerű példa egy generátor függvényre, amely 7 véletlen egész számot ad vissza:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

Ez a függvény maga dönti el, hogyan generálja a véletlen számokat, és egyesével hajtja végre a yield utasításokat, köztük szünetet tartva a vezérlés visszaadása érdekében a fő for ciklusnak.

Exercise
--------

Írj egy generátor függvényt, amely a Fibonacci sorozatot adja vissza. Ezeket a következő képlettel számítják ki: A sorozat első két száma mindig 1, és minden következő visszaadott szám az utolsó két szám összege.
Tipp: Használhatsz-e csak két változót a generátor függvényben? Ne feledd, hogy a hozzárendelések egyszerre történhetnek. A kód

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

egyidejűleg cseréli a és b értékeit.