Python utilise la logique booléenne pour évaluer les conditions. Les valeurs booléennes True et False sont retournées lorsqu'une expression est comparée ou évaluée. Par exemple :

x = 2
print(x == 2) # affiche True
print(x == 3) # affiche False
print(x < 3) # affiche True

Notez que l'affectation de variable se fait à l'aide d'un seul opérateur égal "=", tandis que la comparaison entre deux variables se fait avec le double opérateur égal "==". L'opérateur "différent de" est noté "!=".

### Opérateurs booléens

Les opérateurs booléens "et" et "ou" permettent de construire des expressions booléennes complexes, par exemple :

name = "John"
age = 23
if name == "John" and age == 23:
    print("Votre nom est John et vous avez également 23 ans.")

if name == "John" or name == "Rick":
    print("Votre nom est soit John, soit Rick.")

### L'opérateur "in"

L'opérateur "in" peut être utilisé pour vérifier si un objet spécifié existe dans un conteneur d'objets itérable, tel qu'une liste :

name = "John"
if name in ["John", "Rick"]:
    print("Votre nom est soit John, soit Rick.")

Python utilise l'indentation pour définir les blocs de code, au lieu des accolades. L'indentation standard en Python est de 4 espaces, bien que les tabulations et toute autre taille d'espace fonctionnent, tant que c'est cohérent. Notez que les blocs de code n'ont pas besoin de terminaison.

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
    print("x est égal à deux !")
else:
    print("x n'est pas égal à deux.")

Une déclaration est évaluée comme vraie si l'une des conditions suivantes est correcte :
1. La variable booléenne "True" est donnée, ou calculée à l'aide d'une expression, telle qu'une comparaison arithmétique.
2. Un objet qui n'est pas considéré comme "vide" est passé.

Voici quelques exemples d'objets considérés comme vides :
1. Une chaîne vide : ""
2. Une liste vide : []
3. Le nombre zéro : 0
4. La variable booléenne fausse : False

### L'opérateur 'is'

Contrairement à l'opérateur double égal "==", l'opérateur "is" ne compare pas les valeurs des variables, mais les instances elles-mêmes. Par exemple :

x = [1,2,3]
y = [1,2,3]
print(x == y) # Affiche True
print(x is y) # Affiche False

### L'opérateur "not"

Utiliser "not" avant une expression booléenne l'inverse :

print(not False) # Affiche True
print((not False) == (False)) # Affiche False

Exercice
--------

Modifiez les variables dans la première section, afin que chaque instruction if soit résolue comme True.