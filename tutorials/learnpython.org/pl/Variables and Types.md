Python jest w pełni zorientowany obiektowo i nie jest "statycznie typowany". Nie musisz deklarować zmiennych przed ich użyciem ani określać ich typu. Każda zmienna w Pythonie jest obiektem.

Ten samouczek omówi kilka podstawowych typów zmiennych.

### Numbers
Python obsługuje dwa typy liczb - całkowite (liczby całkowite) i zmiennoprzecinkowe (dziesiętne). (Obsługuje również liczby zespolone, które nie będą omawiane w tym samouczku).

Aby zdefiniować liczbę całkowitą, użyj następującej składni:

    myint = 7
    print(myint)

Aby zdefiniować liczbę zmiennoprzecinkową, możesz użyć jednej z następujących notacji:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

Ciągi znaków definiuje się używając pojedynczych lub podwójnych cudzysłowów.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

Różnica między tymi dwoma polega na tym, że używanie podwójnych cudzysłowów ułatwia wstawianie apostrofów (w przeciwnym razie zakończyłyby one ciąg znaków, jeśli używane są pojedyncze cudzysłowy)

    mystring = "Don't worry about apostrophes"
    print(mystring)

Istnieją dodatkowe wariacje dotyczące definiowania ciągów znaków, które ułatwiają wstawianie takich rzeczy jak powroty karetki, backslashes i znaki Unicode. Są one poza zakresem tego samouczka, ale są omówione w [dokumentacji Pythona](http://docs.python.org/tutorial/introduction.html#strings "Ciągi znaków w samouczku Python").

Proste operatory można wykonywać na liczbach i ciągach znaków:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Przypisania mogą być wykonywane na więcej niż jednej zmiennej "jednocześnie" w tej samej linii, tak jak tutaj

    a, b = 3, 4
    print(a, b)

Mieszanie operatorów między liczbami a ciągami znaków nie jest obsługiwane:

    # To nie zadziała!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Ćwiczenie
--------

Celem tego ćwiczenia jest stworzenie ciągu znaków, liczby całkowitej i liczby zmiennoprzecinkowej. Ciąg znaków powinien być nazwany `mystring` i zawierać słowo "hello". Liczba zmiennoprzecinkowa powinna być nazwana `myfloat` i zawierać liczbę 10.0, a liczba całkowita powinna być nazwana `myint` i zawierać liczbę 20.