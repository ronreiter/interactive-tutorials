Tutoriel
--------

### Qu'est-ce qu'un CSV ?
CSV signifie 'Comma Separated Values', en français 'valeurs séparées par des virgules'. Le format CSV est le format d'importation et d'exportation le plus courant pour les bases de données et les feuilles de calcul. Un fichier CSV est un simple fichier texte qui contient une liste de données. Ils utilisent principalement le caractère virgule (,) pour délimiter les données, mais utilisent parfois d'autres caractères, comme point-virgule ou tabulation.

Exemple de données CSV :

...
nom de colonne 1, nom de colonne 2, nom de colonne 3
données première ligne 1, données première ligne 2, données première ligne 3
données deuxième ligne 1, données deuxième ligne 2, données deuxième ligne 3
...

### Module CSV en Python
Bien que Python dispose de la fonction intégrée `open()` pour travailler avec les fichiers CSV ou tout autre fichier texte brut, il existe un module csv dédié qui implémente des classes pour lire et écrire des données au format csv, ce qui rend le travail avec les fichiers CSV beaucoup plus facile.

### Fonctions importantes du module CSV

    csv.field_size_limit – renvoie la taille maximale du champ
    csv.get_dialect – obtient le dialecte associé au nom
    csv.list_dialects – affiche tous les dialectes enregistrés
    csv.reader – lit les données d'un fichier csv
    csv.register_dialect - associe le dialecte au nom
    csv.writer – écrit des données dans un fichier csv
    csv.unregister_dialect - supprime le dialecte associé au nom du registre de dialectes
    csv.QUOTE_ALL - Cite tout, quel que soit le type.
    csv.QUOTE_MINIMAL - Cite les champs avec des caractères spéciaux
    csv.QUOTE_NONNUMERIC - Cite tous les champs qui ne sont pas des valeurs numériques
    csv.QUOTE_NONE – Ne rien citer dans la sortie

### Comment utiliser le module csv ?
Commencez par importer le module csv dans votre programme Python.

    import csv

Les fonctions d'écriture et de lecture vous permettent d'éditer, de modifier et de transformer les données dans un fichier CSV.

Comment lire un fichier CSV :-

Pour lire les données depuis des fichiers CSV, nous utilisons la fonction reader pour générer un objet lecteur.

Par exemple :

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Ici, nous ouvrons d'abord le fichier CSV en mode LECTURE et nommons l'objet fichier csvfile. Nous utilisons le gestionnaire de contexte pour ouvrir le fichier afin de ne pas avoir à nous soucier de le fermer. La fonction csv.reader prend l'objet fichier en entrée et renvoie un objet itérable. Nous enregistrons l'objet itérable en tant que csvreader.

Comme nous le savons, csvreader est un objet itérable et donc nous pouvons parcourir avec une boucle for :

exemple 1 :

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Le code ci-dessus imprimera toutes les lignes lues depuis le fichier csv. Veuillez noter que nous ouvrons le fichier avec le mode 'r' lorsqu'il existe déjà.

Quelles sont les étapes suivantes ?

csvreader est un objet itérable. Par conséquent, la méthode .next() renvoie la ligne actuelle et fait avancer l'itérateur à la ligne suivante.

exemple 2 :

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next() 
        for row in csvreader:
            print(row)

Dans l'exemple 1, vous verrez toutes les lignes imprimées sur la console avec l'en-tête. Dans l'exemple 2, la méthode .next() lit l'en-tête dans l'objet fields et avance l'itérateur à la ligne suivante, donc toutes les lignes sont imprimées sauf l'en-tête.

Comment écrire dans un fichier CSV -

Pour écrire dans un fichier CSV, le module csv fournit la fonction csv.writer. Pour écrire des données, nous ouvrons d'abord le fichier CSV en mode ÉCRITURE ('w'). L'objet fichier est nommé csvfile. Nous enregistrons l'objet csv.writer en tant que csvwriter.

Exemple :
    #declare header
    fields = ['column1','column2', 'column3']

    #declare rows
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

Dans l'exemple ci-dessus, la fonction writerow() écrira une seule ligne qui est l'objet fields alors que la méthode writerows() écrira l'ensemble de la liste de lignes définies ci-dessus dans le fichier csv.

Passons maintenant à l'étape suivante. Lire le contenu d'un fichier csv et écrire dans un autre fichier csv.

Exemple :

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # store the headers and advance reader pointer
            csvwriter.writerow(header) #writes the header into new file
            for row in reader:
                csvwriter.writerow(row)

Ici, nous ouvrons 'newfilename.csv' en mode 'W' comme f2 et nous ouvrons 'mycsvfile.csv' en mode 'r' comme f1. Nous utilisons les fonctions .next(), .reader(), .writer(), .writerow() du module csv. En utilisant .next(), nous faisons avancer le pointeur du lecteur et en utilisant csvwriter.writerow(), nous écrivons la ligne entrante une à une.

### Classes DictReader et DictWriter en Python

ci-dessous deux classes importantes en python pour lire et écrire des fichiers csv.

csv.Dictwriter class
csv.DictReader class

DictReader et DictWriter sont des classes disponibles en Python pour la lecture et l'écriture dans des CSV. Bien qu'elles soient similaires aux fonctions reader et writer, ces classes utilisent des objets dictionnaires pour lire et écrire dans des fichiers csv.

DictReader :

Cela crée un objet qui mappe les informations lues dans un dictionnaire dont les clés sont données par le paramètre fieldnames. Ce paramètre est optionnel, mais lorsqu'il n'est pas spécifié dans le fichier, les données de la première ligne deviennent les clés du dictionnaire.

Exemple csv(info.csv)

.....
firstname, lastname
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

La classe csv.DictWriter fonctionne comme un rédacteur régulier mais mappe les dictionnaires Python en lignes CSV. Le paramètre fieldnames est une séquence de clés qui identifient l'ordre dans lequel les valeurs du dictionnaire passé à la méthode writerow() sont écrites dans le fichier CSV. La classe est définie comme csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

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

