Kiedy programujesz, błędy się zdarzają. To po prostu fakt życia. Może użytkownik podał błędne dane wejściowe. Może zasób sieciowy był niedostępny. Może programowi zabrakło pamięci. Albo programista mógł nawet popełnić błąd!

Rozwiązaniem Pythona na błędy są wyjątki. Mogłeś wcześniej zauważyć wyjątek.

    print(a)
    
    #błąd
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Ups! Zapomniano przypisać wartość do zmiennej 'a'.

Ale czasami nie chcesz, aby wyjątki całkowicie zatrzymywały program. Może chcesz zrobić coś specjalnego, gdy wyjątek zostanie zgłoszony. Jest to realizowane w bloku *try/except*.

Oto prosty przykład: Załóżmy, że iterujesz po liście. Musisz iterować po 20 liczbach, ale lista jest tworzona z danych wejściowych użytkownika i może nie mieć 20 liczb. Kiedy dotrzesz do końca listy, chcesz, aby pozostałe liczby były interpretowane jako 0. Oto jak możesz to zrobić:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Podniesiony, gdy próbujemy uzyskać dostęp do nieistniejącego indeksu listy
                do_stuff_with_number(0)
    
    catch_this()

Tam, to nie było takie trudne! Możesz to zrobić z każdym wyjątkiem. Po więcej szczegółów na temat obsługi wyjątków zajrzyj do [Dokumentacji Pythona](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Ćwiczenie
--------

Obsłuż wszystkie wyjątki! Przypomnij sobie poprzednie lekcje, aby zwrócić nazwisko aktora.