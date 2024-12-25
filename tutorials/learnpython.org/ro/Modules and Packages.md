În programare, un modul este o bucată de software care are o funcționalitate specifică. 
De exemplu, atunci când construiești un joc de ping pong, un modul poate fi responsabil pentru logica jocului, iar 
un alt modul desenează jocul pe ecran. Fiecare modul constă într-un fișier diferit, care poate fi editat separat.

### Writing modules

Modulele în Python sunt doar fișiere Python cu extensia .py. Numele modulului este același cu numele fișierului.
Un modul Python poate avea un set de funcții, clase sau variabile definite și implementate. 
Exemplul de mai sus include două fișiere:

mygame/

- mygame/game.py

- mygame/draw.py
    
 
Scriptul Python `game.py` implementează jocul. Folosește funcția `draw_game` din fișierul `draw.py`,
sau cu alte cuvinte, modulul `draw` care implementează logica pentru desenarea jocului pe ecran.

Modulele sunt importate din alte module folosind comanda `import`. În acest exemplu, scriptul `game.py` poate
arăta cam așa:

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

Modulul `draw` poate arăta cam așa:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

În acest exemplu, modulul `game` importă modulul `draw`, ceea ce îi permite să utilizeze funcțiile implementate
în acel modul. Funcția `main` folosește funcția locală `play_game` pentru a rula jocul și apoi 
desenează rezultatul jocului folosind o funcție implementată în modulul `draw`, numită `draw_game`. Pentru a folosi
funcția `draw_game` din modulul `draw`, trebuie să specificăm în care modul este
implementată funcția, folosind operatorul punct. Pentru a referenția funcția `draw_game` din modulul `game`,
trebuie să importăm modulul `draw` și apoi să apelăm `draw.draw_game()`. 

Când directiva `import draw` este executată, interpretul Python caută un fișier în directorul în care a fost executat scriptul cu numele modulului și un sufix `.py`. În acest caz, va căuta `draw.py`. Dacă este găsit, va fi importat. Dacă nu este găsit, va continua să caute modulele încorporate.

Poate ați observat că atunci când importați un modul, se creează un fișier `.pyc`. Acesta este un fișier Python compilat. 
Python compilează fișierele în bytecod Python pentru a nu fi necesară analizarea fișierelor de fiecare dată când modulele sunt încărcate. Dacă există un fișier `.pyc`, acesta este încărcat în locul fișierului `.py`. Acest proces este transparent pentru utilizator.

### Importing module objects to the current namespace

Un namespace este un sistem în care fiecare obiect este numit și poate fi accesat în Python. Importăm funcția `draw_game` în namespace-ul scriptului principal folosind comanda `from`.

    # game.py
    # import the draw module
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

Poate ați observat că în acest exemplu, numele modulului nu precedă `draw_game`, pentru că am specificat numele modulului folosind comanda `import`.

Avantajele acestei notații sunt că nu trebuie să referențiați modulul de fiecare dată. Totuși, un namespace nu poate avea două obiecte cu același nume, astfel încât comanda `import` poate înlocui un obiect existent în namespace.


### Importing all objects from a module

Puteți folosi comanda `import *` pentru a importa toate obiectele dintr-un modul astfel:

    # game.py
    # import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

Acest lucru poate fi cam riscant deoarece schimbările în modul pot afecta modulul care îl importă, dar este 
mai scurt și nu necesită specificarea fiecărui obiect pe care doriți să îl importați din modul.


### Custom import name

Modulele pot fi încărcate sub orice nume doriți. Acest lucru este util atunci când importați un modul condiționat
pentru a folosi același nume în restul codului. 

De exemplu, dacă aveți două module `draw` cu nume ușor diferite, puteți face următoarele:
 

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


### Module initialization

Prima dată când un modul este încărcat într-un script Python în execuție, este inițializat prin executarea codului din modul o singură dată. Dacă un alt modul din codul tău importă din nou același modul, nu va fi încărcat din nou, deci variabilele locale din modul acționează ca un "singleton", adică sunt inițializate o singură dată.

Puteți apoi folosi acest lucru pentru a inițializa obiecte. 
De exemplu:


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


### Extending module load path

Există câteva moduri de a spune interpretului Python unde să caute module, în afară de
directorul local implicit și modulele încorporate. Puteți folosi variabila de mediu `PYTHONPATH` pentru a specifica directoare suplimentare de căutare pentru module astfel:

    PYTHONPATH=/foo python game.py

Aceasta execută `game.py` și permite scriptului să încarce module din directorul `foo`, precum și din directorul local.

De asemenea, puteți utiliza funcția `sys.path.append`. Executați-o *înainte* de a rula comanda `import`:

    sys.path.append("/foo")

Acum directorul `foo` a fost adăugat la lista de căi unde modulele sunt căutate.


### Exploring built-in modules

Consultați lista completă a modulelor încorporate în biblioteca standard Python [aici](https://docs.python.org/3/library/).

Două funcții foarte importante sunt utile în explorarea modulelor în Python - funcțiile `dir` și `help`.

Pentru a importa modulul `urllib`, care ne permite să citim date din URL-uri, importăm modulul:

    # import the library
    import urllib

    # use it
    urllib.urlopen(...)
    
Putem căuta ce funcții sunt implementate în fiecare modul folosind funcția `dir`:

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

Când găsim funcția în modulul pe care dorim să o folosim, putem citi mai multe despre ea cu funcția `help`, folosind interpretul Python:

    help(urllib.urlopen)

### Writing packages

Pachetele sunt namespace-uri care conțin mai multe pachete și module. Ele sunt doar directoare, dar cu anumite cerințe.

Fiecare pachet în Python este un director care **MUST** conține un fișier special numit `__init__.py`. Acest fișier, care poate fi gol, indică faptul că directorul în care se află este un pachet Python. Astfel, poate fi importat la fel ca un modul.

Dacă creăm un director numit `foo`, care marchează numele pachetului, putem apoi crea un modul în acel 
pachet numit `bar`. Apoi adăugăm fișierul `__init__.py` în interiorul directorului `foo`.

Pentru a folosi modulul `bar`, putem să-l importăm în două moduri:

    import foo.bar

sau:

    from foo import bar

În primul exemplu de mai sus, trebuie să folosim prefixul `foo` ori de câte ori accesăm modulul `bar`. În al doilea exemplu, nu trebuie, deoarece am importat modulul în namespace-ul modulului nostru.

Fișierul `__init__.py` poate, de asemenea, decide ce module exportă pachetul ca API, păstrând alte module interne, prin suprascrierea variabilei `__all__`, astfel:

    __init__.py:

    __all__ = ["bar"]

Exercițiu
--------

În acest exercițiu, afișați o listă sortată alfabetic a tuturor funcțiilor din modulul `re` care conțin cuvântul `find`.