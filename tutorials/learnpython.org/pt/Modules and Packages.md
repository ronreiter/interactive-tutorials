Em programação, um módulo é um pedaço de software que possui uma funcionalidade específica. 
Por exemplo, ao construir um jogo de ping pong, um módulo pode ser responsável pela lógica do jogo, e 
outro módulo desenha o jogo na tela. Cada módulo consiste em um arquivo diferente, que pode ser editado separadamente.

### Escrevendo módulos

Módulos em Python são apenas arquivos Python com a extensão .py. O nome do módulo é o mesmo que o nome do arquivo. 
Um módulo Python pode ter um conjunto de funções, classes ou variáveis definidas e implementadas. 
O exemplo acima inclui dois arquivos:

mygame/

- mygame/game.py

- mygame/draw.py
    
 
O script Python `game.py` implementa o jogo. Ele usa a função `draw_game` do arquivo `draw.py`,
ou em outras palavras, o módulo `draw` que implementa a lógica para desenhar o jogo na tela.

Módulos são importados de outros módulos usando o comando `import`. Neste exemplo, o script `game.py` pode 
parecer algo assim:

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

O módulo `draw` pode parecer algo assim:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

Neste exemplo, o módulo `game` importa o módulo `draw`, o que lhe permite usar funções implementadas
nesse módulo. A função `main` usa a função local `play_game` para executar o jogo, e então 
desenha o resultado do jogo usando uma função implementada no módulo `draw` chamada `draw_game`. Para usar
a função `draw_game` do módulo `draw`, precisamos especificar em qual módulo a função está
implementada, usando o operador ponto. Para referenciar a função `draw_game` do módulo `game`,
precisamos importar o módulo `draw` e então chamar `draw.draw_game()`. 

Quando a diretiva `import draw` é executada, o interpretador Python procura um arquivo no diretório em que o script foi executado com o nome do módulo e um sufixo `.py`. Neste caso, ele procurará por `draw.py`. Se for encontrado, será importado. Se não for encontrado, continuará procurando por módulos embutidos.

Você pode ter notado que, ao importar um módulo, um arquivo `.pyc` é criado. Este é um arquivo Python compilado. 
Python compila arquivos em bytecode Python para que não precise parsear os arquivos cada vez que os módulos são carregados. Se um arquivo `.pyc` existir, ele será carregado em vez do arquivo `.py`. Este processo é transparente para o usuário.

### Importando objetos de módulo para o namespace atual

Um namespace é um sistema onde cada objeto é nomeado e pode ser acessado em Python. Importamos a função `draw_game` para o namespace do script principal usando o comando `from`.

    # game.py
    # import the draw module
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

Você pode ter notado que neste exemplo, o nome do módulo não precede `draw_game`, porque especificamos o nome do módulo usando o comando `import`.

As vantagens desta notação é que você não precisa referenciar o módulo repetidamente. No entanto, um namespace não pode ter dois objetos com o mesmo nome, então o comando `import` pode substituir um objeto existente no namespace.

### Importando todos os objetos de um módulo

Você pode usar o comando `import *` para importar todos os objetos de um módulo assim:

    # game.py
    # import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

Isso pode ser um pouco arriscado, já que mudanças no módulo podem afetar o módulo que importa, mas é 
mais curto, e não requer que você especifique cada objeto que deseja importar do módulo.

### Nome de importação personalizado

Módulos podem ser carregados com qualquer nome que você quiser. Isso é útil ao importar um módulo condicionalmente
para usar o mesmo nome no resto do código. 

Por exemplo, se você tem dois módulos `draw` com nomes ligeiramente diferentes, você pode fazer o seguinte:
 

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

### Inicialização do Módulo

A primeira vez que um módulo é carregado em um script Python em execução, ele é inicializado executando o código no módulo uma vez. Se outro módulo em seu código importar o mesmo módulo novamente, ele não será carregado novamente, então variáveis locais dentro do módulo atuam como um "singleton", significando que são inicializadas apenas uma vez.

Você pode então usar isso para inicializar objetos. 
Por exemplo:


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

### Estendendo o caminho de carregamento do módulo

Existem algumas maneiras de informar ao interpretador Python onde procurar módulos, além do
diretório local padrão e módulos embutidos. Você pode usar a variável de ambiente `PYTHONPATH` para especificar diretórios adicionais para procurar módulos assim:

    PYTHONPATH=/foo python game.py

Isso executa `game.py`, e permite que o script carregue módulos do diretório `foo`, bem como do diretório local.

Você também pode usar a função `sys.path.append`. Execute-a *antes* de executar o comando `import`:

    sys.path.append("/foo")

Agora o diretório `foo` foi adicionado à lista de caminhos onde os módulos são procurados.

### Explorando módulos embutidos

Confira a lista completa de módulos embutidos na biblioteca padrão do Python [aqui](https://docs.python.org/3/library/).

Duas funções muito importantes são úteis quando se explora módulos em Python - as funções `dir` e `help`.

Para importar o módulo `urllib`, que nos permite criar e ler dados de URLs, nós `importamos` o módulo:

    # import the library
    import urllib

    # use it
    urllib.urlopen(...)
    
Podemos ver quais funções são implementadas em cada módulo usando a função `dir`:

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

Quando encontramos a função no módulo que queremos usar, podemos ler mais sobre ela com a função `help`, usando o interpretador Python:

    help(urllib.urlopen)

### Escrevendo pacotes

Pacotes são namespaces contendo múltiplos pacotes e módulos. Eles são apenas diretórios, mas com certos requisitos.

Cada pacote em Python é um diretório que **DEVE** conter um arquivo especial chamado `__init__.py`. Este arquivo, que pode estar vazio, indica que o diretório onde ele está é um pacote Python. Dessa forma, ele pode ser importado da mesma forma que um módulo.

Se criarmos um diretório chamado `foo`, que marca o nome do pacote, podemos então criar um módulo dentro desse 
pacote chamado `bar`. Em seguida, adicionamos o arquivo `__init__.py` dentro do diretório `foo`.

Para usar o módulo `bar`, podemos importá-lo de duas maneiras:

    import foo.bar

ou:

    from foo import bar

No primeiro exemplo acima, precisamos usar o prefixo `foo` sempre que acessarmos o módulo `bar`. No segundo exemplo, não precisamos, porque importamos o módulo para o namespace do nosso módulo.

O arquivo `__init__.py` também pode decidir quais módulos o pacote exporta como a API, enquanto mantém outros módulos internos, sobrescrevendo a variável `__all__` assim:

    __init__.py:

    __all__ = ["bar"]

Exercício
--------

Neste exercício, imprima uma lista ordenada alfabeticamente de todas as funções no módulo `re` que contêm a palavra `find`.