Les chaînes de caractères sont des morceaux de texte. Elles peuvent être définies comme tout ce qui se trouve entre des guillemets :

    astring = "Hello world!"
    astring2 = 'Hello world!'

Comme vous pouvez le constater, la première chose que vous avez apprise est d'imprimer une phrase simple. Cette phrase a été stockée par Python comme une chaîne de caractères. Cependant, au lieu d'imprimer immédiatement les chaînes de caractères, nous allons explorer les différentes choses que vous pouvez leur faire.
Vous pouvez également utiliser des guillemets simples pour assigner une chaîne de caractères. Cependant, vous rencontrerez des problèmes si la valeur à assigner contient elle-même des guillemets simples. Par exemple, pour assigner la chaîne de caractères dans ces parenthèses (les guillemets simples sont ''), vous devez utiliser uniquement des guillemets doubles comme ceci

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Cela imprime 12, car "Hello world!" comporte 12 caractères, y compris la ponctuation et les espaces.

    astring = "Hello world!"
    print(astring.index("o"))

Cela imprime 4, car la position de la première occurrence de la lettre "o" est à 4 caractères du premier caractère. Notez qu'il y a en fait deux "o" dans la phrase - cette méthode ne reconnaît que le premier.

Mais pourquoi n'a-t-il pas imprimé 5 ? N'est-ce pas "o" le cinquième caractère de la chaîne ? Pour simplifier les choses, Python (et la plupart des autres langages de programmation) commencent les indices à 0 au lieu de 1. Donc l'indice de "o" est 4.

    astring = "Hello world!"
    print(astring.count("l"))

Pour ceux d'entre vous qui utilisent des polices farfelues, c'est un L minuscule, pas un chiffre un. Cela compte le nombre de l dans la chaîne. Par conséquent, cela devrait imprimer 3.

    astring = "Hello world!"
    print(astring[3:7])

Cela imprime une tranche de la chaîne, commençant à l'indice 3, et se terminant à l'indice 6. Mais pourquoi 6 et non 7 ? Encore une fois, la plupart des langages de programmation font cela - cela facilite les calculs à l'intérieur de ces crochets.

Si vous avez juste un nombre dans les crochets, cela vous donnera le seul caractère à cet indice. Si vous omettez le premier nombre mais gardez les deux-points, cela vous donnera une tranche du début jusqu'au nombre que vous avez laissé. Si vous omettez le deuxième nombre, cela vous donnera une tranche du premier nombre jusqu'à la fin.

Vous pouvez même mettre des nombres négatifs à l'intérieur des crochets. Ils sont un moyen facile de commencer à la fin de la chaîne au lieu du début. De cette façon, -3 signifie "3ème caractère depuis la fin".

    astring = "Hello world!"
    print(astring[3:7:2])

Cela imprime les caractères de la chaîne de 3 à 7 en sautant un caractère. C'est la syntaxe de tranche étendue. La forme générale est [début:fin:pas].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Notez que les deux produisent la même sortie.

Il n'existe pas de fonction comme strrev en C pour inverser une chaîne de caractères. Mais avec le type de syntaxe de tranche mentionné ci-dessus, vous pouvez facilement inverser une chaîne comme ceci

    astring = "Hello world!"
    print(astring[::-1])

Cette

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Ces fonctions créent une nouvelle chaîne avec toutes les lettres converties respectivement en majuscules et minuscules.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Ceci est utilisé pour déterminer si la chaîne commence par quelque chose ou se termine par quelque chose. La première imprimera True, car la chaîne commence par "Hello". La seconde imprimera False, car la chaîne ne se termine certainement pas par "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Cela divise la chaîne en un groupe de chaînes regroupées dans une liste. Puisque cet exemple divise à l'espace, le premier élément de la liste sera "Hello", et le second sera "world!".

Exercice
--------

Essayez de corriger le code pour imprimer les informations correctes en modifiant la chaîne.