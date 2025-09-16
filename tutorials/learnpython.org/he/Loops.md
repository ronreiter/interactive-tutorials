There are two types of loops in Python, for and while.

### הלולאה "for"

לולאות for עוברות על רצף נתון. הנה דוגמה:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

לולאות for יכולות לעבור על רצף של מספרים באמצעות הפונקציות "range" ו-"xrange". ההבדל בין range ו-xrange הוא שהפונקציה range מחזירה רשימה חדשה עם מספרים בטווח שהוגדר, בעוד ש-xrange מחזירה איטרטור, שהוא יעיל יותר. (ב-Python 3 משתמשים בפונקציה range, שמתפקדת כמו xrange). שימו לב שהפונקציה range מבוססת אפס.

    # מדפיס את המספרים 0,1,2,3,4
    for x in range(5):
        print(x)

    # מדפיס את 3,4,5
    for x in range(3, 6):
        print(x)

    # מדפיס את 3,5,7
    for x in range(3, 8, 2):
        print(x)

### לולאות "while"

לולאות while יחזרו כל עוד תנאי בוליאני מסוים מתקיים. לדוגמה:

    # מדפיס את 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # זהה ל-count = count + 1

### משפטי "break" ו-"continue"

**break** משמשת כדי לצאת מלולאת for או while, בעוד ש-**continue** משמשת כדי לדלג על הבלוק הנוכחי ולחזור אל הצהרת ה-"for" או "while". הנה כמה דוגמאות:

    # מדפיס את 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # מדפיס רק מספרים אי זוגיים - 1,3,5,7,9
    for x in range(10):
        # בדוק אם x זוגי
        if x % 2 == 0:
            continue
        print(x)

### האם אפשר להשתמש בסעיף "else" ללולאות?

בניגוד לשפות כמו C,CPP... אפשר להשתמש ב-**else** בלולאות. כאשר תנאי הלולאה של הצהרת "for" או "while" נכשל אז החלק של הקוד ב-"else" מבוצע. אם משפט **break** מבוצע בתוך הלולאה for אז החלק "else" נעקף.
שימו לב שהחלק "else" מבוצע גם אם יש משפט **continue**.

הנה כמה דוגמאות:

    # מדפיס את 0,1,2,3,4 ולאחר מכן מדפיס "ערך המשתנה הגיע ל-5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # מדפיס את 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")

Exercise
--------

Loop through and print out all even numbers from the numbers list in the same order they are received. Don't print any numbers that come after 237 in the sequence.