Decorators מאפשרים לך לבצע שינויים פשוטים על אובייקטים שניתן לקרוא להם כמו [פונקציות](http://www.learnpython.org/en/Functions ""), [שיטות או מחלקות](http://www.learnpython.org/en/Classes%20and%20Objects ""). במדריך זה נתמקד בפונקציות. התחביר

@decorator
def function(arg):
    return "value"

שווה ערך ל:

def function(arg):
    return "value"
function = decorator(function) # זה מעביר את הפונקציה לדקורטור ומשנה לה שם לפונקציות

כפי שאתה עשוי לראות, דקורטור הוא פשוט פונקציה אחרת שלוקחת פונקציות ומחזירה אחת. לדוגמה, תוכל לעשות זאת:

def repeater(old_function):
    def new_function(*args, **kwds): # ראה learnpython.org/en/Multiple%20Function%20Arguments איך *args ו-kwds* עובדים
        old_function(*args, **kwds) # אנו מריצים את הפונקציה הישנה
        old_function(*args, **kwds) # אנו עושים זאת פעמיים
    return new_function # עלינו להחזיר את new_function, אחרת לא נוכל לשנות לה שם לערך

זה יגרום לפונקציה לרוץ פעמיים.

>>> @repeater
def multiply(num1, num2):
    print(num1 * num2)

>>> multiply(2, 3)
6
6

אתה יכול גם לגרום לזה לשנות את הפלט

def double_out(old_function):
    def new_function(*args, **kwds):
        return 2 * old_function(*args, **kwds) # משנים את ערך ההחזרה
    return new_function

לשנות קלט

def double_in(old_function):
    def new_function(arg): # עובד רק אם לפונקציה הישנה יש ארגומנט אחד
        return old_function(arg * 2) # משנים את הארגומנט שהועבר
    return new_function

ולבצע בדיקות.

def check(old_function):
    def new_function(arg):
        if arg < 0: raise (ValueError, "Negative Argument") # זה גורם לשגיאה, מה שעדיף על זה שהיא תעשה את הדבר הלא נכון
        old_function(arg)
    return new_function

נניח שאתה רוצה להכפיל את הפלט בכמות משתנה. תוכל להגדיר את הדקורטור ולהשתמש בו כך:

def multiply(multiplier):
    def multiply_generator(old_function):
        def new_function(*args, **kwds):
            return multiplier * old_function(*args, **kwds)
        return new_function
    return multiply_generator # הוא מחזיר את יוצר החדש
    
# שימוש
@multiply(3) # multiply אינו יוצר, אבל multiply(3) כן
def return_num(num):
    return num
    
# עכשיו return_num מעוטר ומשנה שם לעצמו
return_num(5) # צריך להחזיר 15

אתה יכול לעשות כל דבר שאתה רוצה עם הפונקציה הישנה, אפילו להתעלם ממנה לחלוטין! דקורטורים מתקדמים יכולים גם לשנות את מחרוזת התיעוד ואת מספר הארגומנטים. עבור דקורטורים מעניינים, לך ל-<http://wiki.python.org/moin/PythonDecoratorLibrary>.

תרגיל
--------
Make a decorator factory which returns a decorator that decorates functions with one argument. The factory should take one argument, a type, and then returns a decorator that makes function should check if the input is the correct type. If it is wrong, it should print("Bad Type") (In reality, it should raise an error, but error raising isn't in this tutorial). Look at the tutorial code and expected output to see what it is if you are confused (I know I would be.) Using isinstance(object, type_of_object) or type(object) might help.
```