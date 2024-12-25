### Qu'est-ce que le CSV ?
CSV signifie 'Comma Separated Values' (valeurs séparées par des virgules). Le format CSV est le format d'importation et d'exportation le plus courant pour les bases de données et les tableurs. Un fichier CSV est un simple fichier texte qui contient une liste de données. Ils utilisent principalement le caractère virgule (,) pour délimiter les données, mais utilisent parfois d'autres caractères, comme les points-virgules ou les tabulations.

Exemple de données CSV :

...
nom de la colonne 1,nom de la colonne 2, nom de la colonne 3
données première ligne 1,données première ligne 2,données première ligne 3
données deuxième ligne 1,données deuxième ligne 2,données deuxième ligne 3
...

### Module CSV en Python
Bien que Python ait la fonction intégrée open() pour travailler avec des fichiers CSV ou tout autre fichier texte brut, il existe un module csv dédié qui implémente des classes pour lire et écrire des données au format CSV, ce qui rend le travail avec les fichiers CSV beaucoup plus facile.

### Fonctions importantes du module CSV

    csv.field_size_limit – retourne la taille maximum du champ
    csv.get_dialect – obtenir le dialecte associé au nom
    csv.list_dialects – montre tous les dialectes enregistrés
    csv.reader – lire des données depuis un fichier CSV
    csv.register_dialect - associer un dialecte à un nom
    csv.writer – écrire des données dans un fichier CSV
    csv.unregister_dialect - supprimer le dialecte associé au nom dans le registre des dialectes
    csv.QUOTE_ALL - Tout mettre entre guillemets, indépendamment du type
    csv.QUOTE_MINIMAL - Mettre entre guillemets les champs avec des caractères spéciaux
    csv.QUOTE_NONNUMERIC - Mettre entre guillemets tous les champs qui ne sont pas des valeurs numériques
    csv.QUOTE_NONE – Ne rien mettre entre guillemets dans la sortie

### Comment utiliser le module csv ?
Tout d'abord, importez le module csv dans votre programme Python.

    import csv

Les fonctions writer et reader vous permettent d'éditer, de modifier et de transformer les données dans un fichier CSV.

Comment lire un fichier CSV :

Pour lire des données à partir de fichiers CSV, nous utilisons la fonction reader pour générer un objet reader.

Par exemple :

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Ici, nous ouvrons d'abord le fichier CSV en mode LECTURE et nommons l'objet de fichier csvfile. Nous utilisons un gestionnaire de contexte pour ouvrir le fichier afin de ne pas avoir à nous soucier de fermer le fichier. La fonction csv.reader prend l'objet fichier en entrée et renvoie un objet itérable. Nous enregistrons l'objet itérable en tant que csvreader.

Comme nous le savons, csvreader est un objet itérable et nous pouvons donc itérer en utilisant une boucle for :

exemple 1 :

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Le code ci-dessus affichera toutes les lignes que nous lisons depuis le fichier CSV. Veuillez noter que nous ouvrons le fichier avec le mode 'r' lorsqu'il existe déjà.

Et ensuite ?

cvreader est un objet itérable. Par conséquent, la méthode .next() renvoie la ligne actuelle et avance l'itérateur vers la ligne suivante.

exemple 2 :

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

Dans l'exemple 1, vous verriez toutes les lignes imprimées à la console ainsi que l'en-tête. Dans l'exemple 2, la méthode .next() lit l'en-tête dans l'objet fields et avance l'itérateur vers la ligne suivante et donc toutes les lignes sont imprimées sauf l'en-tête.

Comment écrire dans un fichier CSV-

Pour écrire dans un fichier CSV, le module csv fournit la fonction csv.writer. Pour écrire des données, nous ouvrons d'abord le fichier CSV en mode ÉCRITURE ('w'). L'objet fichier est nommé csvfile. Nous enregistrons l'objet csv.writer en tant que csvwriter.

Exemple :
    #déclarer l'en-tête
    fields = ['colonne1','colonne2', 'colonne3']

    #déclarer les lignes
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

Dans l'exemple ci-dessus, la fonction writerow() écrira une seule ligne qui est l'objet fields tandis que la méthode writerows() écrira l'ensemble de la liste de lignes définie ci-dessus dans le fichier CSV.

Passons maintenant à l'étape suivante. Lire le contenu d'un fichier CSV et l'écrire dans un autre fichier CSV.

Exemple :

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # stocke les en-têtes et avance le pointeur du lecteur
            csvwriter.writerow(header) #écrit l'en-tête dans le nouveau fichier
            for row in reader:
                csvwriter.writerow(row)

Ici, nous ouvrons 'newfilename.csv' en mode 'W' sous le nom f2 et ouvrons 'mycsvfile.csv' en mode 'r' sous le nom f1. Nous utilisons les fonctions .next(), .reader(),.writer(), .writerow() du module csv. En utilisant .next(), nous faisons avancer le pointeur du lecteur et en utilisant csvwriter.writerow(), nous écrivons chaque ligne entrante une par une.

### Classes DictReader et DictWriter en Python

ci-dessous, deux classes importantes en python pour lire et écrire des fichiers CSV.

classe csv.Dictwriter
classe csv.DictReader

Les DictReader et DictWriter sont des classes disponibles en Python pour lire et écrire des fichiers CSV. Bien qu'ils soient similaires aux fonctions reader et writer, ces classes utilisent des objets dictionnaires pour lire et écrire des fichiers CSV.

DictReader :

Il crée un objet qui mappe les informations lues dans un dictionnaire dont les clés sont données par le paramètre fieldnames. Ce paramètre est optionnel, mais lorsqu'il n'est pas spécifié dans le fichier, les données de la première ligne deviennent les clés du dictionnaire.

Exemple csv(info.csv)

.....
prenom, nom
foo, bar
foo1, bar1
.....

Exemple :

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['prenom'], row['nom'])

DictWriter :

La classe csv.DictWriter fonctionne comme un writer régulier mais mappe les dictionnaires Python en lignes CSV. Le paramètre fieldnames est une séquence de clés qui identifient l'ordre dans lequel les valeurs du dictionnaire passées à la méthode writerow() sont écrites dans le fichier CSV. La classe est définie comme csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Exemple :

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['prenom', 'nom']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'prenom' : 'Rob', 'nom': 'Scott'})
            writer.writerow({'prenom' : 'Tom', 'nom': 'Brown'})
            writer.writerow({'prenom' : 'Henry', 'nom': 'Smith'})


Exercice
--------

Dans cet exercice, vous travaillerez avec des données CSV. Votre tâche est de créer un programme Python qui lit les données d'un fichier CSV et les écrit dans un autre fichier CSV, en veillant à ce que seules les lignes où la valeur dans la première colonne est supérieure à 50 soient incluses dans le fichier de sortie.