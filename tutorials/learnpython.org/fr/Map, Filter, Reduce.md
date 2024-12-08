Tutorial
--------
Map, Filter, et Reduce sont des paradigmes de la programmation fonctionnelle. Ils permettent au programmeur (vous) d'écrire du code plus simple et plus court, sans nécessairement avoir besoin de se préoccuper des subtilités comme les boucles et les branchements.

Essentiellement, ces trois fonctions vous permettent d'appliquer une fonction sur un certain nombre d'itérables, en un seul coup. ```map``` et ```filter``` sont intégrés à Python (dans le module ```__builtins__```) et ne nécessitent aucune importation. En revanche, ```reduce``` doit être importé car il réside dans le module ```functools```. Comprenons mieux comment elles fonctionnent toutes, en commençant par ```map```.

#### Map
La fonction ```map()``` en Python a la syntaxe suivante :

```map(func, *iterables)```

Où ```func``` est la fonction sur laquelle chaque élément des ```iterables``` (aussi nombreux soient-ils) sera appliqué. Vous remarquez l'astérisque (```*```) sur ```iterables``` ? Cela signifie qu'il peut y avoir autant d'itérables que possible, pour autant que ```func``` ait exactement ce nombre comme arguments d'entrée requis. Avant de passer à un exemple, il est important de noter ce qui suit :

1. En Python 2, la fonction ```map()``` renvoie une liste. En Python 3, cependant, la fonction renvoie un ```map object``` qui est un générateur. Pour obtenir le résultat sous forme de liste, la fonction intégrée ```list()``` peut être appelée sur l'objet map, c'est-à-dire ```list(map(func, *iterables))```
2. Le nombre d'arguments pour ```func``` doit être le nombre d'```iterables``` listés.

Voyons comment ces règles sont appliquées avec les exemples suivants.

Disons que j'ai une liste (```iterable```) de mes noms d'animaux de compagnie préférés, tous en minuscules et que je dois les mettre en majuscules. Traditionnellement, en Python normal, je ferais quelque chose comme ça :

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Ce qui donnerait alors ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Avec les fonctions ```map()```, c'est non seulement plus facile, mais aussi beaucoup plus flexible. Je fais simplement ceci :

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Ce qui donnerait également le même résultat. Notez qu'en utilisant la syntaxe ```map()``` définie ci-dessus, ```func``` dans ce cas est ```str.upper``` et ```iterables``` est la liste ```my_pets``` -- juste un itérable. Notez également que nous n'avons pas appelé la fonction ```str.upper``` (en faisant cela : ```str.upper()```), car la fonction map le fait pour nous sur _chaque élément de la liste ```my_pets```_.

Ce qui est plus important à noter est que la fonction ```str.upper``` nécessite uniquement **un** argument par définition et donc nous lui avons passé seulement **un** itérable. Donc, _si la fonction que vous passez nécessite deux, trois, ou n arguments_, alors _vous devez lui passer deux, trois ou n itérables_. Laissez-moi clarifier cela avec un autre exemple.

Imaginons que j'ai une liste des aires de cercle que j'ai calculées quelque part, toutes avec cinq décimales. Et j'ai besoin d'arrondir chaque élément de la liste à sa position décimale, ce qui signifie que je dois arrondir le premier élément de la liste à une décimale, le deuxième élément à deux décimales, le troisième élément à trois décimales, etc. Avec ```map()``` c'est un jeu d'enfant. Voyons comment.

Python nous offre déjà la fonction intégrée ```round()``` qui prend deux arguments - le nombre à arrondir et le nombre de décimales à utiliser pour l'arrondi. Donc, puisque la fonction nécessite **deux** arguments, nous devons passer **deux** itérables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Voyez la beauté de ```map()``` ? Imaginez la flexibilité que cela engendre.

