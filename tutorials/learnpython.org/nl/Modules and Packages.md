In de programmering is een module een stuk software dat een specifieke functionaliteit heeft. Bijvoorbeeld, bij het maken van een pingpongspel kan één module verantwoordelijk zijn voor de spel logica, en een andere module tekent het spel op het scherm. Elke module bestaat uit een ander bestand, dat apart kan worden bewerkt.

### Writing modules

Modules in Python zijn gewoon Python-bestanden met een .py-extensie. De naam van de module is hetzelfde als de bestandsnaam. Een Python-module kan een reeks functies, klassen of variabelen hebben die gedefinieerd en geïmplementeerd zijn. Het bovenstaande voorbeeld bevat twee bestanden:

mygame/

- mygame/game.py

- mygame/draw.py

Het Python-script `game.py` implementeert het spel. Het gebruikt de functie `draw_game` uit het bestand `draw.py`, of met andere woorden, de `draw`-module die de logica implementeert voor het tekenen van het spel op het scherm.

Modules worden geïmporteerd vanuit andere modules met behulp van het `import`-commando. In dit voorbeeld kan het `game.py`-script er als volgt uitzien:

    # game.py
    # import the draw module
    import draw
    
    def play_game():
        ...
    
    def main():
        result = play_game()
        draw.draw_game(result)
        
    # deze betekent dat als dit script wordt uitgevoerd, dan 
    # main() zal worden uitgevoerd
    if __name__ == '__main__':
        main()

De `draw`-module kan er als volgt uitzien:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

In dit voorbeeld importeert de `game`-module de `draw`-module, waardoor het de functies kan gebruiken die in die module zijn geïmplementeerd. De `main`-functie gebruikt de lokale functie `play_game` om het spel te spelen, en tekent vervolgens het resultaat van het spel met een functie die in de `draw`-module is geïmplementeerd en `draw_game` wordt genoemd. Om de functie `draw_game` uit de `draw`-module te gebruiken, moeten we specificeren in welke module de functie is geïmplementeerd, met behulp van de puntoperator. Om de `draw_game`-functie vanuit de `game`-module te refereren, moeten we de `draw`-module importeren en vervolgens `draw.draw_game()` aanroepen.

Wanneer de `import draw`-richtlijn wordt uitgevoerd, zoekt de Python-interpreter naar een bestand in de directory waarin het script is uitgevoerd met de modulenaam en een `.py`-suffix. In dit geval zal het zoeken naar `draw.py`. Als het gevonden wordt, wordt het geïmporteerd. Als het niet gevonden wordt, zal het verder zoeken naar ingebouwde modules.

Je hebt misschien gemerkt dat bij het importeren van een module, er een `.pyc`-bestand wordt aangemaakt. Dit is een gecompileerd Python-bestand. Python compileert bestanden in Python-bytecode, zodat het de bestanden niet iedere keer hoeft te parsen wanneer modules worden geladen. Als een `.pyc`-bestand bestaat, wordt dat geladen in plaats van het `.py`-bestand. Dit proces is transparant voor de gebruiker.

### Importing module objects to the current namespace

Een namespace is een systeem waar elk object een naam heeft en kan worden benaderd in Python. We importeren de functie `draw_game` in de namespace van het hoofdscript met behulp van het `from`-commando.

    # game.py
    # import the draw module
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

Je hebt misschien gemerkt dat in dit voorbeeld, de naam van de module niet voorafgaat aan `draw_game`, omdat we de modulenaam hebben gespecificeerd met behulp van het `import`-commando.

Het voordeel van deze notatie is dat je de module niet steeds hoeft te refereren. Echter, een namespace kan niet twee objecten met dezelfde naam hebben, dus het `import`-commando kan een bestaand object in de namespace vervangen.

### Importing all objects from a module

Je kunt het `import *`-commando gebruiken om alle objecten in een module te importeren zoals dit:

    # game.py
    # import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

Dit kan een beetje riskant zijn, omdat veranderingen in de module de module kunnen beïnvloeden die het importeert, maar het is korter en vereist niet dat je elk object specificeert dat je wilt importeren uit de module.

### Custom import name

Modules kunnen onder elke gewenste naam worden geladen. Dit is handig bij het conditioneel importeren van een module om dezelfde naam te gebruiken in de rest van de code.

