Tutorial
--------

Python utilise la logique booléenne pour évaluer des conditions. Les valeurs booléennes True et False sont retournées lorsqu'une expression est comparée ou évaluée. Par exemple :

    x = 2
    print(x == 2) # affiche True
    print(x == 3) # affiche False
    print(x < 3) # affiche True

Remarquez que l'affectation de variables se fait avec un seul opérateur égal "=" alors que la comparaison entre deux variables se fait avec le double opérateur égal "==". L'opérateur "différent de" est marqué par "!=".

### Opérateurs booléens

Les opérateurs booléens "and" et "or" permettent de construire des expressions booléennes complexes, par exemple :

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("Votre nom est John et vous avez aussi 23 ans.")

    if name == "John" or name == "Rick":
        print("Votre nom est soit John soit Rick.")

### L'opérateur "in"

L'opérateur "in" peut être utilisé pour vérifier si un objet spécifié existe dans un conteneur d'objet itérable, tel qu'une liste :

    name = "John"
    if name in ["John", "Rick"]:
        print("Votre nom est soit John soit Rick.")

Python utilise l'indentation pour définir des blocs de code, au lieu des accolades. L'indentation standard en Python est de 4 espaces, bien que les tabulations et toute autre taille d'espace fonctionnent, tant qu'elle est cohérente. Notez que les blocs de code n'ont pas besoin de terminaison.

Voici un exemple d'utilisation de l'instruction "if" de Python en utilisant des blocs de code :

    statement = False
    another_statement = True
    if statement is True:
        # faire quelque chose
        pass
    elif another_statement is True: # sinon si
        # faire autre chose
        pass
    else:
        # faire une autre chose
        pass

Par exemple :

    x = 2
    if x == 2:
        print("x égale deux !")
    else:
        print("x n'est pas égal à deux.")

Une déclaration est évaluée comme vraie si l'une des conditions suivantes est correcte :
1. La variable booléenne "True" est donnée, ou calculée à l'aide d'une expression, comme une comparaison arithmétique.
2. Un objet qui n'est pas considéré comme "vide" est passé.

Voici quelques exemples d'objets considérés comme vides :
1. Une chaîne vide : ""
2. Une liste vide : []
3. Le nombre zéro : 0
4. La variable booléenne false : False

### L'opérateur 'is'

Contrairement à l'opérateur double égal "==", l'opérateur "is" ne correspond pas aux valeurs des variables, mais aux instances elles-mêmes. Par exemple :

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # affiche True
    print(x is y) # affiche False

### L'opérateur "not"

L'utilisation de "not" avant une expression booléenne l'inverse :

    print(not False) # affiche True
    print((not False) == (False)) # affiche False

Exercice
--------

Modifiez les variables dans la première section, afin que chaque instruction if soit évaluée comme True.

Tutorial Code
-------------

# modifiez ce code
number = 10
second_number = 10
first_array = []
second_array = [1,2,3]

if number > 15:
    print("1")

if first_array:
    print("2")

if len(second_array) == 2:
    print("3")

if len(first_array) + len(second_array) == 5:
    print("4")

if first_array and first_array[0] == 1:
    print("5")

if not second_number:
    print("6")

Expected Output
---------------

test_output_contains("1", no_output_msg= "Did you print out 1 if `number` is greater than 15?")
test_output_contains("2", no_output_msg= "Did you print out 2 if there exists a list `first_array`?")
test_output_contains("3", no_output_msg= "Did you print out 3 if the length of `second_array` is 2?")
test_output_contains("4", no_output_msg= "Did you print out 4 if len(first_array) + len(second_array) == 5?")
test_output_contains("5", no_output_msg= "Did you print out 5 if first_array and first_array[0] == 1?")
test_output_contains("6", no_output_msg= "Did you print out 6 if not second_number?")
success_msg("Great Work!")

Solution
--------

# modifiez ce code
number = 16
second_number = 0
first_array = [1,2,3]
second_array = [1,2]

if number > 15:
    print("1")

if first_array:
    print("2")

if len(second_array) == 2:
    print("3")

if len(first_array) + len(second_array) == 5:
    print("4")

if first_array and first_array[0] == 1:
    print("5")

if not second_number:
    print("6")