Map, Filter i Reduce to paradygmaty programowania funkcyjnego. Pozwalają one programiście (czyli Tobie) pisać prostszy, krótszy kod, bez konieczności zajmowania się szczegółami, takimi jak pętle i rozgałęzienia.

Zasadniczo, te trzy funkcje pozwalają na zastosowanie funkcji na wielu iterowalnych jednocześnie. ```map``` i ```filter``` są wbudowane w Pythonie (w module ```__builtins__```) i nie wymagają importowania. ```reduce```, jednakże, musi być importowane, ponieważ znajduje się w module ```functools```. Przyjrzyjmy się bliżej, jak działają te funkcje, zaczynając od ```map```.

#### Map
Funkcja ```map()``` w Pythonie ma następującą składnię:

```map(func, *iterables)```

Gdzie ```func``` to funkcja, która zostanie zastosowana na każdym elemencie w ```iterables``` (niezależnie od ich ilości). Zauważ gwiazdkę (```*```) przy ```iterables```? Oznacza ona, że może być tak wiele iterowalnych, jak to tylko możliwe, o ile ```func``` wymaga dokładnie takiej liczby argumentów wejściowych. Zanim przejdziemy do przykładu, ważne jest, abyś zanotował następujące informacje:

1. W Pythonie 2 funkcja ```map()``` zwraca listę. W Pythonie 3 funkcja zwraca obiekt ```map``` który jest obiektem generatora. Aby uzyskać wynik jako listę, można wywołać wbudowaną funkcję ```list()``` na obiekcie map. Czyli: ```list(map(func, *iterables))```
2. Liczba argumentów do ```func``` musi być taka sama jak liczba wymienionych ```iterables```.

Zobaczmy, jak te zasady działają w praktyce na poniższych przykładach.

Powiedzmy, że mam listę (```iterable```) moich ulubionych imion zwierząt, wszystkie zapisane małymi literami i potrzebuję je w wersji wielkimi literami. Tradycyjnie, w normalnym Pythonie, zrobiłbym coś takiego:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Co spowodowałoby wyświetlenie ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Z funkcjami ```map()``` jest nie tylko łatwiej, ale także znacznie bardziej elastycznie. Robię po prostu tak:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Co również wyświetli ten sam wynik. Zauważ, że używając zdefiniowanej powyżej składni ```map()```, ```func``` w tym przypadku to ```str.upper``` a ```iterables``` to lista ```my_pets``` -- tylko jedno iterowalne. Zwróć również uwagę, że nie wywoływaliśmy funkcji ```str.upper``` (robiąc to: ```str.upper()```), ponieważ funkcja map robi to za nas dla _każdego elementu z listy ```my_pets```_.

Co jest bardziej istotne, to fakt, że funkcja ```str.upper``` z definicji wymaga tylko **jednego** argumentu i dlatego przekazaliśmy tylko **jedno** iterowalne. Więc, _jeśli funkcja, którą przekazujesz, wymaga dwóch, trzech lub n argumentów_, to _musisz przekazać dwa, trzy lub n iterowalnych do niej_. Wyjaśnię to na innym przykładzie.

Powiedzmy, że mam listę obszarów kół, które obliczyłem gdzieś, wszystkie zaokrąglone do pięciu miejsc po przecinku. I muszę zaokrąglić każdy element z listy do jego pozycji po przecinku, co oznacza, że muszę zaokrąglić pierwszy element z listy do jednego miejsca po przecinku, drugi element z listy do dwóch miejsc po przecinku, trzeci element z listy do trzech miejsc po przecinku, itd. Z ```map()``` to bułka z masłem. Zobaczmy, jak to działa.

Python błogosławi nas już wbudowaną funkcją ```round()```, która przyjmuje dwa argumenty -- liczbę do zaokrąglenia i liczbę miejsc po przecinku, do której należy zaokrąglić liczbę. Tak więc, skoro funkcja wymaga **dwóch** argumentów, musimy przekazać **dwa** iterowalne.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Widzisz piękno w ```map()```? Czy możesz sobie wyobrazić, jaką elastyczność to wzbudza?

