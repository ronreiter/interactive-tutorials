בפיתוח תוכנה, מודול הוא חלק של תוכנה אשר יש לו פונקציונליות ספציפית. לדוגמה, כאשר בונים משחק פינג פונג, מודול אחד יכול להיות אחראי על הלוגיקה של המשחק ומודול אחר מצייר את המשחק על המסך. כל מודול מורכב מקובץ שונה, שיכול להיות נערך בנפרד.

### כתיבת מודולים

מודולים בפייתון הם פשוט קבצי פייתון עם סיומת .py. שם המודול זהה לשם הקובץ. מודול פייתון יכול להכיל קבוצה של פונקציות, מחלקות או משתנים שהוגדרו וממומשו. הדוגמה לעיל כוללת שני קבצים:

mygame/

- mygame/game.py

- mygame/draw.py

הסקריפט `game.py` בפייתון מממש את המשחק. הוא משתמש בפונקציה `draw_game` מקובץ `draw.py`,
במילים אחרות, המודול `draw` אשר מממש את הלוגיקה לציור המשחק על המסך.

מודולים מיובאים ממודולים אחרים תוך שימוש בפקודת `import`. בדוגמה זו, סקריפט `game.py` עשוי
להיראות כך:

```python
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
```

המודול `draw` עשוי להיראות כך:

```python
# draw.py

def draw_game():
    ...

def clear_screen(screen):
    ...
```

בדוגמה זו, המודול `game` מייבא את המודול `draw`, מה שמאפשר לו להשתמש בפונקציות ממומשות במודול זה. הפונקציה `main` משתמשת בפונקציה מקומית `play_game` להרצת המשחק, ואחר כך מציירת את התוצאה של המשחק באמצעות פונקציה ממומשת במודול `draw` הנקרא `draw_game`. כדי להשתמש בפונקציה `draw_game` מהממודול `draw`, אנו צריכים לציין באיזה מודול הפונקציה ממומשת, באמצעות האופרטור נקודה. כדי להפנות לפונקציה `draw_game` מהממודול `game`, יש לייבא את המודול `draw` ולאחר מכן לקרוא `draw.draw_game()`.

כאשר הפקודה `import draw` רצה, מפרש פייתון מחפש קובץ בספרייה שבה הסקריפט הורץ עם שם המודול וסיומת `.py`. במקרה זה הוא יחפש `draw.py`. אם נמצא, הוא ייובא. אם לא נמצא, הוא ימשיך לחפש מודולים מובנים.

ייתכן ששמתם לב שכאשר מייבאים מודול, נוצר קובץ `.pyc`. זהו קובץ פייתון מורכב. 
פייתון מרכיב קבצים לקוד בייטים של פייתון כך שלא יהיה צורך לנתח את הקבצים בכל פעם שנטענים המודולים. אם קובץ `.pyc` קיים, הוא נטען במקום קובץ `.py`. תהליך זה נפרד למשתמש.

### ייבוא אובייקטים ממודול למרחב השמות הנוכחי

מרחב שמות הוא מערכת שבה לכל אובייקט יש שם וניתן לגשת אליו בפייתון. אנחנו מייבאים את הפונקציה `draw_game` למרחב שמות של הסקריפט הראשי תוך שימוש בפקודת `from`.

```python
# game.py
# import the draw module
from draw import draw_game

def main():
    result = play_game()
    draw_game(result)
```

ייתכן ששמתם לב שבדוגמה הזו, שם המודול לא מופיע לפני `draw_game`, מכיוון שציינו את שם המודול תוך שימוש בפקודת `import`.

היתרונות של הרישום הזה הוא שלא תצטרכו להצביע על המודול שוב ושוב. עם זאת, מרחב שמות לא יכול להכיל שני אובייקטים עם אותו שם, כך שהפקודה `import` עשויה להחליף אובייקט קיים במרחב השמות.

### ייבוא כל האובייקטים ממודול

ניתן להשתמש בפקודת `import *` לייבוא כל האובייקטים ממודול כך:

# game.py
# import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

זה עשוי להיות קצת מסוכן כי שינויים במודול עלולים להשפיע על המודול המייבא אותו, אך הרישום קצר יותר ואין צורך לציין כל אובייקט שתרצו לייבא מהמודול.

### שם ייבוא מותאם אישית

ניתן לטעון מודולים תחת כל שם שתרצו. זה נוח בעת ייבוא מודול מותנה לשימוש בשם זהה לשאר הקוד.

לדוגמה, אם יש לכם שני מודולים `draw` עם שמות שונים מעט, תוכלו לעשות זאת:

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


### אתחול מודולים

בפעם הראשונה שמודול נטען לתוך סקריפט פייתון רץ, הוא מאותחל על ידי ביצוע הקוד במודול פעם אחת. אם מודול אחר בקוד שלך מייבא את המודול הזה שוב, הוא לא ייטען שוב, כך שמשתנים מקומיים במודול פועלים כ"סינגלטון", כלומר הם מאותחלים פעם אחת בלבד.

ניתן להשתמש בזה כדי לאתחל אובייקטים.
לדוגמה:

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

