Tutorial
--------

Prendre des entrées et afficher les sorties de la manière requise joue un rôle important dans le codage interactif. Alors concentrons-nous sur les entrées et les sorties de divers types de données.

###raw_input()

Ceci est utilisé pour prendre des entrées tant qu'elles atteignent la fin de la ligne. Notez qu'il ne doit pas y avoir d'espaces. La prise d'entrée se termine par un caractère de nouvelle ligne et s'il y a des espaces dans la ligne d'entrée, cela entraîne une erreur.

    # Affiche l'entrée reçue depuis stdin
    astring=raw_input()# donner hello comme entrée
    print raw_input()

après avoir pris l'entrée, nous pouvons les convertir dans notre type de données requis en utilisant des fonctions comme int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()

Ceci est particulièrement utilisé pour entrer des entiers. L'avantage de input() sur raw_input() peut être éclairci avec l'exemple suivant

    #donner 2*2 comme entrée
    a=input()
    b=raw_input() #notez que int(raw_input()) entraîne une erreur
    print a #imprime 4
    print b #imprime 2*2

###Comment prendre deux ou plusieurs types de données comme entrée à partir d'une seule ligne séparée par des espaces?

Ici, nous utilisons les fonctions split() et map()

    #donner deux entiers dans la première ligne et plus de deux entiers dans la troisième ligne
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # imprime les deux premiers entiers de la première ligne et la somme des entiers de la deuxième ligne

###Formatage de la sortie

Vous avez peut-être déjà remarqué que l'instruction print insère automatiquement une nouvelle ligne. L'utilisation de la virgule comme dans le code ci-dessus imprime les valeurs sur une seule ligne séparées par un espace. Le module sys fournit diverses fonctions pour le formatage de la sortie, mais ici nous apprenons comment utiliser des connaissances de base en formatage pour produire le résultat de la manière souhaitée. Voyons quelques exemples pour apprendre à formater la sortie.

    a = 5
    b = 0.63
    c = "hello"
    print "a est : %d, b est %0.4f, c est %s" % (a,b,c)

La sortie doit être explicite.

