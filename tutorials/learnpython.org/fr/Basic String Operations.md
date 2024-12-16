Content:

Tutorial
--------

Les chaînes de caractères sont des morceaux de texte. Elles peuvent être définies comme tout ce qui se trouve entre des guillemets :

    astring = "Hello world!"
    astring2 = 'Hello world!'

Comme vous pouvez le voir, la première chose que vous avez apprise est d'imprimer une phrase simple. Cette phrase a été stockée par Python en tant que chaîne. Cependant, au lieu d'imprimer immédiatement des chaînes de caractères, nous allons explorer les différentes choses que vous pouvez faire avec elles.
Vous pouvez également utiliser des guillemets simples pour attribuer une chaîne de caractères. Cependant, vous rencontrerez des problèmes si la valeur à attribuer contient elle-même des guillemets simples. Par exemple, pour assigner la chaîne dans ces parenthèses (les guillemets simples sont ' '), vous devez utiliser uniquement des guillemets doubles comme ceci

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Cela imprime 12, car "Hello world!" contient 12 caractères, y compris la ponctuation et les espaces.

    astring = "Hello world!"
    print(astring.index("o"))

Cela imprime 4, car l'emplacement de la première occurrence de la lettre "o" est à 4 caractères du premier caractère. Remarquez comment il y a en réalité deux "o" dans la phrase - cette méthode ne reconnaît que le premier.

Mais pourquoi n'a-t-il pas imprimé 5 ? "o" n'est-il pas le cinquième caractère de la chaîne ? Pour simplifier les choses, Python (et la plupart des autres langages de programmation) commence à compter à partir de 0 au lieu de 1. Donc l'index de "o" est 4.

    astring = "Hello world!"
    print(astring.count("l"))

Pour ceux d'entre vous qui utilisent des polices de caractères fantaisistes, il s'agit d'un "l" minuscule, et non d'un chiffre un. Cela compte le nombre de "l" dans la chaîne. Il devrait donc imprimer 3.

    astring = "Hello world!"
    print(astring[3:7])

Cela imprime une tranche de la chaîne, commençant à l'index 3 et se terminant à l'index 6. Mais pourquoi 6 et pas 7 ? Encore une fois, la plupart des langages de programmation procèdent ainsi - cela simplifie les calculs à l'intérieur de ces crochets.

Si vous avez juste un chiffre dans les crochets, il vous donnera le seul caractère à cet index. Si vous laissez de côté le premier chiffre mais conservez le deux-points, il vous donnera une tranche allant du début au chiffre que vous avez laissé. Si vous laissez de côté le deuxième chiffre, il vous donnera une tranche allant du premier chiffre jusqu'à la fin.

Vous pouvez même mettre des chiffres négatifs à l'intérieur des crochets. Ils sont un moyen pratique de commencer à la fin de la chaîne au lieu du début. De cette façon, -3 signifie "3e caractère à partir de la fin".

    astring = "Hello world!"
    print(astring[3:7:2])

Cela imprime les caractères de la chaîne de 3 à 7 en sautant un caractère. Il s'agit de la syntaxe de coupe étendue. La forme générale est [start:stop:step].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Notez qu'ils produisent tous les deux le même résultat

Il n'existe pas de fonction comme strrev en C pour inverser une chaîne. Mais avec le type de syntaxe de coupe mentionné ci-dessus, vous pouvez facilement inverser une chaîne comme ceci

    astring = "Hello world!"
    print(astring[::-1])

Cette

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Cela crée une nouvelle chaîne avec toutes les lettres converties en majuscules et en minuscules, respectivement.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Ceci est utilisé pour déterminer si la chaîne commence par quelque chose ou termine par quelque chose, respectivement. Le premier imprimera True, car la chaîne commence par "Hello". Le second imprimera False, car la chaîne ne se termine certainement pas par "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Cela divise la chaîne en plusieurs chaînes regroupées ensemble dans une liste. Puisque cet exemple se divise à un espace, le premier élément de la liste sera "Hello", et le second sera "world!".

Exercise
--------

Essayez de corriger le code pour imprimer les informations correctes en modifiant la chaîne.

Tutorial Code
-------------

s = "Hey there! what should this string be?"
# Length should be 20
print("Length of s = %d" % len(s))

# First occurrence of "a" should be at index 8
print("The first occurrence of the letter a = %d" % s.index("a"))

# Number of a's should be 2
print("a occurs %d times" % s.count("a"))

# Slicing the string into bits
print("The first five characters are '%s'" % s[:5]) # Start to 5
print("The next five characters are '%s'" % s[5:10]) # 5 to 10
print("The thirteenth character is '%s'" % s[12]) # Just number 12
print("The characters with odd index are '%s'" %s[1::2]) #(0-based indexing)
print("The last five characters are '%s'" % s[-5:]) # 5th-from-last to end

# Convert everything to uppercase
print("String in uppercase: %s" % s.upper())

# Convert everything to lowercase
print("String in lowercase: %s" % s.lower())

# Check how a string starts
if s.startswith("Str"):
    print("String starts with 'Str'. Good!")

# Check how a string ends
if s.endswith("ome!"):
    print("String ends with 'ome!'. Good!")

# Split the string into three separate strings,
# each containing only a word
print("Split the words of the string: %s" % s.split(" "))

Expected Output
---------------

test_object("s", incorrect_msg="Make sure you change the string assigned to `s` to match the exercise instructions.")
success_msg("Great work!")

Solution
--------

s = "Strings are awesome!"
# Length should be 20
print("Length of s = %d" % len(s))

# First occurrence of "a" should be at index 8
print("The first occurrence of the letter a = %d" % s.index("a"))

# Number of a's should be 2
print("a occurs %d times" % s.count("a"))

# Slicing the string into bits
print("The first five characters are '%s'" % s[:5]) # Start to 5
print("The next five characters are '%s'" % s[5:10]) # 5 to 10
print("The thirteenth character is '%s'" % s[12]) # Just number 12
print("The characters with odd index are '%s'" %s[1::2]) #(0-based indexing)
print("The last five characters are '%s'" % s[-5:]) # 5th-from-last to end

# Convert everything to uppercase
print("String in uppercase: %s" % s.upper())

# Convert everything to lowercase
print("String in lowercase: %s" % s.lower())

# Check how a string starts
if s.startswith("Str"):
    print("String starts with 'Str'. Good!")

# Check how a string ends
if s.endswith("ome!"):
    print("String ends with 'ome!'. Good!")

# Split the string into three separate strings,
# each containing only a word
print("Split the words of the string: %s" % s.split(" "))