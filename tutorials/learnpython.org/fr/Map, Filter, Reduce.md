Map, Filter, and Reduce sont des paradigmes de la programmation fonctionnelle. Ils permettent au programmeur (vous) d'écrire un code plus simple et plus court, sans nécessairement se soucier des détails complexes comme les boucles et les branches.

Essentiellement, ces trois fonctions vous permettent d'appliquer une fonction à travers un certain nombre d'itérables, en un seul coup. ```map``` et ```filter``` sont intégrés à Python (dans le module ```__builtins__```) et ne nécessitent aucune importation. Cependant, ```reduce``` doit être importé car il réside dans le module ```functools```. Essayons de mieux comprendre comment ils fonctionnent, en commençant par ```map```.

#### Map
La fonction ```map()``` en Python a la syntaxe suivante :

```map(func, *iterables)```

Où ```func``` est la fonction à laquelle chaque élément dans ```iterables``` (autant qu'il y en a) sera appliqué. Remarquez l'astérisque (```*```) sur ```iterables``` ? Cela signifie qu'il peut y avoir autant d'itérables que possible, pour autant que ```func``` ait exactement le même nombre d'arguments requis en entrée. Avant de passer à un exemple, il est important de noter les points suivants :

1. En Python 2, la fonction ```map()``` renvoie une liste. En Python 3, cependant, la fonction renvoie un ```objet map``` qui est un objet générateur. Pour obtenir le résultat sous forme de liste, la fonction intégrée ```list()``` peut être appelée sur l'objet map, i.e. ```list(map(func, *iterables))```
2. Le nombre d'arguments de ```func``` doit correspondre au nombre d'```iterables``` listés.

Voyons comment ces règles s'appliquent avec les exemples suivants.

Supposons que j'ai une liste (```itérable```) de mes noms d'animaux de compagnie préférés, tous en minuscules, et que j'ai besoin de les mettre en majuscules. Traditionnellement, en programmation Python normale, je ferais quelque chose comme ceci :

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Ce qui donnerait alors en sortie ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Avec les fonctions ```map()```, c'est non seulement plus facile, mais c'est aussi beaucoup plus flexible. Je fais simplement ceci :

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Ce qui donnerait également le même résultat. Notez qu'en utilisant la syntaxe de ```map()``` définie ci-dessus, ```func``` dans ce cas est ```str.upper``` et ```iterables``` est la liste ```my_pets``` -- juste un itérable. Notez également que nous n'avons pas appelé la fonction ```str.upper``` (en faisant ceci : ```str.upper()```), car la fonction map le fait pour nous sur _chaque élément de la liste ```my_pets```_.

Ce qui est plus important à noter, c'est que la fonction ```str.upper``` nécessite seulement **un** argument par définition et donc nous avons passé juste **un** itérable. Donc, _si la fonction que vous passez nécessite deux, trois ou n arguments_, alors _vous devez y passer deux, trois ou n itérables_. Laissez-moi clarifier cela avec un autre exemple.

Disons que j'ai une liste des aires de cercle que j'ai calculées quelque part, toutes à cinq décimales près. Et j'ai besoin d'arrondir chaque élément de la liste à ses décimales en position, ce qui signifie que je dois arrondir le premier élément de la liste à une décimale, le deuxième élément de la liste à deux décimales, le troisième élément de la liste à trois décimales, etc. Avec ```map()``` c'est du gâteau. Voyons comment faire.

Python nous bénit déjà avec la fonction intégrée ```round()``` qui prend deux arguments -- le nombre à arrondir et le nombre de décimales pour arrondir le nombre. Donc, puisque la fonction nécessite **deux** arguments, nous devons y passer **deux** itérables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Voyez la beauté de ```map()``` ? Pouvez-vous imaginer la flexibilité que cela suscite ?

La fonction ```range(1, 7)``` agit comme le deuxième argument de la fonction ```round``` (le nombre de décimales requis par itération). Donc, à mesure que ```map``` itère à travers ```circle_areas```, lors de la première itération, le premier élément de ```circle_areas```, ```3.56773``` est passé avec le premier élément de ```range(1,7)```, ```1``` à ```round```, ce qui revient en fait à faire ```round(3.56773, 1)```. Lors de la deuxième itération, le deuxième élément de ```circle_areas```, ```5.57668``` avec le deuxième élément de ```range(1,7)```, ```2``` est passé à ```round```, ce qui équivaut à ```round(5.57668, 2)```. Cela se passe jusqu'à ce que la fin de la liste ```circle_areas``` soit atteinte.

Je suis sûr que vous vous demandez : "Que se passe-t-il si je passe un itérable de longueur différente ? Par exemple, si je passe range(1, 3) ou range(1, 9999) comme le deuxième itérable dans la fonction ci-dessus". Et la réponse est simple : rien ! Enfin, ce n'est pas vrai. "Rien" ne se passe dans le sens où la fonction ```map()``` ne lèvera pas d'exception, elle itérera simplement sur les éléments jusqu'à ce qu'elle ne puisse plus trouver un deuxième argument pour la fonction, auquel point elle s'arrête simplement et retourne le résultat.

Ainsi, par exemple, si vous évaluez ```result = list(map(round, circle_areas, range(1, 3)))```, vous ne obtiendrez aucune erreur même si la longueur de ```circle_areas``` et la longueur de ```range(1, 3)``` diffèrent. À la place, voici ce que fait Python : il prend le premier élément de ```circle_areas``` et le premier élément de ```range(1,3)``` et le passe à ```round```. ```round``` l'évalue puis enregistre le résultat. Ensuite, il passe à la deuxième itération, deuxième élément de ```circle_areas``` et deuxième élément de ```range(1,3)```, ```round``` l'enregistre à nouveau. Maintenant, lors de la troisième itération (```circle_areas``` a un troisième élément), Python prend le troisième élément de ```circle_areas``` et essaie ensuite de prendre le troisième élément de ```range(1,3)``` mais comme ```range(1,3)``` n'a pas de troisième élément, Python s'arrête simplement et renvoie le résultat, qui dans ce cas sera simplement ```[3.6, 5.58]```.

Allez-y, essayez.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)


