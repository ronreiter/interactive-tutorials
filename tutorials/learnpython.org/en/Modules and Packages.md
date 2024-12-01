Tutorial
--------

In programming, a module is a piece of software that has a specific functionality. 
For example, when building a ping pong game, one module may be responsible for the game logic, and 
another module draws the game on the screen. Each module consists of a different
file, which may be edited separately.

### Writing modules

Modules in Python are just Python files with a .py extension. The name of the module is the same as the file name.
A Python module can have a set of functions, classes, or variables defined and implemented. 
The example above includes two files:

mygame/

- mygame/game.py

- mygame/draw.py
    
 
The Python script `game.py` implements the game. It uses the function `draw_game` from the file `draw.py`,
or in other words, the `draw` module that implements the logic for drawing the game on the screen.

Modules are imported from other modules using the `import` command. In this example, the `game.py` script may
look something like this:

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

The `draw` module may look something like this:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

In this example, the `game` module imports the `draw` module, which enables it to use functions implemented
in that module. The `main` function uses the local function `play_game` to run the game, and then 
draws the result of the game using a function implemented in the `draw` module called `draw_game`. To use
the function `draw_game` from the `draw` module, we need to specify in which module the function is
implemented, using the dot operator. To reference the `draw_game` function from the `game` module,
we need to import the `draw` module and then call `draw.draw_game()`. 

When the `import draw` directive runs, the Python interpreter looks for a file in the directory in which the script was executed with the module name and a `.py` suffix. In this case it will look for `draw.py`. If it is found, it will be imported. If it's not found, it will continue looking for built-in modules.

You may have noticed that when importing a module, a `.pyc` file is created. This is a compiled Python file. 
Python compiles files into Python bytecode so that it won't have to parse the files each time modules are loaded. If a `.pyc` file exists, it gets loaded instead of the `.py` file. This process is transparent to the user.

### Importing module objects to the current namespace

A namespace is a system where every object is named and can be accessed in Python. We import the function `draw_game` into the main script's namespace by using the `from` command.

    # game.py
    # import the draw module
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)


You may have noticed that in this example, the name of the module does not precede `draw_game`, because we've specified the module name using the `import` command.

The advantages of this notation is that you don't have to reference the module over and over. However, a namespace cannot have two objects with the same name, so the `import` command may replace an existing object in the namespace.


### Importing all objects from a module

You can use the `import *` command to import all the objects in a module like this:

    # game.py
    # import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

This might be a bit risky as changes in the module may affect the module which imports it, but it is 
shorter, and doesn't require you to specify every object you want to import from the module.


### Custom import name

Modules may be loaded under any name you want. This is useful when importing a module conditionally
to use the same name in the rest of the code. 

For example, if you have two `draw` modules with slightly different names, you may do the following:
 

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

The first time a module is loaded into a running Python script, it is initialized by executing the code in the module once. If another module in your code imports the same module again, it will not be loaded again, so local variables inside the module act as a "singleton," meaning they are initialized only once.

You can then use this to initialize objects. 
For example:


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

There are a couple of ways to tell the Python interpreter where to look for modules, aside from the
default local directory and built-in modules. You can use the environment variable `PYTHONPATH` to specify additional directories to look for modules like this:

    PYTHONPATH=/foo python game.py

This executes `game.py`, and enables the script to load modules from the `foo` directory, as well
as the local directory.

You may also use the `sys.path.append` function. Execute it *before* running the `import` command:

    sys.path.append("/foo")

Now the `foo` directory has been added to the list of paths where modules are looked for.


### Exploring built-in modules

Check out the full list of built-in modules in the Python standard library [here](https://docs.python.org/3/library/).

Two very important functions come in handy when exploring modules in Python - the `dir` and `help` functions.

To import the module `urllib`, which enables us to create read data from URLs, we `import` the module:

    # import the library
    import urllib

    # use it
    urllib.urlopen(...)
    
We can look for which functions are implemented in each module by using the `dir` function:

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

When we find the function in the module we want to use, we can read more about it with the `help` function, using the Python interpreter:

    help(urllib.urlopen)

### Writing packages

Packages are namespaces containing multiple packages and modules. They're just directories, but with certain requirements.

Each package in Python is a directory which **MUST** contain a special file called `__init__.py`. This file, which can be empty, indicates that the directory it's in is a Python package. That way it can be imported the same way as a module.

If we create a directory called `foo`, which marks the package name, we can then create a module inside that 
package called `bar`. Then we add the `__init__.py` file inside the `foo` directory.

To use the module `bar`, we can import it in two ways:

    import foo.bar

or:

    from foo import bar

In the first example above, we have to use the `foo` prefix whenever we access the module `bar`. In the second example, we don't, because we've imported the module to our module's namespace.

The `__init__.py` file can also decide which modules the package exports as the API, while keeping other modules internal, by overriding the `__all__` variable like so:

    __init__.py:

    __all__ = ["bar"]

Exercise
--------

In this exercise, print an alphabetically sorted list of all the functions in the `re` module containing the word `find`.

Tutorial Code
-------------

import re

# Your code goes here
find_members = []

Expected Output
---------------

test_object('find_members')
success_msg('Great work!')

Solution
--------

import re

# Your code goes here
find_members = []
for member in dir(re):
    if "find" in member:
        find_members.append(member)

print(sorted(find_members))
