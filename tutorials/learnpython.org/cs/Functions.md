### Co jsou funkce?

Funkce jsou pohodlný způsob, jak rozdělit váš kód na užitečné bloky, což nám umožňuje uspořádat náš kód, učinit ho čitelnějším, znovu použít a ušetřit čas. Také funkce jsou klíčovým způsobem, jak definovat rozhraní, takže programátoři mohou sdílet svůj kód.

### Jak píšete funkce v Pythonu?

Jak jsme viděli v předchozích tutoriálech, Python využívá bloky.

Blok je oblast kódu napsaná ve formátu:

    block_head:
        1. řádek bloku
        2. řádek bloku
        ...

Kde řádek bloku je více Python kódu (dokonce další blok) a hlava bloku je ve formátu:
block_keyword block_name(argument1,argument2, ...)
Klíčová slova, která již znáte, jsou "if", "for", a "while".

Funkce v Pythonu jsou definovány pomocí klíčového slova "def", následovaného názvem funkce jako názvem bloku.
Například:

    def my_function():
        print("Hello From My Function!")


Funkce mohou také přijímat argumenty (proměnné předané volajícímu funkce).
Například:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Funkce mohou vrátit hodnotu volajícímu pomocí klíčového slova 'return'.
Například:

    def sum_two_numbers(a, b):
        return a + b

### Jak voláte funkce v Pythonu?

Jednoduše napište jméno funkce následované (), umístěním jakýchkoliv potřebných argumentů do závorek.
Například, zavolejme funkce napsané výše (v předchozím příkladu):

    # Definujeme naše 3 funkce
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # tiskne jednoduché pozdravy
    my_function()

    # tiskne - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # po této lince bude x mít hodnotu 3!
    x = sum_two_numbers(1,2)  


Cvičení
--------

V tomto cvičení použijete existující funkci a přidáte vlastní funkci pro vytvoření plně funkčního programu.

1. Přidejte funkci s názvem `list_benefits()`, která vrátí následující seznam řetězců: "Více organizovaný kód", "Čitelnější kód", "Snazší opětovné použití kódu", "Umožňuje programátorům sdílet a propojit kód dohromady"

2. Přidejte funkci s názvem `build_sentence(info)`, která přijímá jediný argument obsahující řetězec a vrací větu začínající daným řetězcem a končící řetězcem " je výhoda funkcí!"

3. Spusťte a uvidíte, jak všechny funkce pracují společně!