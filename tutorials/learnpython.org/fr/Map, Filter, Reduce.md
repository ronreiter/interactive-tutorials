Tutorial
--------

Les fonctions ```Map```, ```Filter``` et ```Reduce``` sont des paradigmes de la programmation fonctionnelle. Elles permettent au programmeur (vous) d'écrire du code plus simple et plus court, sans nécessairement se soucier des subtilités telles que les boucles et les branchements.

Essentiellement, ces trois fonctions vous permettent d'appliquer une fonction à un certain nombre d'itérables, en une seule fois. Les fonctions ```map``` et ```filter``` sont intégrées à Python (dans le module ```__builtins__```) et ne nécessitent aucune importation. ```reduce```, cependant, doit être importée car elle se trouve dans le module ```functools```. Nous allons mieux comprendre comment elles fonctionnent toutes, en commençant par ```map```.

#### Map
La fonction ```map()``` en python a la syntaxe suivante :

```map(func, *iterables)```

Où ```func``` est la fonction sur laquelle chaque élément dans ```iterables``` (aussi nombreux soient-ils) sera appliqué. Remarquez l'astérisque (```*```) sur ```iterables```? Cela signifie qu'il peut y avoir autant d'itérables que possible, tant que ```func``` a ce nombre exact comme arguments d'entrée nécessaires. Avant de passer à un exemple, il est important de noter les éléments suivants :

1. En Python 2, la fonction ```map()``` retourne une liste. En Python 3, cependant, la fonction retourne un ```objet map``` qui est un objet générateur. Pour obtenir le résultat sous forme de liste, la fonction intégrée ```list()``` peut être appelée sur l'objet map. c'est-à-dire ```list(map(func, *iterables))```
2. Le nombre d'arguments de ```func``` doit être le nombre d'```iterables``` listés.

Voyons comment ces règles se concrétisent avec les exemples suivants.

Disons que j'ai une liste (```iterable```) de noms de mes animaux de compagnie préférés, tous en minuscules et que j'ai besoin qu'ils soient en majuscules. Traditionnellement, dans un python habituel, je ferais quelque chose comme ceci :

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Ce qui produirait alors ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Avec les fonctions ```map()```, c'est non seulement plus facile, mais c'est aussi beaucoup plus flexible. Je fais simplement ceci :

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Ce qui produirait également le même résultat. Notez qu'en utilisant la syntaxe définie de ```map()``` ci-dessus, ```func``` dans ce cas est ```str.upper``` et ```iterables``` est la liste ```my_pets``` -- juste un itérable. Notez également que nous n'avons pas appelé la fonction ```str.upper``` (en faisant ceci : ```str.upper()```), car la fonction map le fait pour nous sur _chaque élément dans la liste ```my_pets```_.

Il est plus important de noter que la fonction ```str.upper``` nécessite seulement **un** argument par définition et donc nous avons passé juste **un** itérable. Donc, _si la fonction que vous passez nécessite deux, ou trois, ou n arguments_, alors _vous devez passer deux, trois ou n itérables à celle-ci_. Permettez-moi de clarifier cela avec un autre exemple.

Disons que j'ai une liste de surfaces de cercles que j'ai calculées quelque part, toutes avec cinq décimales. Et j'ai besoin d'arrondir chaque élément de la liste à sa position de décimale, ce qui signifie que je dois arrondir le premier élément de la liste à une décimale, le deuxième élément de la liste à deux décimales, le troisième élément de la liste à trois décimales, etc. Avec ```map()``` c'est un jeu d'enfant. Voyons comment.

Python nous bénit déjà avec la fonction intégrée ```round()``` qui prend deux arguments -- le nombre à arrondir et le nombre de décimales à arrondir. Donc, puisque la fonction nécessite **deux** arguments, nous devons passer **deux** itérables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Voyez la beauté de ```map()```? Pouvez-vous imaginer la flexibilité que cela évoque?

