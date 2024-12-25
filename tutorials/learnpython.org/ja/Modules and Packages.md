プログラミングにおいて、モジュールとは特定の機能を持つソフトウェアの一部です。
例えば、ピンポンゲームを作る際には、1つのモジュールがゲームロジックを担当し、別のモジュールが画面上にゲームを描画します。各モジュールは別々に編集可能な異なるファイルで構成されます。

### Writing modules

Pythonのモジュールは、拡張子が.pyのPythonファイルです。モジュールの名前はファイル名と同じです。
Pythonモジュールには、定義および実装された一連の関数、クラス、または変数を含めることができます。
上記の例には、次の2つのファイルがあります：

mygame/

- mygame/game.py

- mygame/draw.py

Pythonスクリプト`game.py`はゲームを実装します。`draw.py`ファイルの`draw_game`関数を利用し、
つまり、画面上にゲームを描画するロジックを実装する`draw`モジュールを利用します。

モジュールは他のモジュールから`import`コマンドを使ってインポートされます。この例では、`game.py`スクリプトは
次のようになります：

    # game.py
    # drawモジュールをインポート
    import draw

    def play_game():
        ...

    def main():
        result = play_game()
        draw.draw_game(result)
        
    # このスクリプトが実行されると、main()が実行されます
    if __name__ == '__main__':
        main()

`draw`モジュールは次のようになります：

    # draw.py

    def draw_game():
        ...

    def clear_screen(screen):
        ...

この例では、`game`モジュールが`draw`モジュールをインポートしており、それによりそのモジュールで実装された関数を使用できるようになります。`main`関数はローカル関数`play_game`を使用してゲームを実行し、その後`draw`モジュールに実装された関数`draw_game`を使用してゲームの結果を描画します。`draw`モジュールの`draw_game`関数を使用するには、どのモジュール内に関数が実装されているかをドット演算子を使って指定する必要があります。`game`モジュールから`draw_game`関数を参照するには、`draw`モジュールをインポートし、その後`draw.draw_game()`を呼び出します。

`import draw`ディレクティブが実行されると、Pythonインタプリタはスクリプトが実行されたディレクトリ内でモジュール名と`.py`サフィックスが一致するファイルを探します。この場合は`draw.py`を探します。見つかれば、それがインポートされます。見つからない場合は、組み込みモジュールを探し続けます。

モジュールをインポートするときに`.pyc`ファイルが生成されることに気付くかもしれません。これはコンパイルされたPythonファイルです。
Pythonはモジュールがロードされるたびにファイルを解析する必要がないように、ファイルをPythonバイトコードにコンパイルします。`.pyc`ファイルが存在する場合、それは`.py`ファイルの代わりにロードされます。このプロセスはユーザに対して透明です。

### Importing module objects to the current namespace

名前空間は、Pythonオブジェクトがアクセス可能になるためのシステムです。`from`コマンドを使って
関数`draw_game`をメインスクリプトの名前空間にインポートします。

    # game.py
    # drawモジュールをインポート
    from draw import draw_game

    def main():
        result = play_game()
        draw_game(result)

この例で、モジュール名が`draw_game`に先行していないことに気付くかもしれません。これは`import`コマンドでモジュール名を指定したためです。

この記法の利点は、同じモジュールを何度も参照する必要がないことです。しかし、名前空間に同じ名前のオブジェクトを2つ持つことはできないので、`import`コマンドが名前空間内の既存のオブジェクトを置き換える可能性があります。

### Importing all objects from a module

`import *`コマンドを使って、モジュール内のすべてのオブジェクトを次のようにインポートできます：

    # game.py
    # drawモジュールをインポート
    from draw import *

    def main():
        result = play_game()
        draw_game(result)

この方法はリスクがあるかもしれませんが、モジュールに変更があるとインポートするモジュールに影響を与える可能性があります。しかし、より短く、モジュールからインポートしたいすべてのオブジェクトを指定する必要がありません。

### Custom import name

