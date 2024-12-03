Tutorial
--------

En programmation, un module est un morceau de logiciel qui a une fonctionnalité spécifique. Par exemple, lors de la création d'un jeu de ping-pong, un module peut être responsable de la logique du jeu et un autre module dessine le jeu à l'écran. Chaque module se compose d'un fichier différent, qui peut être modifié séparément.

### Écriture de modules

Les modules en Python sont simplement des fichiers Python avec une extension .py. Le nom du module est le même que le nom du fichier. Un module Python peut avoir un ensemble de fonctions, de classes ou de variables définies et implémentées. L'exemple ci-dessus comprend deux fichiers :

mygame/

- mygame/game.py

- mygame/draw.py


Le script Python `game.py` implémente le jeu. Il utilise la fonction `draw_game` du fichier `draw.py`, ou en d'autres termes, le module `draw` qui implémente la logique pour dessiner le jeu à l'écran.

Les modules sont importés à partir d'autres modules en utilisant la commande `import`. Dans cet exemple, le script `game.py` peut ressembler à ceci :

    # game.py
    # importer le module draw
    import draw
    
    def play_game():
        ...
    
    def main():
        result = play_game()
        draw.draw_game(result)
        
    # cela signifie que si ce script est exécuté, alors 
    # main() sera exécuté
    if __name__ == '__main__':
        main()

Le module `draw` peut ressembler à ceci :

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

Dans cet exemple, le module `game` importe le module `draw`, ce qui lui permet d'utiliser les fonctions implémentées dans ce module. La fonction `main` utilise la fonction locale `play_game` pour exécuter le jeu, puis trace le résultat du jeu en utilisant une fonction implémentée dans le module `draw` appelée `draw_game`. Pour utiliser la fonction `draw_game` du module `draw`, nous devons spécifier dans quel module la fonction est implémentée, en utilisant l'opérateur point. Pour référencer la fonction `draw_game` à partir du module `game`, nous devons importer le module `draw` et ensuite appeler `draw.draw_game()`.

Lorsque la directive `import draw` s'exécute, l'interpréteur Python cherche un fichier dans le répertoire dans lequel le script a été exécuté avec le nom du module et un suffixe `.py`. Dans ce cas, il cherchera `draw.py`. S'il est trouvé, il sera importé. S'il n'est pas trouvé, il continuera à chercher des modules intégrés.

Vous avez peut-être remarqué que lors de l'importation d'un module, un fichier `.pyc` est créé. Il s'agit d'un fichier Python compilé. Python compile les fichiers en bytecode Python afin de ne pas avoir à analyser les fichiers chaque fois que les modules sont chargés. Si un fichier `.pyc` existe, il est chargé à la place du fichier `.py`. Ce processus est transparent pour l'utilisateur.

### Importer des objets de module dans l'espace de noms actuel

Un espace de noms est un système où chaque objet est nommé et peut être accédé en Python. Nous importons la fonction `draw_game` dans l'espace de noms du script principal en utilisant la commande `from`.

    # game.py
    # importer le module draw
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

Vous avez peut-être remarqué que dans cet exemple, le nom du module ne précède pas `draw_game`, parce que nous avons spécifié le nom du module en utilisant la commande `import`.

Les avantages de cette notation sont que vous n'avez pas à référencer le module encore et encore. Cependant, un espace de noms ne peut pas avoir deux objets portant le même nom, donc la commande `import` peut remplacer un objet existant dans l'espace de noms.

### Importer tous les objets d'un module

Vous pouvez utiliser la commande `import *` pour importer tous les objets dans un module comme ceci :

    # game.py
    # importer le module draw
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

Cela peut être un peu risqué car les changements dans le module peuvent affecter le module qui l'importe, mais c'est plus court et ne nécessite pas de spécifier chaque objet que vous voulez importer du module.

### Nom d'importation personnalisé

Les modules peuvent être chargés sous n'importe quel nom que vous voulez. C'est utile lors de l'importation conditionnelle d'un module pour utiliser le même nom dans le reste du code.

Par exemple, si vous avez deux modules `draw` avec des noms légèrement différents, vous pouvez faire ce qui suit :

    # game.py
    # importer le module draw
    if visual_mode:
        # en mode visuel, nous dessinons en utilisant des graphiques
        import draw_visual as draw
    else:
        # en mode textuel, nous affichons du texte
        import draw_textual as draw
    
    def main():
        result = play_game()
        # cela peut être soit visuel, soit textuel en fonction de visual_mode
        draw.draw_game(result)

### Initialisation du module

La première fois qu'un module est chargé dans un script Python en cours d'exécution, il est initialisé en exécutant une fois le code dans le module. Si un autre module dans votre code importe à nouveau le même module, il ne sera pas chargé à nouveau, donc les variables locales à l'intérieur du module agissent comme un "singleton", ce qui signifie qu'elles sont initialisées une seule fois.

Vous pouvez alors utiliser cela pour initialiser des objets. Par exemple :

    # draw.py
    
    def draw_game():
        # lors du nettoyage de l'écran, nous pouvons utiliser l'objet écran principal initialisé dans ce module
        clear_screen(main_screen)
        ...

    def clear_screen(screen):
        ...
        
    class Screen():
        ...

    # initialiser main_screen comme singleton
    main_screen = Screen()

