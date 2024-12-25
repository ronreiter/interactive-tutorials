Map, Filter y Reduce son paradigmas de la programación funcional. Permiten al programador (tú) escribir código más simple y corto, sin necesidad de preocuparse necesariamente por detalles como bucles y ramificaciones.

Esencialmente, estas tres funciones te permiten aplicar una función a una serie de iterables de una sola vez. `map` y `filter` vienen integrados con Python (en el módulo `__builtins__`) y no requieren importación. `reduce`, sin embargo, necesita ser importado ya que reside en el módulo `functools`. Vamos a obtener una mejor comprensión de cómo funcionan todos, comenzando con `map`.

#### Map
La función `map()` en Python tiene la siguiente sintaxis:

```map(func, *iterables)```

Donde `func` es la función que se aplicará a cada elemento en `iterables` (tantos como sean). ¿Notaste el asterisco (`*`) en `iterables`? Significa que puede haber tantos iterables como sea posible, siempre que `func` tenga exactamente ese número de argumentos de entrada requeridos. Antes de pasar a un ejemplo, es importante que notes lo siguiente:

1. En Python 2, la función `map()` devuelve una lista. En Python 3, sin embargo, la función devuelve un `map object`, que es un objeto generador. Para obtener el resultado como una lista, se puede llamar a la función incorporada `list()` en el objeto mapa, es decir, `list(map(func, *iterables))`.
2. El número de argumentos para `func` debe ser el número de `iterables` listados.

Veamos cómo se aplican estas reglas con los siguientes ejemplos.

Digamos que tengo una lista (`iterable`) de los nombres de mis mascotas favoritas, todos en minúsculas, y los necesito en mayúsculas. Tradicionalmente, en programación normal en Python, haría algo así:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Lo cual produciría `['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']`.

Con las funciones `map()`, no solo es más fácil, sino que también es mucho más flexible. Simplemente hago esto:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Que también produciría el mismo resultado. Ten en cuenta que al usar la sintaxis definida de `map()` arriba, `func` en este caso es `str.upper` y `iterables` es la lista `my_pets` -- solo un iterable. También observa que no llamamos a la función `str.upper` (haciendo esto: `str.upper()`), ya que la función map lo hace por nosotros en _cada elemento en la lista `my_pets`_.

Lo que es más importante notar es que la función `str.upper` requiere solo **un** argumento por definición, así que pasamos solo **un** iterable a ella. Entonces, _si la función que estás pasando requiere dos, o tres, o n argumentos_, entonces _necesitas pasar dos, tres o n iterables a ella_. Permíteme aclararlo con otro ejemplo.

Digamos que tengo una lista de áreas de círculos que calculé en algún lugar, todas con cinco decimales. Y necesito redondear cada elemento en la lista a su posición decimal, lo que significa que tengo que redondear el primer elemento de la lista a un decimal, el segundo elemento de la lista a dos decimales, el tercer elemento de la lista a tres decimales, etc. Con `map()` esto es pan comido. Veamos cómo.

Python ya nos bendice con la función incorporada `round()` que toma dos argumentos: el número a redondear y el número de decimales a los que se redondeará el número. Entonces, como la función requiere **dos** argumentos, necesitamos pasar **dos** iterables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

¿Ves la belleza de `map()`? ¿Puedes imaginar la flexibilidad que esto evoca?

La función `range(1, 7)` actúa como el segundo argumento para la función `round` (el número de decimales requeridos por iteración). Así que mientras `map` itera a través de `circle_areas`, durante la primera iteración, el primer elemento de `circle_areas`, `3.56773` se pasa junto con el primer elemento de `range(1,7)`, `1` a `round`, haciéndolo efectivamente `round(3.56773, 1)`. Durante la segunda iteración, el segundo elemento de `circle_areas`, `5.57668` junto con el segundo elemento de `range(1,7)`, `2` se pasa a `round`, haciéndolo traducir a `round(5.57668, 2)`. Esto sucede hasta llegar al final de la lista `circle_areas`.

Estoy seguro que te estás preguntando: "¿Qué pasa si paso un iterable menor o mayor que la longitud del primer iterable? Es decir, si paso `range(1, 3)` o `range(1, 9999)` como el segundo iterable en la función anterior". Y la respuesta es simple: ¡nada! Bueno, eso no es del todo cierto. "Nada" en el sentido de que la función `map()` no emitirá ninguna excepción, simplemente iterará sobre los elementos hasta que no encuentre un segundo argumento para la función, momento en el cual simplemente se detiene y devuelve el resultado.

Así que, por ejemplo, si evalúas `result = list(map(round, circle_areas, range(1, 3)))`, no obtendrás ningún error incluso si la longitud de `circle_areas` y la longitud de `range(1, 3)` difieren. En cambio, esto es lo que hace Python: Toma el primer elemento de `circle_areas` y el primer elemento de `range(1,3)` y lo pasa a `round`. `round` lo evalúa y luego guarda el resultado. Luego pasa a la segunda iteración, segundo elemento de `circle_areas` y segundo elemento de `range(1,3)`, `round` lo guarda de nuevo. Ahora, en la tercera iteración (`circle_areas` tiene un tercer elemento), Python toma el tercer elemento de `circle_areas` y luego intenta tomar el tercer elemento de `range(1,3)` pero dado que `range(1,3)` no tiene un tercer elemento, Python simplemente se detiene y devuelve el resultado, que en este caso sería simplemente `[3.6, 5.58]`.

