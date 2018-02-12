Tutorial
--------

Los módulos en Python son simplemente archivos Python con la extensión .py, que implementa un conjunto de funciones. Los módulos son importados desde otros módulos usando el comando `import`.

Para importar un módulo, usamos el comando `import`. Consulta la lista completa de módulos incorporados en la librería estándar de Python [aquí](https://docs.python.org/3/library/).

La primera vez que se carga un módulo dentro de un script Python en ejecución, éste se inicializa ejecutando el código del módulo una vez. Si otro módulo en tu código importa el mismo módulo de nuevo, éste no se cargará una segunda vez - de modo que las variables locales dentro del módulo actúan como un "singleton" - solo son inicializadas una vez.

Si queremos importar el módulo `urllib`, que nos permite crear datos de lectura desde URLs, simplemente `import` (importamos) el módulo:

    # importamos la librería
    import urllib

    # la usamos
    urllib.urlopen(...)

### Explorando los módulos incorporados

Hay dos funciones muy importantes que son útiles cuando se exploran módulos en Python: las funciones `dir` y `help`.

Podemos buscar que funciones se implementan en cada módulo usando la función `dir`:

    >>> import urllib
    >>> dir(urllib)
    ['ContentTooShortError', 'FancyURLopener', 'MAXFTPCACHE', 'URLopener', '__all__', '__builtins__', '__doc__', '__file__', '__name__', '__package__', '__version__', '_ftperrors', '_get_proxies', '_get_proxy_settings', '_have_ssl', '_hexdig', '_hextochr', '_hostprog', '_is_unicode', '_localhost', '_noheaders', '_nportprog', '_passwdprog', '_portprog', '_queryprog', '_safe_map', '_safe_quoters', '_tagprog', '_thishost', '_typeprog', '_urlopener', '_userprog', '_valueprog', 'addbase', 'addclosehook', 'addinfo', 'addinfourl', 'always_safe', 'basejoin', 'c', 'ftpcache', 'ftperrors', 'ftpwrapper', 'getproxies', 'getproxies_environment', 'getproxies_macosx_sysconf', 'i', 'localhost', 'main', 'noheaders', 'os', 'pathname2url', 'proxy_bypass', 'proxy_bypass_environment', 'proxy_bypass_macosx_sysconf', 'quote', 'quote_plus', 'reporthook', 'socket', 'splitattr', 'splithost', 'splitnport', 'splitpasswd', 'splitport', 'splitquery', 'splittag', 'splittype', 'splituser', 'splitvalue', 'ssl', 'string', 'sys', 'test', 'test1', 'thishost', 'time', 'toBytes', 'unquote', 'unquote_plus', 'unwrap', 'url2pathname', 'urlcleanup', 'urlencode', 'urlopen', 'urlretrieve']

Cuando encontramos la función en el módulo que queremos usar, poder leer más sobre ella usando la función `help`, dentro del intérprete de Python:

    help(urllib.urlopen)

### Escribiendo módulos

Escribir módulos en Python es muy sencillo. Para crear un módulo propio, simplemente creamos un nuevo archivo .py con el nombre del módulo, y después lo importamos usando el nombre del archivo Python (sin la extensión .py) usando el comando `import`.

### Escribiendo paquetes

Los paquetes son espacios de nombre que contienen múltiples paquetes y módulos múltiples. Son simplemente directorios, pero dándole un giro.

Cada paquete en Python es un directorio que **DEBE** contener un archivo especial llamado `__init__ py`. Este archivo puede estar vacío, e indica que el contenido del directorio es un paquete Python, así que puede ser importado de la misma manera que se importa un módulo.

Si creamos un directorio llamado `foo`, que marca el nombre del paquete, podemos crear un módulo dentro del paquete llamado `bar`. Además no debemos olvidarnos de agregar el fichero `__init__.py` dentro  del directorio `foo`.

Para usar el módulo `bar`, podemos importarlo de dos maneras:

    import foo.bar

o:

    from foo import bar

Con el primer método, debemos usar el prefijo `foo` cuando accedamos al módulo `bar`. En el segundo método no lo necesitamos, porque importamos el módulo al espacio de nombres de nuestro módulo.

El archivo `__init__.py` puede además decidir que módulos exporta el paquete como API, mientras mantiene los otros módulos internamente, sobreescribiendo la variable `__all__`, tal que así:

    __init__.py

    __all__ = ["bar"]

Exercise
--------

En este ejercicio, necesitarás imprimir una lista alfabéticamente ordenada de todas las funciones en el módulo `re`, que contengan la palabra `find`.

Tutorial Code
-------------

import re

# Tu código va aquí

Expected Output
---------------

test_object('find_members')
success_msg('Great work!')

Solution
--------

import re

# Tu código va aquí
find_members = []
for member in dir(re):
    if "find" in member:
        find_members.append(member)

print(sorted(find_members))
