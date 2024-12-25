### Hva er CSV?

CSV står for 'Comma Separated Values'. CSV-formatet er det vanligste import- og eksportformatet for databaser og regneark. En CSV-fil er en enkel tekstfil som inneholder en liste med data. De bruker vanligvis komma (,) for å skille data, men noen ganger brukes andre tegn, f.eks. semikolon eller tabulatorer.

Eksempel CSV data:

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### CSV-modul i Python

Selv om Python har den innebygde open()-funksjonen for å arbeide med CSV-filer eller andre enkle tekstfiler, finnes det en dedikert csv-modul som implementerer klasser for å lese og skrive data i CSV-formatet, noe som gjør arbeidet med CSV-filer mye enklere.

### Viktige funksjoner i CSV-modul

- returnerer maksimal feltstørrelse
- henter dialekten som er assosiert med navnet
- viser alle registrerte dialekter
- leser data fra en CSV-fil
- assosierer dialekt med navn
- skriver data til en CSV-fil
- sletter dialekten som er assosiert med navnet i dialektregisteret
- siterer alt, uavhengig av type
- siterer felt med spesialtegn
- siterer alle felt som ikke er tallverdier
- siterer ingenting i utdata

### Hvordan bruker du csv-modulen?

først importerer du csv-modulen i Python-programmet ditt.

writer- og reader-funksjoner lar deg redigere, endre og transformere data i en CSV-fil.

Hvordan lese en CSV-fil:

For å lese data fra CSV-filer bruker vi reader-funksjonen for å generere et reader-objekt.

For eksempel:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Her åpner vi først CSV-filen i LES-modus og kaller filobjektet csvfile. Vi bruker kontekstbehandling for å åpne filen slik at vi ikke trenger å bekymre oss for å lukke den. csv.reader-funksjonen tar et filobjekt som input og returnerer et iterabelt objekt. Vi lagrer det itererbare objektet som csvreader.

Som vi vet, er csvreader et iterabelt objekt, og derfor kan vi iterere ved hjelp av en for-løkke:

eksempel 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Koden ovenfor vil skrive ut alle radene vi leser fra CSV-filen. Vær oppmerksom på at vi åpner filen med 'r'-modus når den allerede eksisterer.

Hva er det neste?

csvreader er et iterabelt objekt. Derfor returnerer next() metoden gjeldende rad og flytter iteratoren til neste rad.

eksempel 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

I eksempel 1 vil du se alle radene skrevet ut på konsollen sammen med headeren. I eksempel 2 leser next() metoden headeren i fields-objektet og avanserer iteratoren til neste rad, og derfor blir alle radene skrevet ut unntatt headeren.

Hvordan skrive i en CSV-fil:

For å skrive i en CSV-fil, gir csv-modulen csv.writer-funksjonen. For å skrive data åpner vi først CSV-filen i SKRIVE-modus ('w'). Filobjektet kalles csvfile. Vi lagrer csv.writer-objektet som csvwriter.

Eksempel:
```python
# deklarer header
fields = ['column1','column2', 'column3']

# deklarer rader
rows = [["foo", "bar", "spam"],
       ["oof", "rab", "maps"],
       ["writerow", "isn't", "writerows"]]

filename = "university_records.csv"

with open(filename, 'w') as csvfile:
    csvwriter = csv.writer(csvfile)
    csvwriter.writerow(fields)
    csvwriter.writerows(rows)
```

I eksempelet ovenfor vil writerow() funksjonen skrive en enkelt rad som er fields-objekt, mens writerows() metoden vil skrive hele listen over rader definert ovenfor i CSV-filen.

La oss nå gå et steg videre. Les innholdet av en CSV-fil og skriv det inn i en annen CSV-fil.

Eksempel:
```python
with open('newfilename.csv', 'w') as f2:
    with open('mycsvfile.csv', mode='r') as f1:
        reader = csv.reader(f1)
        csvwriter = csv.writer(f2)
        header = next(reader)  # lagre headerne og avanser leserpeker
        csvwriter.writerow(header) # skriver headeren i den nye filen
        for row in reader:
            csvwriter.writerow(row)
```

Her åpner vi 'newfilename.csv' i 'W' modus som f2 og åpner 'mycsvfile.csv' i 'r' modus som f1. Vi bruker next(), reader(), writer(), writerow() funksjoner fra csv-modulen. Ved å bruke next() flytter vi leserpeker, og ved å bruke csvwriter.writerow() skriver vi innkommende rad én om gangen.

### DictReader og DictWriter klasser i Python

Nedenfor er to viktige klasser i Python for å lese og skrive CSV-filer. 

- csv.DictWriter klasse
- csv.DictReader klasse

DictReader og DictWriter er klasser tilgjengelig i Python for å lese og skrive til CSV. Selv om de ligner på reader og writer funksjonene, bruker disse klassene ordbok-objekter for å lese og skrive til CSV-filer.

DictReader:

Den oppretter et objekt som kartlegger informasjonen som leses inn i en ordbok med nøkler gitt av fieldnames parameteren. Denne parameteren er valgfri, men når den ikke er spesifisert i filen, blir den første radens data nøklene i ordboken.

Eksempel CSV (info.csv):
```csv
firstname, lastname
foo, bar
foo1, bar1
```

Eksempel:
```python
import csv
with open('info.csv') as csvfile:
    reader = csv.DictReader(csvfile)
    for row in reader:
        print(row['firstname'], row['lastname'])
```

DictWriter:

csv.DictWriter-klassen fungerer som en vanlig writer, men kartlegger Pythons ordbøker til CSV-rader. Fieldnames parameteren er en sekvens av nøkler som identifiserer rekkefølgen som verdier i ordboken som sendes til writerow() metoden skrives i CSV-filen. Klassen er definert som csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Eksempel:
```python
import csv
f = open('info.csv', 'w')
with f:
    
    fnames = ['firstname', 'lastname']
    writer = csv.DictWriter(f, fieldnames=fnames)    

    writer.writeheader()
    writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
    writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
    writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})
```

Exercise
--------

I denne oppgaven skal du arbeide med CSV-data. Din oppgave er å lage et Python-program som leser data fra en CSV-fil og skriver det til en annen CSV-fil, og sørger for at bare rader der verdien i den første kolonnen er større enn 50 blir inkludert i utdatafilen.