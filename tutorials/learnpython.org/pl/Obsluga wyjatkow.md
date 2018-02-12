Tutorial
--------

Podczas programowania błędy zdarzają się co jakiś czas. Jest to po prostu część życia programisty.

Czasami użytkownik może podać złe dane. Zasoby sieciowe mogą być niedostępne. Może zabraknąć pamięci dla programu. W końcu programista mógł się nawet pomylić!

W Pythonie lekarstwem na to są tzw. wyjątki. Prawie na pewno nie widzisz ich po raz pierwszy.

    >>> print a
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Ups! Nie przypisaliśmy wartość do `a`.

Ale czasami nie chcesz, aby wyjątek całkowicie zatrzymał twój program. Może chcesz podjąć konkretne kroki, kiedy wystąpi błąd. Jest to robione w bloku *try/except*

Oto prosty przykład: Przypuśćmy, że przechodzisz przez tablicę. Potrzebujesz przejść przez co najmniej 20 liczb, ale lista pochodzi od użytkownika, który niekoniecznie może dać na wejście 20 liczb. Po tym, jak dotrzesz na koniec tablicy, chcesz aby brakujące liczby były interpretowane jako `0`. Aby to zrobić, możesz postąpić tak:

    for i in range(20):
        try:
            rob_cos_z_tablica(the_list[i])
        except IndexError: # Raised when accessing a non-existing index of a list
            rob_cos_z_tablica(0)

To nie było zbyt trudne! Możesz to zrobić z każdym wyjątkiem. Aby dowiedzieć się więcej na ten temat, zajrzyj do [dokumentacji Pythona](https://docs.python.org/2.7/tutorial/errors.html#handling-exceptions)

Tutorial Code
-------------
#Obsluz wszystkie wyjatki
aktor = {"imie": "Piotr Fronczewski", "opinia": "swietny"}

#Musisz ta funkcje zmodyfikowac tak, aby zwracala nazwisko aktora.
# W razie potrzeby przypomnij sobie poprzednie lekcje
def zwroc_nazwisko():
    return aktor["nazwisko"]

#Test kodu
zwroc_nazwisko()
print "Wszystkie wyjatki obsluzone! Dobra robota!"
print "Nazwisko aktora brzmi %s" % zwroc_nazwisko()

Expected Output
---------------
Wszystkie wyjatki obsluzone! Dobra robota!
Nazwisko aktora brzmi Fronczewski

Solution
--------
