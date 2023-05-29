

Tutorial
--------
Mapa, Filter y Reduce son paradigmas de programación funcional. Permiten al programador (tú) escribir un código más simple y corto, sin necesidad de preocuparse por detalles como bucles y ramificaciones.

Básicamente, estas tres funciones te permiten aplicar una función a través de varios iterables de una sola vez. ```map``` y ```filter```  vienen incorporadas en Python (en el módulo  ```__builtins__``` ) y no requieren importación. Sin embargo, reduce necesita ser importada ya que reside en el módulo```functools``` Veamos cómo funcionan, empezando por ```map```.

#### Map
La funcion ```map()``` en Python tiene la siguiente sintaxis:

```map(func, *iterables)```

Donde ```func```  es la función a la cual se le aplicará cada elemento en los ```iterables``` (tantos como sean necesarios). ¿Notas el asterisco (```*```) en ```iterables```? Significa que puede haber tantos iterables como se desee, siempre y cuando ```func```  tenga exactamente ese número de argumentos de entrada requeridos. Antes de continuar con un ejemplo, es importante que tomes nota de lo siguiente:

1. En Python 2, la función ```map()``` devuelve una lista. Sin embargo, en Python 3, la función devuelve un objeto ```map object``` , que es un generador. Para obtener el resultado como una lista, se puede llamar a la función incorporada  ```list()``` en el objeto ```map```. Es decir, ```list(map(func, *iterables))```
2. El número de argumentos de ```func```debe ser igual al número de ```iterables``` enumerados. 

Veamos cómo se aplican estas reglas con los siguientes ejemplos.

Digamos que tengo una lista (```iterable```) con los nombres de mis mascotas favoritas, todos en minúsculas, y necesito convertirlos a mayúsculas. Tradicionalmente, en Python normal, haría algo como esto:

    mis_mascotas = ['alfred', 'tabitha', 'william', 'arla']
    mascotas_en_mayusculas = []

    for mascota in mis_mascotas:
        mascota_ = mascota.upper()
        mascotas_en_mayusculas.append(mascota_)

    print(mascotas_en_mayusculas)

Esto produciría como resultado  ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Con la función ```map()```, no solo es más fácil, sino que también es mucho más flexible. Simplemente hago esto:

    # Python 3
    mis_mascotas = ['alfred', 'tabitha', 'william', 'arla']

    mascotas_en_mayusculas = list(map(str.upper, mis_mascotas))

    print(mascotas_en_mayusculas)

Esto también produciría el mismo resultado. Observa que, utilizando la sintaxis definida para ```map()```, ```func``` en este caso es ```str.upper``` y ```iterables``` es la lista ```mis_mascotas```- solo un iterable. También observa que no llamamos a la función ```str.upper```  (haciendo esto: ```str.upper()```), ya que la función ```map```  lo hace por nosotros en cada elemento de la lista```mis_mascostas```.

Lo más importante a tener en cuenta es que la función ```str.upper``` requiere solo un argumento por definición, por lo que le pasamos solo **un** argumento por definición, por lo que le pasamos solo **un**  iterable. Entonces, si la función que estás pasando requiere dos, tres o n argumentos, entonces debes pasarle dos, tres o n iterables. Permíteme aclararlo con otro ejemplo.

Digamos que tengo una lista de áreas de círculos que calculé en algún lugar, todas con cinco decimales. Y necesito redondear cada elemento de la lista hasta su posición decimal correspondiente, lo que significa que debo redondear el primer elemento de la lista a un decimal, el segundo elemento de la lista a dos decimales, el tercer elemento de la lista a tres decimales, etc. Con  ```map()``` esto es pan comido. Veamos cómo.

Python ya nos bendice con la función incorporada ```round()``` que toma dos argumentos: el número a redondear y el número de decimales a los que se debe redondear. Entonces, como la función requiere **dos** argumentos, necesitamos pasar **dos** iterables.

    # Python 3

    areas_circulares = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    resultado = list(map(round, areas_circulares, range(1, 7)))

    print(resultado)

