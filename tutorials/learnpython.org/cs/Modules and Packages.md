V programování je modul součást softwaru, která má specifickou funkčnost. Například při budování ping pong hry může být jeden modul zodpovědný za herní logiku, zatímco jiný modul kreslí hru na obrazovku. Každý modul se skládá z různých souborů, které lze editovat samostatně.

### Psaní modulů

Moduly v Pythonu jsou jednoduše Python soubory s příponou .py. Název modulu je stejný jako název souboru. Python modul může mít sadu funkcí, tříd nebo proměnných definovaných a implementovaných. Příklad výše zahrnuje dva soubory:

mygame/

- mygame/game.py

- mygame/draw.py

Python skript `game.py` implementuje hru. Používá funkci `draw_game` ze souboru `draw.py`,
nebo jinými slovy `draw` modul, který implementuje logiku pro kreslení hry na obrazovku.

Moduly jsou importovány z jiných modulů pomocí příkazu `import`. V tomto příkladu by skript `game.py` mohl vypadat nějak takto:

    # game.py
    # import the draw module
    import draw
    
    def play_game():
        ...
    
    def main():
        result = play_game()
        draw.draw_game(result)
        
    # this means that if this script is executed, then 
    # main() will be executed
    if __name__ == '__main__':
        main()

Modul `draw` by mohl vypadat nějak takto:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

V tomto příkladu modul `game` importuje modul `draw`, což mu umožňuje používat funkce implementované v tomto modulu. Funkce `main` používá lokální funkci `play_game` ke spuštění hry a poté kreslí výsledek hry pomocí funkce implementované v modulu `draw` zvané `draw_game`. Pro použití funkce `draw_game` z modulu `draw` je třeba specifikovat, ve kterém modulu je funkce implementována, pomocí tečkového operátoru. Pro odkaz na funkci `draw_game` z modulu `game` je třeba modul `draw` importovat a poté volat `draw.draw_game()`. 

Když se příkaz `import draw` spustí, Python interpret hledá ve složce, ve které byl skript spuštěn, soubor s názvem modulu a příponou `.py`. V tomto případě bude hledat `draw.py`. Pokud je nalezen, bude importován. Pokud nebude nalezen, bude pokračovat v hledání vestavěných modulů.

Možná jste si všimli, že při importu modulu se vytvoří soubor `.pyc`. To je zkompilovaný Python soubor. Python kompiluje soubory do Python bytecode, aby nemusel soubory parsovat pokaždé, když se moduly načítají. Pokud existuje soubor `.pyc`, načte se místo souboru `.py`. Tento proces je uživateli transparentní.

### Importování objektů modulu do aktuálního jmenného prostoru

Jmenný prostor je systém, kde je každý objekt pojmenován a může být v Pythonu přístupný. Funkci `draw_game` importujeme do jmenného prostoru hlavního skriptu pomocí příkazu `from`.

    # game.py
    # import the draw module
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

Možná jste si všimli, že v tomto příkladu není jméno modulu uvedeno před `draw_game`, protože jsme specifikovali jméno modulu pomocí příkazu `import`.

Výhodou této notace je, že nemusíte opakovaně odkazovat na modul. Nicméně, jmenný prostor nemůže mít dva objekty se stejným názvem, takže příkaz `import` může nahradit existující objekt ve jmenném prostoru.

### Importování všech objektů z modulu

Příkaz `import *` můžete použít k importování všech objektů v modulu takto:

    # game.py
    # import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

To může být poněkud riskantní, protože změny v modulu mohou ovlivnit modul, který jej importuje, ale je to kratší a nevyžaduje specifikaci každého objektu, který chcete z modulu importovat.

### Vlastní jméno importu

Moduly mohou být načteny pod jakýmkoli jménem, které si přejete. To je užitečné při podmíněném importu modulu, abyste mohli použít stejné jméno ve zbytku kódu.

