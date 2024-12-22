Decorators מאפשרים לך לבצע שינויים פשוטים על אובייקטים שניתן לקרוא להם כמו [functions](http://www.learnpython.org/en/Functions ""), [methods, או classes](http://www.learnpython.org/en/Classes%20and%20Objects ""). במדריך זה, אנו נעסוק בפונקציות. התחביר

    @decorator
    def functions(arg):
        return "value"

שווה ערך ל:

    def function(arg):
        return "value"
    function = decorator(function) # זה מעביר את הפונקציה לדקורטור ומקצה אותה מחדש לפונקציה

כפי שאולי ראיתם, דקורטור הוא רק פונקציה אחרת שלוקחת פונקציה ומחזירה אחת. לדוגמה, אתה יכול לעשות זאת:

    def repeater(old_function):
        def new_function(*args, **kwds): # ראו learnpython.org/en/Multiple%20Function%20Arguments על איך *args ו-**kwds עובדים
            old_function(*args, **kwds) # אנחנו מפעילים את הפונקציה הישנה
            old_function(*args, **kwds) # אנחנו מפעילים אותה פעמיים
        return new_function # אנחנו חייבים להחזיר את new_function, אחרת זה לא יקצה מחדש לערך

זה יגרום לפונקציה לחזור פעמיים.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

אתה יכול גם לשנות את התוצאה

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # לשנות את הערך המוחזר
        return new_function

לשנות קלט

    def double_Ii(old_function):
        def new_function(arg): # פועל רק אם הפונקציה הישנה יש לה משתנה אחד
            return old_function(arg * 2) # לשנות את המשתנה המועבר
        return new_function

ולבצע בדיקה.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # זה גורם לשגיאה, וזה טוב יותר מאשר שזה יעשה את הדבר הלא נכון
            old_function(arg)
        return new_function

נניח שתרצה להכפיל את הפלט בכמות משתנה. תוכל להגדיר את הדקורטור ולהשתמש בו כך:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # זה מחזיר את הגנרטור החדש
    
    # שימוש
    @multiply(3) # multiply זה לא גנרטור, אבל multiply(3) זה כן
    def return_num(num):
        return num
        
    # עכשיו return_num מדוקר ומוקצה מחדש לעצמו
    return_num(5) # אמור להחזיר 15

אתם יכולים לעשות כל מה שתרצו עם הפונקציה הישנה, אפילו להתעלם ממנה לגמרי! דקורטורים מתקדמים יכולים גם לשנות את שורת התיעוד ומספר הארגומנטים.
לדקורטורים מעניינים, לכו ל-<http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
בנה מפעל דקורטורים שמחזיר דקורטור שמקשט פונקציות עם ארגומנט אחד. המפעל יקבל ארגומנט אחד, סוג, ואז יחזיר דקורטור שגורם לפונקציה לבדוק אם הקלט הוא מהסוג הנכון. אם זה לא נכון, זה צריך להדפיס("Bad Type") (במציאות, זה צריך לזרוק שגיאה, אבל טיפול בשגיאות אינו כלול במדריך זה). שימוש ב-isinstance(object, type_of_object) או type(object) עשוי לעזור.