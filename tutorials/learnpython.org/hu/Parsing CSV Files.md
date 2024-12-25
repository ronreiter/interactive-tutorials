### Mi az a CSV?

A CSV a 'Vesszővel Elválasztott Értékek' rövidítése. A CSV formátum a legelterjedtebb importálási és exportálási formátum adatbázisok és táblázatok számára. A CSV fájl egy egyszerű szöveges fájl, amely adatlistát tartalmaz. Legtöbbször vessző karaktert (,) használnak az adatok elválasztására, de néha más karaktereket, például pontosvesszőket vagy tabulátorokat is.

Minta CSV adatok:

...
oszlop 1 neve,oszlop 2 neve, oszlop 3 neve
első sor adatai 1,első sor adatai 2,első sor adatai 3
második sor adatai 1,második sor adatai 2,második sor adatai 3
...

### CSV modul Pythonban

Míg Pythonban az open() beépített függvény használható CSV fájlokkal vagy bármilyen egyszerű szöveges fájlokkal való munkára, van egy dedikált csv modul, amely osztályokat valósít meg az adatok csv formátumban történő olvasására és írására, megkönnyítve a CSV fájlokkal való munkát.

### CSV modul fontos függvényei

    csv.field_size_limit – visszaadja a maximális mezőméretet
    csv.get_dialect – megkapja a dialektust, ami a névhez társított
    csv.list_dialects – megjeleníti az összes regisztrált dialektust
    csv.reader – adatot olvas egy csv fájlból
    csv.register_dialect - társítja a dialektust a névhez
    csv.writer – adatot ír egy csv fájlba
    csv.unregister_dialect - törli a névhez társított dialektust a dialektus regiszterből
    csv.QUOTE_ALL - Mindent idézőjelbe téve, függetlenül a típustól
    csv.QUOTE_MINIMAL - Különleges karaktereket tartalmazó mezőket idézőjelbe
    csv.QUOTE_NONNUMERIC - Minden nem számszerű értéket idézőjelbe tenni
    csv.QUOTE_NONE – Semmit sem idézőjelez a kimenetben

### Hogyan használjuk a csv modult?

Először importáljuk a csv modult a Python programban.

    import csv

Az író és olvasó függvények lehetővé teszik az adatok szerkesztését, módosítását és átalakítását egy CSV fájlban.

Hogyan olvassunk CSV fájlt:-

Az adatok olvasásához CSV fájlokból az olvasó függvényt használjuk, hogy egy olvasó objektumot hozzunk létre.

Például:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Itt először megnyitjuk a CSV fájlt OLVASÁS módban, és az objektum nevét csvfile-nak nevezzük el. Használjuk a kontextuskezelőt a fájl megnyitásához, hogy ne kelljen aggódnunk a fájl bezárása miatt. A csv.reader függvény fájlobjektumot használ bemenetként, és egy iterálható objektumot ad vissza. Az iterálható objektumot csvreader néven mentjük el.

Mint tudjuk, a csvreader egy iterálható objektum, ezért használhatjuk a for ciklusban való iterálásra:

1. példa:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

A fenti kód kinyomtatja az összes sort, amit a csv fájlból olvasunk. Kérjük, vegye figyelembe, hogy a fájlt 'r' móddal nyitjuk meg, amikor az már létezik.

Mi a következő lépés?

A cvreader egy iterálható objektum. Ezért a .next() metódus visszaadja az aktuális sort, és az iterátor a következő sorra lép tovább.

2. példa:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

Az 1. példában látni fogod, hogy minden sor kinyomtatásra kerül a konzolon a fejléc mellett. A 2. példában a .next() metódus a fejlécet olvassa a fields objektumba, és az iterátor a következő sorra lép tovább, így minden sor kinyomtatásra kerül a fejléc kivételével.

Hogyan írjunk CSV fájlba-

CSV fájlba történő íráshoz a csv modul csv.writer függvényt biztosít. Az adatok írásához először megnyitjuk a CSV fájlt ÍRÁS módban ('w'). A fájl objektum neve csvfile lesz. A csv.writer objektumot csvwriter néven mentjük el.

Példa:
    #fejléc megadása
    fields = ['column1','column2', 'column3']

    #sorok megadása
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

A fenti példában a writerow() függvény egyetlen sort ír, amely a fields objektum, míg a writerows() metódus a fent megadott sorok teljes listáját írja a csv fájlba.

Most lépjünk egy lépéssel tovább. Olvassuk el az egyik csv fájl tartalmát, és írjuk át egy másik csv fájlba.

Példa:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # tároljuk a fejlécet, és léptetjük az olvasót
            csvwriter.writerow(header) #fejléc írása az új fájlba
            for row in reader:
                csvwriter.writerow(row)

Itt megnyitjuk a 'newfilename.csv' fájlt 'W' módban, mint f2, és a 'mycsvfile.csv' fájlt 'r' módban, mint f1. A csv modul .next(), .reader(), .writer(), .writerow() függvényeit használjuk. A .next() használatával léptetjük az olvasó mutatóját, és a csvwriter.writerow() függvénnyel egyenként írjuk az érkező sorokat.

### DictReader és DictWriter osztályok Pythonban

Az alábbiakban két fontos osztály található Pythonban CSV fájlok olvasására és írására.

csv.Dictwriter osztály
csv.DictReader osztály

A DictReader és DictWriter osztályok elérhetők Pythonban a CSV-be való olvasáshoz és íráshoz. Bár hasonlóak az olvasó és író függvényekhez, ezek az osztályok szótárobjektumokat használnak a csv fájlokhoz való olvasásra és írásra.

DictReader:

Létrehoz egy objektumot, amely a beolvasott adatokat egy szótárba térképezi, amelynek kulcsait a fieldnames paraméter adja meg. Ez a paraméter opcionális, de ha nincs megadva a fájlban, akkor az első sor adatai a szótár kulcsai lesznek.

Példa csv(info.csv)

.....
keresztnév, vezetéknév
foo, bar
foo1, bar1
.....

Példa:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

A csv.DictWriter osztály úgy működik, mint egy normál író, de a Python szótárait térképezi csv sorokba. A fieldnames paraméter a kulcsok sorozata, amely az értékek megadásának sorrendjét határozza meg a writerow() metódushoz továbbított szótárban, és így írja a CSV fájlba. Az osztályt így definiáljuk: csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Példa:

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

Ebben a gyakorlatban a CSV adatokkal fogsz dolgozni. A feladatod egy Python program készítése, amely beolvas egy CSV fájlt, és adatokat ír egy másik CSV fájlba, biztosítva, hogy csak azok a sorok kerüljenek a kimeneti fájlba, amelyekben az első oszlop értéke nagyobb, mint 50.