Tutorial
--------

Map, Filter, et Reduce sont des paradigmes de la programmation fonctionnelle. Ils permettent au programmeur (vous) d'écrire un code plus simple et plus court, sans nécessairement avoir à se soucier des détails complexes tels que les boucles et les embranchements.

Fondamentalement, ces trois fonctions vous permettent d'appliquer une fonction à un certain nombre d'itérables, en un seul coup. ```map``` et ```filter``` sont intégrés dans Python (dans le module ```__builtins__```) et ne nécessitent aucun import. Cependant, ```reduce``` doit être importé car il réside dans le module ```functools```. Commençons par mieux comprendre comment ils fonctionnent tous, en commençant par ```map```.

#### Map
La fonction ```map()``` en python a la syntaxe suivante :

```map(func, *iterables)```

Où ```func``` est la fonction sur laquelle chaque élément dans les ```iterables``` (aussi nombreux qu'ils soient) sera appliqué. Remarquez l'astérisque (```*```) sur ```iterables```? Cela signifie qu'il peut y avoir autant d'itérables que possible, à condition que ```func``` ait ce nombre exact d'arguments d'entrée requis. Avant de passer à un exemple, il est important de noter les points suivants :

1. En Python 2, la fonction ```map()``` renvoie une liste. En Python 3, cependant, elle renvoie un ```map object``` qui est un objet générateur. Pour obtenir le résultat sous forme de liste, la fonction intégrée ```list()``` peut être appelée sur l'objet map. c'est-à-dire ```list(map(func, *iterables))```
2. Le nombre d'arguments à ```func``` doit correspondre au nombre d'```iterables``` listés.

Voyons comment ces règles s'appliquent avec les exemples suivants.

Disons que j'ai une liste (```iterable```) de mes noms d'animaux de compagnie préférés, tous en minuscules et que j'ai besoin de les mettre en majuscules. Traditionnellement, en programmation python normale, je ferais quelque chose comme ceci :

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Ce qui afficherait alors ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Avec les fonctions ```map()```, c'est non seulement plus facile, mais c'est aussi beaucoup plus flexible. Je fais simplement ceci :

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Ce qui donnerait également le même résultat. Notez qu'en utilisant la syntaxe définie de ```map()``` ci-dessus, ```func``` dans ce cas est ```str.upper``` et ```iterables``` est la liste ```my_pets``` -- juste un itérable. Notez également que nous n'avons pas appelé la fonction ```str.upper``` (en faisant ceci : ```str.upper()```), car la fonction map le fait pour nous sur chaque élément de la liste ```my_pets```.

Ce qui est plus important à noter, c'est que la fonction ```str.upper``` nécessite par définition uniquement **un** argument et donc nous avons passé juste **un** itérable à celle-ci. Donc, _si la fonction que vous passez nécessite deux, trois ou n arguments_, alors _vous devez lui passer deux, trois ou n itérables_. Clarifions cela avec un autre exemple.

Supposons que j'ai une liste d'aires de cercle que j'ai calculées quelque part, toutes avec cinq décimales. Et j'ai besoin d'arrondir chaque élément de la liste à ses positions décimales, ce qui signifie que je dois arrondir le premier élément de la liste à une décimale, le deuxième élément de la liste à deux décimales, le troisième élément de la liste à trois décimales, etc. Avec ```map()```, c'est un jeu d'enfant. Voyons comment.

Python nous bénit déjà avec la fonction intégrée ```round()``` qui prend deux arguments -- le nombre à arrondir et le nombre de décimales à arrondir le nombre. Donc, puisque la fonction requiert **deux** arguments, nous devons lui passer **deux** itérables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Voyez la beauté de ```map()```? Pouvez-vous imaginer la flexibilité que cela évoque?

La fonction ```range(1, 7)``` agit comme le deuxième argument pour la fonction ```round``` (le nombre de décimales requises par itération). Ainsi, au fur et à mesure que ```map``` passe par ```circle_areas```, lors de la première itération, le premier élément de ```circle_areas```, ```3.56773``` est passé avec le premier élément de ```range(1,7)```, ```1``` à ```round```, ce qui le rend effectivement ```round(3.56773, 1)```. Lors de la deuxième itération, le deuxième élément de ```circle_areas```, ```5.57668``` ainsi que le deuxième élément de ```range(1,7)```, ```2``` sont passés à ```round``` ce qui le traduit par ```round(5.57668, 2)```. Cela se produit jusqu'à ce que la fin de la liste ```circle_areas``` soit atteinte.

Je suis sûr que vous vous demandez : "Que se passe-t-il si je passe un itérable inférieur ou supérieur à la longueur du premier itérable? C'est-à-dire, que se passe-t-il si je passe ```range(1, 3)``` ou ```range(1, 9999)``` comme deuxième itérable dans la fonction ci-dessus". Et la réponse est simple : rien! D'accord, ce n'est pas vrai. "Rien" ne se produit dans le sens où la fonction ```map()``` ne lèvera aucune exception, elle iterera simplement sur les éléments jusqu'à ce qu'elle ne puisse trouver un second argument pour la fonction, à quel point elle s'arrête simplement et retourne le résultat.

Donc, par exemple, si vous évaluez ```result = list(map(round, circle_areas, range(1, 3)))```, vous n'obtiendrez pas d'erreur même si la longueur de ```circle_areas``` et la longueur de ```range(1, 3)``` diffèrent. Au lieu de cela, voici ce que fait Python : Il prend le premier élément de ```circle_areas``` et le premier élément de ```range(1,3)``` et le passe à ```round```. ```round``` l'évalue puis enregistre le résultat. Ensuite, il passe à la deuxième itération, au deuxième élément de ```circle_areas``` et au deuxième élément de ```range(1,3)```, ```round``` l'enregistre à nouveau. Maintenant, lors de la troisième itération (```circle_areas``` a un troisième élément), Python prend le troisième élément de ```circle_areas``` et essaie alors de prendre le troisième élément de ```range(1,3)``` mais comme ```range(1,3)``` n'a pas de troisième élément, Python s'arrête simplement et renvoie le résultat, qui dans ce cas serait simplement ```[3.6, 5.58]```.

Allez-y, essayez-le.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

Il se passe la même chose si ```circle_areas``` est inférieur à la longueur du deuxième itérable. Python s'arrête simplement lorsqu'il ne trouve pas le prochain élément dans l'un des itérables.

Pour consolider notre connaissance de la fonction ```map()```, nous allons l'utiliser pour implémenter notre propre fonction ```zip()```. La fonction ```zip()``` est une fonction qui prend un certain nombre d'itérables puis crée un tuple contenant chacun des éléments des itérables. Comme ```map()```, en Python 3, elle renvoie un objet générateur, qui peut être facilement converti en liste en appelant la fonction intégrée ```list``` dessus. Utilisez la session d'interpréteur ci-dessous pour vous familiariser avec ```zip()``` avant de créer la nôtre avec ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Comme bonus, pouvez-vous deviner ce qui se passerait dans la session ci-dessus si ```my_strings``` et ```my_numbers``` n'ont pas la même longueur? Non? essayez-le! Modifiez la longueur de l'un d'entre eux.

Passons à notre propre fonction ```zip()```!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Regardez ça! Nous avons le même résultat que ```zip```.

Avez-vous aussi remarqué que je n'ai même pas eu besoin de créer une fonction en utilisant la manière standard ```def my_function()```? C'est à quel point ```map()```, et Python en général, est flexible! J'ai simplement utilisé une fonction ```lambda```. Cela ne signifie pas que l'utilisation de la méthode de définition de fonction standard (de ```def function_name()```) n'est pas autorisée, elle l'est toujours. J'ai simplement préféré écrire moins de code (être "Pythonic").

C'est tout sur map. Passons à ```filter()```

#### Filter
Alors que ```map()``` passe chaque élément dans l'itérable à travers une fonction et retourne le résultat de tous les éléments ayant passé à travers la fonction, ```filter()```, tout d'abord, nécessite que la fonction retourne des valeurs booléennes (vrai ou faux) et passe ensuite chaque élément dans l'itérable à travers la fonction, "filtrant" ceux qui sont faux. Elle a la syntaxe suivante :

```filter(func, iterable)```

Les points suivants doivent être notés à propos de ```filter()``` :

1. Contrairement à ```map()```, un seul itérable est requis.
2. L'argument ```func``` doit retourner un type booléen. S'il ne le fait pas, ```filter``` retourne simplement l'```iterable``` qui lui a été passé. De plus, comme un seul itérable est requis, il est implicite que ```func``` doit seulement prendre un argument.
3. ```filter``` passe chaque élément dans l'itérable à travers ```func``` et ne retourne **que** ceux qui évaluent à vrai. Je veux dire, c'est bien là dans le nom -- un "filtre".

Voyons quelques exemples.

Ce qui suit est une liste (```iterable```) des scores de 10 étudiants dans un examen de chimie. Filtrons ceux qui ont réussi avec des scores supérieurs à 75... en utilisant ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

L'exemple suivant sera un détecteur de palindrome. Un "palindrome" est un mot, une phrase ou une séquence qui se lit de la même manière à l'envers qu'à l'endroit. Filtrons les mots qui sont des palindromes d'un tuple (```iterable```) de palindromes suspectés.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Ce qui devrait sortir ```['madam', 'anutforajaroftuna']```.

Plutôt astucieux non? Enfin, ```reduce()```

#### Reduce
```reduce``` applique une fonction **avec deux arguments** cumulativement aux éléments d'un itérable, en commençant éventuellement par un argument initial. Elle a la syntaxe suivante :

```reduce(func, iterable[, initial])```

Où ```func``` est la fonction sur laquelle chaque élément dans l'```iterable``` est appliqué de manière cumulative, et ```initial``` est la valeur optionnelle qui est placée avant les éléments de l'itérable dans le calcul et sert de valeur par défaut lorsque l'itérable est vide. Les points suivants doivent être notés à propos de ```reduce()``` :
1. ```func``` exige deux arguments, le premier étant le premier élément dans l'```iterable``` (si ```initial``` n'est pas fourni) et le deuxième élément dans l'```iterable```. Si ```initial``` est fourni, alors il devient le premier argument à ```func``` et le premier élément dans l'```iterable``` devient le deuxième élément.
2. ```reduce``` "réduit" (je sais, pardonnez-moi) l'```iterable``` à une seule valeur.

