### Hvad er CSV?
CSV står for 'Comma Separated Values'. CSV-formatet er det mest almindelige import- og eksportformat til databaser og regneark. En CSV-fil er en simpel tekstfil, der indeholder en liste af data. De bruger for det meste komma (,) tegnet for at adskille data, men nogle gange anvendes andre tegn såsom semikolon eller tabs.

Eksempel på CSV-data:

...
kolonne 1 navn, kolonne 2 navn, kolonne 3 navn
første række data 1, første række data 2, første række data 3
anden række data 1, anden række data 2, anden række data 3
...

### CSV-modul i Python
Mens Python har den indbyggede open() funktion til at arbejde med CSV-filer eller andre almindelige tekstfiler, er der et dedikeret csv-modul, der implementerer klasser til at læse og skrive data i CSV-format, hvilket gør arbejdet med CSV-filer meget lettere.

### CSV-modul vigtige funktioner

    csv.field_size_limit – returnerer maksimal feltstørrelse
    csv.get_dialect – få dialekten, der er associeret med navnet
    csv.list_dialects – vis alle registrerede dialekter
    csv.reader – læs data fra en CSV-fil
    csv.register_dialect - associerer dialekt med navn
    csv.writer – skriv data til en CSV-fil
    csv.unregister_dialect - slet dialekten, der er associeret med navnet i dialektregistret
    csv.QUOTE_ALL - Sæt alt i anførselstegn, uanset type.
    csv.QUOTE_MINIMAL - Sæt felter med specialtegn i anførselstegn
    csv.QUOTE_NONNUMERIC - Sæt alle felter, der ikke er talværdi, i anførselstegn
    csv.QUOTE_NONE – Sæt intet i anførselstegn i output

### Hvordan bruger du csv-modul?
først importeres csv-modulet i dit python-program.

    import csv

writer- og reader-funktionerne giver dig mulighed for at redigere, ændre og transformere dataene i en CSV-fil.

Hvordan læses en CSV-fil:-

For at læse data fra CSV-filer bruger vi reader-funktionen til at generere et reader-objekt.

For eksempel:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Her åbner vi først CSV-filen i LÆS-tilstand og navngiver filobjektet som csvfile. Vi bruger kontekststyring til at åbne filen, så vi ikke skal bekymre os om at lukke filen. csv.reader-funktionen tager filobjektet som input og returnerer et iterabelt objekt. Vi gemmer det itererbare objekt som csvreader.

Som vi ved, er csvreader et iterabelt objekt, og derfor kan vi iterere ved hjælp af for-løkke:

eksempel 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Ovenstående kode vil udskrive alle rækker, vi læser fra CSV-filen. Bemærk venligst, at vi åbner filen med 'r' tilstand, når den allerede eksisterer.

Hvad er det næste?

cvreader er et iterabelt objekt. Derfor, .next() metoden returnerer den aktuelle række og avancerer iteratoren til næste række.

eksempel 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

I eksempel 1 vil du se alle rækker udskrevet på konsollen sammen med header. I eksempel 2 læser .next() metoden headeren i fields-objektet og avancerer iteratoren til næste række, og derfor udskrives alle rækker undtagen headeren.


Hvordan skrives i en CSV-fil-

For at skrive i en CSV-fil tilbyder csv-modulet csv.writer-funktionen. For at skrive data åbner vi først CSV-filen i SKRIV-tilstand('w'). Filobjektet navngives som csvfile. Vi gemmer csv.writer-objektet som csvwriter.

Eksempel:
    #deklarer header
    fields = ['kolonne1', 'kolonne2', 'kolonne3']

    #deklarer rækker
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "universitets_optegnelser.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

I ovenstående eksempel vil writerow() funktionen skrive en enkelt række, som er fields-objektet, mens writerows() metoden vil skrive hele listen af rækker, der er defineret ovenfor, ind i CSV-filen.

Lad os nu gå et skridt videre. Læs indhold af én CSV-fil og skriv det til en anden CSV-fil.

Eksempel:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # gemmer headere og avancerer reader-peger
            csvwriter.writerow(header) #skriver headeren til ny fil
            for row in reader:
                csvwriter.writerow(row)

Her åbner vi 'newfilename.csv' i 'W' tilstand som f2 og åbner 'mycsvfile.csv' i 'r' tilstand som f1. Vi bruger funktionerne .next(), .reader(), .writer(), .writerow() i csv-modulet. Ved brug af .next() avancerer vi reader-pegeren og ved brug af csvwriter.writerow() skriver vi indkommende række én ad gangen.

### DictReader og DictWriter klasser i Python

Herunder er to vigtige klasser i python til at læse og skrive CSV-filer.

csv.Dictwriter klasse
csv.DictReader klasse

DictReader og DictWriter er klasser tilgængelige i Python til at læse og skrive til CSV. Selvom de er lignende de reader- og writer-funktioner, bruger disse klasser ordbogsobjekter til at læse og skrive til CSV-filer.

DictReader:

Den skaber et objekt, der kortlægger den læste information til en ordbog, hvis nøgler gives af fieldnames-parameteren. Denne parameter er valgfri, men når den ikke er angivet i filen, bliver den første række af data nøglerne i ordbogen.

Eksempel CSV(info.csv)

.....
fornavn, efternavn
foo, bar
foo1, bar1
.....

Eksempel:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['fornavn'], row['efternavn'])

DictWriter:

csv.DictWriter-klassen fungerer som en almindelig writer, men kortlægger Python-ordbøger til CSV-rækker. Fieldnames-parameteren er en sekvens af nøgler, der identificerer rækkefølgen, hvori værdierne i ordbogen, der sendes til writerow()-metoden, skrives til CSV-filen. Klassen er defineret som csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Eksempel:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['fornavn', 'efternavn']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'fornavn' : 'Rob', 'efternavn': 'Scott'})
            writer.writerow({'fornavn' : 'Tom', 'efternavn': 'Brown'})
            writer.writerow({'fornavn' : 'Henry', 'efternavn': 'Smith'})


Øvelse
--------

I denne øvelse vil du arbejde med CSV-data. Din opgave er at skabe et Python-program, der læser data fra en CSV-fil og skriver det til en anden CSV-fil, og sikrer, at kun rækker, hvor værdien i den første kolonne er større end 50, inkluderes i output-filen.