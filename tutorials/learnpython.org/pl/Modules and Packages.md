W programowaniu moduł to część oprogramowania mająca określona funkcjonalność. 
Na przykład, podczas tworzenia gry w ping ponga, jeden moduł może być odpowiedzialny za logikę gry, a 
inny moduł rysuje grę na ekranie. Każdy moduł składa się z innego
pliku, który może być edytowany osobno.

### Pisanie modułów

Moduły w Pythonie to po prostu pliki Pythonowe z rozszerzeniem .py. Nazwa modułu jest taka sama jak nazwa pliku.
Pythonowy moduł może posiadać zestaw funkcji, klas, czy zmiennych zdefiniowanych i zaimplementowanych. 
Powyższy przykład obejmuje dwa pliki:

mygame/

- mygame/game.py

- mygame/draw.py

Skrypt Pythona `game.py` implementuje grę. Używa funkcji `draw_game` z pliku `draw.py`,
czyli inaczej mówiąc modułu `draw`, który implementuje logikę rysowania gry na ekranie.

Moduły są importowane z innych modułów przy użyciu polecenia `import`. W tym przypadku skrypt `game.py` może wyglądać tak:

    # game.py
    # importujemy moduł draw
    import draw
    
    def play_game():
        ...
    
    def main():
        result = play_game()
        draw.draw_game(result)
        
    # to oznacza, że jeśli ten skrypt zostanie uruchomiony, to
    # main() zostanie wykonana
    if __name__ == '__main__':
        main()

Moduł `draw` może wyglądać w ten sposób:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

W tym przypadku moduł `game` importuje moduł `draw`, co umożliwia używanie funkcji zaimplementowanych 
w tym module. Funkcja `main` używa lokalnej funkcji `play_game` do uruchomienia gry, a następnie 
rysuje wynik gry używając funkcji zaimplementowanej w module `draw` o nazwie `draw_game`. Aby użyć
funkcji `draw_game` z modułu `draw`, musimy określić w którym module funkcja jest
zaimplementowana, używając operatora kropki. Aby odwołać się do funkcji `draw_game` z modułu `game`,
musimy zaimportować moduł `draw`, a następnie wywołać `draw.draw_game()`. 

Gdy dyrektywa `import draw` jest uruchamiana, interpreter Python szuka pliku w katalogu, w którym skrypt był uruchamiany z nazwą modułu i sufiksem `.py`. W tym przypadku będzie szukał `draw.py`. Jeśli zostanie odnaleziony, zostanie zaimportowany. Jeśli nie zostanie odnaleziony, kontynuuje poszukiwania wśród modułów wbudowanych.

Możliwe, że zauważyłeś, że przy importowaniu modułu, tworzony jest plik `.pyc`. To jest skompilowany plik Pythona. 
Python kompiluje pliki do bajtkodu Pythona, aby nie musiał analizować plików za każdym razem, gdy moduły są ładowane. Jeśli istnieje plik `.pyc`, zostaje załadowany zamiast pliku `.py`. Proces ten jest przejrzysty dla użytkownika.

### Importowanie obiektów modułu do obecnej przestrzeni nazw

Przestrzeń nazw to system w którym każdy obiekt jest nazwany i może być dostępny w Pythonie. Importujemy funkcję `draw_game` do przestrzeni nazw głównego skryptu używając polecenia `from`.

    # game.py
    # importujemy moduł draw
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

Możliwe, że zauważyłeś, że w tym przykładzie, nazwa modułu nie poprzedza `draw_game`, ponieważ określiliśmy nazwę modułu używając polecenia `import`.

Zaletą tej notacji jest to, że nie musisz za każdym razem odnosić się do modułu. Jednak, przestrzeń nazw nie może mieć dwóch obiektów o tej samej nazwie, więc polecenie `import` może zastąpić istniejący obiekt w przestrzeni nazw.

### Importowanie wszystkich obiektów z modułu

Możesz użyć polecenia `import *` do zaimportowania wszystkich obiektów w module w ten sposób:

    # game.py
    # importujemy moduł draw
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

To może być nieco ryzykowne, ponieważ zmiany w module mogą wpływać na moduł, który go importuje, ale jest 
to krótsze i nie wymaga od Ciebie specyfikowania każdego obiektu, który chcesz zaimportować z modułu.

### Niestandardowa nazwa importu

Moduły mogą być ładowane pod dowolną nazwą, którą chcesz. Jest to przydatne, gdy importujesz moduł warunkowo,
aby użyć tej samej nazwy w reszcie kodu. 

Na przykład, jeśli masz dwa moduły `draw` z nieco innymi nazwami, możesz zrobić to w ten sposób:

    # game.py
    # importujemy moduł draw
    if visual_mode:
        # w trybie wizualnym rysujemy używając grafiki
        import draw_visual as draw
    else:
        # w trybie tekstowym wypisujemy tekst
        import draw_textual as draw
    
    def main():
        result = play_game()
        # to może być wizualne lub tekstowe w zależności od visual_mode
        draw.draw_game(result)

### Inicjalizacja modułu

Gdy moduł jest ładowany do działającego skryptu Pythona po raz pierwszy, jest inicjalizowany przez wykonanie kodu w module raz. Jeśli inny moduł w Twoim kodzie ponownie importuje ten sam moduł, nie zostanie on załadowany ponownie, więc lokalne zmienne wewnątrz modułu działają jako "singleton", co oznacza, że są inicjalizowane tylko raz.

