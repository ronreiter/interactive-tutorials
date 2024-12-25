Python est complètement orienté objet, et n'est pas "typé statiquement". Vous n'avez pas besoin de déclarer des variables avant de les utiliser, ni de déclarer leur type. Chaque variable en Python est un objet.

Ce tutoriel couvrira quelques types de base de variables.

### Numbers
Python prend en charge deux types de nombres - les entiers (nombres entiers) et les nombres à virgule flottante (décimaux). (Il prend également en charge les nombres complexes, qui ne seront pas expliqués dans ce tutoriel).

Pour définir un entier, utilisez la syntaxe suivante :

    myint = 7
    print(myint)

Pour définir un nombre à virgule flottante, vous pouvez utiliser l'une des notations suivantes :

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

Les chaînes de caractères sont définies soit avec un guillemet simple soit un guillemet double.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

La différence entre les deux est que l'utilisation de guillemets doubles facilite l'inclusion d'apostrophes (alors que cela terminerait la chaîne si des guillemets simples étaient utilisés).

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
Il existe des variations supplémentaires pour définir des chaînes qui facilitent l'inclusion d'éléments tels que les retours chariot, les barres obliques inverses et les caractères Unicode. Ceux-ci dépassent le cadre de ce tutoriel, mais sont couverts dans la [documentation Python](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Les opérateurs simples peuvent être exécutés sur les nombres et les chaînes :

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

Le mélange d'opérateurs entre les nombres et les chaînes n'est pas pris en charge :

    # Cela ne fonctionnera pas !
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercice
--------

Le but de cet exercice est de créer une chaîne de caractères, un entier et un nombre à virgule flottante. La chaîne de caractères doit être appelée `mystring` et doit contenir le mot "hello". Le nombre à virgule flottante doit être appelé `myfloat` et doit contenir le nombre 10.0, et l'entier doit être appelé `myint` et doit contenir le nombre 20.