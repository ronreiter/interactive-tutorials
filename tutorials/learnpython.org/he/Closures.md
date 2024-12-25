קלוז׳ר הוא אובייקט פונקציה שזוכר ערכים בתחומים חיצוניים גם אם הם לא נמצאים בזיכרון. נתחיל בשלבים:

ראשית, **פונקציה מקוננת** היא פונקציה המוגדרת בתוך פונקציה אחרת. חשוב מאוד לציין שהפונקציות המקוננות יכולות לגשת למשתנים של התחום החיצוני. עם זאת, לפחות בפייתון, הם רק לקריאה. אבל, ניתן להשתמש במפורש במילת המפתח "nonlocal" עם המשתנים כדי לשנות אותם.

לדוגמה:

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test message"))

זה עובד היטב כי הפונקציה 'data_transmitter' יכולה לגשת ל-'message'. כדי להדגים את השימוש במילת המפתח "nonlocal", הבה נראה את זה:

    def print_msg(number):
        def printer():
            "Here we are using the nonlocal keyword"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

ללא מילת המפתח nonlocal, הפלט יהיה "3 9", אולם, עם השימוש בה, נקבל "3 3", כלומר הערך של המשתנה "number" משתנה.

ועכשיו, מה דעתכם שנחזיר את אובייקט הפונקציה במקום לקרוא לפונקציה המקוננת בתוכה. (זכרו שגם פונקציות הן אובייקטים. (זה פייתון.))

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
        return data_transmitter

ואנו קוראים לפונקציה באופן הבא:

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Burn the Sun!")
  	  fun2()

למרות שביצוע הפעולה של "transmit_to_space()" הושלם, ההודעה נשמרה. הטכניקה שבה הנתונים מצורפים לקוד כלשהו, גם לאחר שתמו הפונקציות הראשיות האלה, נקראת קלוז'רים בפייתון.

יתרון: קלוז'רים יכולים למנוע את השימוש במשתנים גלובליים ומספקים סוג של הסתרת נתונים. (לדוגמה, כשיש כמה שיטות בכיתה, יש להשתמש בקלוּז'רים במקום).

כמו כן, דקורטורים בפייתון עושים שימוש נרחב בקלוז'רים.

תרגיל
--------

צור לולאה מקוננת וקלוז׳ר בפייתון כדי ליצור פונקציות שמייצרות פונקציות כפל רבות באמצעות קלוז׳רים. כלומר, באמצעות קלוז׳רים, ניתן ליצור פונקציות שיוצרות פונקציות כמו multiply_with_5() או multiply_with_4().