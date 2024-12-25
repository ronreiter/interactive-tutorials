מילון הוא סוג נתונים דומה למערכים, אך עובד עם מפתחות וערכים במקום אינדקסים. כל ערך המאוחסן במילון ניתן לגישה באמצעות מפתח, שהוא כל סוג של אובייקט (מחרוזת, מספר, רשימה וכו'), במקום להשתמש באינדקס שלו כדי לפנות אליו.

לדוגמה, ניתן לשמור מסד נתונים של מספרי טלפון באמצעות מילון כך:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

לחלופין, ניתן לאתחל מילון עם אותם ערכים ברשומה הבאה:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### איטרציה על מילונים

ניתן לבצע איטרציה על מילונים, בדיוק כמו רשימה. עם זאת, מילון, בניגוד לרשימה, אינו שומר על סדר הערכים המאוחסנים בו. כדי לבצע איטרציה על זוגות מפתח-ערך, השתמש בתחביר הבא:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### הסרת ערך

כדי להסיר אינדקס ספציפי, השתמש באחת מהרשומות הבאות:
    
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

Add "Jake" to the phonebook with the phone number 938273443, and remove Jill from the phonebook.