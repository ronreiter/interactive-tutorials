Tutorial
--------

Chaque fonction en Python reçoit un nombre prédéfini d'arguments, si elle est déclarée normalement, comme ceci :

    def myfunction(first, second, third):
        # faire quelque chose avec les 3 variables
        ...

Il est possible de déclarer des fonctions qui reçoivent un nombre variable d'arguments, en utilisant la syntaxe suivante :

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

La variable "therest" est une liste de variables, qui reçoit tous les arguments qui ont été donnés à la fonction "foo" après les 3 premiers arguments. Donc appeler `foo(1, 2, 3, 4, 5)` affichera :

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

Il est également possible de passer des arguments de fonctions par mot-clé, de sorte que l'ordre des arguments n'a pas d'importance, en utilisant la syntaxe suivante. Le code suivant produit la sortie suivante : 
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))

La fonction "bar" reçoit 3 arguments. Si un argument supplémentaire "action" est reçu, et qu'il indique de sommer les nombres, alors la somme est affichée. Alternativement, la fonction sait également qu'elle doit renvoyer le premier argument, si la valeur du paramètre "number", passé à la fonction, est égale à "first".

Exercice
--------

Complétez les fonctions `foo` et `bar` pour qu'elles puissent recevoir un nombre variable d'arguments (3 ou plus). La fonction `foo` doit retourner le nombre d'arguments supplémentaires reçus. La fonction `bar` doit retourner `True` si l'argument avec le mot-clé `magicnumber` vaut 7, et `False` sinon.

Tutorial Code
-------------

# éditer le prototype et l'implémentation des fonctions
def foo(a, b, c):
    pass

def bar(a, b, c):
    pass


# code de test
if foo(1, 2, 3, 4) == 1:
    print("Good.")
if foo(1, 2, 3, 4, 5) == 2:
    print("Better.")
if bar(1, 2, 3, magicnumber=6) == False:
    print("Great.")
if bar(1, 2, 3, magicnumber=7) == True:
    print("Awesome!")

Expected Output
---------------

test_output_contains("Good.")
test_output_contains("Better.")
test_output_contains("Great.")
test_output_contains("Awesome!")
success_msg("Great work!")

Solution
--------
# éditer le prototype et l'implémentation des fonctions
def foo(a, b, c, *args):
    return len(args)

def bar(a, b, c, **kwargs):
    return kwargs["magicnumber"] == 7


# code de test
if foo(1, 2, 3, 4) == 1:
    print("Good.")
if foo(1, 2, 3, 4, 5) == 2:
    print("Better.")
if bar(1, 2, 3, magicnumber=6) == False:
    print("Great.")
if bar(1, 2, 3, magicnumber=7) == True:
    print("Awesome!")