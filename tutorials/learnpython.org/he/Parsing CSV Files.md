### מהו CSV?
CSV מייצג 'Comma Separated Values' או 'ערכים מופרדים בפסיקים'. פורמט CSV הוא הנפוץ ביותר לייבוא וייצוא עבור מאגרי נתונים וגיליונות אלקטרוניים. קובץ CSV הוא קובץ טקסט פשוט המכיל רשימת נתונים. הם משתמשים לרוב בתו הפסיק (,) כדי להפריד נתונים, אך לפעמים משתמשים בתווים אחרים כמו נקודה-פסיק או טאבים.

נתוני CSV לדוגמה:

...
שם עמודה 1, שם עמודה 2, שם עמודה 3
נתוני שורה ראשונה 1, נתוני שורה ראשונה 2, נתוני שורה ראשונה 3
נתוני שורה שנייה 1, נתוני שורה שנייה 2, נתוני שורה שנייה 3
...

### מודול CSV ב-Python
בעוד של-Python יש את הפונקציה המובנית open() לעבוד עם קובצי CSV או כל קובץ טקסט רגיל אחר, ישנו מודול csv ייעודי המיישם מחלקות לקריאה וכתיבה של נתונים בפורמט csv מה שמקל על העבודה עם קובצי CSV.

### פונקציות חשובות במודול CSV

    csv.field_size_limit – מחזירה את גודל השדה המרבי
    csv.get_dialect – מקבלת את הדיאלקט המשויך לשם
    csv.list_dialects – מציגה את כל הדיאלקטים הרשומים
    csv.reader – קוראת נתונים מקובץ csv
    csv.register_dialect - משייכת דיאלקט לשם
    csv.writer – כותבת נתונים לקובץ csv
    csv.unregister_dialect - מוחקת את הדיאלקט המשויך לשם מרישום הדיאלקטים
    csv.QUOTE_ALL - מצטט הכל, ללא קשר לסוג.
    csv.QUOTE_MINIMAL - מצטט שדות עם תווים מיוחדים
    csv.QUOTE_NONNUMERIC - מצטט את כל השדות שאינם ערכים מספריים
    csv.QUOTE_NONE – לא מצטט שום דבר בפלט

### איך משתמשים במודול csv?
קודם כל, ייבאו את מודול csv בתוכנית ה-python שלכם.

import csv

פונקציות writer ו-reader מאפשרות לערוך, לשנות ולהתאים את הנתונים שבקובץ CSV.

איך לקרוא קובץ CSV:

כדי לקרוא נתונים מקובצי CSV אנו משתמשים בפונקציה reader ליצירת אובייקט קורא.

לדוגמה:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

כאן, אנו קודם פותחים את קובץ ה-CSV במצב קריאה ומגדירים את האובייקט כ-csvfile. אנו משתמשים במנהל הקשר לפתיחת הקובץ כדי שלא נצטרך לדאוג לסגירתו. הפונקציה csv.reader לוקחת את אובייקט הקובץ כקלט ומחזירה אובייקט איטראבילי. אנו שומרים את האובייקט האיטראבילי כ-csvreader.

כפי שאנו יודעים, csvreader הוא אובייקט איטראבילי ולכן אנו יכולים לאתר אותו באמצעות לולאת for:

דוגמה 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

הקוד לעיל ידפיס את כל השורות שקראנו מקובץ ה-csv. שימו לב שאנו פותחים את הקובץ במצב 'r' כשהוא כבר קיים.

מה הלאה?

cvreader הוא אובייקט איטראבילי. לכן, השיטה .next() מחזירה את השורה הנוכחית ומקדמת את האיטרטור לשורה הבאה.

דוגמה 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

בדוגמה 1, תראו את כל השורות מודפסות על המסוף יחד עם הכותרת. בדוגמה 2, השיטה .next() קוראת את הכותרת באובייקט fields ומקדמת את האיטרטור לשורה הבאה ולכן כל השורות מודפסות חוץ מהכותרת.

