כל פונקציה בפייתון מקבלת מספר מראש של ארגומנטים, אם מוגדרת בצורה רגילה, כמו זו:

    def myfunction(first, second, third):
        # do something with the 3 variables
        ...

ניתן להגדיר פונקציות שמקבלות מספר משתנה של ארגומנטים, תוך שימוש בתחביר הבא:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

המשתנה "therest" הוא רשימה של משתנים, שהוא מקבל את כל הארגומנטים שניתנים לפונקציה "foo" לאחר שלושת הארגומנטים הראשונים. כך שהקריאה `foo(1, 2, 3, 4, 5)` תדפיס:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

ניתן גם לשלוח ארגומנטים לפונקציה לפי מילות מפתח, כך שסדר הארגומנטים לא משנה, תוך שימוש בתחביר הבא. הקוד הבא מפיק את הפלט הבא: 
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))

הפונקציה "bar" מקבלת 3 ארגומנטים. אם ארגומנט נוסף בשם "action" מתקבל, והוא מורה על סיכום המספרים, אז תודפס הסכום. לחלופין, הפונקציה יודעת גם שהיא צריכה להחזיר את הארגומנט הראשון אם הערך של הפרמטר "number", שנשלח לפונקציה, הוא שווה ל-"first".

Exercise
--------

השלם את הפונקציות `foo` ו-`bar` כך שהן יוכלו לקבל מספר משתנה של ארגומנטים (3 או יותר)
הפונקציה `foo` חייבת להחזיר את כמות הארגומנטים הנוספים שהתקבלו.
הפונקציה `bar` חייבת להחזיר `True` אם הארגומנט עם מילת המפתח `magicnumber` שווה ל-7, ו-`False` אחרת.