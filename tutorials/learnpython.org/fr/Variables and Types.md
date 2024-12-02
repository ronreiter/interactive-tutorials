Tutorial
--------

Python est complètement orienté objet et n'est pas "typé statiquement". Vous n'avez pas besoin de déclarer des variables avant de les utiliser ou de déclarer leur type. Chaque variable en Python est un objet.

Ce tutoriel couvrira quelques types de variables de base.

### Nombres
Python prend en charge deux types de nombres - entiers (nombres entiers) et nombres à virgule flottante (décimaux). (Il prend également en charge les nombres complexes, qui ne seront pas expliqués dans ce tutoriel).

Pour définir un entier, utilisez la syntaxe suivante :

    myint = 7
    print(myint)

Pour définir un nombre à virgule flottante, vous pouvez utiliser l'une des notations suivantes :

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Chaînes

Les chaînes sont définies soit avec une apostrophe ou des guillemets.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

La différence entre les deux est que l'utilisation de guillemets rend facile l'inclusion d'apostrophes (alors que cela terminerait la chaîne si vous utilisez des apostrophes simples).

    mystring = "Don't worry about apostrophes"
    print(mystring)

Il existe des variations supplémentaires pour définir des chaînes qui facilitent l'inclusion d'éléments tels que les retours chariot, les barres obliques inverses, et les caractères Unicode. Ceux-ci sont au-delà de la portée de ce tutoriel, mais sont abordés dans la [documentation Python](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

De simples opérateurs peuvent être exécutés sur les nombres et les chaînes :

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Les affectations peuvent être faites sur plus d'une variable "simultanément" sur la même ligne de cette façon :

    a, b = 3, 4
    print(a, b)

Combiner des opérateurs entre des nombres et des chaînes n'est pas pris en charge :

    # Cela ne fonctionnera pas !
    one = 1
    two = 2
    hello = "hello"

    print(one + two + hello)


Exercise
--------

The target of this exercise is to create a string, an integer, and a floating point number. The string should be named `mystring` and should contain the word "hello". The floating point number should be named `myfloat` and should contain the number 10.0, and the integer should be named `myint` and should contain the number 20.

Tutorial Code
-------------
# modifiez ce code
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

test_object('mystring', incorrect_msg="Don't forget to change `mystring` to the correct value from the exercise description.")
test_object('myfloat', incorrect_msg="Don't forget to change `myfloat` to the correct value from the exercise description.")
test_object('myint', incorrect_msg="Don't forget to change `myint` to the correct value from the exercise description.")
test_output_contains("String: hello",no_output_msg= "Make sure your string matches exactly to the exercise desciption.")
test_output_contains("Float: 10.000000",no_output_msg= "Make sure your float matches exactly to the exercise desciption.")
test_output_contains("Integer: 20",no_output_msg= "Make sure your integer matches exactly to the exercise desciption.")
success_msg("Great job!")

Solution
--------

# modifiez ce code
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