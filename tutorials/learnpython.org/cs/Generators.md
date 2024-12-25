Generátory jsou velmi snadno implementovatelné, ale je trochu obtížné je pochopit.

Generátory se používají k vytváření iterátorů, ale s jiným přístupem. Generátory jsou jednoduché funkce, které vracejí iterovatelné množiny položek, jednu po druhé, zvláštním způsobem.

Když začíná iterování nad množinou položek pomocí příkazu for, spustí se generátor. Jakmile kód funkce generátoru dosáhne příkazu "yield", generátor předá své provádění zpět do smyčky for a vrátí novou hodnotu z množiny. Generátorová funkce může generovat tolik hodnot (možná nekonečně), kolik chce, a vrátí každou ve svém pořadí.

Zde je jednoduchý příklad generátorové funkce, která vrací 7 náhodných celých čísel:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

Tato funkce se sama rozhoduje, jak generovat náhodná čísla, a vykonává příkazy yield po jednom, přičemž mezi nimi pozastavuje vykonávání, aby se vrátila do hlavní smyčky for.

Cvičení
--------

Napište generátorovou funkci, která vrací Fibonacciho řadu. Ty jsou vypočítávány podle následujícího vzorce: První dvě čísla řady jsou vždy rovna 1 a každé následující číslo je součtem posledních dvou čísel.
Nápověda: Můžete použít pouze dvě proměnné v generátorové funkci? Pamatujte, že přiřazení může být provedeno současně. Kód

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

současně přepne hodnoty a a b.