La fonction ```range(1, 7)``` agit comme le deuxième argument de la fonction ```round``` (le nombre de décimales requises par itération). Ainsi, alors que ```map``` itère à travers ```circle_areas```, lors de la première itération, le premier élément de ```circle_areas```, ```3.56773``` est passé avec le premier élément de ```range(1,7)```, ```1```, à ```round```, le rendant effectivement ```round(3.56773, 1)```. Lors de la deuxième itération, le deuxième élément de ```circle_areas```, ```5.57668``` avec le deuxième élément de ```range(1,7)```, ```2``` est passé à ```round``` le rendant ```round(5.57668, 2)```. Cela se produit jusqu'à ce que la fin de la liste ```circle_areas``` soit atteinte.

Je suis sûr que vous vous demandez : "Que se passe-t-il si je passe un itérable moins large ou plus large que le premier itérable ? C'est-à-dire, et si je passe ```range(1, 3)``` ou ```range(1, 9999)``` comme deuxième itérable dans la fonction ci-dessus". Et la réponse est simple : rien ! D'accord, ce n'est pas vrai. "Rien" se passe dans le sens où la fonction ```map()``` ne soulèvera aucune exception, elle itérera simplement sur les éléments jusqu'à ce qu'elle ne trouve plus de deuxième argument pour la fonction, à quel point elle s'arrête tout simplement et renvoie le résultat.

Ainsi, par exemple, si vous évaluez ```result = list(map(round, circle_areas, range(1, 3)))```, vous n'obtiendrez aucune erreur même si la longueur de ```circle_areas``` et la longueur de ```range(1, 3)``` diffèrent. Au lieu de cela, c'est ce que Python fait : il prend le premier élément de ```circle_areas``` et le premier élément de ```range(1,3)``` et le passe à ```round```. ```round``` l'évalue puis enregistre le résultat. Ensuite, il continue à la deuxième itération, le deuxième élément de ```circle_areas``` et le deuxième élément de ```range(1,3)```, ```round``` l'enregistre à nouveau. Maintenant, lors de la troisième itération (```circle_areas``` a un troisième élément), Python prend le troisième élément de ```circle_areas``` et essaie de prendre le troisième élément de ```range(1,3)``` mais comme ```range(1,3)``` n'a pas de troisième élément, Python s'arrête simplement et renvoie le résultat, qui dans ce cas serait simplement ```[3.6, 5.58]```.

Allez-y, essayez-le.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

La même chose se produit si ```circle_areas``` est plus petite que la longueur du deuxième itérable. Python s'arrête simplement lorsqu'il ne peut pas trouver le prochain élément dans l'un des itérables.

Pour consolider notre connaissance de la fonction ```map()```, nous allons l'utiliser pour implémenter notre propre fonction ```zip()```. La fonction ```zip()``` est une fonction qui prend un certain nombre d'itérables et crée un tuple contenant chacun des éléments des itérables. Comme ```map()```, en Python 3, elle renvoie un objet générateur, qui peut être facilement converti en liste en appelant la fonction intégrée ```list``` dessus. Utilisez la session d'interpréteur ci-dessous pour vous familiariser avec ```zip()``` avant de créer la vôtre avec ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

En bonus, pouvez-vous deviner ce qui se passerait dans la session ci-dessus si ```my_strings``` et ```my_numbers``` n'ont pas la même longueur ? Non ? Essayez-le ! Changez la longueur de l'un d'eux.

Passons à notre propre fonction ```zip()``` !

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Regardez-moi ça ! Nous avons le même résultat que ```zip```.

Avez-vous également remarqué que je n'avais même pas besoin de créer une fonction en utilisant la méthode standard de ```def my_function()``` ? Voilà à quel point ```map()```, et Python en général, est flexible ! J'ai simplement utilisé une fonction ```lambda```. Cela ne veut pas dire que l'utilisation de la méthode standard de définition de fonction (de ```def function_name()```) n'est pas autorisée, elle l'est toujours. J'ai simplement préféré écrire moins de code (être "Pythonique").

Voilà tout pour la fonction map. Passons à ```filter()```

