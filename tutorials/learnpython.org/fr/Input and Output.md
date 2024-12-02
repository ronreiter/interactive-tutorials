Tutorial
--------

Prendre des entrées et afficher les sorties de manière requise joue un rôle important dans le codage interactif. Concentrons-nous donc sur les entrées et sorties de divers types de données.

###raw_input()
Ceci est utilisé pour prendre une entrée aussi longtemps qu'elle atteint la fin de la ligne. Notez qu'il ne doit pas y avoir d'espaces. La prise d'entrée se termine par un caractère de nouvelle ligne et s'il y a des espaces dans la ligne d'entrée, cela entraîne une erreur.

    # Affiche l'entrée reçue de stdin
    astring=raw_input()# donner 'hello' comme entrée
    print raw_input()

Après avoir pris l'entrée, nous pouvons les convertir au type de données requis en utilisant des fonctions comme int(), float(), str().

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
Ceci est spécialement utilisé pour entrer des entiers. L'avantage de input() sur raw_input() peut être clarifié par l'exemple suivant :

    # donner 2*2 comme entrée
    a=input()
    b=raw_input() # notez que int(raw_input()) entraîne une erreur
    print a # imprime 4
    print b # imprime 2*2

###Comment prendre deux ou plusieurs types de données en entrée à partir d'une seule ligne séparée par des espaces ?
Ici, nous utilisons les fonctions split() et map().

    # donner deux entiers dans la première ligne et plus de deux entiers dans la troisième ligne
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # imprime les deux premiers entiers de la première ligne et la somme des entiers de la deuxième ligne

###Mise en forme de la sortie
Vous avez peut-être déjà remarqué que l'instruction print insère automatiquement une nouvelle ligne. L'utilisation de la virgule comme dans le code ci-dessus imprime les valeurs dans une seule ligne séparée par un espace. Le module sys fournit diverses fonctions pour la mise en forme de la sortie, mais nous apprenons ici à utiliser les connaissances de base pour formater la sortie de la manière requise. Voyons quelques exemples pour apprendre la mise en forme des sorties.

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

La sortie doit être auto-explicative.