### הרחבת נתיב טעינת מודולים

ישנם כמה דרכים להסביר למפרש פייתון היכן לחפש מודולים, מעבר לספרייה המקומית והמודולים המובנים כברירת מחדל. ניתן להשתמש במשתנה הסביבה `PYTHONPATH` כדי לציין ספריות נוספות לחיפוש מודולים כך:

PYTHONPATH=/foo python game.py

    זה מריץ את `game.py`, ומאפשר לסקריפט לטעון מודולים מספריית `foo`, כמו גם מהספרייה המקומית.
    
    ניתן גם להשתמש בפונקציה `sys.path.append`. יש לבצע אותה *לפני* ריצת פקודת `import`:
    
    ```python
    sys.path.append("/foo")

כעת נוספה ספריית `foo` לרשימת הנתיבים שבהם מחפשים מודולים.

### בדיקת מודולים מובנים

בדוק את הרשימה המלאה של המודולים המובנים בספריית התקן של פייתון [כאן](https://docs.python.org/3/library/).

שתי פונקציות מאוד חשובות שימושיות כאשר בודקים מודולים בפייתון – הפונקציות `dir` ו-`help`.

כדי לייבא את המודול `urllib`, שמאפשר לנו לקרוא נתונים מכתובות URL, אנו `מייבאים` את המודול:

# import the library
    import urllib
    
    # use it
    urllib.urlopen(...)

אנחנו יכולים לבדוק אילו פונקציות ממומשות בכל מודול על ידי שימוש בפונקציה `dir`:

    >>> import urllib
    >>> dir(urllib)
    ['ContentTooShortError', 'FancyURLopener', 'MAXFTPCACHE', 'URLopener', '__all__', '__builtins__', 
    '__doc__', '__file__', '__name__', '__package__', '__version__', '_ftperrors', '_get_proxies', 
    '_get_proxy_settings', '_have_ssl', '_hexdig', '_hextochr', '_hostprog', '_is_unicode', '_localhost', 
    '_noheaders', '_nportprog', '_passwdprog', '_portprog', '_queryprog', '_safe_map', '_safe_quoters', 
    '_tagprog', '_thishost', '_typeprog', '_urlopener', '_userprog', '_valueprog', 'addbase', 'addclosehook', 
    'addinfo', 'addinfourl', 'always_safe', 'basejoin', 'c', 'ftpcache', 'ftperrors', 'ftpwrapper', 'getproxies', 
    'getproxies_environment', 'getproxies_macosx_sysconf', 'i', 'localhost', 'main', 'noheaders', 'os', 
    'pathname2url', 'proxy_bypass', 'proxy_bypass_environment', 'proxy_bypass_macosx_sysconf', 'quote', 
    'quote_plus', 'reporthook', 'socket', 'splitattr', 'splithost', 'splitnport', 'splitpasswd', 'splitport', 
    'splitquery', 'splittag', 'splittype', 'splituser', 'splitvalue', 'ssl', 'string', 'sys', 'test', 'test1', 
    'thishost', 'time', 'toBytes', 'unquote', 'unquote_plus', 'unwrap', 'url2pathname', 'urlcleanup', 'urlencode', 
    'urlopen', 'urlretrieve']

כשאנחנו מוצאים את הפונקציה במודול שאנחנו רוצים להשתמש בה, אנחנו יכולים לקרוא עוד עליה עם הפונקציה `help`, תוך שימוש במפרש פייתון:

help(urllib.urlopen)

### כתיבת חבילות

חבילות הן מרחבי שמות המכילים מספר חבילות ומודולים. הם פשוט ספריות, אבל עם דרישות מסוימות.

כל חבילה בפייתון היא ספרייה שחייבת **להכיל** קובץ מיוחד הנקרא `__init__.py`. קובץ זה, שיכול להיות ריק, מציין שהספרייה שהוא בתוכה היא חבילת פייתון. ככה ניתן לייבא אותה באותו אופן כמו מודול.

אם ניצור ספרייה הנקראת `foo`, שמציינת את שם החבילה, נוכל אז ליצור מודול בתוך החבילה הזו שנקרא `bar`. ואז נוסיף את הקובץ `__init__.py` בתוך הספרייה `foo`.

כדי להשתמש במודול `bar`, אנו יכולים לייבא אותו בשתי דרכים:

    import foo.bar

או:

    from foo import bar

בדוגמה הראשונה לעיל, עלינו להשתמש בתחילית `foo` בכל פעם שאנו ניגשים למודול `bar`. בדוגמה השנייה, לא נצטרך, מכיוון שייבאנו את המודול למרחב השמות של המודול שלנו.

קובץ `__init__.py` יכול גם להחליט אילו מודולים החבילה מייצאת כ-API, תוך שמירה על מודולים אחרים כמודולים פנימיים, על ידי החלפת משתנה `__all__` כך:

    __init__.py:
    
    __all__ = ["bar"]

תרגיל
--------

בתרגיל זה, הדפס רשימה ממויינת לפי סדר אלפביתי של כל הפונקציות במודול `re` שמכילות את המילה `find`.