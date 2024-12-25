A Closure je objekt funkce, který si pamatuje hodnoty v obklopujících oblastech, i když nejsou v paměti. Pojďme na to krok za krokem.

Nejprve, **Zanořená Funkce** je funkce definovaná uvnitř jiné funkce. Je velmi důležité poznamenat, že vnořené funkce mohou přistupovat k proměnným ze svého obklopujícího prostoru. Nicméně, přinejmenším v pythonu, jsou pouze pro čtení. Nicméně, jeden může použít klíčové slovo "nonlocal" výslovně s těmito proměnnými, aby je mohl změnit.

Například:

    def transmit_to_space(message):
        "Toto je obklopující funkce"
        def data_transmitter():
            "Vnořená funkce"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test message"))

To funguje dobře, protože funkce 'data_transmitter' může přistupovat k 'message'. Pro demonstraci použití klíčového slova "nonlocal", zvažte toto

    def print_msg(number):
        def printer():
            "Tady používáme klíčové slovo nonlocal"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Bez klíčového slova nonlocal by výstup byl "3 9", nicméně, s jeho použitím dostaneme "3 3", tj. hodnota proměnné "number" se změní.

A co kdybychom vrátili objekt funkce namísto volání vnořené funkce uvnitř. (Pamatujte, že i funkce jsou objekty. (Je to Python.))

    def transmit_to_space(message):
        "Toto je obklopující funkce"
        def data_transmitter():
            "Vnořená funkce"
            print(message)
        return data_transmitter

A funkci voláme následovně:


      def transmit_to_space(message):
        "Toto je obklopující funkce"
        def data_transmitter():
            "Vnořená funkce"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Burn the Sun!")
  	  fun2()

I když bylo vykonávání funkce "transmit_to_space()" dokončeno, zpráva byla zachována. Tato technika, kterou jsou data připojena k nějakému kódu i po skončení těchto původních funkcí, se v pythonu nazývá closures.

VÝHODA: Closures mohou zabránit použití globálních proměnných a poskytují určitou formu skrývání dat. (Např. Když má třída několik metod, použijte closures.)

Také, dekorátory v Pythonu hojně využívají closures.

Exercise
--------

Vytvořte zanořenou smyčku a python closure, abyste vytvořili funkce pro získání více funkcí násobení pomocí closures. To znamená, že pomocí closures, jeden může vytvořit funkce pro vytvoření funkcí multiply_with_5() nebo multiply_with_4() pomocí closures.