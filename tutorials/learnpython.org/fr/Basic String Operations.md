Tutorial
--------

Les chaînes sont des morceaux de texte. Elles peuvent être définies comme tout ce qui se trouve entre guillemets :

    astring = "Hello world!"
    astring2 = 'Hello world!'

Comme vous pouvez le voir, la première chose que vous avez apprise est d'imprimer une simple phrase. Cette phrase a été stockée par Python comme une chaîne. Cependant, au lieu d'imprimer immédiatement les chaînes, nous allons explorer les diverses choses que vous pouvez leur faire.
Vous pouvez également utiliser des guillemets simples pour attribuer une chaîne. Cependant, vous rencontrerez des problèmes si la valeur à attribuer contient elle-même des guillemets simples. Par exemple, pour attribuer la chaîne dans ces crochets (les guillemets simples sont ' '), vous devez utiliser uniquement des guillemets doubles comme ceci

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Cela affiche 12, car "Hello world!" contient 12 caractères, y compris la ponctuation et les espaces.

    astring = "Hello world!"
    print(astring.index("o"))

Cela affiche 4, car l'emplacement de la première occurrence de la lettre "o" est à 4 caractères du premier caractère. Notez comment il y a en fait deux o dans la phrase - cette méthode ne reconnaît que le premier.

Mais pourquoi n'a-t-il pas affiché 5 ? N'est-ce pas "o" le cinquième caractère de la chaîne ? Pour simplifier les choses, Python (et la plupart des autres langages de programmation) commence à compter à 0 au lieu de 1. Donc l'indice de "o" est 4.

    astring = "Hello world!"
    print(astring.count("l"))

Pour ceux d'entre vous utilisant des polices étranges, il s'agit d'un "L" minuscule, pas d'un chiffre un. Cela compte le nombre de "l" dans la chaîne. Donc, cela devrait afficher 3.

    astring = "Hello world!"
    print(astring[3:7])

Cela affiche une tranche de la chaîne, commençant à l'indice 3 et se terminant à l'indice 6. Mais pourquoi 6 et non 7 ? Encore une fois, la plupart des langages de programmation font cela - cela facilite les calculs à l'intérieur de ces crochets.

Si vous avez juste un nombre dans les crochets, cela vous donnera le caractère unique à cet indice. Si vous laissez de côté le premier nombre mais conservez le deux-points, cela vous donnera une tranche du début jusqu'au nombre que vous avez laissé. Si vous laissez de côté le deuxième nombre, cela vous donnera une tranche du premier nombre jusqu'à la fin.

Vous pouvez même mettre des nombres négatifs dans les crochets. Ils sont un moyen facile de commencer à la fin de la chaîne au lieu du début. De cette façon, -3 signifie "3e caractère depuis la fin".

    astring = "Hello world!"
    print(astring[3:7:2])

Cela affiche les caractères de la chaîne de 3 à 7 en sautant un caractère. C'est la syntaxe de tranche étendue. La forme générale est [début:fin:pas].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Notez que les deux produisent le même résultat.

Il n'y a pas de fonction comme strrev en C pour inverser une chaîne. Mais avec le type de syntaxe de tranche mentionné ci-dessus, vous pouvez facilement inverser une chaîne comme ceci

    astring = "Hello world!"
    print(astring[::-1])

Cela

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Cela crée une nouvelle chaîne avec toutes les lettres converties respectivement en majuscules et en minuscules.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Ceci est utilisé pour déterminer si la chaîne commence ou se termine avec quelque chose, respectivement. La première imprimera True, car la chaîne commence par "Hello". La seconde imprimera False, car la chaîne ne se termine certainement pas par "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Cela divise la chaîne en un ensemble de chaînes regroupées dans une liste. Comme cet exemple divise à un espace, le premier élément de la liste sera "Hello", et le second sera "world!".

Exercice
--------

Essayez de corriger le code pour imprimer la bonne information en changeant la chaîne.

Tutorial Code
-------------

s = "Hey there! what should this string be?"
# La longueur doit être 20
print("Length of s = %d" % len(s))

# La première occurrence de "a" doit être à l'indice 8
print("The first occurrence of the letter a = %d" % s.index("a"))

# Le nombre de "a" doit être 2
print("a occurs %d times" % s.count("a"))

# Découper la chaîne en morceaux
print("The first five characters are '%s'" % s[:5]) # Start to 5
print("The next five characters are '%s'" % s[5:10]) # 5 to 10
print("The thirteenth character is '%s'" % s[12]) # Just number 12
print("The characters with odd index are '%s'" %s[1::2]) #(0-based indexing)
print("The last five characters are '%s'" % s[-5:]) # 5th-from-last to end

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
# chacune contenant uniquement un mot
print("Split the words of the string: %s" % s.split(" "))

Expected Output
---------------

test_object("s", incorrect_msg="Make sure you change the string assigned to `s` to match the exercise instructions.")
success_msg("Great work!")

Solution
--------

s = "Strings are awesome!"
# La longueur doit être 20
print("Length of s = %d" % len(s))

# La première occurrence de "a" doit être à l'indice 8
print("The first occurrence of the letter a = %d" % s.index("a"))

# Le nombre de "a" doit être 2
print("a occurs %d times" % s.count("a"))

# Découper la chaîne en morceaux
print("The first five characters are '%s'" % s[:5]) # Start to 5
print("The next five characters are '%s'" % s[5:10]) # 5 to 10
print("The thirteenth character is '%s'" % s[12]) # Just number 12
print("The characters with odd index are '%s'" %s[1::2]) #(0-based indexing)
print("The last five characters are '%s'" % s[-5:]) # 5th-from-last to end

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
# chacune contenant uniquement un mot
print("Split the words of the string: %s" % s.split(" "))