### Extension du chemin de chargement du module

Il existe plusieurs façons d'indiquer à l'interpréteur Python où chercher les modules, en plus du répertoire local par défaut et des modules intégrés. Vous pouvez utiliser la variable d'environnement `PYTHONPATH` pour spécifier des répertoires supplémentaires pour chercher des modules comme ceci :

    PYTHONPATH=/foo python game.py

Cela exécute `game.py`, et permet au script de charger des modules à partir du répertoire `foo`, ainsi que du répertoire local.

Vous pouvez également utiliser la fonction `sys.path.append`. Exécutez-la *avant* d'exécuter la commande `import` :

    sys.path.append("/foo")

Maintenant, le répertoire `foo` a été ajouté à la liste des chemins où les modules sont recherchés.

### Exploration des modules intégrés

Consultez la liste complète des modules intégrés dans la bibliothèque standard Python [ici](https://docs.python.org/3/library/).

Deux fonctions très importantes sont utiles lors de l'exploration de modules en Python - les fonctions `dir` et `help`.

Pour importer le module `urllib`, qui nous permet de lire des données à partir d'URLs, nous `importons` le module :

    # importer la bibliothèque
    import urllib

    # l'utiliser
    urllib.urlopen(...)

Nous pouvons rechercher quelles fonctions sont implémentées dans chaque module en utilisant la fonction `dir` :

    >>> import urllib
    >>> dir(urllib)
    ['ContentTooShortError', 'FancyURLopener', 'MAXFTPCACHE', 'URLopener', '__all__', '__builtins__', '__doc__', '__file__', '__name__', '__package__', '__version__', '_ftperrors', '_get_proxies', '_get_proxy_settings', '_have_ssl', '_hexdig', '_hextochr', '_hostprog', '_is_unicode', '_localhost', '_noheaders', '_nportprog', '_passwdprog', '_portprog', '_queryprog', '_safe_map', '_safe_quoters', '_tagprog', '_thishost', '_typeprog', '_urlopener', '_userprog', '_valueprog', 'addbase', 'addclosehook', 'addinfo', 'addinfourl', 'always_safe', 'basejoin', 'c', 'ftpcache', 'ftperrors', 'ftpwrapper', 'getproxies', 'getproxies_environment', 'getproxies_macosx_sysconf', 'i', 'localhost', 'main', 'noheaders', 'os', 'pathname2url', 'proxy_bypass', 'proxy_bypass_environment', 'proxy_bypass_macosx_sysconf', 'quote', 'quote_plus', 'reporthook', 'socket', 'splitattr', 'splithost', 'splitnport', 'splitpasswd', 'splitport', 'splitquery', 'splittag', 'splittype', 'splituser', 'splitvalue', 'ssl', 'string', 'sys', 'test', 'test1', 'thishost', 'time', 'toBytes', 'unquote', 'unquote_plus', 'unwrap', 'url2pathname', 'urlcleanup', 'urlencode', 'urlopen', 'urlretrieve']

Lorsque nous trouvons la fonction dans le module que nous voulons utiliser, nous pouvons en lire plus à son sujet avec la fonction `help`, en utilisant l'interpréteur Python :

    help(urllib.urlopen)

### Écriture de packages

Les packages sont des espaces de noms contenant plusieurs packages et modules. Ce sont simplement des répertoires, mais avec certaines exigences.

Chaque package en Python est un répertoire qui **DOIT** contenir un fichier spécial appelé `__init__.py`. Ce fichier, qui peut être vide, indique que le répertoire dans lequel il se trouve est un package Python. De cette façon, il peut être importé de la même manière qu'un module.

Si nous créons un répertoire appelé `foo`, qui marque le nom du package, nous pouvons alors créer un module à l'intérieur de ce package appelé `bar`. Ensuite, nous ajoutons le fichier `__init__.py` à l'intérieur du répertoire `foo`.

Pour utiliser le module `bar`, nous pouvons l'importer de deux manières :

    import foo.bar

ou :

    from foo import bar

Dans le premier exemple ci-dessus, nous devons utiliser le préfixe `foo` chaque fois que nous accédons au module `bar`. Dans le deuxième exemple, nous ne le faisons pas, car nous avons importé le module dans l'espace de noms de notre module.

Le fichier `__init__.py` peut également décider quels modules le package exporte comme l'API, tout en gardant d'autres modules internes, en remplaçant la variable `__all__` comme ceci :

    __init__.py:

    __all__ = ["bar"]

Exercice
--------

Dans cet exercice, affichez une liste triée alphabétiquement de toutes les fonctions du module `re` contenant le mot `find`.

Tutorial Code
-------------

import re

# Votre code va ici
find_members = []

Expected Output
---------------

test_object('find_members')
success_msg('Great work!')

Solution
--------

import re

# Votre code va ici
find_members = []
for member in dir(re):
    if "find" in member:
        find_members.append(member)

print(sorted(find_members))