Funkcja ```range(1, 7)``` działa jako drugi argument do funkcji ```round``` (liczba wymaganych miejsc dziesiętnych na iterację). Tak więc, gdy ```map``` iteruje przez ```circle_areas```, podczas pierwszej iteracji, pierwszy element z ```circle_areas```, ```3.56773``` jest przekazywany wraz z pierwszym elementem z ```range(1,7)```, ```1``` do ```round```, co powoduje, że w rezultacie otrzymujemy ```round(3.56773, 1)```. Podczas drugiej iteracji, drugi element z ```circle_areas```, ```5.57668``` wraz z drugim elementem z ```range(1,7)```, ```2``` jest przekazywany do ```round```, co powoduje, że w rezultacie otrzymujemy ```round(5.57668, 2)```. Tak dzieje się aż do końca listy ```circle_areas```.

Jestem pewny, że zastanawiasz się: „Co się stanie, jeśli przekażę iterowalne krótsze lub dłuższe niż długość pierwszego iterowalnego? Tzn., co jeśli przekażę ```range(1, 3)``` lub ```range(1, 9999)``` jako drugie iterowalne w powyższej funkcji”. I odpowiedź jest prosta: nic! Okej, to nie do końca prawda. „Nic” dzieje się w tym sensie, że funkcja ```map()``` nie zgłosi żadnego wyjątku, po prostu będzie iterować nad elementami, aż nie będzie mogła znaleźć drugiego argumentu dla funkcji, wtedy po prostu przestanie i zwróci wynik.

Na przykład, jeśli ocenisz ```result = list(map(round, circle_areas, range(1, 3)))```, nie otrzymasz żadnego błędu, nawet gdy długość ```circle_areas``` i długość ```range(1, 3)``` różnią się. Zamiast tego, to co robi Python: Bierze pierwszy element z ```circle_areas``` i pierwszy element z ```range(1,3)``` i przekazuje je do ```round```. ```round``` oblicza to, a następnie zapisuje wynik. Potem przechodzi do drugiej iteracji, drugiego elementu z ```circle_areas``` i drugiego elementu z ```range(1,3)```, ```round``` znowu to zapisuje. Teraz, w trzeciej iteracji (```circle_areas``` ma trzeci element), Python bierze trzeci element z ```circle_areas```, a potem próbuje wziąć trzeci element z ```range(1,3)```, ale ponieważ ```range(1,3)``` nie ma trzeciego elementu, Python po prostu przestaje i zwraca wynik, który w tym przypadku to ```[3.6, 5.58]```.

Śmiało, spróbuj tego.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)


To samo dzieje się, jeśli ```circle_areas``` jest krótsze niż długość drugiego iterowalnego. Python po prostu przestaje, gdy nie może znaleźć kolejnego elementu w jednym z iterowalnych. 

Aby skonsolidować naszą wiedzę o funkcji ```map()```, zamierzamy użyć jej do zaimplementowania własnej funkcji ```zip()```. Funkcja ```zip()``` to funkcja, która bierze pewną ilość iterowalnych i tworzy z nich krotki zawierające każdy z elementów w iterowalnych. Podobnie jak ```map()```, w Pythonie 3 zwraca obiekt generatora, który może być łatwo skonwertowany na listę przez wywołanie wbudowanej funkcji ```list```. Użyj sesji interpretera poniżej, aby zorientować się w funkcji ```zip()``` przed stworzeniem swojej z użyciem ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Jako bonus, czy potrafisz zgadnąć, co by się stało w powyższej sesji, gdyby ```my_strings``` i ```my_numbers``` nie były tej samej długości? Nie? Spróbuj tego! Zmień długość jednego z nich.

Przejdźmy do naszej własnej funkcji ```zip()```!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Spójrz na to! Mamy ten sam wynik co ```zip```. 

Zauważyłeś również, że nawet nie musiałem tworzyć funkcji używając standardowego sposobu ```def my_function()```? Tak elastyczne jest ```map()```, a Python w ogóle! Po prostu użyłem funkcji ```lambda```. To nie oznacza, że używanie standardowej metody definicji funkcji (```def function_name()```) jest niedozwolone, nadal jest. Po prostu wolałem napisać mniej kodu (być "Pythonic").

To wszystko o map. Przejdźmy do ```filter()```