Bijvoorbeeld, als je twee `draw`-modules hebt met iets andere namen, kun je het volgende doen:

    # game.py
    # import the draw module
    if visual_mode:
        # in visuele modus, tekenen we met behulp van graphics
        import draw_visual as draw
    else:
        # in tekstuele modus, printen we tekst uit
        import draw_textual as draw
    
    def main():
        result = play_game()
        # dit kan ofwel visueel of tekstueel zijn, afhankelijk van visual_mode
        draw.draw_game(result)

### Module initialization

De eerste keer dat een module wordt geladen in een draaiend Python-script, wordt deze geïnitialiseerd door de code in de module eenmaal uit te voeren. Als een andere module in je code dezelfde module opnieuw importeert, wordt deze niet opnieuw geladen, zodat lokale variabelen in de module fungeren als een "singleton," wat betekent dat ze slechts één keer worden geïnitialiseerd.

Je kunt dit dan gebruiken om objecten te initialiseren.
Bijvoorbeeld:

    # draw.py
    
    def draw_game():
        # bij het clearen van het scherm kunnen we het hoofdscherm-object gebruiken dat in deze module is geïnitialiseerd
        clear_screen(main_screen)
        ...

    def clear_screen(screen):
        ...
        
    class Screen():
        ...

    # initialiseer main_screen als een singleton
    main_screen = Screen()

### Extending module load path

Er zijn een paar manieren om de Python-interpreter te vertellen waar modules te zoeken, naast de standaard lokale directory en ingebouwde modules. Je kunt de omgevingsvariabele `PYTHONPATH` gebruiken om extra directories op te geven waarnaar modules moeten worden gezocht, zoals dit:

    PYTHONPATH=/foo python game.py

Dit voert `game.py` uit, en stelt het script in staat modules te laden vanuit de `foo`-directory, evenals de lokale directory.

Je kunt ook de `sys.path.append`-functie gebruiken. Voer het *voordat* het `import`-commando uit:

    sys.path.append("/foo")

Nu is de `foo`-directory toegevoegd aan de lijst met paden waarnaar modules worden gezocht.

### Exploring built-in modules

Bekijk de volledige lijst met ingebouwde modules in de Python-standaardbibliotheek [hier](https://docs.python.org/3/library/).

Twee zeer belangrijke functies zijn handig bij het verkennen van modules in Python - de `dir` en `help`-functies.

Om de module `urllib` te importeren, die ons in staat stelt om gegevens van URL's te lezen, `importeren` we de module:

    # import the library
    import urllib

    # use it
    urllib.urlopen(...)

We kunnen kijken welke functies in elke module zijn geïmplementeerd door de `dir`-functie te gebruiken:

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

Wanneer we de functie vinden in de module die we willen gebruiken, kunnen we meer over de functie lezen met de `help`-functie, door de Python-interpreter te gebruiken:

    help(urllib.urlopen)

### Writing packages

Pakketten zijn namespaces die meerdere pakketten en modules bevatten. Het zijn gewoon directories, maar met bepaalde vereisten.

Elk pakket in Python is een directory die **MOET** een speciaal bestand bevatten genaamd `__init__.py`. Dit bestand, dat leeg kan zijn, geeft aan dat de directory waarin het zich bevindt een Python-pakket is. Op die manier kan het op dezelfde manier als een module worden geïmporteerd.

Als we een directory maken genaamd `foo`, die de pakketnaam aanduidt, kunnen we vervolgens een module binnen dat pakket aanmaken genaamd `bar`. Dan voegen we het bestand `__init__.py` toe binnen de `foo`-directory.

Om de module `bar` te gebruiken, kunnen we het op twee manieren importeren:

    import foo.bar

of:

    from foo import bar

In het eerste bovenstaande voorbeeld, moeten we het `foo`-voorvoegsel gebruiken telkens wanneer we toegang hebben tot de module `bar`. In het tweede voorbeeld niet, omdat we de module in de namespace van onze module hebben geïmporteerd.

Het bestand `__init__.py` kan ook bepalen welke modules het pakket exporteert als de API, terwijl het andere modules intern houdt, door de `__all__`-variabele te overschrijven zoals:

    __init__.py:

    __all__ = ["bar"]

Exercise
--------

In deze oefening, druk een alfabetisch gesorteerde lijst af van alle functies in de `re`-module die het woord `find` bevatten.