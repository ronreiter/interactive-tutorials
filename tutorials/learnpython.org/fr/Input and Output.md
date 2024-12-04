Tutorial
--------
Prendre des entrées et afficher des sorties de la manière requise joue un rôle important dans le codage interactif. Concentrons-nous donc sur l'entrée et la sortie de divers types de données.

###raw_input()
cela est utilisé pour prendre l'entrée tant qu'elle atteint la fin de la ligne. Notez qu'il ne doit pas y avoir d'espaces. La prise d'entrée se termine par un caractère de nouvelle ligne et s'il y a des espaces dans la ligne d'entrée, cela entraîne une erreur.

    # Affiche l'entrée reçue de stdin
    astring=raw_input()# entrez hello comme entrée
    print raw_input()

après avoir pris l'entrée, nous pouvons les convertir en notre type de données requis en utilisant des fonctions comme int(), float(), str().

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
cela est particulièrement utilisé pour entrer des entiers. L'avantage de input() par rapport à raw_input() peut être clarifié avec l'exemple suivant.

    #donne 2*2 comme entrée
    a=input()
    b=raw_input() #notez que int(raw_input()) entraîne une erreur
    print a #affiche 4
    print b #affiche 2*2

###comment prendre deux ou plusieurs types de données comme entrée à partir d'une seule ligne séparée par des espaces ?
Ici, nous utilisons les fonctions split() et map().

    #donner deux entiers dans la première ligne et plus de deux entiers dans la troisième ligne
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # affiche les deux premiers entiers de la première ligne et la somme des entiers de la deuxième ligne

###Formatage de la sortie
Vous avez peut-être déjà remarqué que l'instruction print insère automatiquement une nouvelle ligne. L'utilisation de la virgule comme dans le code ci-dessus affiche les valeurs sur une seule ligne séparée par un espace. Le module sys fournit diverses fonctions pour le formatage de la sortie, mais nous apprenons ici à utiliser les connaissances de base en formatage pour obtenir la sortie de la manière requise. Voyons quelques exemples pour apprendre le formatage de la sortie.

    a = 5
    b = 0.63
    c = "hello"
    print "a est : %d, b est %0.4f, c est %s" % (a,b,c)

La sortie doit être explicite.

---

Exercise
--------
Pour cet exercice, pratiquez la prise d'entrée et l'affichage de la sortie. Écrivez un programme qui prend trois valeurs d'entrée : un entier, un flottant et une chaîne. Ensuite, affichez ces valeurs formatées comme suit : "L'entier est : [valeur_entière], le flottant est : [valeur_flottante], la chaîne est : [valeur_chaîne]". Assurez-vous que la valeur flottante est affichée avec deux chiffres après la virgule.