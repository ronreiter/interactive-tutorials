A Closure היא אובייקט פונקציה שזוכר ערכים בהיקף מחבקים גם אם הם אינם נמצאים יותר בזיכרון. ניכנס לזה צעד אחר צעד

תחילה, **פונקציה מקוננת** היא פונקציה שמוגדרת בתוך פונקציה אחרת. חשוב מאוד לציין שהפונקציות המקוננות יכולות לגשת למשתנים של ההיקף המחבק. עם זאת, לפחות בפייתון, הם נגישים לקריאה בלבד. עם זאת, ניתן להשתמש במילת המפתח "nonlocal" במפורש עם המשתנים הללו על מנת לערוך אותם.

לדוגמה:

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test message"))

זה עובד היטב מכיוון שניתן לגשת למשתנה 'message' על ידי הפונקציה 'data_transmitter'. כדי להדגים את השימוש במילת המפתח "nonlocal", לשקול את זה

    def print_msg(number):
        def printer():
            "Here we are using the nonlocal keyword"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

ללא מילת המפתח nonlocal, הפלט היה "3 9", אולם, עם השימוש בה, מקבלים "3 3", כלומר הערך של המשתנה "number" משתנה.

כעת, מה דעתך שנחזיר את אובייקט הפונקציה במקום לקרוא לפונקציה המקוננת בתוכה. (זכור שגם פונקציות הן אובייקטים. (זה פייתון.))

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
        return data_transmitter

ונקרא לפונקציה כך:


      def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Burn the Sun!")
  	  fun2()

אפילו שפעולתו של "transmit_to_space()" הושלמה, ההודעה נשמרה. הטכניקה הזו שבה הנתונים מצורפים לקוד כלשהו גם לאחר סיום הפונקציות המקוריות נקראת סגירות (closures) בפייתון.

יתרון: סגירות יכולות להימנע משימוש במשתנים גלובליים ומספקות בדרך כלשהי הסתרת נתונים (לדוגמה, כשישנם מספר שיטות במחלקה, השתמש בסגירות במקום).

כמו כן, דקורטורים בפייתון עושים שימוש נרחב בסגירות.

Exercise
--------

הכנס לולאה מקוננת וסגירה בפייתון כדי ליצור פונקציות ליצירת פונקציות חומרה מרובות על ידי סגירות. כלומר, באמצעות סגירות, ניתן ליצור פונקציות כמו multiply_with_5() או multiply_with_4() באמצעות סגירות.