モジュールは任意の名前でロードできます。これは、モジュールを条件付きでインポートし、コードの残りの部分で同じ名前を使用する際に便利です。

例えば、名前が少し違う`draw`モジュールが2つある場合は、次のようにします：

    # game.py
    # drawモジュールをインポート
    if visual_mode:
        # ビジュアルモードで、グラフィックを使って描画する
        import draw_visual as draw
    else:
        # テキストモードで、テキストを出力する
        import draw_textual as draw

    def main():
        result = play_game()
        # visual_modeに応じてビジュアルまたはテキストで表示される
        draw.draw_game(result)

### Module initialization

最初にモジュールが実行中のPythonスクリプトにロードされると、モジュールのコードが一度実行されて初期化されます。コード内の別のモジュールが同じモジュールを再度インポートしても、それは再びロードされないため、モジュール内のローカル変数は「シングルトン」として振る舞い、一度だけ初期化されます。

これを利用してオブジェクトを初期化できます。
例：

    # draw.py

    def draw_game():
        # 画面をクリアする際に、このモジュールで初期化されたメイン画面オブジェクトを使用する
        clear_screen(main_screen)
        ...

    def clear_screen(screen):
        ...
        
    class Screen():
        ...

    # メインスクリーンをシングルトンとして初期化
    main_screen = Screen()


### Extending module load path

Pythonインタプリタにモジュールを探すディレクトリを指定する方法はいくつかありますが、デフォルトのローカルディレクトリと組み込みモジュール以外にも可能です。環境変数`PYTHONPATH`を使用して、モジュールを探す追加のディレクトリを指定できます：

    PYTHONPATH=/foo python game.py

これにより、`game.py`が実行され、ローカルディレクトリと同様に`foo`ディレクトリからモジュールをロードできるようになります。

または、`sys.path.append`関数を使うこともできます。これは`import`コマンドを実行する*前*に実行してください：

    sys.path.append("/foo")

これで、モジュールを探すパスのリストに`foo`ディレクトリが追加されます。


### Exploring built-in modules

Pythonの標準ライブラリにおける組み込みモジュールの完全なリストを[こちら](https://docs.python.org/3/library/)で確認してください。

Pythonモジュールを探索する際に便利な二つの非常に重要な関数は、`dir`と`help`関数です。

モジュール`urllib`をインポートすると、URLからデータを読み込むことが可能になります。

    # ライブラリをインポート
    import urllib

    # 使用する
    urllib.urlopen(...)

どの関数がモジュール内に実装されているかは、`dir`関数を使って調べることができます：

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

モジュール内の使用したい関数を見つけたら、それについてもっと知るにはPythonインタプリタを使用して`help`関数を使います：

    help(urllib.urlopen)

### Writing packages

パッケージは、複数のパッケージとモジュールを含む名前空間です。ディレクトリに似ていますが、特定の要件があります。

各Pythonのパッケージは、`__init__.py`という特別なファイルを**必ず**含んでいるディレクトリです。このファイルは空でも構いませんが、パッケージであることを示し、そのディレクトリをモジュールのようにインポートできるようにします。

`foo`という名前のパッケージを示すディレクトリを作成し、そのパッケージ内に`bar`というモジュールを作成します。その後、`foo`ディレクトリ内に`__init__.py`ファイルを追加します。

モジュール`bar`を使用するには、次の2つの方法でインポートできます：

    import foo.bar

または：

    from foo import bar

上記の最初の例では、モジュール`bar`にアクセスするときは常に`foo`プレフィックスを使用する必要があります。2番目の例では、その必要はありません。なぜなら、モジュールを自分のモジュールの名前空間にインポートしているからです。

`__init__.py`ファイルは、パッケージが外部に公開するモジュールをAPIとして決定し、他のモジュールを内部に保つこともできます。これは`__all__`変数をオーバーライドすることで行います：

    __init__.py:

    __all__ = ["bar"]

Exercise
--------

この演習では、単語`find`を含む`re`モジュール内のすべての関数をアルファベット順に並べて出力します。