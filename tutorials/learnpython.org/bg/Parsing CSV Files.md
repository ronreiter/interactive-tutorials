### Какво е CSV?
CSV означава 'Comma Separated Values'. CSV форматът е най-често използваният формат за импортиране и експортиране на данни в бази данни и електронни таблици. CSV файлът е прост текстов файл, който съдържа списък с данни. Обикновено използват запетая (,) за разделяне на данните, но понякога се използват и други символи като точка и запетая или табулация.

Пример за CSV данни:

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### CSV модул в Python
Въпреки че Python има вградена функция open() за работа с CSV файлове или други текстови файлове, съществува специализиран модул csv, който имплементира класове за четене и писане на данни в CSV формат, което прави работата с CSV файлове много по-лесна.

### Важни функции на CSV модула

    csv.field_size_limit – връща максималния размер на поле
    csv.get_dialect – получава диалекта, който е свързан с името
    csv.list_dialects – показва всички регистрирани диалекти
    csv.reader – чете данни от CSV файл
    csv.register_dialect - свързва диалект с име
    csv.writer – записва данни в CSV файл
    csv.unregister_dialect - изтрива диалекта, свързан с името в регистъра на диалекти
    csv.QUOTE_ALL - Поставя кавички на всичко, независимо от типа.
    csv.QUOTE_MINIMAL - Поставя кавички на полета със специални символи
    csv.QUOTE_NONNUMERIC - Поставя кавички на всички полета, които не са числови стойности
    csv.QUOTE_NONE – Не поставя кавички на нищо във изхода

### Как да използвате CSV модула?
Първо трябва да импортирате модула csv във вашата Python програма.

    import csv

Функции writer и reader ви позволяват да редактирате, модифицирате и трансформирате данните в CSV файл.

Как да прочетете CSV файл :-

За да четете данни от CSV файлове използваме функцията reader, за да генерираме обект за четене.

Пример:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Тук, първо отваряме CSV файла в режим на четене (READ) и именуваме обекта на файла като csvfile. Използваме контекстен мениджър, за да отворим файла, така че да не се налага да се тревожим за затварянето му. Функцията csv.reader приема обекта на файла като вход и връща итерируем обект. Съхраняваме итерируемия обект като csvreader.

Както знаем, csvreader е итерируем обект и затова можем да използваме цикъл for, за да го обходим:

пример 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Кодът по-горе ще отпечата всички редове, които четем от CSV файла. Имайте предвид, че отваряме файла в режим 'r', когато той вече съществува.

Какво следва?

csvreader е итерируем обект. Затова, методът .next() връща текущия ред и придвижва итератора към следващия ред.

пример 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

В пример 1 ще видите всички редове, отпечатани на конзолата заедно със заглавието. В пример 2, методът .next() прочита заглавието в обекта fields и придвижва итератора към следващия ред, и затова всички редове се отпечатват без заглавието.

Как да пишете в CSV файл-

За да пишете в CSV файл, модулът csv предоставя функцията csv.writer. За да запишем данни, първо отваряме CSV файла в режим на запис ('w'). Обектът на файла се именува като csvfile. Съхраняваме обекта csv.writer като csvwriter.

Пример:
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

В горния пример, функцията writerow() ще запише един ред, който е обектът fields, докато методът writerows() ще запише целия списък с редове, дефиниран по-горе, в CSV файла.

Сега нека да направим още една стъпка напред. Прочетете съдържанието на един CSV файл и запишете в друг CSV файл.

Пример:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # store the headers and advance reader pointer
            csvwriter.writerow(header) #writes the header into new file
            for row in reader:
                csvwriter.writerow(row)

Тук отваряме 'newfilename.csv' в режим 'W' като f2 и отваряме 'mycsvfile.csv' в режим 'r' като f1. Използваме функциите .next(), .reader(), .writer(), .writerow() на модула csv. Чрез .next() преместваме указателя на четеца и чрез csvwriter.writerow записваме входящия ред един по един.

### Класове DictReader и DictWriter в Python

По-долу са дадени два важни класа в Python за четене и писане на CSV файлове.

csv.DictWriter клас
csv.DictReader клас

Класовете DictReader и DictWriter са налични в Python за четене и писане в CSV. Въпреки че са подобни на функциите reader и writer, тези класове използват обекти речници за четене и писане в CSV файлове.

DictReader:

Той създава обект, който картографира прочетената информация в речник, чиито ключове се задават чрез параметъра fieldnames. Този параметър е незадължителен, но когато не е посочен във файла, данните от първия ред стават ключовете на речника.

Пример за CSV (info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

Пример:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

Класът csv.DictWriter работи като обикновен writer, но картографира речници на Python в CSV редове. Параметърът fieldnames е последователност от ключове, които определят реда, в който стойностите в речника, предадени на метода writerow(), се записват в CSV файла. Класът е дефиниран като csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Пример:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Упражнение
--------

В това упражнение ще работите с CSV данни. Вашата задача е да създадете програма на Python, която чете данни от CSV файл и ги записва в друг CSV файл, като се уверите, че само редовете, където стойността в първата колона е по-голяма от 50, са включени в изходния файл.