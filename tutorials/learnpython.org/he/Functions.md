### מהם פונקציות?

פונקציות הן דרך נוחה לחלק את הקוד שלך לחלקים שימושיים, המאפשרת לנו לסדר את הקוד שלנו, להפוך אותו לקריא יותר, לעשות בו שימוש חוזר ולחסוך זמן. כמו כן, פונקציות הן דרך מרכזית להגדיר ממשקים כך שמתכנתים יוכלו לשתף את הקוד שלהם.

### איך כותבים פונקציות בפייתון?

כפי שראינו במדריכים קודמים, פייתון עושה שימוש בבלוקים.

בלוק הוא אזור של קוד שנכתב בתבנית:

    block_head:
        שורת בלוק ראשונה
        שורת בלוק שנייה
        ...

כאשר שורת בלוק היא קוד פייתון נוסף (אפילו בלוק נוסף), וראש הבלוק הוא בתבנית הבאה:
block_keyword block_name(argument1,argument2, ...)
מילות המפתח של בלוק שאתה כבר מכיר הן "if", "for" ו-"while".

פונקציות בפייתון מוגדרות באמצעות מילת המפתח "def", ואחריה שם הפונקציה כשם הבלוק.
לדוגמה:

    def my_function():
        print("Hello From My Function!")


פונקציות עשויות גם לקבל פרמטרים (משתנים שעוברים מהקורא אל הפונקציה).
לדוגמה:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


פונקציות עשויות להחזיר ערך לקורא, באמצעות מילת המפתח 'return'.
לדוגמה:

    def sum_two_numbers(a, b):
        return a + b

### איך קוראים לפונקציות בפייתון?

פשוט כתבו את שם הפונקציה ולאחר מכן (), תוך הצבת כל הפרמטרים הנדרשים בתוך הסוגריים.
לדוגמה, בואו נקרא לפונקציות שנכתבו לעיל (בדוגמה הקודמת):

    # הגדר את שלוש הפונקציות שלנו
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # הדפסת ברכה פשוטה
    my_function()

    # מדפיס - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # לאחר רשומה זו הערך של x יהיה 3!
    x = sum_two_numbers(1,2)  


תרגיל
--------

בתרגיל זה תשתמש בפונקציה קיימת, ובאותה עת תוסיף פונקציות משלך כדי ליצור תוכנית מלאה ומתפקדת.

1. הוסף פונקציה בשם `list_benefits()` שמחזירה את הרשימה הבאה של מחרוזות: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. הוסף פונקציה בשם `build_sentence(info)` שמקבלת ארגומנט יחיד הכולל מחרוזת ומחזירה משפט שמתחיל במחרוזת הנתונה ומסתיים עם המחרוזת " is a benefit of functions!"

3. הרץ ובדוק את כל הפונקציות עובדות יחד!
