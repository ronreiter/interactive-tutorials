# Sets are lists with no duplicate entries. Let's say you want to collect a list of words used in a paragraph:

סטים הם רשימות ללא ערכים כפולים. נניח שאתה רוצה לאסוף רשימה של מילים שמשתמשים בהן בפסקה:

    print(set("my name is Eric and Eric is my name".split()))

זה ידפיס רשימה המכילה את "my", "name", "is", "Eric", ולבסוף "and". מכיוון ששאר המשפט משתמש במילים שכבר נמצאות בסט, הן לא מוכנסות פעמיים.

סטים הם כלי חזק בפייתון כי הם יכולים לחשב הבדלים וחיתוכים בין סטים אחרים. לדוגמה, נניח שיש לך רשימה של משתתפים באירועים A ו-B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

כדי לברר אילו חברים השתתפו בשני האירועים, אתה יכול להשתמש בשיטת "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

כדי לברר אילו חברים השתתפו רק באחד מהאירועים, השתמש בשיטת "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

כדי לברר אילו חברים השתתפו רק באירוע אחד ולא באחר, השתמש בשיטת "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

כדי לקבל רשימה של כל המשתתפים, השתמש בשיטת "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Exercise--------

בתרגיל למטה, השתמש ברשימות הנתונות כדי להדפיס סט המכיל את כל המשתתפים מאירוע A שלא נכחו באירוע B.