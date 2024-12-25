### What is CSV?
CSV розшифровується як 'Comma Separated Values' (значення, розділені комами). Формат CSV є найпоширенішим форматом для імпорту та експорту даних з баз даних і електронних таблиць. Файл CSV — це простий текстовий файл, що містить список даних. Вони зазвичай використовують символ коми (,) для розділення даних, але іноді використовують інші символи, наприклад, крапку з комою або табуляцію.

Приклад даних CSV:

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### CSV module in Python
Хоча Python має вбудовану функцію open() для роботи з файлами CSV або будь-якими іншими текстовими файлами, існує спеціальний модуль csv, який реалізує класи для читання та запису даних у форматі csv, що полегшує роботу з файлами CSV.

### CSV module important functions

    csv.field_size_limit – повертає максимальний розмір поля
    csv.get_dialect – отримати діалект, що асоціюється з ім'ям
    csv.list_dialects – показати всі зареєстровані діалекти
    csv.reader – читати дані з файлу csv
    csv.register_dialect - прив'язати діалект до імені
    csv.writer – записувати дані у файл csv
    csv.unregister_dialect - видалити діалект із реєстру діалектів, який асоціюється з ім'ям
    csv.QUOTE_ALL - Цитувати все, незалежно від типу.
    csv.QUOTE_MINIMAL - Цитувати поля зі спеціальними символами
    csv.QUOTE_NONNUMERIC - Цитувати всі поля, які не є числовими значеннями
    csv.QUOTE_NONE – Не цитувати нічого у вихідних даних

### How do you use csv module?
спочатку імпортуйте модуль csv у вашу програму Python.

    import csv

функції writer і reader дозволяють редагувати, змінювати та трансформувати дані у файлі CSV.

Як читати файл CSV :-

Щоб зчитати дані з файлів CSV, ми використовуємо функцію reader для створення об'єкта зчитувача.

Наприклад:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Тут ми спочатку відкриваємо файл CSV у режимі READ і називаємо об'єкт файлу як csvfile. Ми використовуємо контекстний менеджер, щоб відкрити файл, тому нам не потрібно турбуватись про закриття файлу. Функція csv.reader приймає об'єкт файлу як вхідні дані та повертає об'єкт-ітератор. Ми зберігаємо об'єкт-ітератор як csvreader.

Як ми знаємо, csvreader є об'єктом-ітератором, тому ми можемо ітерувати його, використовуючи цикл for:

приклад 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Цей код виведе усі рядки, які ми зчитуємо з файлу csv. Зверніть увагу, що ми відкриваємо файл у режимі 'r', коли він вже існує.

Що далі?

csvreader є об'єктом-ітератором. Отже, метод .next() повертає поточний рядок і пересуває ітератор до наступного рядка.

приклад 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

У прикладі 1 ви побачите всі рядки, надруковані на консолі разом із заголовком. У прикладі 2, метод .next() читає заголовок в об'єкт fields і пересуває ітератор до наступного рядка, тому всі рядки друкуються, окрім заголовка.

Як записати у файл CSV-

Щоб записати у файл csv, модуль csv надає функцію csv.writer. Щоб записати дані, ми спочатку відкриваємо файл CSV у режимі WRITE ('w'). Об'єкт файлу називається csvfile. Ми зберігаємо об'єкт csv.writer як csvwriter.

Приклад:
    #оголосити заголовок
    fields = ['column1','column2', 'column3']

    #оголосити рядки
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

У наведеному вище прикладі функція writerow() запише один рядок, яким є об'єкт fields, тоді як метод writerows() запише цілий список рядків, визначений вище, у файл CSV.

Тепер давайте перейдемо на крок уперед. Читайте вміст одного файлу csv і записуйте в інший файл csv.

Приклад:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # зберегти заголовки і пересунути вказівник reader
            csvwriter.writerow(header) #записати заголовок у новий файл
            for row in reader:
                csvwriter.writerow(row)

Тут ми відкриваємо 'newfilename.csv' у режимі 'W' як f2 і відкриваємо 'mycsvfile.csv' у режимі 'r' як f1. Ми використовуємо функції .next(), .reader(), .writer(), .writerow() модуля csv. Використовуючи .next(), ми пересуваємо вказівник reader, а використовуючи csvwriter.writerow(), ми записуємо вхідний рядок один раз.

### DictReader and DictWriter classes in Python

нижче наведені два важливі класи в Python для читання та запису файлів csv.

csv.Dictwriter class
csv.DictReader class

Класи DictReader і DictWriter є в Python для читання та запису у CSV. Хоча вони схожі на функції reader і writer, ці класи використовують словники для читання та запису у файли csv.

DictReader:

Він створює об'єкт, який відображає прочитану інформацію в словник, чиї ключі надаються параметром fieldnames. Цей параметр є необов'язковим, але якщо він не вказаний у файлі, то перший рядок даних стає ключами словника.

Приклад csv(info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

Приклад:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

Клас csv.DictWriter працює як звичайний writer, але відображає словники Python у рядки CSV. Параметр fieldnames є послідовністю ключів, які визначають порядок, в якому значення зі словника, переданого методу writerow(), записуються у файл CSV. Клас визначається як csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Приклад:

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

У цій вправі ви будете працювати з даними CSV. Ваше завдання — створити програму на Python, яка зчитує дані з файлу CSV та записує їх в інший файл CSV, переконавшись, що лише рядки, в яких значення у першому стовпці більше за 50, включені у вихідний файл.