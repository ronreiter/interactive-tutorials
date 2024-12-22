En programación, un módulo es una pieza de software que tiene una funcionalidad específica. Por ejemplo, al construir un juego de ping pong, un módulo puede ser responsable de la lógica del juego y otro módulo dibuja el juego en la pantalla. Cada módulo consiste en un archivo diferente, el cual puede ser editado por separado.

### Writing modules

Los módulos en Python son simplemente archivos de Python con una extensión .py. El nombre del módulo es el mismo que el nombre del archivo. Un módulo de Python puede tener un conjunto de funciones, clases o variables definidas e implementadas. El ejemplo anterior incluye dos archivos:

mygame/

- mygame/game.py

- mygame/draw.py

El script de Python `game.py` implementa el juego. Utiliza la función `draw_game` del archivo `draw.py`, o en otras palabras, el módulo `draw` que implementa la lógica para dibujar el juego en la pantalla.

Los módulos se importan de otros módulos usando el comando `import`. En este ejemplo, el script `game.py` puede tener un aspecto como el siguiente:

El módulo `draw` puede parecerse a esto:

En este ejemplo, el módulo `game` importa el módulo `draw`, lo cual le permite usar funciones implementadas en ese módulo. La función `main` usa la función local `play_game` para ejecutar el juego, y luego dibuja el resultado del juego usando una función implementada en el módulo `draw` llamada `draw_game`. Para usar la función `draw_game` del módulo `draw`, necesitamos especificar en qué módulo está implementada la función, utilizando el operador punto. Para referenciar la función `draw_game` desde el módulo `game`, necesitamos importar el módulo `draw` y luego llamar a `draw.draw_game()`.

Cuando se ejecuta la directiva `import draw`, el intérprete de Python busca un archivo en el directorio en el que se ejecutó el script con el nombre del módulo y un sufijo `.py`. En este caso, buscará `draw.py`. Si se encuentra, se importará. Si no se encuentra, seguirá buscando módulos integrados.

Puede que hayas notado que al importar un módulo, se crea un archivo `.pyc`. Este es un archivo compilado de Python. Python compila archivos en bytecode Python para que no tenga que analizar los archivos cada vez que se cargan los módulos. Si existe un archivo `.pyc`, se carga en lugar del archivo `.py`. Este proceso es transparente para el usuario.

### Importing module objects to the current namespace

Un namespace es un sistema donde cada objeto está nombrado y puede ser accedido en Python. Importamos la función `draw_game` en el namespace del script principal usando el comando `from`.

Puede que hayas notado que en este ejemplo, el nombre del módulo no precede a `draw_game`, porque hemos especificado el nombre del módulo usando el comando `import`.

Las ventajas de esta notación son que no tienes que referenciar el módulo una y otra vez. Sin embargo, un namespace no puede tener dos objetos con el mismo nombre, por lo que el comando `import` puede reemplazar un objeto existente en el namespace.

### Importing all objects from a module

Puede utilizar el comando `import *` para importar todos los objetos en un módulo de la siguiente manera:

Esto puede ser un poco arriesgado ya que los cambios en el módulo pueden afectar al módulo que lo importa, pero es más corto y no requiere que especifiques cada objeto que deseas importar del módulo.

### Custom import name

Los módulos pueden ser cargados bajo cualquier nombre que desees. Esto es útil al importar un módulo condicionalmente para usar el mismo nombre en el resto del código.

Por ejemplo, si tienes dos módulos `draw` con nombres ligeramente diferentes, puedes hacer lo siguiente:

### Module initialization

La primera vez que un módulo se carga en un script de Python en ejecución, se inicializa ejecutando el código en el módulo una vez. Si otro módulo en tu código importa el mismo módulo de nuevo, no se cargará otra vez, por lo que las variables locales dentro del módulo actúan como un "singleton", lo que significa que se inicializan solo una vez.

Puedes usar esto para inicializar objetos. Por ejemplo:

### Extending module load path

Hay un par de maneras de indicar al intérprete de Python dónde buscar módulos, aparte del directorio local predeterminado y módulos integrados. Puedes usar la variable de entorno `PYTHONPATH` para especificar directorios adicionales para buscar módulos de la siguiente manera:

Esto ejecuta `game.py` y permite al script cargar módulos del directorio `foo`, así como del directorio local.

También puedes usar la función `sys.path.append`. Ejecútala *antes* de ejecutar el comando `import`:

Ahora el directorio `foo` se ha añadido a la lista de rutas donde se busca módulos.

### Exploring built-in modules

Consulta la lista completa de módulos integrados en la biblioteca estándar de Python [aquí](https://docs.python.org/3/library/).

Dos funciones muy importantes son útiles al explorar módulos en Python: las funciones `dir` y `help`.

Para importar el módulo `urllib`, que nos permite crear y leer datos desde URLs, nosotros `importamos` el módulo:

Podemos buscar qué funciones están implementadas en cada módulo usando la función `dir`:

Cuando encontramos la función en el módulo que queremos usar, podemos leer más sobre ella con la función `help`, usando el intérprete de Python:

### Writing packages

Los paquetes son namespaces que contienen múltiples paquetes y módulos. Son solo directorios, pero con ciertos requisitos.

Cada paquete en Python es un directorio que **DEBE** contener un archivo especial llamado `__init__.py`. Este archivo, que puede estar vacío, indica que el directorio en el que está es un paquete de Python. De esa manera, puede ser importado de la misma manera que un módulo.

Si creamos un directorio llamado `foo`, que marca el nombre del paquete, podemos crear un módulo dentro de ese paquete llamado `bar`. Luego añadimos el archivo `__init__.py` dentro del directorio `foo`.

Para usar el módulo `bar`, podemos importarlo de dos maneras:

En el primer ejemplo anterior, tenemos que usar el prefijo `foo` cada vez que accedemos al módulo `bar`. En el segundo ejemplo, no, porque hemos importado el módulo al namespace de nuestro módulo.

El archivo `__init__.py` también puede decidir qué módulos exporta el paquete como la API, mientras mantiene otros módulos internos, al sobrescribir la variable `__all__` de la siguiente manera:

```
__init__.py:

__all__ = ["bar"]
```

Exercise
--------

En este ejercicio, imprime una lista ordenada alfabéticamente de todas las funciones en el módulo `re` que contienen la palabra `find`.