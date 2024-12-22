Nel campo della programmazione, un modulo è un pezzo di software che ha una funzionalità specifica. Ad esempio, quando si costruisce un gioco di ping pong, un modulo può essere responsabile della logica di gioco e un altro modulo disegna il gioco sullo schermo. Ogni modulo è composto da un file diverso, che può essere modificato separatamente.

### Scrivere moduli

I moduli in Python sono semplicemente file Python con estensione .py. Il nome del modulo è lo stesso del nome del file. Un modulo Python può avere un set di funzioni, classi o variabili definite e implementate. L'esempio sopra include due file:

mygame/

- mygame/game.py

- mygame/draw.py

Lo script Python `game.py` implementa il gioco. Utilizza la funzione `draw_game` dal file `draw.py`, o in altre parole, il modulo `draw` che implementa la logica per il disegno del gioco sullo schermo.

I moduli vengono importati da altri moduli usando il comando `import`. In questo esempio, il script `game.py` potrebbe apparire così:

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

Il modulo `draw` può apparire così:

    # draw.py
    
    def draw_game():
        ...


    def clear_screen(screen):
        ...

In questo esempio, il modulo `game` importa il modulo `draw`, il che gli consente di utilizzare funzioni implementate in quel modulo. La funzione `main` utilizza la funzione locale `play_game` per eseguire il gioco, e poi disegna il risultato del gioco usando una funzione implementata nel modulo `draw` chiamata `draw_game`. Per utilizzare la funzione `draw_game` dal modulo `draw`, dobbiamo specificare in quale modulo è implementata la funzione, usando l'operatore punto. Per referenziare la funzione `draw_game` dal modulo `game`, dobbiamo importare il modulo `draw` e poi chiamare `draw.draw_game()`.

Quando il direttivo `import draw` viene eseguito, l'interprete Python cerca un file nella directory in cui è stato eseguito lo script con il nome del modulo e un suffisso `.py`. In questo caso cercherà `draw.py`. Se viene trovato, verrà importato. Se non viene trovato, continuerà a cercare nei moduli incorporati.

Potresti aver notato che quando si importa un modulo, viene creato un file `.pyc`. Questo è un file Python compilato. Python compila i file in bytecode di Python in modo da non dover analizzare i file ogni volta che vengono caricati i moduli. Se esiste un file `.pyc`, viene caricato invece del file `.py`. Questo processo è trasparente per l'utente.

### Importare oggetti del modulo nel namespace corrente

Un namespace è un sistema in cui ogni oggetto è nominato e può essere accessibile in Python. Importiamo la funzione `draw_game` nel namespace dello script principale usando il comando `from`.

    # game.py
    # import the draw module
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

Potresti aver notato che in questo esempio, il nome del modulo non precede `draw_game`, perché abbiamo specificato il nome del modulo usando il comando `import`.

Il vantaggio di questa notazione è che non devi referenziare il modulo più e più volte. Tuttavia, un namespace non può avere due oggetti con lo stesso nome, quindi il comando `import` può sostituire un oggetto esistente nel namespace.

### Importare tutti gli oggetti da un modulo

Puoi utilizzare il comando `import *` per importare tutti gli oggetti in un modulo in questo modo:

    # game.py
    # import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

Questo potrebbe essere un po' rischioso poiché le modifiche nel modulo possono influenzare il modulo che lo importa, ma è più breve e non ti richiede di specificare ogni oggetto che vuoi importare dal modulo.

### Nome di importazione personalizzato

I moduli possono essere caricati con qualsiasi nome tu voglia. Questo è utile quando si importa un modulo condizionalmente per usare lo stesso nome nel resto del codice.

Ad esempio, se hai due moduli `draw` con nomi leggermente diversi, puoi fare quanto segue:

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

### Inizializzazione del modulo

La prima volta che un modulo viene caricato in uno script Python in esecuzione, viene inizializzato eseguendo il codice nel modulo una volta sola. Se un altro modulo nel tuo codice importa ancora lo stesso modulo, non verrà caricato di nuovo, quindi le variabili locali all'interno del modulo agiscono come un "singleton", il che significa che sono inizializzate una sola volta.

Puoi poi usare questo per inizializzare oggetti. Ad esempio:

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

### Estendere il percorso di caricamento dei moduli

Ci sono un paio di modi per dire all'interprete Python dove cercare i moduli, oltre alla directory locale predefinita e ai moduli incorporati. Puoi usare la variabile d'ambiente `PYTHONPATH` per specificare directory aggiuntive in cui cercare i moduli in questo modo:

    PYTHONPATH=/foo python game.py

Questo esegue `game.py` e permette allo script di caricare moduli dalla directory `foo`, oltre che dalla directory locale.

Puoi anche usare la funzione `sys.path.append`. Eseguila *prima* del comando `import`:

    sys.path.append("/foo")

Ora la directory `foo` è stata aggiunta all'elenco dei percorsi in cui vengono cercati i moduli.

### Esplorare i moduli incorporati

Consulta l'elenco completo dei moduli incorporati nella libreria standard di Python [qui](https://docs.python.org/3/library/).

Due funzioni molto importanti tornano utili quando si esplorano moduli in Python: le funzioni `dir` e `help`.

Per importare il modulo `urllib`, che ci permette di creare dati di lettura da URL, importiamo il modulo:

    # import the library
    import urllib

    # use it
    urllib.urlopen(...)
    
Possiamo cercare quali funzioni sono implementate in ogni modulo usando la funzione `dir`:

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

Quando troviamo la funzione nel modulo che vogliamo utilizzare, possiamo leggere di più al riguardo con la funzione `help`, usando l'interprete Python:

    help(urllib.urlopen)

### Scrivere pacchetti

I pacchetti sono namespace contenenti più pacchetti e moduli. Sono solo directory, ma con determinati requisiti.

Ogni pacchetto in Python è una directory che **DEVE** contenere un file speciale chiamato `__init__.py`. Questo file, che può essere vuoto, indica che la directory in cui si trova è un pacchetto Python. In questo modo può essere importato allo stesso modo di un modulo.

Se creiamo una directory chiamata `foo`, che rappresenta il nome del pacchetto, possiamo poi creare un modulo all'interno di quel pacchetto chiamato `bar`. Quindi aggiungiamo il file `__init__.py` all'interno della directory `foo`.

Per utilizzare il modulo `bar`, possiamo importarlo in due modi:

    import foo.bar

oppure:

    from foo import bar

Nel primo esempio sopra, dobbiamo usare il prefisso `foo` ogni volta che accediamo al modulo `bar`. Nel secondo esempio, non lo facciamo, perché abbiamo importato il modulo nel namespace del nostro modulo.

Il file `__init__.py` può anche decidere quali moduli il pacchetto esporta come API, mantenendo altri moduli interni, sovrascrivendo la variabile `__all__` in questo modo:

    __init__.py:

    __all__ = ["bar"]

Esercizio
--------

In questo esercizio, stampa un elenco ordinato alfabeticamente di tutte le funzioni nel modulo `re` che contengono la parola `find`.