La même chose se produit si ```circle_areas``` est inférieur à la longueur du deuxième itérable. Python s'arrête simplement lorsqu'il ne peut pas trouver le prochain élément dans l'un des itérables. 

Pour consolider notre connaissance de la fonction ```map()```, nous allons l'utiliser pour implémenter notre propre fonction ```zip()```. La fonction ```zip()``` est une fonction qui prend un certain nombre d'itérables puis crée un tuple contenant chacun des éléments des itérables. Comme ```map()```, en Python 3, elle renvoie un objet générateur, qui peut être facilement converti en une liste en appelant la fonction intégrée ```list``` dessus. Utilisez la session interpréteur ci-dessous pour prendre en main ```zip()``` avant de créer la nôtre avec ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

En prime, pouvez-vous deviner ce qui se passerait dans la session ci-dessus si ```my_strings``` et ```my_numbers``` ne sont pas de la même longueur ? Non ? essayez ! Changez la longueur de l'un d'eux.

Passons à notre propre fonction ```zip()``` !

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Regardez ça ! Nous avons le même résultat que ```zip```.

Avez-vous également remarqué que je n'ai même pas eu besoin de créer une fonction en utilisant la méthode standard ```def my_function()``` ? C'est à quel point ```map()```, et Python en général, est flexible ! J'ai simplement utilisé une fonction ```lambda```. Cela ne veut pas dire que l'utilisation de la méthode standard de définition de fonction (de ```def nom_de_fonction()```) n'est pas autorisée, elle l'est toujours. J'ai simplement préféré écrire moins de code (être "Pythonic").

C'est tout sur map. Passons à ```filter()```

