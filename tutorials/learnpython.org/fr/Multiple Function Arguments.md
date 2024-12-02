Tutorial
--------

Chaque fonction en Python reçoit un nombre prédéterminé d'arguments si elle est déclarée normalement, comme ceci :

    def myfunction(first, second, third):
        # faire quelque chose avec les 3 variables
        ...

Il est possible de déclarer des fonctions qui reçoivent un nombre variable d'arguments, en utilisant la syntaxe suivante :

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

La variable "therest" est une liste de variables, qui reçoit tous les arguments donnés à la fonction "foo" après les 3 premiers arguments. Ainsi, appeler `foo(1, 2, 3, 4, 5)` affichera :

    def foo(first, second, third, *therest):
        print("First: %s" % (first))
        print("Second: %s" % (second))
        print("Third: %s" % (third))
        print("And all the rest... %s" % (list(therest)))
    
    foo(1, 2, 3, 4, 5)

Il est également possible d'envoyer des arguments de fonctions par mot-clé, de sorte que l'ordre des arguments n'importe pas, en utilisant la syntaxe suivante. Le code suivant donne le résultat suivant : 
```La somme est : 6
    Résultat : 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" % (first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" % (result))



La fonction "bar" reçoit 3 arguments. Si un argument supplémentaire "action" est reçu, et qu'il demande la somme des nombres, alors la somme est affichée. Sinon, la fonction sait également qu'elle doit retourner le premier argument, si la valeur du paramètre "number", passée dans la fonction, est égale à "first".

Exercise
--------

Fill in the `foo` and `bar` functions so they can receive a variable amount of arguments (3 or more)
The `foo` function must return the amount of extra arguments received.
The `bar` must return `True` if the argument with the keyword `magicnumber` is worth 7, and `False` otherwise.

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