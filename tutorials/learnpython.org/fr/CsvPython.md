Tutorial
--------

### Qu'est-ce que CSV ?
CSV signifie 'Comma Separated Values' ou valeurs séparées par des virgules. Le format CSV est le format d'importation et d'exportation le plus courant pour les bases de données et les feuilles de calcul. Un fichier CSV est un simple fichier texte contenant une liste de données. Ils utilisent principalement le caractère virgule (,) pour délimiter les données, mais parfois, ils utilisent d'autres caractères, comme des points-virgules ou des tabulations.

Exemple de données CSV :

...
nom de la colonne 1, nom de la colonne 2, nom de la colonne 3
données de la première ligne 1, données de la première ligne 2, données de la première ligne 3
données de la deuxième ligne 1, données de la deuxième ligne 2, données de la deuxième ligne 3
...

### Module CSV en Python
Bien que Python ait la fonction open() intégrée pour travailler avec des fichiers CSV ou tout autre fichier texte brut, il existe un module csv dédié qui implémente des classes pour lire et écrire des données au format csv, ce qui rend le travail avec les fichiers CSV beaucoup plus facile.

### Fonctions importantes du module CSV

    csv.field_size_limit – renvoie la taille maximale du champ
    csv.get_dialect – obtient le dialecte qui est associé au nom
    csv.list_dialects – affiche tous les dialectes enregistrés
    csv.reader – lit les données d'un fichier csv
    csv.register_dialect - associe un dialecte avec un nom
    csv.writer – écrit les données dans un fichier csv
    csv.unregister_dialect - supprime le dialecte associé au nom du registre de dialecte
    csv.QUOTE_ALL - Citer tout, quel que soit le type.
    csv.QUOTE_MINIMAL - Citer les champs avec des caractères spéciaux
    csv.QUOTE_NONNUMERIC - Citer tous les champs qui ne sont pas des valeurs numériques
    csv.QUOTE_NONE – Ne rien citer dans la sortie

### Comment utiliser le module csv ?
D'abord, importez le module csv dans votre programme Python.

    import csv

Les fonctions writer et reader vous permettent d'éditer, modifier et transformer les données dans un fichier CSV.

Comment lire un fichier CSV :

Pour lire des données à partir de fichiers CSV, nous utilisons la fonction reader pour générer un objet reader.

Par exemple :

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Ici, nous ouvrons d'abord le fichier CSV en mode LECTURE et nommons l'objet fichier csvfile. Nous utilisons un gestionnaire de contexte pour ouvrir le fichier afin de ne pas avoir à nous soucier de la fermeture du fichier. La fonction csv.reader prend l'objet fichier en entrée et renvoie un objet itérable. Nous enregistrons l'objet itérable en tant que csvreader.

Comme nous le savons, csvreader est un objet itérable et nous pouvons donc itérer en utilisant une boucle for :

exemple 1 :

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Le code ci-dessus affichera toutes les lignes que nous lisons à partir du fichier csv. Veuillez noter que nous ouvrons le fichier en mode 'r' lorsqu'il existe déjà.

Qu'est-ce qui vient ensuite ?

cvreader est un objet itérable. Ainsi, la méthode .next() renvoie la ligne en cours et fait avancer l'itérateur à la ligne suivante.

exemple 2 :

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

Dans l'exemple 1, vous verrez toutes les lignes imprimées sur la console avec l'en-tête. Dans l'exemple 2, la méthode .next() lit l'en-tête dans l'objet fields et avance l'itérateur à la ligne suivante, et par conséquent, toutes les lignes sont imprimées sauf l'en-tête.


Comment écrire dans un fichier CSV -

Pour écrire dans un fichier csv, le module csv fournit la fonction csv.writer. Pour écrire des données, nous ouvrons d'abord le fichier CSV en mode ÉCRITURE ('w'). L'objet fichier est nommé csvfile. Nous enregistrons l'objet csv.writer en tant que csvwriter.

Exemple :
    #déclarer l'en-tête
    fields = ['colonne1', 'colonne2', 'colonne3']

    #déclarer les lignes
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "n'est pas", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

Dans l'exemple ci-dessus, la fonction writerow() écrira une seule ligne qui est l'objet fields, tandis que la méthode writerows() écrira dans le fichier csv la liste entière des lignes définies ci-dessus.

Passons maintenant à une étape supérieure. Lisez le contenu d'un fichier csv et écrivez-le dans un autre fichier csv.

Exemple :

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # stocke les en-têtes et fait avancer le pointeur reader
            csvwriter.writerow(header) #écrit l'en-tête dans le nouveau fichier
            for row in reader:
                csvwriter.writerow(row)

Ici, nous ouvrons 'newfilename.csv' en mode 'W' sous f2 et nous ouvrons 'mycsvfile.csv' en mode 'r' sous f1. Nous utilisons les fonctions .next(), .reader(), .writer(), .writerow() du module csv. Avec .next(), nous faisons avancer le pointeur reader et avec csvwriter.writerow(), nous écrivons chaque ligne à la fois.

### Classes DictReader et DictWriter en Python

Voici deux classes importantes en python pour lire et écrire des fichiers csv.

Classe csv.Dictwriter
Classe csv.DictReader

Les DictReader et DictWriter sont des classes disponibles en Python pour lire et écrire des fichiers CSV. Bien qu'elles soient similaires aux fonctions reader et writer, ces classes utilisent des objets dictionnaires pour lire et écrire dans des fichiers csv.

DictReader :

Il crée un objet qui mappe les informations lues dans un dictionnaire dont les clés sont données par le paramètre fieldnames. Ce paramètre est optionnel, mais lorsqu'il n'est pas spécifié dans le fichier, les données de la première ligne deviennent les clés du dictionnaire.

Exemple csv(info.csv)

.....
prénom, nom de famille
foo, bar
foo1, bar1
.....

Exemple :

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter :

La classe csv.DictWriter fonctionne comme un writer ordinaire mais mappe les dictionnaires Python dans des lignes CSV. Le paramètre fieldnames est une séquence de clés qui identifie l'ordre dans lequel les valeurs du dictionnaire passées à la méthode writerow() sont écrites dans le fichier CSV. La classe est définie comme csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Exemple :

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})



