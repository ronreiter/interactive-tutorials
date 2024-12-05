Tutoriel
--------

Python est entièrement orienté objet et n'est pas de "typage statique". Vous n'avez pas besoin de déclarer les variables avant de les utiliser, ni de déclarer leur type. Chaque variable en Python est un objet.

Ce tutoriel couvrira quelques types de variables de base.

### Nombres
Python prend en charge deux types de nombres : les entiers (nombres entiers) et les nombres à virgule flottante (décimales). (Il prend également en charge les nombres complexes, qui ne seront pas expliqués dans ce tutoriel).

Pour définir un entier, utilisez la syntaxe suivante :

    myint = 7
    print(myint)

Pour définir un nombre à virgule flottante, vous pouvez utiliser l'une des notations suivantes :

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Chaînes de caractères

Les chaînes de caractères sont définies soit avec une simple quote, soit avec des doubles quotes.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

La différence entre les deux est que l'utilisation de doubles quotes facilite l'inclusion d'apostrophes (alors qu'elles termineraient la chaîne si vous utilisiez des simples quotes)

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
Il existe des variations supplémentaires dans la définition des chaînes, qui facilitent l'inclusion d'éléments tels que des retours chariot, des barres obliques inverses et des caractères Unicode. Ceux-ci dépassent le cadre de ce tutoriel, mais sont abordés dans la [documentation Python](http://docs.python.org/tutorial/introduction.html#strings "Chaînes de caractères dans le tutoriel Python").

Des opérateurs simples peuvent être exécutés sur les nombres et les chaînes de caractères :

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Les assignations peuvent être effectuées sur plus d'une variable "simultanément" sur la même ligne comme suit :

    a, b = 3, 4
    print(a, b)

La combinaison d'opérateurs entre nombres et chaînes n'est pas prise en charge :

    # This will not work!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercice
--------

L'objectif de cet exercice est de créer une chaîne de caractères, un entier et un nombre à virgule flottante. La chaîne de caractères doit être nommée `mystring` et contenir le mot "hello". Le nombre à virgule flottante doit être nommé `myfloat` et contenir le nombre 10.0, et l'entier doit être nommé `myint` et contenir le nombre 20.

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