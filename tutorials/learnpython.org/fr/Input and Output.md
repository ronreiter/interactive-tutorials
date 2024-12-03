Tutorial
--------

Prendre des entrées et afficher des résultats de manière requise joue un rôle important dans le codage interactif. Concentrons-nous donc sur l'entrée et la sortie de divers types de données.

###raw_input()
Cela est utilisé pour prendre des entrées tant qu'elles atteignent la fin de la ligne. Notez qu'il ne doit pas y avoir d'espaces. Prendre une entrée se termine par un caractère de nouvelle ligne et s'il y a des espaces dans la ligne d'entrée, cela entraîne une erreur.

    # Affiche l'entrée reçue de stdin
    astring=raw_input()# donner hello comme entrée
    print raw_input()

Après avoir pris l'entrée, nous pouvons les convertir vers notre type de données requis en utilisant des fonctions comme int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
Ceci est particulièrement utilisé pour entrer des entiers. L'avantage de input() par rapport à raw_input() peut être éclairci avec l'exemple suivant

    #donner 2*2 comme entrée
    a=input()
    b=raw_input() #notez que int(raw_input()) entraîne une erreur
    print a #affiche 4
    print b #affiche 2*2

###comment prendre deux types de données ou plus en entrée à partir d'une seule ligne séparée par des espaces ?
Ici, nous utilisons les fonctions split() et map()

    #donner deux entiers dans la première ligne et plus de deux entiers dans la troisième ligne
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # affiche les deux premiers entiers de la première ligne et la somme des entiers de la deuxième ligne

###Mise en forme de la sortie
Vous avez peut-être déjà remarqué que la déclaration print insère automatiquement une nouvelle ligne. L'utilisation de la virgule comme dans le code ci-dessus imprime les valeurs sur une seule ligne séparées par un espace.
Le module sys offre diverses fonctions pour le formatage de la sortie mais ici, nous apprenons comment utiliser des notions de base de formatage pour obtenir la sortie de la manière souhaitée. Voyons quelques exemples pour apprendre le formatage de la sortie.

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

La sortie doit être explicite.