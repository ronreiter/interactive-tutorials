Zwykle definiujemy funkcję za pomocą słowa kluczowego def w dowolnym miejscu w kodzie i wywołujemy ją, gdy tylko potrzebujemy jej użyć.

    def sum(a, b):
        return a + b

    a = 1
    b = 2
    c = sum(a, b)
    print(c)

Zamiast definiować funkcję gdzieś w kodzie i wywoływać ją, możemy użyć funkcji lambda w Pythonie, które są funkcjami liniowymi definiowanymi w miejscu, w którym ich używamy. Dzięki temu nie musimy deklarować funkcji gdzieś w kodzie i wracać do niej tylko dla jednorazowego użycia.

Nie muszą mieć nazwy, więc są również nazywane funkcjami anonimowymi. Definiujemy funkcję lambda przy użyciu słowa kluczowego lambda.

    your_function_name = lambda inputs : output

Tak więc powyższy przykład sumy używając funkcji lambda wyglądałby tak,

    a = 1
    b = 2
    sum = lambda x, y : x + y
    c = sum(a, b)
    print(c)

Tutaj przypisujemy funkcję lambda do zmiennej **sum**, a po podaniu argumentów, tj. a i b, działa ona jak normalna funkcja.



Ćwiczenie
--------
Napisz program używający funkcji lambda do sprawdzania, czy liczba w danej liście jest nieparzysta. Dla każdego elementu wydrukuj "True", jeśli liczba jest nieparzysta lub "False", jeśli nie.