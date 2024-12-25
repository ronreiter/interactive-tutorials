Python jest bardzo prostym językiem o niezwykle przejrzystej składni. Zachęca programistów do programowania bez konieczności stosowania kodu szablonowego. Najprostszą dyrektywą w Pythonie jest dyrektywa "print" - po prostu wypisuje ona linię (i zawiera nową linię, w przeciwieństwie do C).

Istnieją dwie główne wersje Pythona: Python 2 i Python 3. Python 2 i 3 różnią się dość znacząco. Ten samouczek używa Pythona 3, ponieważ jest bardziej poprawny semantycznie i wspiera nowsze funkcje.

Na przykład, jedna z różnic pomiędzy Pythonem 2 a 3 dotyczy instrukcji `print`. W Pythonie 2 "print" nie jest funkcją, dlatego jest wywoływana bez nawiasów. Jednak w Pythonie 3 jest funkcją i musi być wywoływana z nawiasami.

Aby wydrukować łańcuch znaków w Pythonie 3, wystarczy napisać:

    print("This line will be printed.")

### Indentation

Python używa wcięcia do bloków zamiast nawiasów klamrowych. Obsługiwane są zarówno tabulatory jak i spacje, ale standardowe wcięcie w standardowym kodzie Pythona wymaga użycia czterech spacji. Na przykład:

    x = 1
    if x == 1:
        # wcięcie na cztery spacje
        print("x is 1.")

Ćwiczenie
--------

Użyj funkcji "print", aby wydrukować linię "Hello, World!".