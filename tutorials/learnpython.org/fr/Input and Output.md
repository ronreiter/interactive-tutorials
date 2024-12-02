Tutorial
--------

Prendre des entrées et afficher les résultats de manière requise joue un rôle important dans le codage interactif. Concentrons-nous donc sur les entrées et les sorties de divers types de données.

###raw_input()
Cela est utilisé pour prendre des entrées tant qu'il n'atteint pas la fin de la ligne. Notez qu'il ne devrait pas y avoir d'espaces. La saisie se termine par un caractère de nouvelle ligne et s'il y a des espaces dans la ligne de saisie, cela entraîne une erreur.

    # Affiche la saisie reçue depuis stdin
    astring=raw_input()# donnez hello comme entrée
    print raw_input()

après avoir pris l'entrée, nous pouvons les convertir dans notre type de données requis en utilisant des fonctions comme int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
Cela est spécialement utilisé pour entrer des entiers. L'avantage de input() sur raw_input() peut être clarifié avec l'exemple suivant :

    #donnez 2*2 comme entrée
    a=input()
    b=raw_input() #notez que int(raw_input()) entraîne une erreur
    print a #affiche 4
    print b #affiche 2*2

###Comment prendre deux ou plusieurs types de données en entrée depuis une seule ligne séparée par des espaces ?
Ici, nous utilisons les fonctions split() et map()

    #donnez deux entiers dans la première ligne et plus de deux entiers dans la troisième ligne
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # affiche les deux premiers entiers de la première ligne et la somme des entiers de la deuxième ligne

###Formatage de la sortie
Vous avez peut-être déjà remarqué que l'instruction print insère automatiquement une nouvelle ligne. L'utilisation de la virgule comme dans le code ci-dessus affiche les valeurs sur une seule ligne séparées par un espace. Le module sys fournit diverses fonctions pour le formatage de la sortie, mais ici nous apprenons à utiliser les connaissances de base du formatage pour obtenir les sorties de notre manière requise. Voyons quelques exemples pour apprendre le formatage des sorties.

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

La sortie doit être explicative par elle-même.