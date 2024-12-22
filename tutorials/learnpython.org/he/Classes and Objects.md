Objects הם קפסולציה של משתנים ופונקציות ליישות אחת. אובייקטים מקבלים את המשתנים והפונקציות שלהם מכיתות (classes). כיתות הם למעשה תבנית ליצירת האובייקטים שלכם.

כיתה בסיסית מאוד תיראה כך:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

בהמשך נסביר מדוע צריך לכלול את "self" כפרמטר. קודם, כדי להקצות את הכיתה (התבנית) לאובייקט, יש לבצע את הפעולות הבאות:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

כעת המשתנה "myobjectx" מחזיק באובייקט של הכיתה "MyClass", המכיל את המשתנה והפונקציה שהוגדרו בתוך הכיתה שנקראת "MyClass".

### Accessing Object Variables

כדי לגשת למשתנה בתוך האובייקט החדש שנוצר "myobjectx", יש לבצע את הפעולות הבאות:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

לדוגמה, הפעולות הבאות יפיקו את המחרוזת "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

אפשר ליצור מספר אובייקטים שונים שנוצרו מאותה כיתה (יש להם את אותם משתנים ופונקציות שהוגדרו). עם זאת, כל אובייקט מכיל עותקים עצמאיים של המשתנים שהוגדרו בכיתה. למשל, אם נגדיר אובייקט נוסף עם הכיתה "MyClass" ואז נשנה את המחרוזת במשתנה שקודם:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # ואז נדפיס את שני הערכים
    print(myobjectx.variable)
    print(myobjecty.variable)


### Accessing Object Functions

כדי לגשת לפונקציה בתוך האובייקט, יש להשתמש בסימון דומה לגישה למשתנה:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

הפעולה לעיל תדפיס את ההודעה "This is a message inside the class."

### __init__()

הפונקציה `__init__()`, היא פונקציה מיוחדת שנקראת כאשר הכיתה נוצרת.
היא משמשת להקצאת ערכים בכיתה.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #מדפיס '7'
    
Exercise
--------

יש לנו כיתה מוגדרת עבור רכבים. צרו שני רכבים חדשים בשם car1 ו-car2. 
Set car1 to be a red convertible worth $60,000.00 with a name of Fer,
and car2 to be a blue van named Jump worth $10,000.00.