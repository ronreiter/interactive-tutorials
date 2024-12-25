### Czym są funkcje?

Funkcje to wygodny sposób na podzielenie kodu na użyteczne bloki, co pozwala na uporządkowanie kodu, uczynienie go bardziej czytelnym, ponowne użycie oraz oszczędność czasu. Funkcje są również kluczowym sposobem definiowania interfejsów, dzięki którym programiści mogą się dzielić kodem.

### Jak pisać funkcje w Pythonie?

Jak widzieliśmy w poprzednich samouczkach, Python korzysta z bloków.

Blok to fragment kodu napisany w formacie:

    block_head:
        1st block line
        2nd block line
        ...

Gdzie linia bloku jest kolejnym kodem Pythona (nawet innym blokiem), a nagłówek bloku ma następujący format:
block_keyword block_name(argument1,argument2, ...)
Słowa kluczowe bloków, które już znasz, to "if", "for" i "while".

Funkcje w Pythonie są definiowane przy użyciu słowa kluczowego bloku "def", po którym następuje nazwa funkcji jako nazwa bloku.
Na przykład:

    def my_function():
        print("Hello From My Function!")


Funkcje mogą również przyjmować argumenty (zmienne przekazywane od wywołującego do funkcji).
Na przykład:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Funkcje mogą zwracać wartość do wywołującego przy użyciu słowa kluczowego 'return'.
Na przykład:

    def sum_two_numbers(a, b):
        return a + b

### Jak wywołać funkcje w Pythonie?

Wystarczy napisać nazwę funkcji, a następnie (), umieszczając wszelkie wymagane argumenty w nawiasach.
Na przykład, wywołajmy funkcje napisane powyżej (w poprzednim przykładzie):

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


Ćwiczenie
--------

W tym ćwiczeniu użyjesz istniejącej funkcji, a także dodając swoją własną, utworzysz w pełni funkcjonalny program.

1. Dodaj funkcję o nazwie `list_benefits()`, która zwróci następującą listę ciągów: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Dodaj funkcję o nazwie `build_sentence(info)`, która przyjmuje jeden argument zawierający ciąg i zwraca zdanie zaczynające się od danego ciągu i kończące ciągiem " is a benefit of functions!"

3. Uruchom i zobacz, jak wszystkie funkcje współpracują ze sobą!