La fonction ```range(1, 7)``` agit comme le deuxième argument de la fonction ```round``` (le nombre de décimales requises par itération). Donc, comme ```map``` itère sur ```circle_areas```, lors de la première itération, le premier élément de ```circle_areas```, ```3.56773``` est passé avec le premier élément de ```range(1,7)```, ```1``` à ```round```, le rendant effectivement devenir ```round(3.56773, 1)```. Lors de la seconde itération, le deuxième élément de ```circle_areas```, ```5.57668``` avec le deuxième élément de ```range(1,7)```, ```2``` est passé à ```round``` le rendant transformer à ```round(5.57668, 2)```. Cela continue jusqu'à ce que la fin de la liste ```circle_areas``` soit atteinte.

Je suis sûr que vous vous demandez : "Que se passe-t-il si je passe un itérable moins ou plus que la longueur du premier itérable ? C'est-à-dire, que se passe-t-il si je passe ```range(1, 3)``` ou ```range(1, 9999)``` comme le deuxième itérable dans la fonction ci-dessus". Et la réponse est simple : rien ! Ok, ce n'est pas vrai. "Rien" se passe dans le sens où la fonction ```map()``` ne lèvera aucune exception, elle itérera simplement sur les éléments jusqu'à ce qu'elle ne puisse pas trouver un deuxième argument à la fonction, auquel point elle s'arrête simplement et retourne le résultat.

Donc, par exemple, si vous évaluez ```result = list(map(round, circle_areas, range(1, 3)))```, vous n'obtiendrez aucune erreur même si la longueur de ```circle_areas``` et la longueur de ```range(1, 3)``` diffèrent. Au lieu de cela, voici ce que fait Python : Il prend le premier élément de ```circle_areas``` et le premier élément de ```range(1,3)``` et le passe à ```round```. ```round``` l'évalue puis enregistre le résultat. Puis il passe à la seconde itération, deuxième élément de ```circle_areas``` et deuxième élément de ```range(1,3)```, ```round``` l'enregistre à nouveau. Maintenant, lors de la troisième itération (```circle_areas``` a un troisième élément), Python prend le troisième élément de ```circle_areas``` et essaye ensuite de prendre le troisième élément de ```range(1,3)``` mais comme ```range(1,3)``` n'a pas de troisième élément, Python s'arrête simplement et retourne le résultat, qui, dans ce cas, serait simplement ```[3.6, 5.58]```.

Allez-y, essayez-le.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)


La même chose se produit si ```circle_areas``` est plus court que le deuxième itérable. Python s'arrête simplement quand il ne peut pas trouver l'élément suivant dans l'un des itérables.

Pour consolider notre compréhension de la fonction ```map()```, nous allons l'utiliser pour implémenter notre propre fonction ```zip()```. La fonction ```zip()``` est une fonction qui prend un certain nombre d'itérables et crée ensuite un tuple contenant chacun des éléments dans les itérables. Comme ```map()```, en Python 3, elle retourne un objet générateur, qui peut être facilement converti en liste en appelant la fonction intégrée ```list``` dessus. Utilisez la session d'interpréteur ci-dessous pour comprendre ```zip()``` avant de créer la nôtre avec ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

En bonus, pouvez-vous deviner ce qui se passerait dans la session ci-dessus si ```my_strings``` et ```my_numbers``` n'ont pas la même longueur ? Non? Essayez-le ! Modifiez la longueur de l'un d'eux.

Passons maintenant à notre propre fonction ```zip()``` !

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Regardez ça ! Nous avons le même résultat que ```zip```.

Avez-vous également remarqué que je n'ai même pas eu besoin de créer une fonction en utilisant la méthode standard ```def my_function()``` ? C'est la flexibilité de ```map()```, et de Python en général ! J'ai simplement utilisé une fonction ```lambda```. Cela ne veut pas dire que l'utilisation de la méthode de définition de fonction standard (de ```def function_name()```) n'est pas autorisée, elle l'est toujours. J'ai simplement préféré écrire moins de code (être "Pythonic").

C'est tout pour ```map```. Passons à ```filter()```

#### Filter
Alors que ```map()``` fait passer chaque élément de l'itérable à travers une fonction et retourne le résultat de tous les éléments ayant traversé la fonction, ```filter()```, exige tout d'abord que la fonction retourne des valeurs booléennes (true ou false) puis fait passer chaque élément de l'itérable à travers la fonction, "filtrant" ceux qui sont faux. Elle a la syntaxe suivante :

```filter(func, iterable)```

Les points suivants doivent être notés concernant ```filter()``` :