¿Ves la belleza de ```map()```? ¿Puedes imaginar la flexibilidad que esto evoca?

La función ```range(1, 7)``` actúa como el segundo argumento de la función ```round``` (el número de decimales requeridos por cada iteración). Entonces, mientras ```map``` itera a través de ```areas_circulares```, durante la primera iteración, el primer elemento de ```areas_circulares```, ```3.56773``` , se pasa junto con el primer elemento de ```range(1,7)```, ```1``` ,a ```round```, lo que efectivamente se convierte en ```round(3.56773, 1)```. Durante la segunda iteración, el segundo elemento de  ```areas_circulares```, ```5.57668```, junto con el segundo elemento de ```range(1,7)```, ```2``` se pasa a ```round```, lo que se traduce en ```round(5.57668, 2)```. Esto ocurre hasta que se alcanza el final de la lista ```areas_circulares```.

Estoy seguro de que te estás preguntando: "¿Qué sucede si paso un iterable que tiene menos o más elementos que el primer iterable? Es decir, ¿qué pasa si paso ```range(1, 3)``` o ```range(1, 9999)```  como el segundo iterable en la función anterior?". Y la respuesta es simple: ¡nada! Bueno, eso no es del todo cierto. "Nada" sucede en el sentido de que la función ```map()``` no generará ninguna excepción, simplemente iterará sobre los elementos hasta que no pueda encontrar un segundo argumento para la función, momento en el cual se detiene y devuelve el resultado.

Entonces, por ejemplo, si evalúas ```resultado = list(map(round, areas_circulares, range(1, 3)))```,  no obtendrás ningún error aunque la longitud de  ```areas_circulares``` y la longitud de ```range(1, 3)``` sean diferentes. En cambio, esto es lo que hace Python: toma el primer elemento de ```areas_circulares``` y el primer elemento de ```range(1,3)``` y los pasa a  ```round```. ```round``` lo evalúa y guarda el resultado. Luego continúa con la segunda iteración, el segundo elemento de  ```areas_circulares``` y el segundo elemento de ```range(1,3)```, ```round``` lo guarda nuevamente. Ahora, en la tercera iteración (```areas_circulares``` tiene un tercer elemento), Python toma el tercer elemento de ```areas_circulares``` y luego intenta tomar el tercer elemento de ```range(1,3)```, pero dado que ```range(1,3)``` no tiene un tercer elemento, Python simplemente se detiene y devuelve el resultado, que en este caso sería simplemente ```[3.6, 5.58]```. 

Adelante, pruébalo.

    # Python 3

    areas_circulares = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    resultado = list(map(round, areas_circulares, range(1, 3)))

    print(resultado)


Lo mismo ocurre si ```areas_circulares``` tiene menos elementos que la longitud del segundo iterable. Python simplemente se detiene cuando no puede encontrar el siguiente elemento en uno de los iterables.

Para consolidar nuestro conocimiento de la función ```map()```, vamos a utilizarla para implementar nuestra propia función ```zip()```. La función  ```zip()``` toma varios iterables y crea una tupla que contiene cada uno de los elementos de los iterables. Al igual que ```map()```, en Python 3, devuelve un objeto generador, que se puede convertir fácilmente en una lista llamando a la función incorporada  ```list``` sobre él. Utiliza la siguiente sesión del intérprete para familiarizarte con ```zip()``` antes de crear la nuestra con ```map()```

    # Python 3

    mis_cadenas = ['a', 'b', 'c', 'd', 'e']
    mis_numeros = [1, 2, 3, 4, 5]

    resultados = list(zip(mis_cadenas, mis_numeros))

    print(resultados)

Como bonificación, ¿puedes adivinar qué sucedería en la sesión anterior si ```my_strings``` y ```my_numbers``` no tienen la misma longitud? ¿No? ¡Pruébalo! Cambia la longitud de uno de ellos.

