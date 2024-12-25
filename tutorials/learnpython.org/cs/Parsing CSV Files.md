### Co je CSV?

CSV znamená "Comma Separated Values", čili hodnoty oddělené čárkou. Formát CSV je nejběžnější formát pro import a export dat z databází a tabulkových procesorů. Soubor CSV je jednoduchý textový soubor, který obsahuje seznam dat. K oddělení dat nejčastěji používají znak čárky (,), ale někdy používají i jiné znaky, například středníky nebo tabulátory.

Ukázka dat CSV:

...
název sloupce 1,název sloupce 2,název sloupce 3
první řádek data 1,první řádek data 2,první řádek data 3
druhý řádek data 1,druhý řádek data 2,druhý řádek data 3
...

### Modul CSV v Pythonu

I když má Python vestavěnou funkci open() pro práci se soubory CSV nebo jakýmikoliv jinými textovými soubory, existuje speciální modul csv, který implementuje třídy pro čtení a zápis dat ve formátu csv, což usnadňuje práci se soubory CSV.

### Důležité funkce modulu CSV

    csv.field_size_limit – vrátí maximální velikost pole
    csv.get_dialect – získá dialekt, který je spojený se jménem
    csv.list_dialects – zobrazí všechny registrované dialekty
    csv.reader – čte data ze souboru csv
    csv.register_dialect - přiřadí dialekt ke jménu
    csv.writer – zapisuje data do souboru csv
    csv.unregister_dialect - smaže dialekt spojený se jménem z registru dialektů
    csv.QUOTE_ALL - Cituje vše, bez ohledu na typ.
    csv.QUOTE_MINIMAL - Cituje pole se speciálními znaky
    csv.QUOTE_NONNUMERIC - Cituje všechna pole, která nejsou číselná
    csv.QUOTE_NONE – Nečasuje nic ve výstupu

### Jak používat modul csv?

Nejdříve do svého python programu importujte modul csv.

    import csv

Funkce writer a reader vám umožňují upravovat, modifikovat a transformovat data v souboru CSV.

Jak číst soubor CSV:-

Pro čtení dat ze souborů CSV používáme funkci reader pro generování objektu reader.

Příklad:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Zde nejprve otevřeme CSV soubor v režimu ČTENÍ a pojmenujeme objekt souboru jako csvfile. Používáme správce kontextu k otevření souboru, abychom se nemuseli starat o uzavírání souboru. Funkce csv.reader přijme objekt souboru jako vstup a vrátí iterovatelný objekt. Tento iterovatelný objekt uložíme jako csvreader.

Jak víme, csvreader je iterovatelný objekt, a proto můžeme iterovat pomocí cyklu for:

příklad 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Výše uvedený kód vytiskne všechny řádky, které přečteme ze souboru csv. Všimněte si prosím, že otevíráme soubor s 'r' režimem, když již existuje.

Co dál?

csvreader je iterovatelný objekt. Proto metoda .next() vrátí aktuální řádek a posune ukazatel na další řádek.

příklad 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

V příkladu 1 by se na konzoli vytiskly všechny řádky, včetně záhlaví. V příkladu 2, metoda .next() přečte záhlaví do objektu fields a posune ukazatel na další řádek, a proto se všechny řádky vytisknou kromě záhlaví.


Jak zapisovat do souboru CSV-

Pro zápis do souboru CSV poskytuje modul csv funkci csv.writer. Pro zápis dat nejprve otevíráme CSV soubor v režimu ZÁPISU ('w'). Objekt souboru je pojmenován jako csvfile. Uložíme objekt csv.writer jako csvwriter.

Příklad:
    #deklarovat záhlaví
    fields = ['sloupec1', 'sloupec2', 'sloupec3']

    #deklarovat řádky
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "zaznamy_univerzity.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

V uvedeném příkladě, funkce writerow() zapíše jeden řádek, což je objekt fields, zatímco metoda writerows() zapíše celý seznam řádků definovaných výše do souboru csv.

Nyní pojďme o krok dál. Přečtěte obsah jednoho souboru csv a zapište jej do jiného souboru csv.

Příklad:

    with open('novynazev.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # uložit záhlaví a posunout čtecí ukazatel
            csvwriter.writerow(header) #zapíše záhlaví do nového souboru
            for row in reader:
                csvwriter.writerow(row)

Zde otevíráme 'novynazev.csv' v režimu 'W' jako f2 a otevíráme 'mycsvfile.csv' v režimu 'r' jako f1. Využíváme funkcí .next(), .reader(), .writer(), .writerow() z modulu csv. Pomocí .next() posouváme čtecí ukazatel a pomocí csvwriter.writerow() zapisujeme přicházející řádky vždy po jednom.

### Třídy DictReader a DictWriter v Pythonu

Níže jsou dvě důležité třídy v Pythonu pro čtení a zápis souborů CSV.

třída csv.Dictwriter
třída csv.DictReader

DictReader a DictWriter jsou třídy dostupné v Pythonu pro čtení a zápis do CSV. I když se podobají funkcím reader a writer, tyto třídy používají objekty slovníků pro čtení a zápis do souborů csv.

DictReader:

Vytváří objekt, který mapuje informace přečtené do slovníku, jehož klíče jsou určeny parametrem fieldnames. Tento parametr je volitelný, ale pokud není ve souboru specifikován, první řádek dat se stává klíči slovníku.

Příklad csv(info.csv)

.....
jméno, příjmení
foo, bar
foo1, bar1
.....

Příklad:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

Třída csv.DictWriter funguje jako běžný writer, ale mapuje Python slovníky do řádků CSV. Parametr fieldnames je sekvence klíčů, které určují pořadí, ve kterém hodnoty ve slovníku předané metodě writerow() jsou zapsány do souboru CSV. Třída je definována jako csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Příklad:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Cvičení
--------

V tomto cvičení budete pracovat s daty CSV. Vaším úkolem je vytvořit Python program, který přečte data ze souboru CSV a zapíše je do jiného souboru CSV, přičemž zajistí, že budou zahrnuty pouze ty řádky, kde hodnota v prvním sloupci je větší než 50.