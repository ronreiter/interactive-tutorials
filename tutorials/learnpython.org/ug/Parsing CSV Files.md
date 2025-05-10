Tutorial
--------

### CSV دېگەن نېمە؟
CSV «پەش ئايرىلغان قىممەت» نى كۆرسىتىدۇ. CSV فورماتى ساندان ۋە ئېلېكترونلۇق جەدۋەل ئۈچۈن ئەڭ كۆپ ئۇچرايدىغان ئىمپورت-ئېكىسپورت شەكلى. CSV ھۆججىتى سانلىق مەلۇمات تىزىملىكىنى ئۆز ئىچىگە ئالغان ئاددىي تېكىست ھۆججىتى. ئۇلار كۆپىنچە پەش (،) ھەرپنى ئىشلىتىپ سانلىق مەلۇماتنى ئايرىيدۇ ، ئەمما بەزىدە باشقا ھەرپلەرنى يەنى يېرىم چېكىت ياكى بەتكۈچنى ئىشلىتىدۇ.

CSV سانلىق مەلۇماتلىرى:

...
1-ستون ئىسمى ، 2-ستون ئىسمى ، 3-ستون ئىسمى
بىرىنچى قۇر سانلىق مەلۇمات 1 ، بىرىنچى قۇر سانلىق مەلۇمات 2 ، بىرىنچى قۇر سانلىق مەلۇمات 3
ئىككىنچى قۇر سانلىق مەلۇمات 1 ، ئىككىنچى قۇر سانلىق مەلۇمات 2 ، ئىككىنچى قۇر سانلىق مەلۇمات 3
...

Python دىكى ### CSV مودۇلى
Python نىڭ ئىچىگە CSV ھۆججىتى ياكى باشقا ئاددىي تېكىست ھۆججىتى بىلەن ئىشلەش ئۈچۈن قاچىلانغان ئوچۇق () ئىقتىدارى بولسىمۇ ، ئەمما مەخسۇس csv مودۇلى بار بولۇپ ، دەرسلەرنى csv فورماتىدا ئوقۇش ۋە يېزىش دەرسلىرىنى يولغا قويۇپ ، CSV ھۆججىتى بىلەن ئىشلەشنى تېخىمۇ ئاسانلاشتۇرىدۇ.

### CSV بۆلەك مۇھىم ئىقتىدارلىرى

    csv.field_size_limit – return maximum field size
    csv.get_dialect – get the dialect which is associated with the name
    csv.list_dialects – show all registered dialects
    csv.reader – read data from a csv file
    csv.register_dialect - associate dialect with name
    csv.writer – write data to a csv file
    csv.unregister_dialect - delete the dialect associated with the name the dialect registry
    csv.QUOTE_ALL - Quote everything, regardless of type.
    csv.QUOTE_MINIMAL - Quote fields with special characters
    csv.QUOTE_NONNUMERIC - Quote all fields that aren't numbers value
    csv.QUOTE_NONE – Don't quote anything in output

### csv مودۇلىنى قانداق ئىشلىتىسىز؟
python پروگراممىڭىزدا ئالدى بىلەن csv مودۇلى ئەكىرىڭ.

    import csv

يازغۇچى ۋە ئوقۇرمەنلەرنىڭ ئىقتىدارلىرى CSV ھۆججىتىدىكى سانلىق مەلۇماتلارنى تەھرىرلەش ، ئۆزگەرتىش ۋە ئۆزگەرتىشكە يول قويىدۇ.

CSV ھۆججىتىنى قانداق ئوقۇش: -

CSV ھۆججىتىدىكى سانلىق مەلۇماتلارنى ئوقۇش ئۈچۈن بىز ئوقۇرمەنلەر ئىقتىدارىنى ئىشلىتىپ ئوقۇرمەن ئوبيېكتى ھاسىل قىلىمىز.

مەسىلەن:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

