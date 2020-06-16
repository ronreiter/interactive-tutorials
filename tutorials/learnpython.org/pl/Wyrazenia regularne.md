Tutorial
--------

Wyrażenia regularne to pewne "wzorce", za pomocą których można opisać ciąg znaków. Za ich pomocą można określić z czego ma się dokładnie składać np. adres e-mail. Istnieje wiele notacji, które służą zapisywaniu wyrażeń regularnych i jedną z nich jest notacja Pythona. Aby skorzystać z narzędzi jakie one nam oferują, wystarczy zaimportować moduł `re`. Na początku rozważmy najprostszy możliwy przykład:

    import re

    tekst = """Wyobraz sobie, ze ten tekst zawiera numer
    PIN 9434 twojej karty do bankomatu, a ty wlasnie go
    zapomniales. Jak szybko go odnalezc?"""

    sciezka = r'\d\d\d\d'
    dopasowanie = re.search(sciezka, tekst)

    if dopasowanie: #Sprawdzamy czy udalo sie cos znalezc
        numer = dopasowanie.group()
        print numer

W linijce `sciezka = r'\d\d\d\d'` właśnie utworzyliśmy wyrażenie regularne.

Znak `r` przed `'` wyłącza zwykłe formatujące dzialanie `\`. Jest to bardzo ważne ponieważ wyrażenia regularne również buduje się z wykorzystaniem tego znaku. Dołączanie `r` przed każdym wyrażeniem jest powszechnie rekomendowane jako dobra praktyka programistyczna. Zapis `r'\d'` oznacza liczbę dziesiętną, natomiast `r'\d\d\d\d'` oznacza 4 następujące zaraz po sobie liczby dziesiętne. Funkcja `search` wyszukuje ciąg znaków i zwraca go w postaci specjalnego obiektu `Match`. Aby wydobyć z niego napis posługujemy się metodą `group()`.

Wyrażenia regularne są często używane przez programistów, ale są dosyć skomplikowane. Zanim się na nie zdecydujesz, poszukaj najpierw prostszych alternatyw. Poniżej kolejny przykład wyrażenia regularnego:

    r"^(From|To|Cc).*?python-list@python.org"

- Znak grotu `^` oznacza, że tekst musi być na początku lini. Następnie mamy słowa zgrupowane w nawiasie: `(From|To|Cc)` Teraz wiemy, że napis ma się zaczynać od jednego ze słów oddzielonych `|`. Ten znak, to operator "lub" (ang. _OR_).
- Natępne `.*?` oznacza niezachłanne dopasowanie znaków za wyjątkiem znaku `'\n'`. Dopasowanie niezachłanne to dopasowanie jak najmniejszej liczby znaków.
- Znak `.` oznacza każdy znak za wyjątkiem znaku nowej lini.
- `*` oznacza powtórzenie 0 lub więcej razy i znak `?` oznacza dopasowanie niezachłanne. 

Skonstruowane przez nas wyrażnie odpowiada dwum następującym napisom:

    From: python-list@python.org

    To: !asp]<,.      python-list@python.org

Kompletny opis składni wyrażeń regularnych znajduje się w [dokumentacji Pythona](https://docs.python.org/2.7/library/re.html#regular-expression-syntax).

Tutaj znajduje się przykład "poprawnego" wzorca opisującego adres email (jak jeden z występujących w poniższym ćwiczeniu): [wzorzec](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)

Tutorial Code
-------------
# przyklad
import re
# Ponizej jest dokonywana lekka optymalizacja naszego wyrazenia
pattern = re.compile(r"\[(on|off)\]")

# Teraz szukamy
re.search(pattern, "Mono: Playback 65 [75%] [-16.50dB] [on]")
# Zwroci obiekt Match
re.search(pattern, "Nada...:-(")
# Nic nie zwroci
# koniec przykladu

# Cwiczenie: skonstruj wyrazenie odpowiadajace adresowi email

def test_email(twoje_wyrazenie):
    wyrazenie = re.compile(twoje_wyrazenie)
    adresy = ["john@example.com", "python-list@python.org", '"wha.t.`1an?ug{}ly@email.com"']
    for adres in adresy:
        if not re.match(wyrazenie, adres):
            print "Nie udalo ci sie przyporzadkowac %s" % (adres)
        elif not twoje_wyrazenie:
            print "Nie wprowadziles wyrazenia do funkcji test_email"
        else:
            print "Dobrze"

wyrazenie = r"" # Tu wpisz swoje wyrazenie
test_email(wyrazenie)


Expected Output
---------------
Dobrze
Dobrze
Dobrze

Solution
--------
