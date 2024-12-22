You can create partial functions in python by using the partial function from the functools library.

פונקציות חלקיות מאפשרות לגזור פונקציה עם x פרמטרים לפונקציה עם פחות פרמטרים וערכים קבועים שנקבעו עבור הפונקציה המצומצמת.

Import required:

    from functools import partial

This code will return 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

הערה חשובה: הערכים הברירת מחדל יתחילו להחליף משתנים מהשמאל. ה-2 יחליף את x. y יהיה שווה ל-4 כאשר dbl(4) נקראת. אין זה משנה בדוגמה זו, אך זה משנה בדוגמה למטה.

Exercise
--------

Edit the function provided by calling partial() and replacing the first three variables in func(). Then print with the new partial function using only one input variable so that the output equals 60.