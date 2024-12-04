Tutorial
--------

Python est complètement orienté objet et n'est pas "typiquement statique". Vous n'avez pas besoin de déclarer les variables avant de les utiliser, ni de déclarer leur type. Chaque variable en Python est un objet.

Ce tutoriel abordera quelques types basiques de variables.

### Nombres
Python supporte deux types de nombres - nombres entiers(chiffres entiers) et nombres à virgule flottante(décimaux). (Il supporte aussi les nombres complexes, qui ne seront pas expliqués dans ce tutoriel).

Pour définir un entier, utilisez la syntaxe suivante :

    myint = 7
    print(myint)

Pour définir un nombre à virgule flottante, vous pouvez utiliser l'une des notations suivantes :

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Chaînes

Les chaînes sont définies soit avec un guillemet simple soit avec un guillemet double.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

La différence entre les deux est que l'utilisation de guillemets doubles facilite l'inclusion des apostrophes (tandis que celles-ci termineraient la chaîne si on utilisait des guillemets simples)

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
Il existe d'autres variantes de la définition des chaînes qui facilitent l'inclusion des retours chariot, des barres obliques inverses et des caractères Unicode. Celles-ci dépassent le cadre de ce tutoriel, mais sont couvertes dans la [documentation Python](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Les opérateurs simples peuvent être exécutés sur des nombres et des chaînes :

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Les affectations peuvent être effectuées sur plus d'une variable "simultanément" sur la même ligne comme ceci

    a, b = 3, 4
    print(a, b)

Mélanger les opérateurs entre nombres et chaînes n'est pas supporté :

    # Cela ne fonctionnera pas !
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercise
--------

L'objectif de cet exercice est de créer une chaîne, un entier, et un nombre à virgule flottante. La chaîne doit être nommée `mystring` et doit contenir le mot "hello". Le nombre à virgule flottante doit être nommé `myfloat` et doit contenir le nombre 10.0, et l'entier doit être nommé `myint` et doit contenir le nombre 20.

Tutorial Code
-------------
# change this code
mystring = None
myfloat = None
myint = None

# testing code
if mystring == "hello":
    print("String: %s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:
    print("Float: %f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("Integer: %d" % myint)

Expected Output
---------------

test_object('mystring', incorrect_msg="Don't forget to change `mystring` to the correct value from the exercise description.")
test_object('myfloat', incorrect_msg="Don't forget to change `myfloat` to the correct value from the exercise description.")
test_object('myint', incorrect_msg="Don't forget to change `myint` to the correct value from the exercise description.")
test_output_contains("String: hello",no_output_msg= "Make sure your string matches exactly to the exercise desciption.")
test_output_contains("Float: 10.000000",no_output_msg= "Make sure your float matches exactly to the exercise desciption.")
test_output_contains("Integer: 20",no_output_msg= "Make sure your integer matches exactly to the exercise desciption.")
success_msg("Great job!")

Solution
--------

# change this code
mystring = "hello"
myfloat = 10.0
myint = 20

# testing code
if mystring == "hello":
    print("String: %s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:
    print("Float: %f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("Integer: %d" % myint)