Możesz wtedy użyć tego do inicjalizacji obiektów. 
Na przykład:

    # draw.py
    
    def draw_game():
        # przy czyszczeniu ekranu możemy użyć głównego obiektu ekranu inicjalizowanego w tym module
        clear_screen(main_screen)
        ...

    def clear_screen(screen):
        ...
        
    class Screen():
        ...

    # inicjalizujemy main_screen jako singleton
    main_screen = Screen()

### Rozszerzanie ścieżki ładowania modułu

Istnieje kilka sposobów, aby powiedzieć interpreterowi Pythona, gdzie szukać modułów, poza
domyślnym lokalnym katalogiem i modułami wbudowanymi. Możesz użyć zmiennej środowiskowej `PYTHONPATH`, aby określić dodatkowe katalogi, w których szukać modułów w ten sposób:

    PYTHONPATH=/foo python game.py

To wykonuje `game.py`, i umożliwia skryptowi ładowanie modułów z katalogu `foo`, jak i
z katalogu lokalnego.

Możesz również użyć funkcji `sys.path.append`. Wykonaj ją *przed* uruchomieniem polecenia `import`:

    sys.path.append("/foo")

Teraz katalog `foo` został dodany do listy ścieżek, w których szuka się modułów.

### Odkrywanie modułów wbudowanych

Sprawdź pełną listę modułów wbudowanych w standardowej bibliotece Pythona [tutaj](https://docs.python.org/3/library/).

Dwie bardzo ważne funkcje są przydatne podczas odkrywania modułów w Pythonie - funkcje `dir` i `help`.

Aby zaimportować moduł `urllib`, który umożliwia nam tworzenie oraz czytanie danych z URLi, `importujemy` moduł:

    # importujemy bibliotekę
    import urllib

    # używamy jej
    urllib.urlopen(...)
    
Możemy sprawdzić, które funkcje są zaimplementowane w każdym module, używając funkcji `dir`:

    >>> import urllib
    >>> dir(urllib)
    ['ContentTooShortError', 'FancyURLopener', 'MAXFTPCACHE', 'URLopener', '__all__', '__builtins__', 
    '__doc__', '__file__', '__name__', '__package__', '__version__', '_ftperrors', '_get_proxies', 
    '_get_proxy_settings', '_have_ssl', '_hexdig', '_hextochr', '_hostprog', '_is_unicode', '_localhost', 
    '_noheaders', '_nportprog', '_passwdprog', '_portprog', '_queryprog', '_safe_map', '_safe_quoters', 
    '_tagprog', '_thishost', '_typeprog', '_urlopener', '_userprog', '_valueprog', 'addbase', 'addclosehook', 
    'addinfo', 'addinfourl', 'always_safe', 'basejoin', 'c', 'ftpcache', 'ftperrors', 'ftpwrapper', 'getproxies', 
    'getproxies_environment', 'getproxies_macosx_sysconf', 'i', 'localhost', 'main', 'noheaders', 'os', 
    'pathname2url', 'proxy_bypass', 'proxy_bypass_environment', 'proxy_bypass_macosx_sysconf', 'quote', 
    'quote_plus', 'reporthook', 'socket', 'splitattr', 'splithost', 'splitnport', 'splitpasswd', 'splitport', 
    'splitquery', 'splittag', 'splittype', 'splituser', 'splitvalue', 'ssl', 'string', 'sys', 'test', 'test1', 
    'thishost', 'time', 'toBytes', 'unquote', 'unquote_plus', 'unwrap', 'url2pathname', 'urlcleanup', 'urlencode', 
    'urlopen', 'urlretrieve']

Kiedy znajdziemy funkcję w module, którą chcemy użyć, możemy przeczytać o niej więcej używając funkcji `help`, korzystając z interpretera Python:

    help(urllib.urlopen)

### Pisanie pakietów

Pakiety są przestrzeniami nazw zawierającymi wiele pakietów i modułów. To są po prostu katalogi, ale z pewnymi wymaganiami.

Każdy pakiet w Pythonie to katalog, który **MUSI** zawierać specjalny plik o nazwie `__init__.py`. Ten plik, który może być pusty, wskazuje że katalog w którym się znajduje jest pakietem Pythona. Dzięki temu może być importowany w ten sam sposób, co moduł.

Jeśli tworzymy katalog o nazwie `foo`, który wskazuje nazwę pakietu, możemy wtedy stworzyć moduł wewnątrz tego 
pakietu o nazwie `bar`. Następnie dodajemy plik `__init__.py` w środku katalogu `foo`.

Aby używać modułu `bar`, możemy zaimportować go na dwa sposoby:

    import foo.bar

lub:

    from foo import bar

W pierwszym przykładzie powyżej, musimy używać prefiksu `foo` za każdym razem, gdy uzyskujemy dostęp do modułu `bar`. W drugim przykładzie, nie musimy, ponieważ zaimportowaliśmy moduł do przestrzeni nazw naszego modułu.

Plik `__init__.py` może również decydować, które moduły pakiet eksportuje jako API, zachowując inne moduły jako wewnętrzne, przez nadpisanie zmiennej `__all__` w ten sposób:

    __init__.py:

    __all__ = ["bar"]

Ćwiczenie
--------

W tym ćwiczeniu wypisz alfabetycznie posortowaną listę wszystkich funkcji w module `re` zawierających słowo `find`.