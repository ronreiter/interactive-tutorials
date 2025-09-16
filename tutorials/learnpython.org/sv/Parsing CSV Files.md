### Vad är CSV?
CSV står för 'Comma Separated Values'. CSV-formatet är det vanligaste import- och exportformatet för databaser och kalkylblad. En CSV-fil är en enkel textfil som innehåller en lista med data. De använder mestadels kommatecknet (,) för att avgränsa data, men ibland används andra tecken, till exempel semikolon eller tabulatorer.

Exempel på CSV-data:

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### CSV-modul i Python
Medan Python har den inbyggda open()-funktionen för att arbeta med CSV-filer eller andra vanliga textfiler, finns det en dedikerad csv-modul som implementerar klasser för att läsa och skriva data i csv-format, vilket gör arbetet med CSV-filer mycket enklare.

### Viktiga funktioner i CSV-modulen

    csv.field_size_limit – returnera maximal fältstorlek
    csv.get_dialect – hämta dialekten som är associerad med namnet
    csv.list_dialects – visa alla registrerade dialekter
    csv.reader – läs data från en csv-fil
    csv.register_dialect - associera dialekt med namn
    csv.writer – skriv data till en csv-fil
    csv.unregister_dialect - ta bort dialekten associerad med namnet i dialektregistret
    csv.QUOTE_ALL - Citera allt, oavsett typ.
    csv.QUOTE_MINIMAL - Citera endast fält med specialtecken.
    csv.QUOTE_NONNUMERIC - Citera alla fält som inte är numeriska värden
    csv.QUOTE_NONE – Citera inget i utdata

### Hur använder man csv-modulen?
först importera csv-modulen i ditt python-program.

    import csv

writer och reader-funktionerna låter dig redigera, modifiera och transformera data i en CSV-fil.

Hur man läser en CSV-fil:-

För att läsa data från CSV-filer använder vi reader-funktionen för att generera ett reader-objekt.

Till exempel:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Här öppnar vi först CSV-filen i LÄSNINGSMODUS och namnger filobjektet som csvfile. Vi använder context manager för att öppna filen så att vi inte behöver oroa oss för att stänga filen. csv.reader-funktionen tar filobjekt som indata och returnerar ett itererbart objekt. Vi sparar det itererbara objektet som csvreader.

Som vi vet är csvreader ett itererbart objekt och vi kan därför iterera med hjälp av for-loop:

exempel 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Ovanstående kod skriver ut alla rader vi läser från csv-fil. Observera att vi öppnar filen med 'r'-läge när den redan finns.

Vad är nästa steg?

csvreader är ett itererbart objekt. Därför returnerar .next()-metoden den aktuella raden och flyttar iteratorn till nästa rad.

exempel 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

I exempel 1 skulle du se alla rader utskrivna på konsolen tillsammans med rubrik. I exempel 2 läser .next() metoden in rubriken i fields-objektet och flyttar iteratorn till nästa rad och därför skrivs alla rader ut förutom rubriken.

Hur man skriver i en CSV-fil-

För att skriva i en csv-fil tillhandahåller csv-modulen csv.writer-funktionen. För att skriva data öppnar vi först CSV-filen i SKRIVMODUS ('w'). Filobjektet heter csvfile. Vi sparar csv.writer-objektet som csvwriter.

Exempel:
    #deklarera rubrik
    fields = ['column1','column2', 'column3']

    #deklarera rader
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

I ovanstående exempel kommer writerow()-funktionen skriva en enskild rad som är fields-objekt medan writerows()-metoden kommer att skriva hela listan av rader som definierats ovan i CSV-filen.

Låt oss nu ta ett steg längre. Läs innehållet i en csv-fil och skriv till en annan csv-fil.

Exempel:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # lagra rubrikerna och förflytta reader-pekaren
            csvwriter.writerow(header) #skriver rubriken i den nya filen
            for row in reader:
                csvwriter.writerow(row)

Här öppnar vi 'newfilename.csv' i läge 'W' som f2 och öppnar 'mycsvfile.csv' i läge 'r' som f1. Vi använder .next(), .reader(), .writer(), .writerow() funktionerna i csv-modulen. Med hjälp av .next() förflyttar vi reader-pekaren och med csvwriter.writerow() skriver vi inkommmande rad en i taget.

### DictReader och DictWriter klasser i Python

Nedan finns två viktiga klasser i python för att läsa och skriva csv-filer.

csv.DictWriter klass
csv.DictReader klass

DictReader och DictWriter är klasser som finns i Python för att läsa och skriva till CSV. Även om de liknar reader- och writer-funktionerna, använder dessa klasser ordboksobjekt för att läsa och skriva till csv-filer.

DictReader:

Det skapar ett objekt som kartlägger informationen läst till en ordbok vars nycklar ges av parameterfältens parameter. Denna parameter är valfri, men när den inte specificeras i filen blir de första radens data nycklar i ordboken.

Exempel csv(info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

Exempel:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

csv.DictWriter-klassen fungerar som en vanlig writer men mappar Python-ordböcker till CSV-rader. Fieldnames-parametern är en sekvens av nycklar som identifierar ordningen i vilken värden i ordboken som överförs till writerow()-metoden skrivs till CSV-filen. Klassen definieras som csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Exempel:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Övning
--------

I denna övning kommer du att arbeta med CSV-data. Din uppgift är att skapa ett Python-program som läser data från en CSV-fil och skriver det till en annan CSV-fil, säkerställ att endast rader där värdet i den första kolumnen är större än 50 inkluderas i utdatafilen.