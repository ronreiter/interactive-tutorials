Tutorial
--------

W Pythonie formatujemy prawie tak samo jak w C. Po komendzie `print` umieszczasz napis, który ma zostać wyświetlony. Oprócz zwykłego tekstu będzie zawierał także specjalne symbole np. `%s` czy `%d`. Po cudzysłowie zamykającym napis umieszczasz znak `%`, a po nim zmienne lub wyrażenia odpowiadające użytym wcześniej symbolom. Zmienne muszą być umieszczone w nawiasach `()`, chyba że jest tylko jedna zmienna. Wtedy możesz je pominąć.

Powiedzmy, że masz zmienną o nazwie `imie` z zawarta w niej nazwą użytkownika i chcesz wypisać właśnie dla niego tekst powitalny.

    imie = "Marek"
    print "Witaj, %s!" % imie
    imie = "Dorota"
    print "Witaj, %s!" % imie

Umieszczając symbol `%s` w formatowanym napisie informujemy komputer, że chcemy, aby odczytał zapisaną zmienną jako string. Jeśli chcemy wyświetlić liczbę całkowitą, używamy symbolu `%d`.

    # To wypisze "Marek ma 23 lata."
    imie = "Marek"
    wiek = 23
    print "%s ma %d lata." % (imie, wiek)

Jeżeli użyjesz symbolu `%s` na obiekcie, który nie jest tablicą, to zostanie automatycznie wywołana metoda `repr`. Pozwala na wyświetlenie zawartości obiektu.

    # To wypisze: Tablica: [1, 2, 3]
    MojaTab = [1,2,3]
    print "Tablica: %s" % MojaTab

Jeżeli zaś spróbujesz odczytać napis jako np. liczbę całkowitą to otrzymasz w efekcie błąd.

    imie = "Jacek"
    liczba = 4
    print "liczba = %d" % liczba
    print "imie = %s" % imie
    print "imie = %d" % imie
    # powyzsza linijka spowoduje blad wykonania

Zestaw danych, które mają być wypisane, może być zapisany wcześniej w swego rodzaju uporządkowanej tablicy, którą będziemy nazywać krotką (z ang. `tuple`). Krotki, w przeciwieństwie do tablic są niemutowalne – nie możemy zmienić ich zawartości.

    # tak tworzymy krotke
    dane = ("Dorota", 5, 32)

    print "%s mieszka w bloku nr %d w mieszkaniu %d" % dane

Poniżej znajduje się kilka podstawowych specyfikatorów, których znaczenie dobrze zapamiętać:

- `%s` – Napis (lub każdy inny obiekt, który ma reprezentację w formie napisu, np. liczba, tablica)
- `%d` – Liczby całkowite
- `%f` – Liczby rzeczywiste
- `%.<ilość cyfr>` – Liczba zmiennoprzecinkowa ze stałą liczbą cyfr po kropce.
- `%x/%X` – Liczby całkowite zapisane w systemie szesnastkowym (małe/duże litery)


Poniżej garść przykładów. Warto wkleić je do okna i zobaczyć jak się zachowa program.

    rzeczywista_1 = 4.34
    rzeczywista_2 = 54.432
    calkowita = 16

    print "rzeczywista_1 = %f" % rzeczywista_1
    print "rzeczywista_2 = %f" % rzeczywista_2
    print "rzeczywista_2 = %.1f" % rzeczywista_2
    print "W systemie szesnastkowym %d ma postac %X" % (calkowita, calkowita)

### Ćwiczenie

Za pomocą formatowania uzyskaj na wyjściu następujący tekst:
    Czesc Jacek i Darek. Temperatura na zewnatrz wynosi 44.4 stopnie Celsjusza.

Tutorial Code
-------------

dane = ("Jacek", "Darek", 44.4)
formatowany_napis = "Czesc"

print formatowany_napis % dane

Expected Output
---------------

Czesc Jacek i Darek. Temperatura na zewnatrz wynosi 44.4 stopnie Celsjusza.

Solution
--------
