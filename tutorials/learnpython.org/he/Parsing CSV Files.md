### What is CSV?
CSV הוא ראשי תיבות של 'Comma Separated Values'. פורמט CSV הוא הפורמט היבוא והיצוא הנפוץ ביותר עבור מסדי נתונים וגיליונות אלקטרוניים. קובץ CSV הוא קובץ טקסט פשוט שמכיל רשימת נתונים. לרוב משתמשים בתו הפסיק (,) כדי להפריד בין הנתונים, אך לפעמים משתמשים בתווים אחרים כמו נקודה פסיק או טאבים.

נתוני CSV לדוגמה:

...
 column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### מודול CSV ב-Python
למרות של-Python יש פונקציה מובנית בשם open() לעבודה עם קבצי CSV או כל קובץ טקסט פשוט אחר, קיים מודול ייעודי בשם csv אשר מיישם מחלקות לקריאה וכתיבה של נתונים בפורמט csv, מה שמקל על העבודה עם קבצי CSV.

### פונקציות חשובות במודול CSV

    csv.field_size_limit – מחזירה את הגודל המקסימלי של שדה
    csv.get_dialect – מקבל את הדיאלקט המקושר לשם
    csv.list_dialects – מציג את כל הדיאלקטים הרשומים
    csv.reader – קורא נתונים מקובץ csv
    csv.register_dialect - מקשר דיאלקט לשם
    csv.writer – כותב נתונים לקובץ csv
    csv.unregister_dialect - מוחק את הדיאלקט המקושר לשם רישום הדיאלקטים
    csv.QUOTE_ALL - מצטט הכל, ללא תלות בסוג.
    csv.QUOTE_MINIMAL - מצטט שדות עם תווים מיוחדים
    csv.QUOTE_NONNUMERIC - מצטט את כל השדות שאינם מספרים
    csv.QUOTE_NONE – לא מצטט כלום במוצא

### איך משתמשים במודול csv?
קודם כל ייבא את מודול csv לתוך תוכנית ה-python שלך.

    import csv

עם פונקציות writer ו-reader תוכל לערוך, לשנות ולהמיר את הנתונים בקובץ CSV.

איך לקרוא קובץ CSV :-

כדי לקרוא נתונים מקבצי CSV אנו משתמשים בפונקציה reader ליצירת אובייקט reader.

לדוגמה:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

כאן, אנו פותחים קודם את קובץ ה-CSV במצב קריאה ומציינים את אובייקט הקובץ כ-csvfile. אנו משתמשים במנהל קונטקסט לפתיחת הקובץ כדי שלא נצטרך לדאוג לסגור את הקובץ. פונקציית csv.reader מקבלת את אובייקט הקובץ כקלט ומחזירה אובייקט איטרטיבי. אנו שומרים את האובייקט האיטרטיבי כ-csvreader.

כפי שאנו יודעים, csvreader הוא אובייקט איטרטיבי ולכן אנחנו יכולים לעבור עם לולאת for:

דוגמה 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

הקוד למעלה ידפיס את כל השורות שקראנו מקובץ ה-csv. שים לב שאנו פותחים את הקובץ במצב 'r' כשכבר קיים.

מה הלאה?

csvreader הוא אובייקט איטרטיבי. לכן, שיטת .next() מחזירה את השורה הנוכחית ומקדמת את האיטרטור לשורה הבאה.

דוגמה 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

בדוגמה 1, תראה את כל השורות מודפסות במסוף יחד עם הכותרת. בדוגמה 2, שיטת .next() קוראת את הכותרת לאובייקט fields ומקדמת את האיטרטור לשורה הבאה, ולכן כל השורות מודפסות מלבד הכותרת.

איך לכתוב לקובץ CSV

לכתיבה לקובץ csv, מודול csv מספק את פונקציית csv.writer. לכתיבת נתונים, אנו פותחים תחילה את קובץ ה-CSV במצב כתיבה ('w'). אובייקט הקובץ נקרא csvfile. אנו שומרים את אובייקט csv.writer כ-csvwriter.

דוגמה:
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

בדוגמה שמעל, פונקציית writerow() תכתוב שורה בודדת שהיא אובייקט fields, בעוד ששיטת writerows() תכתוב את כל רשימת השורות שנמצאת למעלה לתוך קובץ ה-csv.

כעת, הבה נתקדם צעד אחד קדימה. קרא תוכן של קובץ csv אחד וכתוב לתוך קובץ csv אחר.

דוגמה:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # store the headers and advance reader pointer
            csvwriter.writerow(header) #writes the header into new file
            for row in reader:
                csvwriter.writerow(row)

כאן, אנו פותחים את 'newfilename.csv' במצב 'W' כ-f2 ואת 'mycsvfile.csv' במצב 'r' כ-f1. אנו עושים שימוש בפונקציות .next(), .reader(), .writer(), .writerow() של מודול csv. בעזרת .next(), אנו מקדמים את מצביע הקריאה ומשתמשים ב-csvwriter.writerow() כדי לכתוב את השורה הנכנסת אחת בכל פעם.

### מחלקות DictReader ו-DictWriter ב-Python

להלן שתי מחלקות חשובות ב-python לקריאה וכתיבה לקבצי csv.

csv.Dictwriter class
csv.DictReader class

ה-DictReader ו-DictWriter הן מחלקות הזמינות ב-Python לקריאה וכתיבה לקבצי CSV. למרות שהן דומות לפונקציות הקריאה והכתיבה, המחלקות האלה משתמשות באובייקטים של מילון לקריאה וכתיבה לקבצי csv.

DictReader:

יוצרת אובייקט שמפה את המידע הנקרא למילון שהמפתחות שלו ניתנים על ידי פרמטר fieldnames. פרמטר זה הוא אופציונלי, אך כשלא מצוין בקובץ, השורה הראשונה של הנתונים הופכת למפתחות של המילון.

דוגמה לקובץ CSV (info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

דוגמה:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

מחלקת csv.DictWriter פועלת כמו כותב רגיל אבל ממפה מילונים ב-Python לשורות CSV. פרמטר fieldnames הוא רצף של מפתחות שמזהים את הסדר שבו הערכים במילון המועבר לפונקציה writerow() נכתבים לקובץ ה-CSV. המחלקה מוגדרת כ-csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

דוגמה:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


תרגיל
--------

בתרגיל זה, תעבדו עם נתוני CSV. המשימה שלכם היא ליצור תוכנית Python שקוראת נתונים מקובץ CSV וכותבת אותם לקובץ CSV אחר, תוך הבטחה שרק שורות בהן הערך בעמודה הראשונה גדול מ-50 ייכללו בקובץ הפלט.