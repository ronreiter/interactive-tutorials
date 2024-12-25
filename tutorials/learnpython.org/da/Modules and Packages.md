I programmering er et modul et stykke software, der har en specifik funktionalitet. For eksempel, når man bygger et bordtennisspil, kan et modul være ansvarligt for spilogikken, og et andet modul tegner spillet på skærmen. Hvert modul består af en anden fil, som kan redigeres separat.

### Skrivning af moduler

Moduler i Python er blot Python-filer med en .py-udvidelse. Navnet på modulet er det samme som filnavnet. Et Python-modul kan have et sæt af funktioner, klasser eller variabler defineret og implementeret. Eksemplet ovenfor inkluderer to filer:

mygame/

- mygame/game.py

- mygame/draw.py

Python-skripten `game.py` implementerer spillet. Den bruger funktionen `draw_game` fra filen `draw.py` eller, med andre ord, `draw`-modulet, der implementerer logikken for at tegne spillet på skærmen.

Moduler importeres fra andre moduler ved hjælp af `import`-kommandoen. I dette eksempel kan `game.py`-skripten se sådan ud:

    # game.py
    # importer draw-modulet
    import draw
    
    def play_game():
        ...
    
    def main():
        result = play_game()
        draw.draw_game(result)
        
    # dette betyder, at hvis dette skript udføres, vil 
    # main() blive udført
    if __name__ == '__main__':
        main()

`draw`-modulet kan se sådan ud:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

I dette eksempel importerer `game`-modulet `draw`-modulet, hvilket gør det muligt at bruge funktioner implementeret i det modul. `main`-funktionen bruger den lokale funktion `play_game` til at køre spillet og tegner derefter resultatet af spillet ved hjælp af en funktion implementeret i `draw`-modulet kaldet `draw_game`. For at bruge funktionen `draw_game` fra `draw`-modulet skal vi specificere, i hvilket modul funktionen er implementeret ved hjælp af punkt-operatoren. For at referere til `draw_game`-funktionen fra `game`-modulet skal vi importere `draw`-modulet og derefter kalde `draw.draw_game()`.

Når `import draw`-direktivet kører, leder Python-fortolkeren efter en fil i det bibliotek, hvor skriptet blev udført, med modulnavnet og en `.py`-suffiks. I dette tilfælde vil det lede efter `draw.py`. Hvis det bliver fundet, vil det blive importeret. Hvis det ikke bliver fundet, vil det fortsætte med at lede efter indbyggede moduler.

Du har måske bemærket, at når man importerer et modul, oprettes en `.pyc`-fil. Dette er en komprimeret Python-fil. Python komprimerer filer til Python-bytecode, så det ikke behøver at fortolke filerne hver gang moduler indlæses. Hvis en `.pyc`-fil eksisterer, bliver den indlæst i stedet for `.py`-filen. Denne proces er transparent for brugeren.

### Import af modulobjekter til det aktuelle navnerum

Et navnerum er et system, hvor hvert objekt er navngivet og kan tilgås i Python. Vi importerer funktionen `draw_game` til hovedskriptets navnerum ved hjælp af `from`-kommandoen.

    # game.py
    # importer draw-modulet
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

Du har måske bemærket, at i dette eksempel er navnet på modulet ikke foran `draw_game`, fordi vi har specificeret modulnavnet ved hjælp af `import`-kommandoen.

Fordelene ved denne notation er, at du ikke behøver at referere til modulet igen og igen. Dog kan et navnerum ikke have to objekter med samme navn, så `import`-kommandoen kan erstatte et eksisterende objekt i navnerummet.

### Import af alle objekter fra et modul

Du kan bruge `import *`-kommandoen til at importere alle objekter i et modul som dette:

    # game.py
    # importer draw-modulet
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

Dette kan være lidt risikabelt, da ændringer i modulet kan påvirke modulet, som importerer det, men det er kortere og kræver ikke, at du specificerer hvert objekt, du vil importere fra modulet.

### Brugerdefineret importnavn

Moduler kan indlæses under ethvert navn, du ønsker. Dette er nyttigt, når du betinger en modulisering for at bruge det samme navn i resten af koden.

