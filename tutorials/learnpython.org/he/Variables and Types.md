Python היא שפה מונחית עצמים לחלוטין, ולא "מוקלדת באופן סטטי". אין צורך להצהיר על משתנים לפני השימוש בהם או להצהיר על סוגם. כל משתנה ב-Python הוא אובייקט.

מדריך זה יעסוק בכמה סוגים בסיסיים של משתנים.

### Numbers
Python תומכת בשני סוגים של מספרים - מספרים שלמים (integers) ומספרים נקודתיים משתנים (floating point numbers). (היא גם תומכת במספרים מרוכבים, שלא יוסברו במדריך זה).

כדי להגדיר מספר שלם, השתמשו בתחביר הבא:

    myint = 7
    print(myint)

כדי להגדיר מספר נקודתי משתנה, ניתן להשתמש באחת מהוריאציות הבאות:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

מחרוזות מוגדרות עם גרש או עם גרשיים.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

ההבדל בין השתיים הוא שבשימוש בגרשיים קל יותר לכלול אפוסטרופים (בעוד השימוש בגרש היה מסיים את המחרוזת)

    mystring = "Don't worry about apostrophes"
    print(mystring)

ישנן וריאציות נוספות להגדרת מחרוזות המאפשרות לכלול דברים כמו חזרות עגלה, לוכסנים הפוכים ותווים יוניקוד. אלה מעבר לתחום מדריך זה, אך מכוסים ב[תיעוד של Python](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

ניתן לבצע פעולות פשוטות על מספרים ומחרוזות:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

ניתן לבצע השמות על יותר ממשתנה אחד "בו זמנית" באותה שורה כך:

    a, b = 3, 4
    print(a, b)

ערבוב פעולות בין מספרים ומחרוזות אינו נתמך:

    # This will not work!
    one = 1
    two = 2
    hello = "hello"

    print(one + two + hello)


Exercise
--------

המשימה בתרגיל זה היא ליצור מחרוזת, מספר שלם ומספר נקודתי משתנה. המחרוזת צריכה להיות בשם `mystring` ולכלול את המילה "hello". המספר הנקודתי המשתנה צריך להיות בשם `myfloat` ולכלול את המספר 10.0, והמספר השלם צריך להיות בשם `myint` ולכלול את המספר 20.