Tutoriel
--------

`Map`, `Filter` et `Reduce` sont des paradigmes de la programmation fonctionnelle. Ils permettent au programmeur (vous) d'écrire du code plus simple et plus court, sans nécessairement avoir besoin de se soucier des détails comme les boucles et les bifurcations.

Essentiellement, ces trois fonctions vous permettent d'appliquer une fonction sur un certain nombre d'itérables, en une seule opération. `map` et `filter` sont intégrés à Python (dans le module `__builtins__`) et ne nécessitent pas d'importation. `reduce`, cependant, doit être importé car il réside dans le module `functools`. Comprenons mieux comment ils fonctionnent tous, en commençant par `map`.

#### Map

La fonction `map()` en Python a la syntaxe suivante :

```map(func, *iterables)```

Où `func` est la fonction sur laquelle chaque élément dans `iterables` (autant qu'ils soient) serait appliqué. Remarquez l'astérisque (`*`) sur `iterables` ? Cela signifie qu'il peut y avoir autant d'itérables que possible, pourvu que `func` ait ce nombre exact comme arguments d'entrée requis. Avant de passer à un exemple, il est important que vous notiez les points suivants :

1. En Python 2, la fonction `map()` renvoie une liste. En Python 3, cependant, la fonction renvoie un `objet map` qui est un objet générateur. Pour obtenir le résultat sous forme de liste, la fonction intégrée `list()` peut être appelée sur l'objet map, c'est-à-dire `list(map(func, *iterables))`.
2. Le nombre d'arguments à `func` doit être le nombre d'`iterables` listés.

Voyons comment ces règles s'appliquent avec les exemples suivants.

Supposons que j'ai une liste (`iterable`) de mes noms d'animaux de compagnie préférés, tous en minuscules, et que je doive les mettre en majuscules. Traditionnellement, en Python normal, je ferais quelque chose comme ceci :

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Ce qui produirait alors `['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']`.

Avec les fonctions `map()`, c'est non seulement plus facile, mais c'est aussi beaucoup plus flexible. Je fais simplement ceci :

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Ce qui produirait également le même résultat. Notez qu'en utilisant la syntaxe `map()` définie ci-dessus, `func` dans ce cas est `str.upper` et `iterables` est la liste `my_pets` -- juste un itérable. Notez également que nous n'avons pas appelé la fonction `str.upper` (en faisant ceci : `str.upper()`), car la fonction map le fait pour nous sur _chaque élément dans la liste `my_pets`_.

Ce qui est plus important de noter, c'est que la fonction `str.upper` nécessite uniquement **un** argument par définition et donc nous lui avons passé un seul itérable. Donc, _si la fonction que vous passez nécessite deux, ou trois, ou n arguments_, alors _vous devez lui passer deux, trois ou n itérables_. Laissez-moi clarifier cela avec un autre exemple.

Supposons que j'ai une liste d'aires de cercle que j'ai calculées quelque part, toutes en cinq décimales. Et j'ai besoin d'arrondir chaque élément de la liste à ses décimales de position, c'est-à-dire que je dois arrondir le premier élément de la liste à une décimale, le deuxième élément de la liste à deux décimales, le troisième élément de la liste à trois décimales, etc. Avec `map()`, c'est un jeu d'enfant. Voyons comment.

Python nous bénit déjà avec la fonction intégrée `round()` qui prend deux arguments - le nombre à arrondir et le nombre de décimales à arrondir. Donc, puisque la fonction nécessite **deux** arguments, nous devons passer **deux** itérables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Voyez la beauté de `map()` ? Pouvez-vous imaginer la flexibilité que cela évoque ?

La fonction `range(1, 7)` agit comme le deuxième argument de la fonction `round` (le nombre de décimales requises par itération). Donc, pendant que `map` itère à travers `circle_areas`, lors de la première itération, le premier élément de `circle_areas`, `3.56773`, est passé avec le premier élément de `range(1,7)`, `1` à `round`, ce qui le fait devenir effectivement `round(3.56773, 1)`. Lors de la deuxième itération, le deuxième élément de `circle_areas`, `5.57668`, avec le deuxième élément de `range(1,7)`, `2`, est passé à `round` le transformant en `round(5.57668, 2)`. Cela se produit jusqu'à la fin de la liste `circle_areas`.

Je suis sûr que vous vous demandez : "Que se passe-t-il si je passe un itérable de longueur inférieure ou supérieure à celle du premier itérable ? C'est-à-dire, que se passe-t-il si je passe `range(1, 3)` ou `range(1, 9999)` comme deuxième itérable dans la fonction ci-dessus". Et la réponse est simple : rien ! D'accord, ce n'est pas vrai. "Rien" se passe dans le sens où la fonction `map()` ne lèvera aucune exception, elle itérera simplement sur les éléments jusqu'à ce qu'elle ne trouve pas de deuxième argument à la fonction, à ce moment, elle s'arrête simplement et renvoie le résultat.

Ainsi, par exemple, si vous évaluez `result = list(map(round, circle_areas, range(1, 3)))`, vous n'obtiendrez aucune erreur même si la longueur de `circle_areas` et la longueur de `range(1, 3)` diffèrent. Au lieu de cela, ce que Python fait est : il prend le premier élément de `circle_areas` et le premier élément de `range(1,3)` et le passe à `round`. `round` l'évalue puis sauvegarde le résultat. Ensuite, il passe à la deuxième itération, deuxième élément de `circle_areas` et deuxième élément de `range(1,3)`, `round` le sauvegarde à nouveau. Maintenant, lors de la troisième itération (`circle_areas` a un troisième élément), Python prend le troisième élément de `circle_areas` et essaie ensuite de prendre le troisième élément de `range(1,3)` mais puisque `range(1,3)` n'a pas de troisième élément, Python s'arrête simplement et renvoie le résultat, ce qui, dans ce cas, serait simplement `[3.6, 5.58]`.

Allez-y, essayez-le.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

La même chose se produit si `circle_areas` est inférieur à la longueur du deuxième itérable. Python s'arrête simplement lorsqu'il ne trouve pas le prochain élément dans l'un des itérables. 

Pour consolider notre connaissance de la fonction `map()`, nous allons l'utiliser pour implémenter notre propre fonction `zip()`. La fonction `zip()` est une fonction qui prend un certain nombre d'itérables et crée ensuite un tuple contenant chacun des éléments des itérables. Comme `map()`, en Python 3, elle renvoie un objet générateur, qui peut être facilement converti en liste en appelant la fonction intégrée `list` dessus. Utilisez l'interpréteur ci-dessous pour saisir `zip()` avant que nous créions la nôtre avec `map()`

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

En bonus, pouvez-vous deviner ce qui se passerait dans la session ci-dessus si `my_strings` et `my_numbers` n'avaient pas la même longueur ? Non ? Essayez-le ! Changez la longueur de l'un d'eux.

Passons à notre propre fonction `zip()` !

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Regardez ça ! Nous avons le même résultat que `zip`.

Avez-vous aussi remarqué que je n'avais même pas besoin de créer une fonction en utilisant la façon standard `def my_function()` ? C'est à quel point `map()` et Python en général sont flexibles ! J'ai simplement utilisé une fonction `lambda`. Cela ne veut pas dire que l'utilisation de la méthode standard de définition de fonction (de `def function_name()`) n'est pas autorisée, elle l'est toujours. J'ai simplement préféré écrire moins de code (être "Pythonique").

C'est tout pour `map`. Passons à `filter()`

#### Filter

Tandis que `map()` passe chaque élément de l'itérable à travers une fonction et renvoie le résultat de tous les éléments ayant passé par la fonction, `filter()`, tout d'abord, exige que la fonction renvoie des valeurs booléennes (vrai ou faux), puis passe chaque élément de l'itérable à travers la fonction, "filtrant" ceux qui sont faux. Elle a la syntaxe suivante :

```filter(func, iterable)```

Les points suivants sont à noter concernant `filter()` :

1. Contrairement à `map()`, un seul itérable est requis.
2. L'argument `func` doit renvoyer un type booléen. S'il ne le fait pas, `filter` renvoie simplement l'`iterable` qui lui est passé. De plus, étant donné qu'un seul itérable est requis, il est implicite que `func` ne doit prendre qu'un seul argument.
3. `filter` passe chaque élément de l'itérable à travers `func` et renvoie **uniquement** ceux qui évaluent à vrai. Je veux dire, c'est juste là dans le nom - un "filtre". 

Voyons quelques exemples

Ce qui suit est une liste (`iterable`) des scores de 10 étudiants à un examen de chimie. Filtrons ceux qui ont réussi avec des scores supérieurs à 75...en utilisant `filter`.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

L`exemple suivant sera un détecteur de palindrome. Un "palindrome" est un mot, une phrase ou une séquence qui se lit de la même manière à l'envers qu'à l'endroit. Filtrons les mots qui sont des palindromes à partir d'un tuple (`iterable`) de palindromes suspectés.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Ce qui devrait produire `['madam', 'anutforajaroftuna']`.

Plutôt sympa non ? Enfin, `reduce()`

#### Reduce

`reduce` applique une fonction **de deux arguments** de manière cumulative aux éléments d'un itérable, en commençant éventuellement par un argument initial. Elle a la syntaxe suivante :

```reduce(func, iterable[, initial])```

Où `func` est la fonction sur laquelle chaque élément de l'`iterable` est appliqué de manière cumulative, et `initial` est la valeur optionnelle qui est placée avant les éléments de l'itérable dans le calcul, et sert de valeur par défaut lorsque l'itérable est vide. Les points suivants doivent être notés au sujet de `reduce()` :

1. `func` exige deux arguments, le premier étant le premier élément de l'`iterable` (si `initial` n'est pas fourni) et le second élément de l'`iterable`. Si `initial` est fourni, alors il devient le premier argument de `func` et le premier élément de l'`iterable` devient le deuxième élément.
2. `reduce` "réduit" (je sais, pardonnez-moi) `iterable` à une seule valeur.

Comme d'habitude, voyons quelques exemples.

Créons notre propre version de la fonction intégrée de Python `sum()`. La fonction `sum()` renvoie la somme de tous les éléments dans l'itérable qui lui est passé.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

Le résultat, comme vous vous y attendez, est `68`.

Alors, que s'est-il passé ?

Comme d'habitude, tout est question d'itérations : `reduce` prend le premier et le deuxième élément de `numbers` et les passe respectivement à `custom_sum`. `custom_sum` calcule leur somme et la renvoie à `reduce`. `reduce` prend alors ce résultat et l'applique comme le premier élément à `custom_sum` et prend le prochain élément (troisième) de `numbers` comme le deuxième élément à `custom_sum`. Il fait cela de manière continue (cumulative) jusqu'à l'épuisement de `numbers`.

Voyons ce qui se passe quand j'utilise la valeur optionnelle `initial`.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Le résultat, comme vous vous y attendez, est `78` parce que `reduce`, initialement, utilise `10` comme premier argument à `custom_sum`.

C'est tout sur le Python's Map, Reduce et Filter. Essayez les exercices ci-dessous pour vous assurer de votre compréhension de chaque fonction.

Exercice
--------

Dans cet exercice, vous utiliserez chacun des `map`, `filter` et `reduce` pour corriger le code cassé.

Tutorial Code
-------------
from functools import reduce 

# Use map to print the square of each numbers rounded
# to three decimal places
my_floats = [4.35, 6.09, 3.25, 9.77, 2.16, 8.88, 4.59]

# Use filter to print only the names that are less than 
# or equal to seven letters
my_names = ["olumide", "akinremi", "josiah", "temidayo", "omoseun"]

# Use reduce to print the product of these numbers
my_numbers = [4, 6, 9, 23, 5]

# Fix all three respectively.
map_result = list(map(lambda x: x, my_floats))
filter_result = list(filter(lambda name: name, my_names, my_names))
reduce_result = reduce(lambda num1, num2: num1 * num2, my_numbers, 0)

print(map_result)
print(filter_result)
print(reduce_result)

Expected Output
---------------
test_output_contains("[18.922, 37.088, 10.562, 95.453, 4.666, 78.854, 21.068]")
test_output_contains("['olumide', 'josiah', 'omoseun']")
test_output_contains("24840")
success_msg("Congrats! Nice work.")

Solution
--------
#### Map
from functools import reduce 

my_floats = [4.35, 6.09, 3.25, 9.77, 2.16, 8.88, 4.59]
my_names = ["olumide", "akinremi", "josiah", "temidayo", "omoseun"]
my_numbers = [4, 6, 9, 23, 5]

map_result = list(map(lambda x: round(x ** 2, 3), my_floats))
filter_result = list(filter(lambda name: len(name) <= 7, my_names))
reduce_result = reduce(lambda num1, num2: num1 * num2, my_numbers)

print(map_result)
print(filter_result)
print(reduce_result)