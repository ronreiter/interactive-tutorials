### Ce este CSV?
CSV înseamnă 'Comma Separated Values' (valori separate prin virgulă). Formatul CSV este cel mai comun format de import și export pentru baze de date și tabele de calcul. Un fișier CSV este un fișier text simplu care conține o listă de date. Folosesc în principal caracterul virgulă (,) pentru a delimita datele, dar uneori folosesc și alte caractere, cum ar fi punct și virgulă sau taburi.

Exemplu de date CSV:

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### Modulul CSV în Python
Deși Python are funcția încorporată open() pentru a lucra cu fișiere CSV sau orice alt fișier text simplu, există un modul csv dedicat care implementează clase pentru a citi și scrie date în format csv, ceea ce face lucrul cu fișierele CSV mult mai ușor.

### Funcții importante ale modulului CSV

    csv.field_size_limit – returnează dimensiunea maximă a câmpului
    csv.get_dialect – obține dialectul asociat cu numele
    csv.list_dialects – afișează toate dialectele înregistrate
    csv.reader – citește date dintr-un fișier csv
    csv.register_dialect - asociază dialectul cu un nume
    csv.writer – scrie date într-un fișier csv
    csv.unregister_dialect - șterge dialectul asociat cu numele din registrul dialectelor
    csv.QUOTE_ALL - Cotă totul, indiferent de tip.
    csv.QUOTE_MINIMAL - Cotă câmpuri cu caractere speciale
    csv.QUOTE_NONNUMERIC - Cotă toate câmpurile care nu sunt valori numerice
    csv.QUOTE_NONE – Nu cota nimic în ieșire

### Cum se utilizează modulul csv?
mai întâi importă modulul csv în programul tău Python.

    import csv

Funcțiile writer și reader îți permit să editezi, modifici și transformi datele într-un fișier CSV.

Cum să citești un fișier CSV :-

Pentru a citi datele din fișierele CSV, folosim funcția reader pentru a genera un obiect reader.

De exemplu:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Aici, deschidem mai întâi fișierul CSV în modul READ și numim obiectul fișier csvfile. Folosim managerul de context pentru a deschide fișierul, astfel încât să nu trebuiască să ne facem griji cu privire la închiderea fișierului. Funcția csv.reader primește obiectul fișier ca intrare și returnează un obiect iterabil. Salvăm obiectul iterabil ca csvreader.

Așa cum știm, csvreader este un obiect iterabil și, prin urmare, putem itera folosind for loop:

exemplul 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Codul de mai sus va imprima toate rândurile pe care le citim din fișierul csv. Vă rugăm să notați că deschidem fișierul cu modul 'r' atunci când deja există.

Ce urmează?

csvreader este un obiect iterabil. Prin urmare, metoda .next() returnează rândul curent și avansează iteratorul la următorul rând.

exemplul 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

În exemplul 1, veți vedea toate rândurile imprimate pe consolă împreună cu antetul. În exemplul 2, metoda .next() citește antetul în obiectul fields și avansează iteratorul la rândul următor și, prin urmare, toate rândurile sunt imprimate cu excepția antetului.

Cum să scrii într-un fișier CSV-

Pentru a scrie într-un fișier csv, modulul csv oferă funcția csv.writer. Pentru a scrie date, deschidem mai întâi fișierul CSV în modul WRITE('w'). Obiectul fișierului este numit csvfile. Salvăm obiectul csv.writer ca csvwriter.

Exemplu:
    #declară antetul
    fields = ['column1','column2', 'column3']

    #declară rânduri
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

În exemplul de mai sus, funcția writerow() va scrie un singur rând care este obiectul fields, în timp ce metoda writerows() va scrie întreaga listă de rânduri definită mai sus în fișierul csv.

Acum să facem un pas înainte. Citește conținutul unui fișier csv și scrie-l într-un alt fișier csv.

Exemplu:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # stochează anteturile și avansează pointerul reader
            csvwriter.writerow(header) #scrie antetul în noul fișier
            for row in reader:
                csvwriter.writerow(row)

Aici, deschidem 'newfilename.csv' în modul 'W' ca f2 și deschidem 'mycsvfile.csv' în modul 'r' ca f1. Folosim funcțiile .next(), .reader(),.writer(), .writerow() ale modulului csv. Folosind .next(), avansăm pointerul reader și folosind csvwriter.writerow() scriem rândul care intră unul câte unul.

### Clasele DictReader și DictWriter în Python

mai jos sunt două clase importante în python pentru a citi și scrie fișiere csv.

Clasa csv.Dictwriter
Clasa csv.DictReader

DictReader și DictWriter sunt clase disponibile în Python pentru citirea și scrierea în CSV. Deși sunt similare cu funcțiile reader și writer, aceste clase utilizează obiecte de tip dicționar pentru a citi și a scrie în fișiere csv.

DictReader:

Creează un obiect care mapează informațiile citite într-un dicționar ale cărui chei sunt date de parametrul fieldnames. Acest parametru este opțional, dar atunci când nu este specificat în fișier, datele din primul rând devin cheile dicționarului.

Exemplu csv(info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

Exemplu:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

Clasa csv.DictWriter funcționează ca un writer obișnuit, dar mapează dicționare Python în rânduri CSV. Parametrul fieldnames este o secvență de chei care identifică ordinea în care valorile din dicționar, transmise către metoda writerow(), sunt scrise în fișierul CSV. Clasa este definită ca csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Exemplu:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Exercițiu
--------

În acest exercițiu, veți lucra cu date CSV. Sarcina ta este să creezi un program Python care citește datele dintr-un fișier CSV și le scrie într-un alt fișier CSV, asigurându-te că doar rândurile în care valoarea din prima coloană este mai mare de 50 sunt incluse în fișierul de ieșire.