Tutoriel
--------

Python est complètement orienté objet et non "typé statiquement". Vous n'avez pas besoin de declarer des variables avant de les utiliser, ni de déclarer leur type. Chaque variable en Python est un objet.

Ce tutoriel passe en revue quelques types essentiels de variables.

### Nombres
Python prend en charge deux types de nombres - les entiers et les nombres à virgule flottante. (Il prend en charge également les nombres complexes, qui ne seront pas expliqués dans ce tutoriel).

Pour définir un entier, utilisez la syntaxe suivante&nbsp;:

    monint = 7
    print(monint)

Pour définir un nombre à virgule flottante, vous pouvez utiliser l'une des notations suivantes&nbsp;:

    monfloat = 7.0
    print(monfloat)
    monfloat = float(7)
    print(monfloat)

### Chaînes de caractères

Les chaînes de caractères sont définies avec des guillemets, soit simples, soit doubles.

    monstr = 'salut'
    print(monstr)
    monstr = "salut"
    print(monstr)

La différence entre les deux est que l'utilisation de guillemets doubles facilite l'inclusion des apostrophes (alors qu'elles termineraient la chaîne si l'on utilisait des guillemets simples)

    monstr = "Je ne m'inquiète pas des apostrophes"
    print(monstr)
    
Il existe des variations supplémentaires pour la définition de chaînes, qui facilitent l'inclusion de caractères comme les retours à la ligne, les barres obliques inversées (antislashes) et des caractères Unicode. Ceux-ci dépassent le cadre de ce tutoriel, mais sont traités dans la [documentation de Python](https://www.afpy.org/doc/python/3.6/tutorial/introduction.html#strings "Les chaînes de caractères dans le Tutoriel Python").

Des opérateurs simples peuvent être appliqués aux nombres et aux chaînes&nbsp;:

    un = 1
    deux = 2
    trois = un + deux
    print(trois)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Les affectations peuvent être effectuées à plus d'une variable "simultanément" sur la même ligne comme ceci&nbsp;:

    a, b = 3, 4
    print(a,b)

Le mélange des opérandes entre nombres et chaînes n'est pas pris en charge&nbsp;:

    # Ceci ne fonctionnera pas !
    un = 1
    deux = 2
    hello = "hello"
    
    print(un + deux + hello)


Exercice
--------

L'objectif de cet exercice est de créer une chaîne de caractères, un entier, et un nombre à virgule flottante. La chaîne devra être nommée `mystring` et devra contenir le mot "hello". Le nombre à virgule flottante devra être nommé `myfloat` et devra contenir le nombre 10.0, et le nombre entier devra être nommé `myint` et devra contenir le nombre 20.

Tutorial Code
-------------
# changez ce code
mystring = None
myfloat = None
myint = None

# code de test
if mystring == "hello":
    print("String: %s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:
    print("Float: %f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("Integer: %d" % myint)

Expected Output
---------------

test_object('mystring', incorrect_msg="N'oubliez pas de changer correctement la valeur de `mystring` selon la description de l'exercice.")
test_object('myfloat', incorrect_msg="N'oubliez pas de changer correctement la valeur de `myfloat` selon la description de l'exercice.")
test_object('myint', incorrect_msg="N'oubliez pas de changer correctement la valeur de `myint` selon la description de l'exercice.")
test_output_contains("String: hello",no_output_msg= "Vérifiez que votre chaîne correspond exactement à la description de l'exercice.")
test_output_contains("Float: 10.000000",no_output_msg= "Vérifiez que votre nombre à virgule flottante correspond exactement à la description de l'exercice.")
test_output_contains("Integer: 20",no_output_msg= "Vérifiez que votre entier correspond exactement à la description de l'exercice.")
success_msg("Bon travail !")

Solution
--------

# changez ce code
mystring = "hello"
myfloat = 10.0
myint = 20

# code de test
if mystring == "hello":
    print("String: %s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:
    print("Float: %f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("Integer: %d" % myint)
