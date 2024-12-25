在编程中，模块是具有特定功能的软件部分。例如，在构建乒乓球游戏时，一个模块可能负责游戏逻辑，而另一个模块负责在屏幕上绘制游戏。每个模块由不同的文件组成，可以分别进行编辑。

### Writing modules

Python 中的模块只是带有 .py 扩展名的 Python 文件。模块的名称与文件名相同。一个 Python 模块可以定义和实现一组函数、类或变量。上面的例子包括两个文件：

mygame/

- mygame/game.py

- mygame/draw.py

Python 脚本 `game.py` 实现了游戏。它使用文件 `draw.py` 中的函数 `draw_game`，或者换句话说，使用实现了在屏幕上绘制游戏逻辑的 `draw` 模块。

模块是通过 `import` 命令从其他模块导入的。在这个例子中，`game.py` 脚本可能如下所示：

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

`draw` 模块可能如下所示：

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

在这个例子中，`game` 模块导入了 `draw` 模块，使其能够使用在该模块中实现的函数。`main` 函数使用本地函数 `play_game` 来运行游戏，然后使用在 `draw` 模块中实现的函数 `draw_game` 绘制游戏的结果。要使用 `draw` 模块中的 `draw_game` 函数，我们需要指定函数实现的模块，使用点操作符。要从 `game` 模块引用 `draw_game` 函数，我们需要导入 `draw` 模块，然后调用 `draw.draw_game()`。

当执行 `import draw` 指令时，Python 解释器会在执行脚本的目录中查找具有模块名称和 `.py` 后缀的文件。在这个例子中，它会查找 `draw.py`。如果找到，它将被导入。如果找不到，它将继续查找内置模块。

您可能已经注意到，在导入模块时，会创建一个 `.pyc` 文件。它是一个编译后的 Python 文件。Python 将文件编译为 Python 字节码，这样每次加载模块时就不必解析文件。如果 `.pyc` 文件存在，它将被加载而不是 `.py` 文件。这个过程对用户是透明的。

### Importing module objects to the current namespace

命名空间是一个系统，在这个系统中，每个对象都有名字，可以在 Python 中被访问。我们使用 `from` 命令将函数 `draw_game` 导入到主脚本的命名空间中。

    # game.py
    # import the draw module
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

您可能已经注意到，在这个例子中，模块名不在 `draw_game` 之前，因为我们已经使用 `import` 命令指定了模块名。

这种表示法的优点是您不必一遍又一遍地引用模块。但是，一个命名空间不能有两个同名对象，因此 `import` 命令可能会替换命名空间中已有的对象。

### Importing all objects from a module

可以使用 `import *` 命令导入模块中的所有对象，如下所示：

    # game.py
    # import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

这可能有些风险，因为模块的变化可能会影响导入它的模块，但这样更简短，并且不需要您指定要从模块中导入的每个对象。

### Custom import name

模块可以在任何您想要的名称下加载。这在有条件地导入模块以在其余代码中使用相同名称时很有用。

例如，如果您有两个稍微不同名称的 `draw` 模块，您可以执行以下操作：

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

模块第一次被加载到正在运行的 Python 脚本中时，模块会通过执行模块中的代码一次进行初始化。如果代码中的另一个模块再次导入相同的模块，它将不会再次被加载，因此模块内部的局部变量充当“单例”，意味着它们只被初始化一次。

然后您可以使用它来初始化对象。例如：

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

除了默认的本地目录和内置模块，还有几种方法可以告诉 Python 解释器在哪里查找模块。您可以使用环境变量 `PYTHONPATH` 来指定模块的其他目录，如下所示：

    PYTHONPATH=/foo python game.py

这样执行 `game.py`，并使脚本能够从 `foo` 目录以及本地目录加载模块。

您还可以使用 `sys.path.append` 方法。它需要在执行 `import` 命令之前使用：

    sys.path.append("/foo")

现在，`foo` 目录已被添加到查找模块路径的列表中。

### Exploring built-in modules

浏览完整的 Python 标准库中的内置模块列表 [here](https://docs.python.org/3/library/).

在探索 Python 模块时，有两个非常重要的函数 - `dir` 和 `help`。

要导入模块 `urllib`，该模块允许我们从 URL 创建数据读取，我们 `import` 模块：

    # import the library
    import urllib

    # use it
    urllib.urlopen(...)

我们可以通过使用 `dir` 函数查看每个模块中实现了哪些函数：

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

当我们找到模块中我们想要使用的函数时，可以使用 Python 解释器中的 `help` 函数阅读更多关于它的信息：

    help(urllib.urlopen)

### Writing packages

包是包含多个包和模块的命名空间。它们只是目录，但有一定的要求。

Python 中的每个包都是一个目录，它**必须**包含一个名为 `__init__.py` 的特殊文件。这个文件可以是空的，表明它所在的目录是一个 Python 包。这样它可以像模块一样被导入。

如果我们创建一个名为 `foo` 的目录，它标志着包名，然后我们可以在该包中创建一个名为 `bar` 的模块。接着，我们在 `foo` 目录中添加 `__init__.py` 文件。

要使用模块 `bar`，我们有两种方式导入它：

    import foo.bar

或：

    from foo import bar

在上面的第一个例子中，我们每次访问模块 `bar` 时都要使用 `foo` 前缀。在第二个例子中，我们不需要，因为我们已经将模块导入到我们模块的命名空间中。

`__init__.py` 文件还可以通过重写 `__all__` 变量来决定包作为 API 导出的模块，同时使其他模块保持内部使用：

    __init__.py:

    __all__ = ["bar"]

练习
--------

在这个练习中，打印 `re` 模块中所有函数的按字母顺序排列的列表，这些函数包含单词 `find`。