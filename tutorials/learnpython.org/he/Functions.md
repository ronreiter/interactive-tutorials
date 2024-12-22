### מהן פונקציות?

פונקציות הן דרך נוחה לחלק את הקוד שלכם לבלוקים שימושיים, מה שמאפשר לנו לסדר את הקוד, להפוך אותו לקריא יותר, לעשות בו שימוש חוזר ולחסוך זמן. בנוסף, פונקציות הן דרך מרכזית להגדיר ממשקים, כך שמתכנתים יכולים לשתף את הקוד שלהם.

### איך כותבים פונקציות ב-Python?

כפי שראינו במדריכים הקודמים, Python עושה שימוש בבלוקים.

בלוק הוא אזור של קוד שנכתב בפורמט של:

    block_head:
        1st block line
        2nd block line
        ...

כאשר שורה בבלוק היא קוד פייתון נוסף (אפילו בלוק אחר), והחלק הראשי של הבלוק הינו בפורמט הבא:
block_keyword block_name(argument1,argument2, ...)
מילות מפתח של בלוקים שאתם כבר מכירים הן "if", "for", ו-"while".

פונקציות בפייתון מוגדרות בעזרת מילת המפתח "def", ואחריה שם הפונקציה כשם הבלוק.
לדוגמה:

    def my_function():
        print("Hello From My Function!")


פונקציות עשויות גם לקבל ארגומנטים (משתנים שמועברים מהמזמין לפונקציה).
לדוגמה:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


פונקציות עשויות להחזיר ערך למזמין, בעזרת מילת המפתח 'return' .
לדוגמה:

    def sum_two_numbers(a, b):
        return a + b

### איך מזמינים פונקציות ב-Python?

פשוט כותבים את שם הפונקציה ואחר כך (), מציבים כל ארגומנטים נדרשים בפנים הסוגריים.
לדוגמה, בואו נזמין את הפונקציות שנכתבו למעלה (בדוגמה הקודמת):

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


תרגיל
--------

בתרגיל זה תשתמשו בפונקציה קיימת, ובזמן שתוסיפו את שלכם תיצרו תוכנית פונקציונלית מלאה.

1. הוסיפו פונקציה בשם `list_benefits()` שמחזירה את רשימת המחרוזות הבאה: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. הוסיפו פונקציה בשם `build_sentence(info)` שמקבלת ארגומנט יחיד המכיל מחרוזת ומחזירה משפט שמתחיל במחרוזת הנתונה ומסתיים במחרוזת " is a benefit of functions!" 

3. הריצו וראו את כל הפונקציות פועלות יחדיו!