For eksempel, hvis du har to `draw`-moduler med let forskellige navne, kan du gøre følgende:

    # game.py
    # importér draw-modulet
    if visual_mode:
        # i visuel tilstand tegner vi ved hjælp af grafik
        import draw_visual as draw
    else:
        # i teksttilstand printer vi tekst ud
        import draw_textual as draw
    
    def main():
        result = play_game()
        # dette kan enten være visuelt eller tekstmæssigt afhængigt af visual_mode
        draw.draw_game(result)

### Modulinitialisering

Første gang et modul indlæses i et kørende Python-skript, bliver det initialiseret ved at udføre koden i modulet én gang. Hvis et andet modul i din kode importerer det samme modul igen, vil det ikke blive indlæst igen, så lokale variabler inde i modulet fungerer som en "singleton," hvilket betyder, at de kun initialiseres én gang.

Du kan derefter bruge dette til at initialisere objekter. 
For eksempel:

    # draw.py
    
    def draw_game():
        # når vi rydder skærmen, kan vi bruge hovedskærm-objektet, som er initialiseret i dette modul
        clear_screen(main_screen)
        ...

    def clear_screen(screen):
        ...
        
    class Screen():
        ...

    # initialisér main_screen som en singleton
    main_screen = Screen()

### Udvidelse af modulens belastningssti

Der er et par måder at fortælle Python-fortolkeren, hvor man skal lede efter moduler, bortset fra standardlokalbiblioteket og indbyggede moduler. Du kan bruge miljøvariablen `PYTHONPATH` til at specificere yderligere biblioteker til at lede efter moduler på denne måde:

    PYTHONPATH=/foo python game.py

Dette udfører `game.py` og gør det muligt for skriptet at indlæse moduler fra `foo`-biblioteket samt fra det lokale bibliotek.

Du kan også bruge `sys.path.append`-funktionen. Udfør det *før* du kører `import`-kommandoen:

    sys.path.append("/foo")

Nu er `foo`-biblioteket blevet tilføjet til listen over stier, hvor der søges efter moduler.

### Udforskning af indbyggede moduler

Tjek den fulde liste over indbyggede moduler i Python-standardbiblioteket [her](https://docs.python.org/3/library/).

To meget vigtige funktioner er nyttige, når man udforsker moduler i Python - `dir`- og `help`-funktionerne.

For at importere `urllib`-modulet, som gør det muligt for os at skabe læse data fra URLs, importerer vi modulet:

    # importér biblioteket
    import urllib

    # brug det
    urllib.urlopen(...)
    
Vi kan se, hvilke funktioner der er implementeret i hvert modul ved at bruge `dir`-funktionen:

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

Når vi finder funktionen i modulet, vi vil bruge, kan vi læse mere om den med `help`-funktionen ved brug af Python-fortolkeren:

    help(urllib.urlopen)

### Skrivning af pakker

Pakker er navnerum, der indeholder flere pakker og moduler. De er blot biblioteker, men med visse krav.

Hver pakke i Python er et bibliotek, der **SKAL** indeholde en speciel fil kaldet `__init__.py`. Denne fil, som kan være tom, indikerer, at biblioteket den er i, er en Python-pakke. På den måde kan den importeres på samme måde som et modul.

Hvis vi opretter et bibliotek kaldet `foo`, som markerer pakkenavnet, kan vi derefter oprette et modul inde i denne pakke kaldet `bar`. Derefter tilføjer vi `__init__.py`-filen inde i `foo`-biblioteket.

For at bruge modulet `bar` kan vi importere det på to måder:

    import foo.bar

eller:

    from foo import bar

I det første eksempel ovenfor skal vi bruge `foo`-præfikset, hver gang vi tilgår modulet `bar`. I det andet eksempel skal vi ikke, fordi vi har importeret modulet til modulens navnerum.

`__init__.py`-filen kan også bestemme, hvilke moduler pakken eksporterer som API'en, mens andre moduler forbliver interne, ved at overskrive `__all__`-variablen sådan:

    __init__.py:

    __all__ = ["bar"]

Øvelse
--------

I denne øvelse skal du udskrive en alfabetisk sorteret liste over alle funktionerne i `re`-modulet, der indeholder ordet `find`.