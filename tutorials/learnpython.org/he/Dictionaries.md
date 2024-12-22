A dictionary הוא סוג נתונים הדומה למערכים, אך עובד עם מפתחות וערכים במקום אינדקסים. כל ערך המאוחסן ב-dictionary יכול להיגש באמצעות מפתח, שיכול להיות כל סוג של אובייקט (מחרוזת, מספר, רשימה, וכו') במקום להשתמש באינדקס שלו כדי לגשת אליו.

לדוגמה, מאגר של מספרי טלפון יכול להיות מאוחסן באמצעות dictionary כזה:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

לחילופין, ניתן לאתחול dictionary עם אותם ערכים בתזוגה הבאה:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterating over dictionaries

ניתן לעבור על dictionary, בדיוק כמו על רשימה. עם זאת, dictionary, שלא כמו רשימה, אינו שומר על הסדר של הערכים המאוחסנים בו. כדי לעבור על זוגות של מפתחות וערכים, השתמש בתזוגה הבאה:

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Removing a value

כדי להסיר אינדקס מסוים, השתמש באחת מהתזוגות הבאות:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

או:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

תרגיל
--------

הוסף את "Jake" ל-phonebook עם מספר הטלפון 938273443, והסר את Jill מ-phonebook.