بۇ يەردە ، بىز ئالدى بىلەن ئوقۇش شەكلىدە CSV ھۆججىتىنى ئاچىمىز ھەمدە ھۆججەتنىڭ مەزمۇنىنى csvfile دەپ ئاتايمىز. ھۆججەتنى ئېچىش ئۈچۈن مەزمۇن باشقۇرغۇچىنى ئىشلىتىمىز. csv.reader ئىقتىدارى ھۆججەت ئوبيېكتىنى كىرگۈزۈش شەكلىدە ئېلىپ ، تەكرارلىنىدىغان ئوبيېكتنى قايتۇرىدۇ. تەكرارلىنىدىغان ئوبيېكتنى csvreader قىلىپ ساقلايمىز.

بىلگىنىمىزدەك ، csvreader تەكرارلىنىدىغان ئوبيېكت ، شۇڭلاشقا بىز ئايلانما ئىشلىتىش ئارقىلىق تەكرارلىيالايمىز:

مىسال 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

ئۈستىدىكى كود بىز csv ھۆججىتىدىن ئوقۇغان بارلىق قۇرلارنى بېسىپ چىقىرىدۇ. شۇنىڭغا دىققەت قىلىڭكى ، ھۆججەت مەۋجۇت بولغاندا «r» ھالىتى بىلەن ئاچىمىز.

كېيىنكىسى نېمە؟

cvreader بولسا تەكرارلىنىدىغان ئوبيېكت. شۇڭلاشقا ، .next () ئۇسۇلى نۆۋەتتىكى قۇرنى قايتۇرىدۇ ۋە تەكرارلىغۇچنى كېيىنكى قۇرغا ئىلگىرى سۈرىدۇ.
f
مىسال 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

1-مىسالدا ، بارلىق قۇرلارنىڭ ماۋزۇ بىلەن بىللە كونترول سۇپىسىغا بېسىلغانلىقىنى كۆرىسىز. مەسىلەن ، 2.


CSV ھۆججىتىگە قانداق يېزىش-

Csv ھۆججىتىگە يېزىش ئۈچۈن ، csv مودۇلى csv.writer ئىقتىدارىنى تەمىنلەيدۇ. سانلىق مەلۇمات يېزىش ئۈچۈن ، بىز ئالدى بىلەن CSV ھۆججىتىنى WRITE ھالەتتە ('w') ئاچىمىز. ھۆججەت ئوبيېكتىنىڭ ئىسمى csvfile. بىز csv.writer ئوبيېكتىنى csvwriter قىلىپ ساقلايمىز.

مىسال:
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

يۇقارقى مىسالدا ، يازغۇچى () فۇنكسىيەسى بىر قۇر قۇرنى يېزىپ قويىدۇ ، بۇ بولسا يازغۇچىلار () ئۇسۇلى يۇقىرىدا ئېنىقلانغان قۇرلارنىڭ تىزىملىكىنى csv ھۆججىتىگە يازىدۇ.

ئەمدى بىز بىر قەدەم ئىلگىرىلەيلى. بىر csv ھۆججىتىنىڭ مەزمۇنىنى ئوقۇڭ ۋە باشقا csv ھۆججىتىگە يېزىڭ.

مىسال:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # store the headers and advance reader pointer
            csvwriter.writerow(header) #writes the header into new file
            for row in reader:
                csvwriter.writerow(row)

بۇ يەردە بىز «newfilename.csv» نى «W» شەكلىدە f2 قىلىپ ئېچىۋاتىمىز ، «r» ھالەتتە «mycsvfile.csv» نى f1 قىلىپ ئاچىمىز. بىز csv مودۇلىنىڭ .next () ، .reader () ،. يازغۇچى () ، .writerow () فۇنكسىيەسىنى ئىشلىتىۋاتىمىز. .Next () نى ئىشلىتىپ ، ئوقۇرمەن كۆرسەتكۈچىنى ئىلگىرى سۈرۈۋاتىمىز ۋە csvwriter.writerow () ئارقىلىق بىز بىر قۇر كەلگەن قۇرنى بىر-بىرلەپ يېزىۋاتىمىز.

### Python دىكى DictReader ۋە DictWriter دەرسلىرى

تۆۋەندىكىسى python دىكى csv ھۆججىتىنى ئوقۇش ۋە يېزىشتىكى ئىككى مۇھىم دەرس.

csv.Dictwriter سىنىپى
csv.DictReader سىنىپى