¡Pasemos a nuestra propia función ```zip()```!

    # Python 3

    mis_cadenas = ['a', 'b', 'c', 'd', 'e']
    mis_numeros = [1, 2, 3, 4, 5]

    resultados = list(map(lambda x, y: (x, y), mis_cadenas, mis_numeros))

    print(resultados)

¡Mira eso! Tenemos el mismo resultado que con ```zip```. 

¿También notaste que ni siquiera necesité crear una función utilizando el método estándar ```def mi_funcion()``` ? ¡Así de flexible es ```map()```, y Python en general! Simplemente utilicé una función ```lambda```. Esto no significa que no se permita utilizar el método de definición de función estándat (```def nombre_funcion()```) aún se permite. Simplemente preferí escribir menos código (ser "pythonico").

Eso es todo sobre ```map()```. Pasemos a ```filter()```.

#### Filter
Mientras que ```map()```  pasa cada elemento del iterable a través de una función y devuelve el resultado de todos los elementos que han pasado por la función,  ```filter()```, en primer lugar, requiere que la función devuelva valores booleanos (verdadero o falso) y luego pasa cada elemento del iterable a través de la función, "filtrando" aquellos que son falsos. Tiene la siguiente sintaxis:

```filter(func, iterable)```

Los siguientes puntos deben tenerse en cuenta con respecto a ```filter()```:

1. A diferencia de  ```map()```, solo se requiere un iterable
2. El argumento ```func``` debe devolver un tipo booleano. Si no lo hace,  ```filter``` simplemente devuelve el ```iterable``` que se le pasa. Además, dado que solo se requiere un iterable, es implícito que ```func```  solo debe tomar un argumento.
3. ```filter``` pasa cada elemento del iterable a través de ```func``` y devuelve **solo** aquellos que evalúan como verdaderos. Quiero decir, está ahí mismo en el nombre --  un "filtro".

Veamos algunos ejemplos:

Lo siguiente es una lista (```iterable```)de las notas de 10 estudiantes en un examen de Química. Filtraremos aquellos que aprobaron con notas superiores a 75... usando ```filter```.

    # Python 3
    notas = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def es_alumno_destacado(nota):
        return nota > 75

    mayor_75 = list(filter(es_alumno_destacado, notas))

    print(mayor_75)

El siguiente ejemplo será un detector de palíndromos. Un "palíndromo" es una palabra, frase o secuencia que se lee igual hacia adelante y hacia atrás. Filtraremos las palabras que son palíndromos de una tupla (```iterable```) de posibles palíndromos.

    # Python 3
    dromos = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromos = list(filter(lambda palabra: palabra == palabra[::-1], dromos))

    print(palindromos)  

Esto debería imprimir ```['madam', 'anutforajaroftuna']```. 

Bastante genial, ¿verdad? Finalmente, ```reduce()```

#### Reduce
```reduce``` aplica una función **de dos argumentos** de forma acumulativa a los elementos de un iterable, opcionalmente comenzando con un argumento inicial. Tiene la siguiente sintaxis:

```reduce(func, iterable[, initial])```

Donde ```func``` es la función a la que se le aplica de forma acumulativa cada elemento en el  ```iterable``` y, ```initial```es el valor opcional que se coloca antes de los elementos del iterable en el cálculo, y sirve como un valor predeterminado cuando el iterable está vacío. Se deben tener en cuenta los siguientes puntos sobre  ```reduce()```:
1. ```func```  requiere dos argumentos, el primero de los cuales es el primer elemento en el ```iterable``` (si no se proporciona ```initial``` )  y el segundo elemento en el  ```iterable```. Si se proporciona ```initial``` , entonces se convierte en el primer argumento para ```func``` y el primer elemento en el ```iterable``` se convierte en el segundo elemento.
2. ```reduce``` "reduce" (sí, lo sé, perdóname) el ```iterable```  a un solo valor.

