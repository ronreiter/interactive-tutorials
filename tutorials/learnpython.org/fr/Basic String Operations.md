Tutorial
--------

Les chaînes sont des morceaux de texte. Elles peuvent être définies comme tout ce qui se trouve entre des guillemets :

    astring = "Hello world!"
    astring2 = 'Hello world!'

Comme vous pouvez le voir, la première chose que vous avez apprise était d'imprimer une simple phrase. Cette phrase a été stockée par Python sous forme de chaîne. Cependant, au lieu d'imprimer immédiatement des chaînes, nous allons explorer les différentes choses que vous pouvez leur faire.
Vous pouvez également utiliser des guillemets simples pour attribuer une chaîne. Cependant, vous rencontrerez des problèmes si la valeur à attribuer contient elle-même des guillemets simples. Par exemple, pour attribuer la chaîne dans ces parenthèses (les guillemets simples sont ' '), vous devez utiliser seulement des guillemets doubles comme ceci

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Cela imprime 12, car "Hello world!" est composé de 12 caractères, y compris la ponctuation et les espaces.

    astring = "Hello world!"
    print(astring.index("o"))

Cela imprime 4, car la position de la première occurrence de la lettre "o" est à 4 caractères du premier caractère. Remarquez comment il y a en fait deux o's dans la phrase - cette méthode ne reconnaît que le premier.

Mais pourquoi cela n'imprime-t-il pas 5? N'est-ce pas "o" le cinquième caractère de la chaîne? Pour simplifier les choses, Python (et la plupart des autres langages de programmation) commence à compter à 0 au lieu de 1. Donc l'index de "o" est 4.

    astring = "Hello world!"
    print(astring.count("l"))

Pour ceux d'entre vous qui utilisent des polices de caractères bizarres, c'est un L minuscule, pas un chiffre un. Cela compte le nombre de l dans la chaîne. Donc, cela devrait imprimer 3.

    astring = "Hello world!"
    print(astring[3:7])

Cela imprime une tranche de la chaîne, commençant à l'index 3 et finissant à l'index 6. Mais pourquoi 6 et pas 7 ? Encore une fois, la plupart des langages de programmation font cela - cela simplifie les calculs à l'intérieur de ces crochets.

Si vous avez juste un nombre dans les crochets, cela vous donnera le caractère unique à cet index. Si vous omettez le premier nombre mais gardez le deux-points, cela vous donnera une tranche du début au nombre que vous avez laissé. Si vous omettez le deuxième nombre, cela vous donnera une tranche allant du premier nombre à la fin.

Vous pouvez même mettre des nombres négatifs dans les crochets. Ils sont un moyen facile de commencer à la fin de la chaîne au lieu du début. De cette façon, -3 signifie "3ème caractère à partir de la fin".

    astring = "Hello world!"
    print(astring[3:7:2])

Cela imprime les caractères de la chaîne de 3 à 7 en sautant un caractère. C'est la syntaxe de tranches étendues. La forme générale est [start:stop:step].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Notez que les deux produisent la même sortie.

Il n'y a pas de fonction comme strrev en C pour inverser une chaîne. Mais avec le type de syntaxe de tranche mentionné ci-dessus, vous pouvez facilement inverser une chaîne comme ceci

    astring = "Hello world!"
    print(astring[::-1])

Cela

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Ceux-ci créent une nouvelle chaîne avec toutes les lettres converties respectivement en majuscules et minuscules.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Cela sert à déterminer si la chaîne commence par quelque chose ou finit par quelque chose, respectivement. La première imprimera True, car la chaîne commence par "Hello". La seconde imprimera False, car la chaîne ne finit certainement pas par "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Cela divise la chaîne en un tas de chaînes groupées ensemble dans une liste. Puisque cet exemple se divise à un espace, le premier élément de la liste sera "Hello", et le second sera "world!".

Exercise
--------

Try to fix the code to print out the correct information by changing the string.

Tutorial Code
-------------

s = "Hey there! what should this string be?"
# La longueur doit être de 20
print("Length of s = %d" % len(s))

# La première occurrence de "a" devrait être à l'index 8
print("The first occurrence of the letter a = %d" % s.index("a"))

# Le nombre de 'a' devrait être 2
print("a occurs %d times" % s.count("a"))

# Découper la chaîne en morceaux
print("The first five characters are '%s'" % s[:5]) # Début à 5
print("The next five characters are '%s'" % s[5:10]) # 5 à 10
print("The thirteenth character is '%s'" % s[12]) # Juste numéro 12
print("The characters with odd index are '%s'" %s[1::2]) #(indexation basée sur 0)
print("The last five characters are '%s'" % s[-5:]) # 5e à partir de la fin jusqu'à la fin

# Convertir tout en majuscules
print("String in uppercase: %s" % s.upper())

# Convertir tout en minuscules
print("String in lowercase: %s" % s.lower())

# Vérifier comment une chaîne commence
if s.startswith("Str"):
    print("String starts with 'Str'. Good!")

# Vérifier comment une chaîne se termine
if s.endswith("ome!"):
    print("String ends with 'ome!'. Good!")

# Diviser la chaîne en trois chaînes séparées,
# chacune ne contenant qu'un mot
print("Split the words of the string: %s" % s.split(" "))

Expected Output
---------------

test_object("s", incorrect_msg="Make sure you change the string assigned to `s` to match the exercise instructions.")
success_msg("Great work!")

Solution
--------

s = "Strings are awesome!"
# La longueur doit être de 20
print("Length of s = %d" % len(s))

# La première occurrence de "a" devrait être à l'index 8
print("The first occurrence of the letter a = %d" % s.index("a"))

# Le nombre de 'a' devrait être 2
print("a occurs %d times" % s.count("a"))

# Découper la chaîne en morceaux
print("The first five characters are '%s'" % s[:5]) # Début à 5
print("The next five characters are '%s'" % s[5:10]) # 5 à 10
print("The thirteenth character is '%s'" % s[12]) # Juste numéro 12
print("The characters with odd index are '%s'" %s[1::2]) #(indexation basée sur 0)
print("The last five characters are '%s'" % s[-5:]) # 5e à partir de la fin jusqu'à la fin

# Convertir tout en majuscules
print("String in uppercase: %s" % s.upper())

# Convertir tout en minuscules
print("String in lowercase: %s" % s.lower())

# Vérifier comment une chaîne commence
if s.startswith("Str"):
    print("String starts with 'Str'. Good!")

# Vérifier comment une chaîne se termine
if s.endswith("ome!"):
    print("String ends with 'ome!'. Good!")

# Diviser la chaîne en trois chaînes séparées,
# chacune ne contenant qu'un mot
print("Split the words of the string: %s" % s.split(" "))