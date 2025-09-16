כל פונקציה ב-Python מקבלת מספר קבוע מראש של פרמטרים, אם היא מוגדרת בצורה רגילה, כך:

    def myfunction(first, second, third):
        # do something with the 3 variables
        ...

זה אפשרי להגדיר פונקציות שמקבלות מספר משתנה של פרמטרים, באמצעות הסינטקס הבא:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

המשתנה "therest" הוא רשימה של משתנים, שמקבל את כל הפרמטרים שניתנים לפונקציה "foo" אחרי שלושת הפרמטרים הראשונים. כך שקוראים `foo(1, 2, 3, 4, 5)` ידפיס:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

זה גם אפשרי לשלוח פרמטרים לפונקציות לפי מילות מפתח, כך שהסדר של הפרמטר לא משנה, באמצעות הסינטקס הבא. הקוד הבא מניב את הפלט הבא:
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))

הפונקציה "bar" מקבלת 3 פרמטרים. אם מתקבל פרמטר נוסף "action" והוא מורה לסכם את המספרים, אז הסכום יודפס. בנוסף, הפונקציה גם יודעת שהיא צריכה להחזיר את הפרמטר הראשון אם הערך של הפרמטר "number", שניתן לפונקציה, שווה ל"first".

תרגיל
--------

מלא את הפונקציות `foo` ו- `bar` כך שיוכלו לקבל כמות משתנה של פרמטרים (3 או יותר).
הפונקציה `foo` חייבת להחזיר את כמות הפרמטרים הנוספים שהתקבלו.
הפונקציה `bar` חייבת להחזיר `True` אם הפרמטר עם מילת המפתח `magicnumber` שווה ל-7, ו- `False` אחרת.