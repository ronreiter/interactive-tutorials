בכדי לתרגם את המדריך לעברית לפי ההנחיות שניתנו:

בתכנות, מודול הוא תוכנת מחשב שמספקת פונקציונליות מסוימת. לדוגמה, כאשר בונים משחק פינג פונג, מודול אחד עשוי להיות אחראי על הלוגיקה של המשחק, ומודול אחר מצייר את המשחק על המסך. כל מודול מורכב מקובץ שונה, שניתן לערוך בנפרד.

### כתיבת מודולים

מודולים ב-Python הם פשוט קבצי Python עם סיומת .py. שם המודול הוא זהה לשם הקובץ. מודול ב-Python יכול לכלול קבוצה של פונקציות, מחלקות או משתנים שמוגדרים ומיושמים. הדוגמה למעלה כוללת שני קבצים:

mygame/

- mygame/game.py

- mygame/draw.py

סקריפט ה-Python `game.py` מיישם את המשחק. הוא משתמש בפונקציה `draw_game` מהקובץ `draw.py`, כלומר, מודול ה-`draw` שמממש את הלוגיקה של ציור המשחק על המסך.

מודולים מיובאים ממודולים אחרים באמצעות הפקודה `import`. בדוגמה זו, סקריפט ה-`game.py` עשוי להיראות כך:

    # game.py
    # import the draw module
    import draw
    
    def play_game():
        ...
    
    def main():
        result = play_game()
        draw.draw_game(result)
        
    # this means that if this script is executed, then 
    # main() will be executed
    if __name__ == '__main__':
        main()

מודול ה-`draw` עשוי להיראות כך:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

בדוגמה זו, מודול ה-`game` מייבא את מודול ה-`draw`, מה שמאפשר לו להשתמש בפונקציות המיושמות במודול זה. הפונקציה `main` משתמשת בפונקציה המקומית `play_game` כדי להפעיל את המשחק ולאחר מכן מציירת את תוצאת המשחק באמצעות פונקציה ממומשת במודול ה-`draw` שנקראת `draw_game`. לשימוש בפונקציה `draw_game` ממודול ה-`draw`, עלינו להגדיר באיזה מודול הפונקציה ממומשת באמצעות אופרטור הנקודה. להתייחסות לפונקציה `draw_game` ממודול ה-`game`, עלינו לייבא את מודול ה-`draw` ואז לקרוא ל-`draw.draw_game()`.

כאשר הוראת `import draw` מופעלת, מפרש ה-Python מחפש קובץ בספרייה שבה הסקריפט בוצע עם שם המודול והסיומת `.py`. במקרה זה הוא יחפש את `draw.py`. אם הוא נמצא, הוא ייובא. אם לא נמצא, הוא ימשיך לחפש מודולים מובנים.

ייתכן ששמתם לב שכאשר מייבאים מודול, נוצר קובץ `.pyc`. זהו קובץ Python קומפיל. Python מקמפלת קבצים לבייתקוד (bytecode) של Python כדי שלא יהיה צורך לפרסר את הקבצים בכל פעם שמודולים נטענים. אם קובץ `.pyc` קיים, הוא נטען במקום קובץ ה-`.py`. תהליך זה שקוף למשתמש.

### ייבוא אובייקטים של מודול לשמות המודרניים

ניימספייס (namespace) הוא מערכת שבה כל אובייקט נקרא ויכול להתבצע גישה אליו ב-Python. אנו מייבאים את הפונקציה `draw_game` לשמות המודרניים של הסקריפט הראשי על ידי שימוש בפקודת `from`.

    # game.py
    # import the draw module
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

ייתכן ששמתם לב שבדוגמה זו, שם המודול אינו מופיע לפני `draw_game`, כי אנחנו ציינו את שם המודול באמצעות הפקודה `import`.

היתרון ברישום זה הוא שאינך צריך לציין את המודול שוב ושוב. עם זאת, לא ניתן לשמות-מרחב לכלול שני אובייקטים באותו שם, ולכן הפקודה `import` עשויה להחליף אובייקט קיים בשמות המודרניים.


### ייבוא כל האובייקטים ממודול

ניתן להשתמש בפקודה `import *` כדי לייבא את כל האובייקטים במודול כך:

    # game.py
    # import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

זה עשוי להיות מעט מסוכן שכן שינויים במודול עשויים להשפיע על המודול שמייבא אותו, אבל זה קצר יותר ולא דורש ממך לציין כל אובייקט שאתה רוצה לייבא מהמודול.


### שם ייבוא מותאם

מודולים עשויים להיות נטענים תחת כל שם שאתה רוצה. זה שימושי כאשר מייבאים מודול בתנאים להשתמש בשם אותו שם בשאר הקוד.

לדוגמה, אם יש לך שני מודולים `draw` עם שמות שלאחרונה שונים, תוכל לבצע את הדברים הבאים:

    # game.py
    # import the draw module
    if visual_mode:
        # in visual mode, we draw using graphics
        import draw_visual as draw
    else:
        # in textual mode, we print out text
        import draw_textual as draw
    
    def main():
        result = play_game()
        # this can either be visual or textual depending on visual_mode
        draw.draw_game(result)


### אתחול מודול

הפעם הראשונה שמודול נטען לסקריפט Python רץ, הוא מאותחל על ידי ביצוע הקוד שבמודול פעם אחת. אם מודול אחר בקוד שלך מייבא את אותו מודול שוב, הוא לא ייטען שוב, כך שמשתנים מקומיים בתוך המודול מתנהגים כ"סינגלטון", כלומר הם מאותחלים פעם אחת בלבד.

