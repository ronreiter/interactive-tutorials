Tutorial
--------

W Pythonie moduły są po prostu plikami z rozszerzeniem `py`, w których zawarto pewien zestaw funkcji. Moduły importujemy do swojego programu za pomocą komendy `import`. 

W [Dokumentacji Pythona](http://docs.python.org/2/library/) znajdziesz pełną listę wbudowanych modułów standardowej biblioteki Pythona.

Najpierw moduł jest ładowany w wykonujący się skrypt Pythona. Potem jego zawartość jest odczytywana tak, jakbyśmy to my napisali ten kod wcześniej. Bardzo często jeden moduł importuje inne. Jeśli zdarzy się, że interpreter dwa razy napotka polecenie dołączenia tego samego modułu, to drugie polecenie zostanie zignorowane.

Jeśli chcesz zaimportować moduł `urllib`, który pozwala nam na odczytywanie danych z URL, musisz użyć komendy `import`:

    # importowanie biblioteki
    import urllib

    # użyj jej metody urlopen()
    urllib.urlopen(...)

### Przeszukiwanie modułów

Kiedy chcemy przeglądnąć zawartość modułów w Pythonie z pomocą przychodzą nam dwie ważne funkcje – `dir` oraz `help`.

Za pomocą funkcji `dir` możemy zobaczyć, jakie funkcje zostały umieszczone w dowolnym module.

    >>> import urllib
    >>> dir(urllib)
    ['ContentTooShortError', 'FancyURLopener', 'MAXFTPCACHE', 'URLopener', '__all__', '__builtins__', '__doc__', '__file__', '__name__', '__package__', '__version__', '_ftperrors', '_get_proxies', '_get_proxy_settings', '_have_ssl', '_hexdig', '_hextochr', '_hostprog', '_is_unicode', '_localhost', '_noheaders', '_nportprog', '_passwdprog', '_portprog', '_queryprog', '_safe_map', '_safe_quoters', '_tagprog', '_thishost', '_typeprog', '_urlopener', '_userprog', '_valueprog', 'addbase', 'addclosehook', 'addinfo', 'addinfourl', 'always_safe', 'basejoin', 'c', 'ftpcache', 'ftperrors', 'ftpwrapper', 'getproxies', 'getproxies_environment', 'getproxies_macosx_sysconf', 'i', 'localhost', 'main', 'noheaders', 'os', 'pathname2url', 'proxy_bypass', 'proxy_bypass_environment', 'proxy_bypass_macosx_sysconf', 'quote', 'quote_plus', 'reporthook', 'socket', 'splitattr', 'splithost', 'splitnport', 'splitpasswd', 'splitport', 'splitquery', 'splittag', 'splittype', 'splituser', 'splitvalue', 'ssl', 'string', 'sys', 'test', 'test1', 'thishost', 'time', 'toBytes', 'unquote', 'unquote_plus', 'unwrap', 'url2pathname', 'urlcleanup', 'urlencode', 'urlopen', 'urlretrieve']

Kiedy już znajdziemy funkcję, której chcemy użyć, możemy dowiedzieć się o niej więcej, używając `help` w interpreterze Pythona:

    help(urllib.urlopen)

### Pisanie własnych modułów

Pisanie modułów w Pythonie jest bardzo proste. Aby stworzyć moduł, którego będziesz używać na własne potrzeby, wystarczy utworzyć nowy plik z rozszeżeniem `py` i nazwą jaką chesz nadać swojemu modułowi. Kiedy już skończysz edytować swój moduł, wystarczy, że go zaimportujesz za pomocą komendy `import` (bez rozszerzenia `py`).

### Pisanie pakietów

Pakiety są przestrzeniami nazw, które zawierają w sobie wiele modułów, a nawet innych pakietów. Są po prostu folderami, ale z pewnym znakiem szczególnym.

Każdy pakiet w Pythonie jest folderem, który **MUSI** zawierać specjalny plik nazwany `__init__.py`. Ten plik może być pusty i służy informowaniu, że ten folder zawiera pakiet Pythona. Dzięki temu może być importowany tak samo jak moduły.

Jeśli utworzymy folder o nazwie `foo`, która jest tożsama nazwie pakietu, możemy w nim utworzyć moduł nazwany `bar`. Nie możemy zapomnieć także dodać pliku `__init__.py` wewnątrz folderu `foo`.

Aby używać modułu `bar`, możemy go zaimportować na dwa sposoby:

    import foo.bar

albo:

    from foo import bar

W pierwszym przypadku będziemy musieli używać przedrostka 'foo' za każdym razem, gdy będziemy chcieli posłużyć się funkcją oferowaną przez 'bar'. W drugim przypadku nie musimy, ponieważ, zaimportowaliśmy moduł do naszej przestrzeni nazw modułów.

W rozbudowanych pakietach część modułów pełni rolę pomocniczą i nie są bezpośrednio potrzebne osobie, która korzysta z pakietów. Modyfikując plik `__init__.py` możemy zdecydować, które moduły mogą być widoczne z zewnątrz. Aby moduł był niewidzialny na zewnątrz, musimy nadpisać zmienną `__all__`:

    __init__.py:

    __all__ = ["bar"]

### Ćwiczenie

W tym ćwiczeniu wypisz posortowaną alfabetycznie listę wszystkich funkcji z modułu `re`, które zawierają słowo `find`.

Tutorial Code
-------------

import re

# Miejsce na twoj kod

Expected Output
---------------

['findall', 'finditer']

Solution
--------