Como de costumbre, veamos algunos ejemplos.

Crearemos nuestra propia versión de la función ```sum()``` incorporada de Python. La función ```sum()``` devuelve la suma de todos los elementos del iterable que se le pasa.


    # Python 3
    from functools import reduce

    numeros = [3, 4, 6, 9, 34, 12]

    def suma_personalizada(primer_numero, segundo_numero):
        return primer_numero + segundo_numero

    resultado = reduce(suma_personalizada, numeros)
    print(resultado)


El resultado, como esperarías, es ```68```.

Entonces, ¿qué sucedió?

Como de costumbre, todo se trata de iteraciones:  ```reduce```  toma el primer y segundo elementos en ```numeros```y los pasa a ```suma_personalizada``` respectivamente. ```suma_personalizada```  calcula su suma y la devuelve a ```reduce```. Luego  ```reduce```  toma ese resultado y lo aplica como el primer elemento en ```suma_personalizada```  y toma el siguiente elemento (tercero) en  ```numeros```  como el segundo elemento en ```suma_personalizada```. Esto se repite continuamente (de forma acumulativa) hasta que ```numeros``` se agota.

Veamos qué sucede cuando utilizo el valor opcional ```initial```.


    # Python 3
    from functools import reduce

    numeros = [3, 4, 6, 9, 34, 12]

    def suma_personalizada(primer_numero, segundo_numero):
        return primer_numero + segundo_numero

    resultado = reduce(suma_personalizada, numeros, 10)
    print(resultado)


El resultado, como se espera, es ```78``` porque ```reduce```, inicialmente, usa ```10``` como primer argumento para ```suma_personalizada```.

Eso es todo acerca de los conceptos Map, Reduce y Filter en Python. Prueba los siguientes ejercicios para afianzar tu comprensión de cada función.

Ejercicio
---------
En este ejercicio, utilizarás las funciones ```map```, ```filter``` y ```reduce``` para corregir código incorrecto.

Código del tutorial
-------------------
    from functools import reduce 

    # Usa map para imprimir el cuadrado de cada número redondeado
    # a tres decimales
    mis_floats = [4.35, 6.09, 3.25, 9.77, 2.16, 8.88, 4.59]

    # Usa filter para imprimir solo los nombres que tengan menos de
    # o igual a siete letras
    mis_nombres = ["olumide", "akinremi", "josiah", "temidayo", "omoseun"]

    # Usa reduce para imprimir el producto de estos números
    mis_numeros = [4, 6, 9, 23, 5]

    # Corrige cada uno de ellos.
    resultado_map = list(map(lambda x: round(x ** 2, 3), mis_floats))
    resultado_filter = list(filter(lambda nombre: len(nombre) <= 7, mis_nombres))
    resultado_reduce = reduce(lambda num1, num2: num1 * num2, mis_numeros)

    print(resultado_map)
    print(resultado_filter)
    print(resultado_reduce)

    Salida esperada
    ---------------
    test_output_contains("[18.922, 37.088, 10.562, 95.453, 4.666, 78.854, 21.068]")
    test_output_contains("['olumide', 'josiah', 'omoseun']")
    test_output_contains("24840")
    success_msg("¡Felicidades! Buen trabajo.")

    Solución
    --------
    #### Map
    from functools import reduce 

    mis_floats = [4.35, 6.09, 3.25, 9.77, 2.16, 8.88, 4.59]
    mis_nombres = ["olumide", "akinremi", "josiah", "temidayo", "omoseun"]
    mis_numeros = [4, 6, 9, 23, 5]

    resultado_map = list(map(lambda x: round(x ** 2, 3), mis_floats))
    resultado_filter = list(filter(lambda nombre: len(nombre) <= 7, mis_nombres))
    resultado_reduce = reduce(lambda num1, num2: num1 * num2, mis_numeros)

    print(resultado_map)
    print(resultado_filter)
    print(resultado_reduce)