Comme d'habitude, voyons quelques exemples.

Créons notre propre version de la fonction intégrée de Python ```sum()```. La fonction ```sum()``` renvoie la somme de tous les éléments de l'itérable qui lui est passé.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

Le résultat, comme vous vous y attendrez, est ```68```.

Alors, que s'est-il passé?

Comme d'habitude, tout tourne autour des itérations : ```reduce``` prend les premier et deuxième éléments de ```numbers``` et les passe respectivement à ```custom_sum```. ```custom_sum``` calcule leur somme et la renvoie à ```reduce```. ```reduce``` prend ensuite ce résultat et l'applique comme premier élément à ```custom_sum``` et prend l'élément suivant (troisième) dans ```numbers``` comme deuxième élément à ```custom_sum```. Il fait cela continuellement (cumulativement) jusqu'à ce que ```numbers``` soit épuisé.

Voyons ce qui se passe lorsque j'utilise la valeur optionnelle ```initial```.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Le résultat, comme vous vous y attendez, est ```78``` car ```reduce```, initialement, utilise ```10``` comme premier argument à ```custom_sum```.

C'est tout sur Map, Reduce, et Filter de Python. Essayez les exercices ci-dessous pour aider à vérifier votre compréhension de chaque fonction.

Exercice
--------

Dans cet exercice, vous utiliserez chacun de ```map```, ```filter```, et ```reduce``` pour corriger du code défectueux.

Tutorial Code
-------------
from functools import reduce 

# Utilisez map pour imprimer le carré de chaque nombre arrondi
# à trois décimales
my_floats = [4.35, 6.09, 3.25, 9.77, 2.16, 8.88, 4.59]

# Utilisez filter pour imprimer uniquement les noms qui ont au maximum
# sept lettres
my_names = ["olumide", "akinremi", "josiah", "temidayo", "omoseun"]

# Utilisez reduce pour imprimer le produit de ces nombres
my_numbers = [4, 6, 9, 23, 5]

# Corrigez les trois respectivement.
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