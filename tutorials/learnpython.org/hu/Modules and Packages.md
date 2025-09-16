A programozásban a modul egy olyan szoftverdarab, amelynek meghatározott funkciója van. Például, amikor egy ping pong játékot készítünk, az egyik modul a játéklogikáért lehet felelős, míg egy másik modul a játékot rajzolja a képernyőre. Minden modul egy külön fájlból áll, amelyet külön lehet szerkeszteni.

### Writing modules

A Python modulok csak .py kiterjesztésű Python fájlok. A modul neve ugyanaz, mint a fájl neve. Egy Python modul tartalmazhat meghatározott és megvalósított függvények, osztályok vagy változók halmazát. 
A fenti példa két fájlt tartalmaz:

mygame/

- mygame/game.py

- mygame/draw.py
 
A `game.py` Python szkript megvalósítja a játékot. Használja a `draw_game` függvényt a `draw.py` fájlból,
vagy más szavakkal, a `draw` modulból, amely megvalósítja a játék képernyőn való megjelenítésének logikáját.

A modulok más modulokból az `import` paranccsal importálhatók. Ebben a példában a `game.py` szkript valahogy így nézhet ki:

    # game.py
    # importáljuk a draw modult
    import draw
    
    def play_game():
        ...
    
    def main():
        result = play_game()
        draw.draw_game(result)
        
    # ez azt jelenti, hogy ha ezt a szkriptet futtatjuk, akkor 
    # a main() is fog futni
    if __name__ == '__main__':
        main()

A `draw` modul valahogy így nézhet ki:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

Ebben a példában a `game` modul importálja a `draw` modult, amely lehetővé teszi a benne megvalósított függvények használatát. A `main` függvény a helyi `play_game` függvényt használja a játék futtatásához, majd a játék eredményét a `draw` modulban megvalósított `draw_game` nevű függvénnyel rajzolja ki. A `draw` modul `draw_game` függvényének használatához meg kell adnunk, melyik modulban van megvalósítva a függvény, a pont operátor használatával. A `game` modul `draw_game` függvényére való hivatkozáshoz importálnunk kell a `draw` modult, majd meghívni a `draw.draw_game()` függvényt.

Amikor az `import draw` utasítás lefut, a Python interpreter megkeresi a szkript futtatásának könyvtárában azt a fájlt, amelynek neve megegyezik a modul nevével, és `.py` végződésű. Ebben az esetben a `draw.py` fájlt. Ha megtalálja, importálja. Ha nem találja meg, tovább keres a beépített modulok között.

Észrevehetted, hogy amikor egy modult importálsz, létrejön egy `.pyc` fájl. Ez egy fordított Python fájl. A Python bytekódra fordítja a fájlokat, így nem kell minden alkalommal elemezni a fájlokat, amikor betöltődnek a modulok. Ha létezik `.pyc` fájl, az töltődik be a `.py` fájl helyett. Ez a folyamat átlátható a felhasználó számára.

### Importing module objects to the current namespace

Egy névtér egy olyan rendszer, ahol minden objektum el van nevezve és elérhető a Pythonban. A fő szkript névterébe importáljuk a `draw_game` függvényt a `from` parancs használatával.

    # game.py
    # importáljuk a draw modult
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

Észrevehetted, hogy ebben a példában a modul neve nem előzi meg a `draw_game`-et, mert a modul nevét megadtuk az `import` paranccsal.

Ennek a jelölésnek az előnye, hogy nem kell újra és újra hivatkozni a modulra. Viszont egy névtér nem tartalmazhat két azonos nevű objektumot, ezért az `import` parancs lecserélheti a névtérben már létező objektumot.

### Importing all objects from a module

Az összes objektum importálásához egy modulból használhatjuk az `import *` parancsot így:

    # game.py
    # importáljuk a draw modult
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

Ez egy kicsit kockázatos lehet, mivel a modul változásai befolyásolhatják az azt importáló modult, de rövidebb, és nem szükséges megadni minden egyes objektumot, amelyet importálni akarunk a modulból.

### Custom import name

A modulok bármilyen név alatt betölthetők, amit csak akarunk. Ez hasznos lehet, amikor feltételesen importálunk egy modult, hogy ugyanazt a nevet használjuk a kód többi részében. 