#### Filter
Alors que ```map()``` passe chaque élément dans l'itérable à travers une fonction et renvoie le résultat de tous les éléments ayant traversé la fonction, ```filter()``` nécessite tout d'abord que la fonction renvoie des valeurs booléennes (vrai ou faux) et passe ensuite chaque élément dans l'itérable à travers la fonction, "filtrant" ceux qui sont faux. Elle a la syntaxe suivante :

```filter(func, iterable)```

Les points suivants doivent être notés concernant ```filter()``` :

1. Contrairement à ```map()```, un seul itérable est requis.
2. L'argument ```func``` doit renvoyer un type booléen. S'il ne le fait pas, ```filter``` renvoie simplement l'```iterable``` qui lui a été passé. De plus, vu qu'un seul itérable est requis, c'est implicite que ```func``` ne doit prendre qu'un seul argument.
3. ```filter``` passe chaque élément dans l'itérable à travers ```func``` et ne renvoie **que** ceux qui s'évaluent à vrai. Je veux dire, c'est dans le nom même -- un "filtre".

Voyons quelques exemples

Voici une liste (```iterable```) des scores de 10 étudiants à un examen de chimie. Filtrons ceux qui ont réussi avec des scores supérieurs à 75... en utilisant ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Le prochain exemple sera un détecteur de palindromes. Un "palindrome" est un mot, une phrase, ou une séquence qui se lit de la même manière à l'endroit et à l'envers. Filtrons les mots qui sont des palindromes d'un tuple (```iterable```) de palindromes présumés.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Ce qui devrait afficher ```['madam', 'anutforajaroftuna']```. 

Plutôt cool, hein ? Enfin, ```reduce()```

#### Reduce
```reduce``` applique une fonction **de deux arguments** cumulativement aux éléments d'un itérable, en commençant éventuellement par un argument initial. Elle a la syntaxe suivante :

```reduce(func, iterable[, initial])```

Où ```func``` est la fonction sur laquelle chaque élément de l'```iterable``` est appliqué de manière cumulative, et ```initial``` est la valeur facultative qui est placée avant les éléments de l'itérable dans le calcul et sert de valeur par défaut lorsque l'itérable est vide. Les points suivants doivent être notés sur ```reduce()``` :
1. ```func``` nécessite deux arguments, dont le premier est le premier élément de l'```iterable``` (si ```initial``` n'est pas fourni) et le deuxième élément de l'```iterable```. Si ```initial``` est fourni, alors il devient le premier argument pour ```func``` et le premier élément de l'```iterable``` devient le deuxième élément.
2. ```reduce``` "réduit" (je sais, pardonnez-moi) l'```iterable``` en une seule valeur. 

Comme d'habitude, voyons quelques exemples.

Créons notre propre version de la fonction intégrée ```sum()``` de Python. La fonction ```sum()``` renvoie la somme de tous les éléments de l'itérable passé.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

Le résultat, comme vous vous y attendez, est ```68```.

Alors, que s'est-il passé ?

Comme d'habitude, tout est question d'itérations : ```reduce``` prend les premier et deuxième éléments dans ```numbers``` et les passe à ```custom_sum``` respectivement. ```custom_sum``` calcule leur somme et la renvoie à ```reduce```. ```reduce``` prend alors ce résultat et l'applique comme premier élément pour ```custom_sum``` et prend le prochain élément (troisième) dans ```numbers``` comme deuxième élément pour ```custom_sum```. Il fait cela continuellement (cumulativement) jusqu'à ce que ```numbers``` soit épuisé.

Voyons ce qui se passe quand j'utilise la valeur facultative ```initial```.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Le résultat, comme vous vous y attendez, est ```78``` car ```reduce```, initialement, utilise ```10``` comme premier argument pour ```custom_sum```.

C'est tout au sujet de Map, Reduce, et Filter en Python. Essayez les exercices ci-dessous pour aider à vérifier votre compréhension de chaque fonction.

Exercise
--------
Dans cet exercice, vous utiliserez chacun de ```map```, ```filter```, et ```reduce``` pour corriger le code cassé.

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