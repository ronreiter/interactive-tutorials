Python provides built-in JSON libraries to encode and decode JSON.

ב-Python 2.5, משתמשים במודול simplejson, ואילו ב-Python 2.7, משתמשים במודול json. מכיוון שמפרש זה משתמש ב-Python 2.7, נשתמש ב-json.

על מנת להשתמש במודול json, יש לייבא אותו תחילה:

    import json

יש שני פורמטים בסיסיים לנתוני JSON. או במחרוזת או במבנה נתונים של אובייקט. מבנה הנתונים של אובייקט, ב-Python, מורכב מרשימות ומילונים מקוננים זה בזה. מבנה הנתונים של האובייקט מאפשר להשתמש בשיטות פייתון (לרשימות ומילונים) להוספה, רישום, חיפוש והסרת פריטים ממבנה הנתונים. פורמט המחרוזת משמש בעיקר להעברת הנתונים לתוכנית אחרת או לטעינתם למבנה נתונים.

כדי לטעון את ה-JSON חזרה למבנה נתונים, יש להשתמש בשיטת "loads". שיטה זו לוקחת מחרוזת ומחזירה אותה למבנה נתונים של אובייקט JSON:

    import json 
    print(json.loads(json_string))

כדי לקודד את מבנה הנתונים ל-JSON, השתמשו בשיטת "dumps". שיטה זו לוקחת אובייקט ומחזירה מחרוזת:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python supports a Python proprietary data serialization method called pickle (and a faster alternative called cPickle).

You can use it exactly the same way.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

תרגיל
--------
מטרת התרגיל היא להדפיס את מחרוזת ה-JSON עם זוג מפתח-ערך "Me" : 800 נוסף אליו.
```