Adelante, pruébalo.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

Lo mismo ocurre si `circle_areas` es menor que la longitud del segundo iterable. Python simplemente se detiene cuando no puede encontrar el siguiente elemento en uno de los iterables.

Para consolidar nuestro conocimiento de la función `map()`, vamos a usarla para implementar nuestra propia función `zip()`. La función `zip()` es una función que toma varios iterables y luego crea una tupla que contiene cada uno de los elementos en los iterables. Al igual que `map()`, en Python 3, devuelve un objeto generador, que puede convertirse fácilmente en una lista llamando a la función incorporada `list` sobre él. Usa la siguiente sesión de intérprete para familiarizarte con `zip()` antes de crear el nuestro con `map()`

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Como un bonus, ¿puedes adivinar qué sucedería en la sesión anterior si `my_strings` y `my_numbers` no tienen la misma longitud? ¿No? Inténtalo! Cambia la longitud de uno de ellos.

¡Vamos a nuestra propia función `zip()`!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

¡Sólo mira eso! Tenemos el mismo resultado que `zip`.

¿También notaste que ni siquiera necesitaba crear una función usando el método estándar `def my_function()`? ¡Así de flexible es `map()`, y Python en general! Simplemente usé una función `lambda`. Esto no quiere decir que no se permita usar el método estándar de definición de funciones (de `def function_name()`), aún está permitido. Simplemente preferí escribir menos código (ser "Pythonic").

Eso es todo sobre map. Pasemos a `filter()`

#### Filter
Mientras que `map()` pasa cada elemento en el iterable a través de una función y devuelve el resultado de todos los elementos que han pasado por la función, `filter()`, en primer lugar, requiere que la función devuelva valores booleanos (verdadero o falso) y luego pasa cada elemento en el iterable a través de la función, "filtrando" aquellos que son falsos. Tiene la siguiente sintaxis:

```filter(func, iterable)```

Se deben tener en cuenta los siguientes puntos sobre `filter()`:

1. A diferencia de `map()`, solo se requiere un iterable.
2. El argumento `func` debe devolver un tipo booleano. Si no lo hace, `filter` simplemente devuelve el `iterable` que se le pasó. Además, como solo se requiere un iterable, es implícito que `func` debe tomar solo un argumento.
3. `filter` pasa cada elemento en el iterable a través de `func` y devuelve **solo** aquellos que se evalúan como verdaderos. Quiero decir, está justo en el nombre: un "filtro".

Veamos algunos ejemplos

La siguiente es una lista (`iterable`) de las calificaciones de 10 estudiantes en un examen de Química. Filtraremos aquellos que aprobaron con calificaciones superiores a 75... usando `filter`.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

El siguiente ejemplo será un detector de palíndromos. Un "palíndromo" es una palabra, frase o secuencia que se lee igual hacia adelante y hacia atrás. Filtraremos palabras que son palíndromos de una tupla (`iterable`) de palíndromos sospechosos.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Lo cual debería producir `['madam', 'anutforajaroftuna']`.

Bastante limpio, ¿verdad? Finalmente, `reduce()`

#### Reduce
`reduce` aplica una función **de dos argumentos** de manera acumulativa a los elementos de un iterable, comenzando opcionalmente con un argumento inicial. Tiene la siguiente sintaxis:

```reduce(func, iterable[, initial])```

Donde `func` es la función en la cual cada elemento en el `iterable` se aplica de manera acumulativa, y `initial` es el valor opcional que se coloca antes de los elementos del iterable en el cálculo, y sirve como valor predeterminado cuando el iterable está vacío. Debes tener en cuenta lo siguiente sobre `reduce()`:
1. `func` requiere dos argumentos, el primero de los cuales es el primer elemento en `iterable` (si `initial` no está suministrado) y el segundo elemento en `iterable`. Si se suministra `initial`, entonces se convierte en el primer argumento de `func` y el primer elemento en `iterable` se convierte en el segundo elemento.
2. `reduce` "reduce" (lo sé, perdóname) `iterable` en un solo valor.

Como de costumbre, veamos algunos ejemplos.

Vamos a crear nuestra propia versión de la función incorporada `sum()` de Python. La función `sum()` devuelve la suma de todos los elementos en el iterable que se le pasa.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)


El resultado, como esperarías, es `68`.

Entonces, ¿qué sucedió?

Como de costumbre, todo se trata de iteraciones: `reduce` toma el primero y el segundo elemento en `numbers` y los pasa a `custom_sum` respectivamente. `custom_sum` calcula su suma y la devuelve a `reduce`. `reduce` luego toma ese resultado y lo aplica como el primer elemento a `custom_sum` y toma el siguiente elemento (tercero) en `numbers` como el segundo elemento para `custom_sum`. Hace esto continuamente (de manera acumulativa) hasta que `numbers` se agota.

Veamos qué sucede cuando utilizo el valor opcional `initial`.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)


El resultado, como esperarías, es `78` porque `reduce`, inicialmente, utiliza `10` como el primer argumento de `custom_sum`.

Eso es todo sobre Map, Reduce, y Filter en Python. Intenta los ejercicios a continuación para ayudar a afirmar tu comprensión de cada función.

Exercise
--------
En este ejercicio, usarás cada uno de `map`, `filter`, y `reduce` para arreglar el código roto.