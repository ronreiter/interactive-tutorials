### Что такое CSV?
CSV расшифровывается как 'значения, разделенные запятыми'. Формат CSV является наиболее распространенным форматом импорта и экспорта для баз данных и таблиц. CSV файл представляет собой простой текстовый файл, содержащий список данных. Чаще всего используют символ запятой (,) для разделения данных, но иногда используют и другие символы, например, точку с запятой или табуляцию.

Пример данных CSV:

...
название столбца 1, название столбца 2, название столбца 3
данные первой строки 1, данные первой строки 2, данные первой строки 3
данные второй строки 1, данные второй строки 2, данные второй строки 3
...

### Модуль CSV в Python
Хотя в Python есть встроенная функция open() для работы с CSV файлами или любыми другими текстовыми файлами, существует также специальный модуль csv, который реализует классы для чтения и записи данных в формате CSV, что значительно упрощает работу с CSV файлами.

### Важные функции модуля CSV

    csv.field_size_limit – возвращает максимальный размер поля
    csv.get_dialect – получить диалект, связанный с именем
    csv.list_dialects – показать все зарегистрированные диалекты
    csv.reader – читать данные из CSV файла
    csv.register_dialect - связать диалект с именем
    csv.writer – записывать данные в CSV файл
    csv.unregister_dialect - удалить диалект, связанный с именем в реестре диалектов
    csv.QUOTE_ALL - заключать все в кавычки, независимо от типа.
    csv.QUOTE_MINIMAL - заключать в кавычки поля с особыми символами
    csv.QUOTE_NONNUMERIC - заключать в кавычки все поля, которые не являются числовыми значениями
    csv.QUOTE_NONE – ничего не заключать в кавычки в выводе

### Как использовать модуль csv?
сначала импортируйте модуль csv в вашу программу на Python.

    import csv

Функции writer и reader позволяют редактировать, изменять и преобразовывать данные в CSV файле.

Как читать CSV файл :-

Для чтения данных из CSV файлов мы используем функцию reader, чтобы создать объект reader.

Например:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Здесь мы сначала открываем CSV файл в режиме ЧТЕНИЯ и называем объект файла csvfile. Мы используем менеджер контекста для открытия файла, чтобы не беспокоиться о закрытии файла. Функция csv.reader принимает объект файла в качестве входных данных и возвращает итерируемый объект. Мы сохраняем этот итерируемый объект как csvreader.

Как мы знаем, csvreader является итерируемым объектом, и поэтому мы можем итерироваться с помощью цикла for:

пример 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Код выше выведет все строки, которые мы прочитали из csv файла. Обратите внимание, что мы открываем файл с режимом 'r', когда он уже существует.

Что дальше?

cvreader является итерируемым объектом. Следовательно, метод .next() возвращает текущую строку и перемещает итератор на следующую строку.

пример 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

В примере 1 вы увидите все строки, напечатанные на консоли вместе с заголовком. В примере 2 метод .next() считывает заголовок в объект fields и перемещает итератор на следующую строку, и, следовательно, все строки печатаются, кроме заголовка.

Как записывать в CSV файл-

Для записи в csv файл модуль csv предоставляет функцию csv.writer. Чтобы записывать данные, мы сначала открываем CSV файл в режиме ЗАПИСИ ('w'). Объект файла называется csvfile. Мы сохраняем объект csv.writer как csvwriter.

Пример:
    #объявить заголовок
    fields = ['column1','column2', 'column3']

    #объявить строки
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

В приведенном выше примере функция writerow() запишет одну строку, которая является объектом fields, в то время как метод writerows() запишет весь список строк, определенных выше, в csv файл.

Теперь давайте сделаем шаг вперед. Прочитаем содержимое одного csv файла и запишем в другой csv файл.

Пример:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # сохранить заголовок и продвинуть указатель reader
            csvwriter.writerow(header) #записать заголовок в новый файл
            for row in reader:
                csvwriter.writerow(row)

Здесь мы открываем 'newfilename.csv' в режиме 'W' как f2 и открываем 'mycsvfile.csv' в режиме 'r' как f1. Мы используем функции .next(), .reader(), .writer(), .writerow() модуля csv. С помощью .next() мы продвигаем указатель reader, а с помощью csvwriter.writerow() записываем поступающую строку одну за другой.

### Классы DictReader и DictWriter в Python

ниже приведены два важных класса в python для чтения и записи csv файлов.

csv.Dictwriter class
csv.DictReader class

Классы DictReader и DictWriter доступны в Python для чтения и записи в CSV. Хотя они похожи на функции reader и writer, эти классы используют объекты словарей для чтения и записи в CSV файлы.

DictReader:

Создает объект, который отображает информацию, прочитанную в словарь, ключи которого заданы параметром fieldnames. Этот параметр является необязательным, но если он не указан в файле, данные первой строки становятся ключами словаря.

Пример csv (info.csv)

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

Класс csv.DictWriter работает как обычный writer, но отображает словари Python в CSV строки. Параметр fieldnames представляет собой последовательность ключей, которые определяют порядок, в котором значения в словаре, переданном методу writerow(), записываются в CSV файл. Класс определяется как csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

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

В этом упражнении вы будете работать с данными CSV. Ваша задача – создать программу на Python, которая считывает данные из CSV файла и записывает их в другой CSV файл, гарантируя, что в выходной файл включены только строки, где значение в первом столбце больше 50.