Například, pokud máte dva `draw` moduly s mírně odlišnými jmény, můžete udělat následující:

    # game.py
    # import the draw module
    if visual_mode:
        # in visual mode, we draw using graphics
        import draw_visual as draw
    else:
        # in textual mode, we print out text
        import draw_textual as draw
    
    def main():
        result = play_game()
        # this can either be visual or textual depending on visual_mode
        draw.draw_game(result)


### Inicializace modulu

Poprvé, když je modul načten do běžícího Python skriptu, je inicializován pomocí provedení kódu v modulu jednou. Pokud jiný modul ve vašem kódu importuje stejný modul znovu, nebude se znovu načítat, takže lokální proměnné uvnitř modulu fungují jako "singleton", což znamená, že jsou inicializovány pouze jednou.

Můžete to pak použít k inicializaci objektů. 
Například:

    # draw.py
    
    def draw_game():
        # when clearing the screen we can use the main screen object initialized in this module
        clear_screen(main_screen)
        ...

    def clear_screen(screen):
        ...
        
    class Screen():
        ...

    # initialize main_screen as a singleton
    main_screen = Screen()


### Rozšíření cesty pro načítání modulů

Existuje několik způsobů, jak říci Python interpreteru, kde hledat moduly, kromě výchozí místní složky a vestavěných modulů. Můžete použít proměnnou prostředí `PYTHONPATH` k zadání dodatečných složek k hledání modulů takto:

    PYTHONPATH=/foo python game.py

To provede `game.py` a umožní skriptu načítat moduly ze složky `foo` a také z místní složky.

Můžete také použít funkci `sys.path.append`. Spusťte ji *před* vykonáním příkazu `import`:

    sys.path.append("/foo")

Teď byla složka `foo` přidána do seznamu cest, kde se hledají moduly.

### Prozkoumávání vestavěných modulů

Podívejte se na kompletní seznam vestavěných modulů ve standardní knihovně Python [zde](https://docs.python.org/3/library/).

Dvě velmi důležité funkce se hodí při zkoumání modulů v Pythonu - funkce `dir` a `help`.

Pro import modulu `urllib`, který umožňuje vytvářet a číst data z URL, importujeme modul:

    # import the library
    import urllib

    # use it
    urllib.urlopen(...)

Můžeme zjistit, které funkce jsou implementovány v každém modulu pomocí funkce `dir`:

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

Když najdeme funkci v modulu, kterou chceme použít, můžeme si o ní přečíst více pomocí funkce `help` v Python interpretu:

    help(urllib.urlopen)

### Psaní balíčků

Balíčky jsou jmenné prostory obsahující více balíčků a modulů. Jsou to pouze složky, ale s určitými požadavky.

Každý balíček v Pythonu je složka, která **MUSÍ** obsahovat speciální soubor nazvaný `__init__.py`. Tento soubor, který může být prázdný, indikuje, že složka, ve které se nachází, je Python balíček. Tímto způsobem může být importován stejným způsobem jako modul.

Pokud vytvoříme složku nazvanou `foo`, která označuje název balíčku, můžeme pak vytvořit modul uvnitř tohoto balíčku nazvaný `bar`. Poté přidáme soubor `__init__.py` uvnitř složky `foo`.

Chceme-li použít modul `bar`, můžeme ho importovat dvěma způsoby:

    import foo.bar

nebo:

    from foo import bar

V prvním příkladu výše musíme použít předponu `foo`, kdykoli přistupujeme k modulu `bar`. Ve druhém příkladu již nemusíme, protože jsme modul importovali do našeho jmenného prostoru modulu.

Soubor `__init__.py` může také rozhodnout, které moduly balíček exportuje jako API, zatímco ostatní moduly zůstávají interní, přepsáním proměnné `__all__` takto:

    __init__.py:

    __all__ = ["bar"]

Cvičení
--------

V tomto cvičení vytiskněte seznam všech funkcí v modulu `re`, které obsahují slovo `find`, seřazený abecedně.