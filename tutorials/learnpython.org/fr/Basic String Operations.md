Tutorial
--------

Les chaînes (strings) sont des morceaux de texte. Elles peuvent être définies comme tout ce qui se trouve entre des guillemets :

    astring = "Hello world!"
    astring2 = 'Hello world!'

Comme vous pouvez le voir, la première chose que vous avez apprise était d'imprimer une phrase simple. Cette phrase a été stockée par Python sous forme de chaîne. Cependant, au lieu d'imprimer immédiatement des chaînes, nous allons explorer les différentes choses que vous pouvez leur faire.
Vous pouvez également utiliser des guillemets simples pour attribuer une chaîne. Cependant, vous rencontrerez des problèmes si la valeur à attribuer elle-même contient des guillemets simples. Par exemple, pour attribuer la chaîne dans ces crochets (les guillemets simples sont ' '), vous devez utiliser uniquement des guillemets doubles comme ceci

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Cela imprime 12, car "Hello world!" fait 12 caractères, y compris la ponctuation et les espaces.

    astring = "Hello world!"
    print(astring.index("o"))

Cela imprime 4, car l'emplacement de la première occurrence de la lettre "o" est 4 caractères après le premier caractère. Remarquez comment il y a en réalité deux o dans la phrase - cette méthode ne reconnaît que le premier.

Mais pourquoi n'a-t-il pas imprimé 5 ? N'est-ce pas le cinquième caractère dans la chaîne ? Pour simplifier les choses, Python (et la plupart des autres langages de programmation) commence les index à 0 au lieu de 1. Donc l'index de "o" est 4.

    astring = "Hello world!"
    print(astring.count("l"))

Pour ceux d'entre vous qui utilisent des polices de caractères farfelues, c'est un "L" minuscule, pas un chiffre un. Cela compte le nombre de "l" dans la chaîne. Par conséquent, cela devrait imprimer 3.

    astring = "Hello world!"
    print(astring[3:7])

Cela imprime une tranche de la chaîne, commençant à l'index 3 et se terminant à l'index 6. Mais pourquoi 6 et non 7 ? Encore une fois, la plupart des langages de programmation font cela - cela simplifie le calcul à l'intérieur de ces crochets.

Si vous n'avez qu'un seul chiffre dans les crochets, cela vous donnera le caractère unique à cet index. Si vous omettez le premier chiffre mais gardez le deux-points, cela vous donnera une tranche allant du début jusqu'au chiffre que vous avez laissé. Si vous omettez le deuxième chiffre, cela vous donnera une tranche du premier chiffre jusqu'à la fin.

Vous pouvez même mettre des chiffres négatifs à l'intérieur des crochets. C'est un moyen simple de commencer depuis la fin de la chaîne au lieu du début. De cette manière, -3 signifie "3e caractère depuis la fin".

    astring = "Hello world!"
    print(astring[3:7:2])

Cela imprime les caractères de la chaîne de 3 à 7 en sautant un caractère. C'est une syntaxe de tranche étendue. La forme générale est [début:fin:pas].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Notez qu'ils produisent tous deux la même sortie

Il n'existe pas de fonction comme strrev en C pour inverser une chaîne. Mais avec le type de syntaxe de tranche mentionné ci-dessus, vous pouvez facilement inverser une chaîne comme ceci

    astring = "Hello world!"
    print(astring[::-1])

Cela

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Cela crée une nouvelle chaîne avec toutes les lettres converties respectivement en majuscules et minuscules.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Ceci est utilisé pour déterminer si la chaîne commence par quelque chose ou se termine par quelque chose, respectivement. Le premier imprimera True, car la chaîne commence par "Hello". Le second imprimera False, car la chaîne ne se termine certainement pas par "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Cela divise la chaîne en un tas de chaînes regroupées dans une liste. Comme cet exemple divise à un espace, le premier élément de la liste sera "Hello", et le second sera "world!".

Exercise
--------

Essayez de corriger le code pour imprimer les bonnes informations en modifiant la chaîne.

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