ניתן להשתמש בזה לאתחול אובייקטים. לדוגמה:

    # draw.py
    
    def draw_game():
        # when clearing the screen we can use the main screen object initialized in this module
        clear_screen(main_screen)
        ...

    def clear_screen(screen):
        ...
        
    class Screen():
        ...

    # initialize main_screen as a singleton
    main_screen = Screen()


### הרחבת נתיב טעינת מודול

ישנם מספר דרכים להנחות את מפרש ה-Python היכן לחפש מודולים, בנוסף לספרייה המקומית המובנית והמודולים המובנים. ניתן להשתמש במשתנה הסביבה `PYTHONPATH` כדי לציין ספריות נוספות לחיפוש מודולים כך:

    PYTHONPATH=/foo python game.py

זה מבצע את `game.py`, ומאפשר לסקריפט לטעון מודולים מספריית `foo`, כמו גם מהספרייה המקומית.

ניתן גם להשתמש בפונקציה `sys.path.append`. בצע אותה *לפני* הפעלת הפקודה `import`:

    sys.path.append("/foo")

כעת ספריית `foo` נוספה לרשימת הנתיבים שבהם מחפשים מודולים.


### חקירת מודולים מובנים

בדוק את הרשימה המלאה של מודולים מובנים בספריית הסטנדרטים של Python [כאן](https://docs.python.org/3/library/).

שתי פונקציות חשובות מאוד נוחות לחקירת מודולים ב-Python - הפונקציות `dir` ו-`help`.

כדי לייבא את המודול `urllib`, שמאפשר לנו לקרוא נתונים מ-URLs, אנו `מייבאים` את המודול:

    # import the library
    import urllib

    # use it
    urllib.urlopen(...)
    
נוכל לבדוק אילו פונקציות מיושמות בכל מודול באמצעות פונקציית `dir`:

    >>> import urllib
    >>> dir(urllib)
    ['ContentTooShortError', 'FancyURLopener', 'MAXFTPCACHE', 'URLopener', '__all__', '__builtins__', 
    '__doc__', '__file__', '__name__', '__package__', '__version__', '_ftperrors', '_get_proxies', 
    '_get_proxy_settings', '_have_ssl', '_hexdig', '_hextochr', '_hostprog', '_is_unicode', '_localhost', 
    '_noheaders', '_nportprog', '_passwdprog', '_portprog', '_queryprog', '_safe_map', '_safe_quoters', 
    '_tagprog', '_thishost', `_typeprog`, `_urlopener`, `_userprog`, `_valueprog`, `addbase`, `addclosehook`, 
    `addinfo`, `addinfourl`, `always_safe`, `basejoin`, `c`, `ftpcache`, `ftperrors`, `ftpwrapper`, `getproxies`, 
    `getproxies_environment`, `getproxies_macosx_sysconf`, `i`, `localhost`, `main`, `noheaders`, `os`, 
    `pathname2url`, `proxy_bypass`, `proxy_bypass_environment`, `proxy_bypass_macosx_sysconf`, `quote`, 
    `quote_plus`, `reporthook`, `socket`, `splitattr`, `splithost`, `splitnport`, `splitpasswd`, `splitport`, 
    `splitquery`, `splittag`, `splittype`, `splituser`, `splitvalue`, `ssl`, `string`, `sys`, `test`, `test1`, 
    `thishost`, `time`, `toBytes`, `unquote`, `unquote_plus`, `unwrap`, `url2pathname`, `urlcleanup`, `urlencode`, 
    `urlopen`, `urlretrieve`]

כשאנחנו מוצאים את הפונקציה במודול שברצוננו להשתמש בה, אפשר לקרוא עוד אודותיה עם פונקציית `help`, באמצעות מפרש Python:

    help(urllib.urlopen)

### כתיבת חבילות

חבילות הן שמות-מרחב המכילות מספר רב של חבילות ומודולים. הן פשוט ספריות, אך עם דרישות מסוימות.

כל חבילה ב-Python היא ספרייה הכוללת **חייבת** על ידי קובץ מיוחד הנקרא `__init__.py`. קובץ זה, שיכול להיות ריק, מציין שהספרייה בה היא נמצאת היא חבילה ב-Python. כך ניתן לייבא אותה בדיוק כמו מודול.

אם ניצור ספרייה בשם `foo`, המסמנת את שם החבילה, נוכל ליצור מודול בתוך החבילה זו שנקראת `bar`. אז נוסיף את קובץ `__init__.py` בתוך ספריית `foo`.

כדי להשתמש במודול `bar`, אנחנו יכולים לייבא אותו בשתי דרכים:

    import foo.bar

או:

    from foo import bar

בדוגמה הראשונה לעיל, עלינו להשתמש בקידומת `foo` בכל פעם שאנחנו ניגשים למודול `bar`. בדוגמה השנייה, אין לנו צורך משום שכבר ייבאנו את המודול לשמות המודרניים של המודול שלנו.

הקובץ `__init__.py` יכול גם להחליט אילו מודולים החבילה מייצאת כ-API, תוך כדי שמירה על מודולים אחרים כפרטיים, על ידי החלפת המשתנה `__all__` כך:

    __init__.py:

    __all__ = ["bar"]

תרגיל
--------

בתרגיל זה, הדפס רשימה ממוינת על פי סדר אלפביתי של כל הפונקציות במודול `re` שמכילות את המילה `find`.