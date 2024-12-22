יש שני סוגי לולאות בפייתון, for ו-while.

### לולאת "for"

לולאות for מבצעות איטרציה על רצף נתון. הנה דוגמה:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

לולאות for יכולות לבצע איטרציה על רצף של מספרים באמצעות הפונקציות "range" ו-"xrange". ההבדל בין range ל-xrange הוא שפונקציית range מחזירה רשימה חדשה עם המספרים בטווח שצוין, בעוד ש-xrange מחזירה איטרטור, שהוא יותר יעיל. (בפייתון 3 הפונקציה range פועלת כמו xrange). שימו לב שהפונקציה range מבוססת על אפס.

    # מדפיס את המספרים 0,1,2,3,4
    for x in range(5):
        print(x)

    # מדפיס את המספרים 3,4,5
    for x in range(3, 6):
        print(x)

    # מדפיס את המספרים 3,5,7
    for x in range(3, 8, 2):
        print(x)

### לולאות "while"

לולאות while חוזרות כל עוד תנאי בוליאני מסוים מתקיים. לדוגמה:

    # מדפיס את המספרים 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # זהו אותו דבר כמו count = count + 1

### "break" ו-"continue" 

הצהרת **break** משמשת ליציאה מלולאת for או while, בעוד שהצהרת **continue** משמשת לדילוג על הבלוק הנוכחי וחזרה להצהרת "for" או "while". כמה דוגמאות:

    # מדפיס את המספרים 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # מדפיס רק מספרים אי זוגיים - 1,3,5,7,9
    for x in range(10):
        # בודק אם x זוגי
        if x % 2 == 0:
            continue
        print(x)

### האם נוכל להשתמש בסעיף "else" עבור לולאות?

שלא כמו שפות כמו C,CPP.. אנחנו יכולים להשתמש ב-**else** עבור לולאות. כאשר תנאי הלולאה של ההצהרה "for" או "while" נכשל אז חלק הקוד ב-"else" מתבצע. אם תתבצע הצהרת **break** בתוך הלולאה for אז חלק ה-"else" ידולג.
שימו לב שחלק ה-"else" מתבצע גם אם יש הצהרת **continue**.

הנה כמה דוגמאות:

    # מדפיס את המספרים 0,1,2,3,4 ולאחר מכן מדפיס "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # מדפיס את המספרים 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")


תרגיל
--------

השתמש בלולאה כדי להדפיס את כל המספרים הזוגיים מרשימת המספרים בסדר שבו התקבלו. אין להדפיס מספרים שבאים אחרי 237 ברצף.