Például, ha két `draw` modulunk van kissé eltérő nevekkel, megtehetjük a következőt:

    # game.py
    # importáljuk a draw modult
    if visual_mode:
        # vizuális módban grafikát használunk rajzolásra
        import draw_visual as draw
    else:
        # szöveges módban szöveget jelenítünk meg
        import draw_textual as draw
    
    def main():
        result = play_game()
        # ez lehet vizuális vagy szöveges attól függően, hogy visual_mode van beállítva
        draw.draw_game(result)

### Module initialization

Egy modul első betöltésekor egy futó Python szkriptbe az inicializálás úgy történik, hogy a modulban lévő kód egyszer végrehajtódik. Ha a kódodban egy másik modul újra importálja ugyanazt a modult, nem fog újra betöltődni, így a modulban lévő helyi változók "szingletonként" működnek, vagyis csak egyszer inicializálódnak.

Ezeket ezután felhasználhatod objektumok inicializálására. 
Például:

    # draw.py
    
    def draw_game():
        # amikor a képernyőt tisztítjuk, használhatjuk a fő képernyő objektumot, amely ebben a modulban van inicializálva
        clear_screen(main_screen)
        ...

    def clear_screen(screen):
        ...
        
    class Screen():
        ...

    # inicializáljuk a main_screen-t mint szingleton
    main_screen = Screen()

### Extending module load path

Van néhány módja annak, hogy megmondjuk a Python interpreternek, hol keressen modulokat az alapértelmezett helyi könyvtáron és a beépített modulokon kívül. Használhatod a `PYTHONPATH` környezeti változót, hogy további könyvtárakat adj meg, mint például:

    PYTHONPATH=/foo python game.py

Ez futtatja a `game.py`-t, és lehetővé teszi a szkript számára, hogy modulokat töltsön be a `foo` könyvtárból, valamint a helyi könyvtárból. 

Az `sys.path.append` függvényt is használhatod. Futtasd ezt *azelőtt*, hogy az `import` parancsot kiadnád:

    sys.path.append("/foo")

Most a `foo` könyvtár hozzá lett adva azon utak listájához, ahol a modulokat keresik.

### Exploring built-in modules

Nézd meg a Python szabványos könyvtárban található beépített modulok teljes listáját [itt](https://docs.python.org/3/library/).

Két nagyon fontos függvény támogathatja a modulok felfedezését Pythonban - a `dir` és a `help` függvények.

Az `urllib` modul importálásához, amely lehetővé teszi számunkra, hogy URL-ekről adatokat olvassunk, `importáljuk` a modult:

    # importáljuk a könyvtárat
    import urllib

    # használjuk
    urllib.urlopen(...)
    
Megvizsgálhatjuk, hogy mely függvények vannak megvalósítva minden egyes modulban a `dir` függvény használatával:

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

Amikor megtaláljuk a modult, amelyet használni szeretnénk, többet olvashatunk róla a `help` függvény segítségével a Python interpretert használva:

    help(urllib.urlopen)


### Writing packages

A csomagok névterek, amelyek több csomagot és modult tartalmaznak. Ezek csak könyvtárak, de bizonyos követelményekkel.

Minden Python csomagnak tartalmaznia **KELL** egy speciális fájlt `__init__.py` néven. Ez a fájl, amely lehet üres is, jelzi, hogy a könyvtár, amelyben tartózkodik, egy Python csomag. Így importálható ugyanolyan módon, mint egy modul.

Ha létrehozunk egy `foo` nevű könyvtárat, amely a csomag nevét jelöli, akkor létrehozhatunk egy modult ebben a csomagban `bar` néven. Ezután hozzáadjuk a `__init__.py` fájlt a `foo` könyvtárba.

A `bar` modul használatához kétféleképpen importálhatjuk:

    import foo.bar

vagy:

    from foo import bar

Az előző példában a `foo` előtagot kell használnunk, valahányszor hozzáférünk a `bar` modulhoz. A második példában erre nincs szükség, mert a modult a saját modulunk névterébe importáltuk.

A `__init__.py` fájl azt is eldöntheti, mely modulok exportálhatók a csomag API-jaként, miközben más modulokat belső célokra tartanak meg, az `__all__` változó felülírásával, például:

    __init__.py:

    __all__ = ["bar"]

Exercise
--------

Ebben a gyakorlatban nyomtass egy ábécérendbe rendezett listát az összes `re` modulbeli függvényről, amelyek tartalmazzák a `find` szót.