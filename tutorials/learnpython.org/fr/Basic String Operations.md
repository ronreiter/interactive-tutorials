Tutorial
--------

Les chaînes sont des morceaux de texte. Elles peuvent être définies comme tout ce qui se trouve entre des guillemets :

    astring = "Hello world!"
    astring2 = 'Hello world!'

Comme vous pouvez le voir, la première chose que vous avez apprise était d'imprimer une phrase simple. Cette phrase a été stockée par Python sous forme de chaîne. Cependant, au lieu d'imprimer immédiatement des chaînes, nous allons explorer les différentes choses que vous pouvez faire avec elles.
Vous pouvez également utiliser des guillemets simples pour assigner une chaîne. Cependant, vous rencontrerez des problèmes si la valeur à assigner elle-même contient des guillemets simples. Par exemple, pour assigner la chaîne dans ces parenthèses (les guillemets simples sont ' '), vous devez utiliser uniquement des guillemets doubles comme ceci

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Cela imprime 12, car "Hello world!" compte 12 caractères, y compris la ponctuation et les espaces.

    astring = "Hello world!"
    print(astring.index("o"))

Cela imprime 4, car la première occurrence de la lettre "o" est à 4 caractères du premier caractère. Remarquez qu'il y a en fait deux o dans la phrase - cette méthode ne reconnaît que le premier.

Mais pourquoi n'a-t-il pas imprimé 5 ? "o" n'est-il pas le cinquième caractère de la chaîne ? Pour simplifier les choses, Python (et la plupart des autres langages de programmation) commence à 0 au lieu de 1. Donc l'index de "o" est 4.

    astring = "Hello world!"
    print(astring.count("l"))

Pour ceux qui utilisent des polices bizarres, c'est un l minuscule, pas un chiffre un. Cela compte le nombre de l dans la chaîne. Cela devrait donc imprimer 3.

    astring = "Hello world!"
    print(astring[3:7])

Cela imprime une tranche de la chaîne, commençant à l'index 3 et se terminant à l'index 6. Mais pourquoi 6 et pas 7 ? Encore une fois, la plupart des langages de programmation font cela - cela simplifie les calculs à l'intérieur des crochets.

Si vous n'avez qu'un seul nombre entre les crochets, cela vous donnera le seul caractère à cet index. Si vous omettez le premier nombre mais gardez les deux-points, cela vous donnera une tranche du début jusqu'au nombre que vous avez laissé. Si vous omettez le deuxième nombre, cela vous donnera une tranche du premier nombre jusqu'à la fin.

Vous pouvez même mettre des nombres négatifs dans les crochets. C'est un moyen facile de commencer à la fin de la chaîne au lieu du début. De cette façon, -3 signifie "3ème caractère à partir de la fin".

    astring = "Hello world!"
    print(astring[3:7:2])

Cela imprime les caractères de la chaîne de 3 à 7 en sautant un caractère. C'est une syntaxe de tranche étendue. La forme générale est [start:stop:step].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Notez que les deux produisent le même résultat.

Il n'existe pas de fonction comme strrev en C pour inverser une chaîne. Mais avec le type de syntaxe de tranche mentionné ci-dessus, vous pouvez facilement inverser une chaîne comme ceci

    astring = "Hello world!"
    print(astring[::-1])

Ceci

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Ces fonctions créent une nouvelle chaîne avec toutes les lettres converties respectivement en majuscules et minuscules.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Cela permet de déterminer si la chaîne commence par quelque chose ou se termine par quelque chose, respectivement. La première imprimera True, car la chaîne commence par "Hello". La seconde imprimera False, car la chaîne ne se termine certainement pas par "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Cela divise la chaîne en un ensemble de chaînes regroupées dans une liste. Puisque cet exemple divise à un espace, le premier élément de la liste sera "Hello", et le second sera "world!".

Exercice
--------

Essayez de corriger le code pour imprimer les informations correctes en changeant la chaîne.

Tutorial Code
-------------

s = "Hey there! what should this string be?"
# La longueur devrait être 20
print("Length of s = %d" % len(s))

# La première occurrence de "a" devrait être à l'index 8
print("The first occurrence of the letter a = %d" % s.index("a"))

# Le nombre de "a" devrait être 2
print("a occurs %d times" % s.count("a"))

# Trancher la chaîne en morceaux
print("The first five characters are '%s'" % s[:5]) # Start to 5
print("The next five characters are '%s'" % s[5:10]) # 5 to 10
print("The thirteenth character is '%s'" % s[12]) # Just number 12
print("The characters with odd index are '%s'" %s[1::2]) #(0-based indexing)
print("The last five characters are '%s'" % s[-5:]) # 5th-from-last to end

# Tout convertir en majuscules
print("String in uppercase: %s" % s.upper())

# Tout convertir en minuscules
print("String in lowercase: %s" % s.lower())

# Vérifier comment commence une chaîne
if s.startswith("Str"):
    print("String starts with 'Str'. Good!")

# Vérifier comment se termine une chaîne
if s.endswith("ome!"):
    print("String ends with 'ome!'. Good!")

# Diviser la chaîne en trois chaînes séparées,
# chacune contenant seulement un mot
print("Split the words of the string: %s" % s.split(" "))

Expected Output
---------------

test_object("s", incorrect_msg="Make sure you change the string assigned to `s` to match the exercise instructions.")
success_msg("Great work!")

Solution
--------

s = "Strings are awesome!"
# La longueur devrait être 20
print("Length of s = %d" % len(s))

# La première occurrence de "a" devrait être à l'index 8
print("The first occurrence of the letter a = %d" % s.index("a"))

# Le nombre de "a" devrait être 2
print("a occurs %d times" % s.count("a"))

# Trancher la chaîne en morceaux
print("The first five characters are '%s'" % s[:5]) # Start to 5
print("The next five characters are '%s'" % s[5:10]) # 5 to 10
print("The thirteenth character is '%s'" % s[12]) # Just number 12
print("The characters with odd index are '%s'" %s[1::2]) #(0-based indexing)
print("The last five characters are '%s'" % s[-5:]) # 5th-from-last to end

# Tout convertir en majuscules
print("String in uppercase: %s" % s.upper())

# Tout convertir en minuscules
print("String in lowercase: %s" % s.lower())

# Vérifier comment commence une chaîne
if s.startswith("Str"):
    print("String starts with 'Str'. Good!")

# Vérifier comment se termine une chaîne
if s.endswith("ome!"):
    print("String ends with 'ome!'. Good!")

# Diviser la chaîne en trois chaînes séparées,
# chacune contenant seulement un mot
print("Split the words of the string: %s" % s.split(" "))