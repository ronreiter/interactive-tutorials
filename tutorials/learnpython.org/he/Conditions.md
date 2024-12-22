Python משתמש בלוגיקה בוליאנית להערכת תנאים. ערכי הבוליאן True ו- False מוחזרים כאשר מבצעים השוואה או הערכה של ביטוי. לדוגמה:

    x = 2
    print(x == 2) # prints out True
    print(x == 3) # prints out False
    print(x < 3) # prints out True

שימו לב שייחוס משתנה נעשה תוך שימוש באופרטור שווה אחד "=", בעוד שהשוואה בין שני משתנים נעשית באמצעות אופרטור השוואה כפול "==". אופרטור "שונה" מסומן כ-"!=".

### אופרטורים בוליאניים

האופרטורים הבוליאניים "and" ו-"or" מאפשרים לבנות ביטויים בוליאניים מורכבים, לדוגמה:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("Your name is John, and you are also 23 years old.")

    if name == "John" or name == "Rick":
        print("Your name is either John or Rick.")

### אופרטור ה-"in"

אופרטור ה-"in" יכול לשמש לבדוק האם אובייקט מסוים קיים בתוך מיכל אובייקטים הניתן למעבר, כמו רשימה:

    name = "John"
    if name in ["John", "Rick"]:
        print("Your name is either John or Rick.")

Python משתמש בהזחה כדי להגדיר בלוקים של קוד, במקום סוגריים. בהזחה של Python הסטנדרטית השתמשו ב-4 רווחים, על אף שטאבים וכל גודל רווח אחר יעבדו, כל עוד נשמרת עקביות. שימו לב שבלוקים של קוד לא זקוקים לסימון סופי.

הנה דוגמה לשימוש בהצהרת ה-"if" של Python באמצעות בלוקים של קוד:

    statement = False
    another_statement = True
    if statement is True:
        # do something
        pass
    elif another_statement is True: # else if
        # do something else
        pass
    else:
        # do another thing
        pass

לדוגמה:

    x = 2
    if x == 2:
        print("x equals two!")
    else:
        print("x does not equal to two.")

הצהרה מוערכת כנכונה אם אחד מהבאים הוא נכון:
1. משתנה בוליאני "True" ניתן, או מחושב בעזרת ביטוי, כמו השוואה אריתמטית.
2. אובייקט שאינו נחשב "ריק" עובר.

הנה כמה דוגמאות לאובייקטים הנחשבים כ"ריקים":
1. מחרוזת ריקה: ""
2. רשימה ריקה: []
3. המספר אפס: 0
4. משתנה בוליאני שקרי: False

### אופרטור 'is'

בניגוד לאופרטור ההשוואה הכפול "==", אופרטור ה-"is" לא משווה בין הערכים של המשתנים אלא הבילים שלהם עצמם. לדוגמה:

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # Prints out True
    print(x is y) # Prints out False

### אופרטור ה-"not"

השימוש ב-"not" לפני ביטוי בוליאני הופך את ערכו:

    print(not False) # Prints out True
    print((not False) == (False)) # Prints out False

תרגיל
--------

שנו את המשתנים בחלק הראשון, כך שכל משפט if יפתור כ-True.