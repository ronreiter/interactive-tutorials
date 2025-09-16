אובייקטים הם קפסולה של משתנים ופונקציות לכדי ישות אחת. אובייקטים מקבלים את המשתנים והפונקציות שלהם ממחלקות. מחלקות הן בעצם תבנית ליצירת האובייקטים שלך.

מחלקה בסיסית מאוד תיראה כך:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

נסביר מדוע יש להוסיף את "self" כפרמטר קצת יותר מאוחר. ראשית, כדי להקצות את המחלקה (תבנית) הזאת לאובייקט, תעשה את הבא:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

כעת המשתנה "myobjectx" מחזיק אובייקט של המחלקה "MyClass" שמכיל את המשתנה והפונקציה שהוגדרו בתוך המחלקה שנקראת "MyClass".

### גישה למשתנים באובייקט

כדי לגשת למשתנה בתוך האובייקט החדש שנקרא "myobjectx", תעשה את הבא:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

לדוגמה, הקוד הבא ידפיס את המחרוזת "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

אפשר ליצור מספר אובייקטים שונים שהם מהמחלקה (יש להם אותם משתנים ופונקציות שהוגדרו). עם זאת, כל אובייקט מכיל עותקים עצמאיים של המשתנים שהוגדרו במחלקה. לדוגמה, אם היינו מגדירים אובייקט נוסף במחלקה "MyClass" ואז משנים את המחרוזת במשתנה:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # ואז להדפיס את שני הערכים
    print(myobjectx.variable)
    print(myobjecty.variable)

### גישה לפונקציות באובייקט

כדי לגשת לפונקציה בתוך אובייקט, תשתמש בסימון דומה לגישה למשתנה:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

לעיל יודפס ההודעה, "This is a message inside the class."

### __init__()

הפונקציה `__init__()`, היא פונקציה מיוחדת שנקראת כאשר המחלקה מופעלת.
היא משמשת להקצאת ערכים במחלקה.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Prints '7'
    
תרגיל
--------

יש לנו מחלקה שמוגדרת לכלי רכב. צור שני כלי רכב חדשים שנקראים car1 ו-car2.
הגדר את car1 להיות רכב ספורט אדום ששווה $60,000.00 עם שם Fer, 
ו-car2 להיות וואן כחול בשם Jump ששווה $10,000.00.