#### Filter
Podczas gdy ```map()``` przeprowadza każdy element w iterowalnym przez funkcję i zwraca wynik dla wszystkich elementów, które przeszły przez funkcję, ```filter()``` wymaga, aby funkcja zwracała wartości boolowskie (prawda lub fałsz) i przekazuje każdy element w iterowalnym przez funkcję, "filtrowując" te, które są fałszywe. Ma następującą składnię:

```filter(func, iterable)```

Następujące kwestie powinny być zanotowane dotyczące ```filter()```:

1. W przeciwieństwie do ```map()```, wymagane jest tylko jedno iterowalne.
2. Argument ```func``` musi zwracać typ boolowski. Jeśli tego nie zrobi, ```filter``` po prostu zwraca przekazane do niego ```iterable```. Ponieważ wymagane jest tylko jedno iterowalne, jest to zrozumiałe, że ```func``` musi przyjmować tylko jeden argument.
3. ```filter``` przekazuje każdy element w iterowalnym przez ```func``` i zwraca **tylko** te, które oceniają się jako prawda. Jest to, jak wynika z nazwy, "filtr".

Zobaczmy kilka przykładów

Poniższa lista (```iterable```) zawiera wyniki 10 uczniów z egzaminu z chemii. Wyszukajmy tych, którzy zdali z wynikiem ponad 75... za pomocą ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Następny przykład będzie detektorem palindromów. "Palindrom" to słowo, fraza lub sekwencja, która czytana do tyłu jest taka sama jak od przodu. Wyszukajmy słowa będące palindromami z krotki (```iterable```) podejrzanych palindromów.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Co powinno wyświetlić ```['madam', 'anutforajaroftuna']```.

Całkiem fajne, prawda? Na koniec ```reduce()```

#### Reduce
```reduce``` stosuje funkcję **dwóch argumentów** kumulatywnie do elementów iterowalnego, opcjonalnie rozpoczynając od początkowego argumentu. Ma następującą składnię:

```reduce(func, iterable[, initial])```

Gdzie ```func``` to funkcja, na której każdy element w ```iterable``` zostanie kumulatywnie zastosowany, a ```initial``` to opcjonalna wartość, która zostanie umieszczona przed elementami iterowalnego w obliczeniach i służy jako domyślna, gdy iterowalne jest puste. Należy zwrócić uwagę na poniższe kwestie dotyczące ```reduce()```:
1. ```func``` wymaga dwóch argumentów, z których pierwszy to pierwszy element w ```iterable``` (jeśli ```initial``` nie zostanie podane) i drugi element w ```iterable```. Jeśli ```initial``` zostanie podane, to staje się ono pierwszym argumentem dla ```func```, a pierwszy element w ```iterable``` staje się drugim elementem.
2. ```reduce``` redukuje (wiem, wybacz mi) ```iterable``` do pojedynczej wartości.

Jak zwykle, zobaczmy kilka przykładów.

Stwórzmy własną wersję wbudowanej funkcji Pythona ```sum()```. Funkcja ```sum()``` zwraca sumę wszystkich elementów w przekazanym do niej iterowalnym.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)


Wynik, jak się spodziewasz, to ```68```.

Więc, co się stało?

Jak zwykle, wszystko sprowadza się do iteracji: ```reduce``` bierze pierwszy i drugi element z ```numbers``` i przekazuje je do ```custom_sum``` odpowiednio. ```custom_sum``` oblicza ich sumę i zwraca ją do ```reduce```. ```reduce``` następnie bierze ten wynik i stosuje go jako pierwszy element do ```custom_sum``` oraz bierze następny element (trzeci) w ```numbers``` jako drugi element do ```custom_sum```. Robi to ciągle (kumulatywnie) aż do wyczerpania ```numbers```.

Zobaczmy, co się stanie, gdy użyję opcjonalnej wartości ```initial```.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)


Wynik, jak się spodziewasz, to ```78``` ponieważ ```reduce``` początkowo używa ```10``` jako pierwszego argumentu do ```custom_sum```.

To wszystko o Map, Reduce i Filter w Pythonie. Wykonaj poniższe ćwiczenia, aby upewnić się, że rozumiesz każdą funkcję.

Ćwiczenie
--------
W tym ćwiczeniu użyjesz każdej z funkcji ```map```, ```filter```, i ```reduce```, aby naprawić błędny kod.