DictReader ۋە DictWriter بولسا Python دا CSV نى ئوقۇش ۋە يېزىش ئۈچۈن ئىشلىتىلىدىغان دەرسلەر. گەرچە ئۇلار ئوقۇرمەن ۋە يازغۇچى فۇنكسىيەسىگە ئوخشايدىغان بولسىمۇ ، بۇ دەرسلەر لۇغەت ئوبيېكتلىرىنى ئىشلىتىپ csv ھۆججىتىنى ئوقۇش ۋە يېزىش ئۈچۈن ئىشلىتىدۇ.

DictReader:

ئۇ ئوقۇلغان ئۇچۇرلارنى لۇغەتكە خەرىتىلەيدىغان ئوبيېكت قۇرىدۇ ، ئۇنىڭ ئاچقۇچلىرى مەيدان ئىسمى پارامېتىرى تەرىپىدىن بېرىلگەن. بۇ پارامېتىر ئىختىيارى بولىدۇ ، ئەمما ھۆججەتتە كۆرسىتىلمىگەندە ، بىرىنچى قۇر سانلىق مەلۇمات لۇغەتنىڭ ئاچقۇچىغا ئايلىنىدۇ.

مىسال csv (info.csv)

.....
فامىلىسى ، فامىلىسى
foo, bar
foo1, bar1
.....

مىسال:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

Csv.DictWriter سىنىپى ئادەتتىكى يازغۇچىغا ئوخشاش مەشغۇلات قىلىدۇ ، ئەمما Python لۇغىتىنى CSV قۇرغا خەرىتىلەيدۇ. مەيدان ئىسمى پارامېتىرى بولسا لۇغەتتىكى قىممەتنىڭ يازغۇچى () ئۇسۇلىغا ئۆتكەن تەرتىپلەرنىڭ CSV ھۆججىتىگە يېزىلىش تەرتىپىنى پەرقلەندۈرىدىغان ئاچقۇچلارنىڭ رەت تەرتىپى. بۇ سىنىپ csv.DictWriter (csvfile ، مەيدان ئىسمى ، restval = '', extrasaction = 'raise', dialect = 'excel', * args, ** kwds) دەپ ئېنىقلىما بېرىلگەن.

مىسال:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


چېنىقىش
--------

بۇ مانېۋىردا سىز CSV سانلىق مەلۇماتلىرى بىلەن ئىشلەيسىز. سىزنىڭ ۋەزىپىڭىز بولسا Python پروگراممىسىنى قۇرۇش بولۇپ ، ئۇ CSV ھۆججىتىدىكى سانلىق مەلۇماتلارنى ئوقۇيدۇ ۋە ئۇنى باشقا CSV ھۆججىتىگە يازىدۇ ، پەقەت بىرىنچى ئىستوندىكى قىممىتى 50 دىن يۇقىرى بولغان قۇرلارنىڭ چىقىرىش ھۆججىتىگە كىرىشىگە كاپالەتلىك قىلىش.

Tutorial Code
-------------

    import csv
    
    # Open the input CSV file
    with open('inputfile.csv', mode='r') as infile:
        reader = csv.reader(infile)
        # Open the output CSV file
        with open('outputfile.csv', mode='w') as outfile:
            writer = csv.writer(outfile)
            # Write header
            header = next(reader)
            writer.writerow(header)
            # Write rows where the value in the first column is greater than 50
            for row in reader:
                if int(row[0]) > 50:  # Assuming the first column contains numeric values
                    writer.writerow(row)

Expected Output
---------------

    Due to the limitations of this IDE, this solution cannot be tested here, as it requires access to external files. However, you should expect that a new file named `outputfile.csv` will be created, and it will contain the same rows as the input file, except only the rows where the first column contains a value greater than 50.

Solution
--------

    import csv
    
    # Open the input CSV file
    with open('inputfile.csv', mode='r') as infile:
        reader = csv.reader(infile)
        # Open the output CSV file
        with open('outputfile.csv', mode='w') as outfile:
            writer = csv.writer(outfile)
            # Write header
            header = next(reader)
            writer.writerow(header)
            # Write rows where the value in the first column is greater than 50
            for row in reader:
                if int(row[0]) > 50:  # Assuming the first column contains numeric values
                    writer.writerow(row)