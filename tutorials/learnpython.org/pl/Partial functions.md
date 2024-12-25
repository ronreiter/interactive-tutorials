Możesz tworzyć funkcje częściowe w Pythonie, używając funkcji partial z biblioteki functools.

Funkcje częściowe pozwalają na utworzenie funkcji z x parametrami jako funkcji z mniejszą liczbą parametrów i ustalonymi wartościami dla funkcji o ograniczonej liczbie parametrów.

Import wymagany:

    from functools import partial

Ten kod zwróci 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Ważna uwaga: domyślne wartości będą zastępować zmienne zaczynając od lewej. 2 zastąpi x.
y będzie równe 4, gdy wywołane zostanie dbl(4). W tym przykładzie nie ma to znaczenia, ale ma w poniższym przykładzie.

Ćwiczenie
--------
Edytuj funkcję, wywołując partial() i zastępując pierwsze trzy zmienne w func(). Następnie użyj nowej funkcji częściowej, podając tylko jedną zmienną wejściową, tak aby wynik był równy 60.