#### Filter
Alors que ```map()``` fait passer chaque élément de l'itérable à travers une fonction et renvoie le résultat de tous les éléments ayant passé à travers la fonction, ```filter()```, tout d'abord, requiert que la fonction renvoie des valeurs booléennes (true ou false) et fait ensuite passer chaque élément de l'itérable à travers la fonction, "filtrant" ceux qui sont faux. Elle a la syntaxe suivante :

```filter(func, iterable)```

Les points suivants sont à noter concernant ```filter()``` :

1. Contrairement à ```map()```, un seul itérable est requis.
2. L'argument ```func``` doit renvoyer un type booléen. Si ce n'est pas le cas, ```filter``` renvoie simplement l'```itérable``` passé. De plus, comme un seul itérable est requis, il est implicite que ```func``` doit seulement prendre un argument.
3. ```filter``` fait passer chaque élément de l'itérable à travers ```func``` et renvoie **seulement** ceux qui évaluent à vrai. C'est dans le nom même -- un "filtre".

Voyons quelques exemples.

Voici une liste (```itérable```) des scores de 10 étudiants à un examen de Chimie. Filtrons ceux qui ont réussi avec des scores supérieurs à 75... en utilisant ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

L'exemple suivant sera un détecteur de palindrome. Un "palindrome" est un mot, une phrase ou une séquence qui se lit de la même façon à l'envers. Filtrons les mots qui sont des palindromes d'un tuple (```itérable```) de présumés palindromes.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Ce qui devrait donner en sortie ```['madam', 'anutforajaroftuna']```.

Plutôt cool, non ? Enfin, ```reduce()```

#### Reduce
```reduce``` applique une fonction **deux arguments** de manière cumulative aux éléments d'un itérable, en commençant éventuellement avec un argument initial. Elle a la syntaxe suivante :

```reduce(func, iterable[, initial])```

Où ```func``` est la fonction à laquelle chaque élément de l'```itérable``` est appliqué de manière cumulative, et ```initial``` est la valeur optionnelle qui est placée avant les éléments de l'itérable dans le calcul, et sert de valeur par défaut lorsque l'itérable est vide. Les points suivants doivent être notés à propos de ```reduce()```:
1. ```func``` nécessite deux arguments, le premier desquels est le premier élément de l'```itérable``` (si ```initial``` n'est pas fourni) et le deuxième élément de l'```itérable```. Si ```initial``` est fourni, alors il devient le premier argument de ```func``` et le premier élément de l'```itérable``` devient le deuxième élément.
2. ```reduce``` "réduit" (je sais, pardonnez-moi) ```iterable``` en une seule valeur.

Comme d'habitude, voyons quelques exemples.

Créons notre propre version de la fonction intégrée de Python ```sum()```. La fonction ```sum()``` renvoie la somme de tous les éléments de l'itérable qui lui est passé.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

Le résultat, comme vous pouvez vous y attendre, est ```68```.

Alors, que s'est-il passé ?

Comme d'habitude, tout tourne autour des itérations: ```reduce``` prend les premier et second éléments de ```numbers``` et les passe à ```custom_sum``` respectivement. ```custom_sum``` calcule leur somme et la renvoie à ```reduce```. ```reduce``` prend ensuite ce résultat et l'applique en tant que premier élément à ```custom_sum``` et prend le prochain élément (troisième) de ```numbers``` comme second élément à ```custom_sum```. Il fait cela continuellement (cumulativement) jusqu'à ce que ```numbers``` soit épuisé.

Voyons ce qui se passe quand j'utilise la valeur optionnelle ```initial```.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Le résultat, comme vous pouvez vous y attendre, est ```78``` parce que ```reduce```, initialement, utilise ```10``` comme le premier argument à ```custom_sum```.

C'est tout sur les fonctions Map, Reduce, et Filter de Python. Essayez les exercices ci-dessous pour aider à vérifier votre compréhension de chaque fonction.

Exercise
--------
Dans cet exercice, vous utiliserez chacun des ```map```, ```filter```, et ```reduce``` pour corriger le code défectueux.