איך לכתוב לקובץ CSV-

כדי לכתוב לקובץ csv, מודול csv מספק את הפונקציה csv.writer. כדי לכתוב נתונים, אנו קודם פותחים את קובץ ה-CSV במצב כתיבה ('w'). אובייקט הקובץ מוגדר כ-csvfile. אנו שומרים את האובייקט השייך ל-csv.writer כ-csvwriter.

דוגמה:
    #הגדרת כותרת
    fields = ['עמודה1', 'עמודה2', 'עמודה3']

    #הגדרת שורות
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"

    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

בדוגמה לעיל, הפונקציה writerow() תכתוב שורה בודדת המוגדרת כ-ob של השדות fields בעוד השיטה writerows() תכתוב את כל רשימת השורות המוגדרת למעלה לתוך קובץ ה-csv.

כעת בואו נעלה שלב. קרא תוכן של קובץ csv אחד וכתוב לקובץ csv אחר.

Example:

עם open('newfilename.csv', 'w') כ f2:
מידע עם open('mycsvfile.csv', mode='r') כ f1:
קורא = csv.reader(f1)
csvwriter = csv.writer(f2)
כותרת = next(reader) # חנות המודעות ומצביע הקורא המתמשך
csvwriter.writerow(header) # כותב את הכותרת לקובץ החדש
לשורה בקורא:
csvwriter.writerow(שורה)

כאן, אנו פותחים 'newfilename.csv' במצב "W" כ f2 ופותחים 'mycsvfile.csv' במצב r כ f1. אנו עושים שימוש ב .next(), .reader(),.writer(), .writerow() פונקציות מודול csv. באמצעות .next() אנו מקדמים את מצביע הקורא ובאמצעות csvwriter.writerow() אנו כותבים שורה נכנסת אחת בכל פעם.

### מחלקות DictReader ו-DictWriter ב-Python

להלן שתי מחלקות חשובות ב-python לקריאה וכתיבה של קבצי csv.

מחלקת csv.Dictwriter
מחלקת csv.DictReader

DictReader ו-DictWriter הן מחלקות הזמינות ב-Python עבור קריאה וכתיבה ל-CSV. למרות שהן דומות לפונקציות reader וה-writer, מחלקות אלו משתמשות באובייקטי מילון לקריאה וכתיבה לקבצי csv.

DictReader:

זה יוצר אובייקט שמפנה את המידע שנקרא למילון שלמפתחותיו ניתנים על ידי פרמטר fieldnames. פרמטר זה אינו חובה, אך כאשר לא מצוין בקובץ, נתוני השורה הראשונה הופכים למפתחות של המילון.

דוגמה csv(info.csv)

.....
שם פרטי, שם משפחה
foo, bar
foo1, bar1
.....

דוגמה:

import csv with open('info.csv') כסיימות CSVקובץ קורא = csv.DictReader(csvfile) לשורה בקורא:
הדפס (שורה ['שם פרטי'], שורה ['שם משפחה'])

DictWriter:

מחלקת csv.DictWriter פועלת כמו writer רגיל אך מפנה מילוני Python לשורות CSV. פרמטר fieldnames הוא רצף של מפתחות שמזהים את הסדר שבו ערכים במלון המועברים לשיטת writerow() נכתבים לקובץ ה-CSV. המחלקה מוגדרת כ: csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

דוגמה:

import csv f = open('info.csv', 'w') עם f:

fnames ['שם פרטי', 'שם משפחה']
מְחַבֵּר = csv.DictWriter(f, fieldnames=fnames)

מחבר.writeheader()
מחבר.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
מחבר.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
מחבר.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


תרגיל
--------

בתרגיל הזה, תעבוד עם נתוני CSV. המשימה שלך היא ליצור תוכנית Python שקוראת נתונים מתוך קובץ CSV וכותבת אותו לקובץ CSV אחר, תוך הבטחה כי רק שורות שבהן הערך בעמודה הראשונה גדול מ-50 ייכללו בקובץ הפלט.
```