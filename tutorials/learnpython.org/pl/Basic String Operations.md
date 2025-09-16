Strings są fragmentami tekstu. Mogą być zdefiniowane jako cokolwiek pomiędzy cudzysłowami:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Jak widzisz, pierwszą rzeczą, której się nauczyłeś, było wypisanie prostego zdania. To zdanie zostało zapisane przez Pythona jako string. Zamiast jednak natychmiastowo wypisywać ciągi znaków, zbadamy różne rzeczy, które można z nimi zrobić. Możesz także używać pojedynczych cudzysłowów, aby przypisać ciąg znaków. Jednak napotkasz problemy, jeżeli wartość, która ma być przypisana, sama zawiera pojedyncze cudzysłowy. Na przykład, aby przypisać ciąg znaków w tych nawiasach (pojedyncze cudzysłowy to ' '), musisz użyć tylko podwójnych cudzysłowów, jak poniżej

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

To wypisuje 12, ponieważ "Hello world!" ma 12 znaków, wliczając interpunkcję i spacje.

    astring = "Hello world!"
    print(astring.index("o"))

To wypisuje 4, ponieważ lokalizacja pierwszego wystąpienia litery "o" jest oddalona o 4 znaki od pierwszego znaku. Zauważ, że w frazie są dwa "o" - ta metoda rozpoznaje tylko pierwsze.

Ale dlaczego nie wydrukowało 5? Czy "o" nie jest piątym znakiem w ciągu? Aby wszystko uprościć, Python (i większość innych języków programowania) zaczyna liczyć od 0, a nie od 1. Więc indeks "o" to 4.

    astring = "Hello world!"
    print(astring.count("l"))

Dla tych z was, którzy używają dziwnych czcionek, to jest małe L, a nie liczba jeden. To zlicza liczbę "l" w ciągu znaków. W związku z tym powinno wydrukować 3.

    astring = "Hello world!"
    print(astring[3:7])

To wypisuje fragment ciągu znaków, zaczynając od indeksu 3, a kończąc na indeksie 6. Ale dlaczego 6, a nie 7? Ponownie, większość języków programowania działa w ten sposób - to ułatwia wykonywanie matematyki wewnątrz tych nawiasów.

Jeśli masz tylko jedną liczbę w nawiasach, otrzymasz pojedynczy znak na tym indeksie. Jeśli pominiesz pierwszą liczbę, ale zachowasz dwukropek, otrzymasz fragment od początku do liczby, którą zostawiłeś. Jeśli pominiesz drugą liczbę, otrzymasz fragment od pierwszej liczby do końca.

Możesz nawet używać liczb ujemnych wewnątrz nawiasów. Są one prostym sposobem, aby zacząć od końca ciągu, zamiast od początku. W ten sposób -3 oznacza "3. znak od końca".

    astring = "Hello world!"
    print(astring[3:7:2])

To wypisuje znaki z ciągu od 3 do 7, pomijając jeden znak. To jest rozszerzona składnia slice. Ogólny format to [początek:stop:skok].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Zauważ, że oba wydają ten sam wynik.

Nie ma funkcji takiej jak strrev w C do odwracania ciągu znaków. Ale dzięki wspomnianej wyżej składni slice możesz łatwo odwrócić ciąg znaków, robiąc to tak

    astring = "Hello world!"
    print(astring[::-1])

To

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

To tworzy nowy ciąg znaków, ze wszystkimi literami zamienionymi odpowiednio na wielkie i małe litery.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

To używane jest do określenia, czy ciąg zaczyna się od czegoś lub kończy się na czymś, odpowiednio. Pierwsze wydrukuje True, ponieważ ciąg zaczyna się od "Hello". Drugie wydrukuje False, ponieważ ciąg na pewno nie kończy się na "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

To dzieli ciąg na kilka ciągów zgrupowanych razem w liście. Ponieważ ten przykład dzieli przy spacji, pierwszy element na liście to "Hello", a drugi to "world!".

Ćwiczenie
--------

Spróbuj naprawić kod, aby wydrukować poprawne informacje, zmieniając ciąg znaków.