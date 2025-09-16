La prise d'entrée et l'affichage de la sortie de la manière requise jouent un rôle important dans le codage interactif. Concentrons-nous donc sur l'entrée et la sortie de divers types de données.

###raw_input()
Ceci est utilisé pour prendre une entrée tant qu'il atteint la fin de la ligne. Notez qu'il ne doit pas y avoir d'espaces. La prise d'entrée se termine par un caractère de nouvelle ligne et s'il y a des espaces dans la ligne d'entrée, cela entraîne une erreur

    # Affiche l'entrée reçue de stdin
    astring=raw_input()# donnez hello comme entrée
    print raw_input()

après avoir pris l'entrée, nous pouvons les convertir dans notre type de données requis en utilisant des fonctions comme int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
Ceci est spécialement utilisé pour entrer des entiers. L'avantage de input() par rapport à raw_input() peut être clair avec l'exemple suivant

    #donnez 2*2 comme entrée
    a=input()
    b=raw_input() # notez que int(raw_input()) entraîne une erreur
    print a #imprime 4
    print b #imprime 2*2

###comment prendre deux ou plusieurs types de données en entrée à partir d'une seule ligne séparée par des espaces ?
Ici, nous utilisons les fonctions split() et map()

    #donnez deux entiers dans la première ligne et plus de deux entiers dans la troisième ligne
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # imprime les deux premiers entiers de la première ligne et la somme des entiers de la deuxième ligne

###Formatage de la sortie
Vous avez peut-être déjà remarqué que l'instruction print insère automatiquement une nouvelle ligne. L'utilisation de la virgule comme dans le code ci-dessus imprime les valeurs sur une seule ligne séparées par un espace. Le module sys fournit diverses fonctions pour le formatage de la sortie, mais nous allons apprendre ici à utiliser les connaissances de base du formatage pour obtenir une sortie de la manière requise. Voyons quelques exemples pour apprendre le formatage de la sortie

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

La sortie doit être auto-explicative.

Exercice
--------

Écrivez un programme qui demande à l'utilisateur de saisir son nom, son âge et son pays. Le programme doit ensuite afficher un message qui inclut ces informations dans une phrase. Le programme doit inclure :

1. Prendre un nom en entrée à l'aide de `raw_input()`.
2. Prendre un âge en entrée à l'aide de `input()`, et le convertir en un entier.
3. Prendre un nom de pays en entrée à l'aide de `raw_input()`.
4. Formater la sortie pour afficher une phrase qui inclut le nom, l'âge et le pays.

Le programme doit démontrer la gestion de l'entrée et le formatage de chaîne en Python.