1. Contrairement à ```map()```, un seul itérable est requis.
2. L'argument ```func``` doit retourner un type booléen. Si ce n'est pas le cas, ```filter``` retourne simplement l'```iterable``` passé. Également, comme un seul itérable est requis, il est implicite que ```func``` doit prendre en entrée seulement un argument.
3. ```filter``` passe chaque élément de l'itérable à travers ```func``` et retourne **seulement** ceux qui évaluent à vrai. Je veux dire, c'est là, dans le nom -- un "filtre".

Voyons quelques exemples

Ce qui suit est une liste (```iterable```) des notes de 10 étudiants à un examen de chimie. Filtrons ceux qui ont réussi avec des notes supérieures à 75...en utilisant ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

L'exemple suivant sera un détecteur de palindrome. Un "palindrome" est un mot, phrase ou séquence qui se lit de la même manière à l'envers. Filtrons les mots qui sont des palindromes d'un tuple (```iterable```) de palindromes suspectés.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Qui devrait produire ```['madam', 'anutforajaroftuna']```.

Assez cool, hein ? Enfin, ```reduce()```

#### Reduce
```reduce``` applique une fonction **de deux arguments** cumulativement aux éléments d'un itérable, en commençant éventuellement par un argument initial. Il a la syntaxe suivante :

```reduce(func, iterable[, initial])```

Où ```func``` est la fonction sur laquelle chaque élément dans l'```iterable``` est appliqué cumulativement, et ```initial``` est la valeur optionnelle qui est placée avant les éléments de l'itérable dans le calcul, et sert de valeur par défaut lorsque l'itérable est vide. Voici ce qu'il convient de noter à propos de ```reduce()``` :

1. ```func``` nécessite deux arguments, le premier étant le premier élément dans l'```iterable``` (si ```initial``` n'est pas fourni) et le deuxième élément dans l'```iterable```. Si ```initial``` est fourni, alors il devient le premier argument de ```func``` et le premier élément dans l'```iterable``` devient le deuxième élément.
2. ```reduce``` "réduit" (je sais, pardonnez-moi) l'```iterable``` en une seule valeur.

Comme d'habitude, voyons quelques exemples.

Créons notre propre version de la fonction intégrée de Python ```sum()```. La fonction ```sum()``` retourne la somme de tous les éléments de l'itérable passé.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

Le résultat, comme vous l'attendriez est ```68```.

Alors, qu'est-ce qui s'est passé ?

Comme d'habitude, tout est question d'itérations : ```reduce``` prend les premier et deuxième éléments de ```numbers``` et les passe respectivement à ```custom_sum```. ```custom_sum``` calcule leur somme et la renvoie à ```reduce```. ```reduce``` prend ensuite ce résultat et l'applique comme premier élément à ```custom_sum``` et prend le prochain élément (troisième) de ```numbers``` comme deuxième élément à ```custom_sum```. Il fait ceci en continu (de manière cumulative) jusqu'à ce que ```numbers``` soit épuisé.

Voyons ce qui se passe lorsque j'utilise la valeur optionnelle ```initial```.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Le résultat, comme vous l'attendriez, est ```78``` parce que ```reduce```, initialement, utilise ```10``` comme premier argument à ```custom_sum```.

C'est tout sur les fonctions Map, Reduce et Filter de Python. Essayez les exercices ci-dessous pour vous aider à assurer votre compréhension de chaque fonction.

Exercice
--------

Dans cet exercice, vous utiliserez chacun de ```map```, ```filter```, et ```reduce``` pour corriger du code défectueux.

Tutorial Code
-------------

```python
from functools import reduce 

# Utilisez map pour imprimer le carré de chaque nombre arrondi
# à trois décimales
my_floats = [4.35, 6.09, 3.25, 9.77, 2.16, 8.88, 4.59]

# Utilisez filter pour imprimer seulement les noms qui ont sept 
# lettres ou moins
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
```

Expected Output
---------------

```python
test_output_contains("[18.922, 37.088, 10.562, 95.453, 4.666, 78.854, 21.068]")
test_output_contains("['olumide', 'josiah', 'omoseun']")
test_output_contains("24840")
success_msg("Congrats! Nice work.")
```

Solution
--------

#### Map

```python
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
```