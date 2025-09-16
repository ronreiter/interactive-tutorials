### What is CSV?
CSV sta per 'Comma Separated Values'. Il formato CSV è il formato di importazione ed esportazione più comune per database e fogli di calcolo. Un file CSV è un semplice file di testo che contiene un elenco di dati. Usano principalmente il carattere virgola (,) per delimitare i dati, ma a volte usano altri caratteri come punti e virgola o tabulazioni.

Sample CSV data:

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### CSV module in Python
Mentre Python ha la funzione built-in open() per lavorare con file CSV o qualsiasi altro file di testo semplice, esiste un modulo csv dedicato che implementa classi per leggere e scrivere dati in formato csv, rendendo il lavoro con i file CSV molto più semplice.

### CSV module important functions

    csv.field_size_limit – restituisce la dimensione massima del campo
    csv.get_dialect – ottiene il dialetto associato al nome
    csv.list_dialects – mostra tutti i dialetti registrati
    csv.reader – legge i dati da un file csv
    csv.register_dialect - associa un dialetto al nome
    csv.writer – scrive dati su un file csv
    csv.unregister_dialect - elimina il dialetto associato al nome nel registro dei dialetti
    csv.QUOTE_ALL - Cita tutto, indipendentemente dal tipo.
    csv.QUOTE_MINIMAL - Cita campi con caratteri speciali
    csv.QUOTE_NONNUMERIC - Cita tutti i campi che non sono valori numerici
    csv.QUOTE_NONE – Non citare nulla nell'output

### How do you use csv module?
prima importa il modulo csv nel tuo programma python.

    import csv

Le funzioni writer e reader ti consentono di modificare, trasformare e manipolare i dati in un file CSV.

How to Read a CSV File :-

Per leggere dati da file CSV, usiamo la funzione reader per generare un oggetto reader.

Per esempio:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Qui, apriamo prima il file CSV in modalità LETTURA e nominiamo l'oggetto file come csvfile. Usiamo un gestore di contesto per aprire il file in modo da non doverci preoccupare di chiudere il file. La funzione csv.reader accetta come input l'oggetto file e restituisce un oggetto iterabile. Salviamo l'oggetto iterabile come csvreader.

Come sappiamo, csvreader è un oggetto iterabile e quindi possiamo iterare usando un ciclo for:

example 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Il codice sopra stamperà tutte le righe che leggiamo dal file csv. Si noti che apriamo il file con la modalità 'r' quando esiste già.

What's next?

csvreader è un oggetto iterabile. Pertanto, il metodo .next() restituisce la riga corrente e avanza l'iteratore alla riga successiva.

example 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

Nel esempio 1, vedresti tutte le righe stampate sulla console, inclusa l'intestazione. Nel esempio 2, il metodo .next() legge l'intestazione nell'oggetto fields e avanza l'iteratore alla riga successiva e quindi tutte le righe sono stampate eccetto l'intestazione.

How to write in a CSV File-

Per scrivere in un file csv, il modulo csv fornisce la funzione csv.writer. Per scrivere dati, apriamo prima il file CSV in modalità SCRITTURA ('w'). L'oggetto file è nominato come csvfile. Salviamo l'oggetto csv.writer come csvwriter.

Example:
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

Nell'esempio sopra, la funzione writerow() scriverà una singola riga che è l'oggetto fields, mentre il metodo writerows() scriverà l'intera lista di righe definite sopra nel file csv.

Passiamo ora a un passo avanti. Leggi il contenuto di un file csv e scrivi in un altro file csv.

Example:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # memorizza le intestazioni e avanza il puntatore del lettore
            csvwriter.writerow(header) # scrive l'intestazione nel nuovo file
            for row in reader:
                csvwriter.writerow(row)

Qui, stiamo aprendo 'newfilename.csv' in modalità 'W' come f2 e aprendo 'mycsvfile.csv' in modalità 'r' come f1. Stiamo usando le funzioni .next(), .reader(), .writer(), .writerow() del modulo csv. Usando .next(), stiamo avanzando il puntatore del lettore e usando csvwriter.writerow() stiamo scrivendo la riga in arrivo una alla volta.

### DictReader and DictWriter classes in Python

di seguito sono riportate due classi importanti in python per leggere e scrivere file csv.

csv.Dictwriter class
csv.DictReader class

Le classi DictReader e DictWriter sono disponibili in Python per leggere e scrivere su CSV. Sebbene siano simili alle funzioni reader e writer, queste classi utilizzano oggetti dizionario per leggere e scrivere nei file CSV.

DictReader:

Crea un oggetto che mappa le informazioni lette in un dizionario le cui chiavi sono fornite dal parametro fieldnames. Questo parametro è facoltativo, ma quando non è specificato nel file, i dati della prima riga diventano le chiavi del dizionario.

Example csv(info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

Example:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

La classe csv.DictWriter funziona come un normale writer ma mappa i dizionari Python in righe CSV. Il parametro fieldnames è una sequenza di chiavi che identificano l'ordine in cui i valori nel dizionario passato al metodo writerow() sono scritti nel file CSV. La classe è definita come csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Example:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Exercise
--------

In questo esercizio, lavorerai con dati CSV. Il tuo compito è creare un programma Python che legga i dati da un file CSV e li scriva in un altro file CSV, assicurandoti che solo le righe in cui il valore nella prima colonna è maggiore di 50 siano incluse nel file di output.