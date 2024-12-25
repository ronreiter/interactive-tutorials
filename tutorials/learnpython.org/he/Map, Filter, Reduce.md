Map, Filter, and Reduce הם פרדיגמות של תכנות פונקציונלי. הן מאפשרות למתכנת (לך) לכתוב קוד פשוט וקצר יותר, מבלי בהכרח להטריד את עצמך עם פרטים קטנים כמו לולאות והתפצלות.

בעיקרון, שלוש הפונקציות הללו מאפשרות לך להחיל פונקציה על מספר איטרטורים, בפעולה אחת. ```map``` ו- ```filter``` מובנות כבר בפייתון (במודול ```__builtins__```) ולא דורשות ייבוא. אולם, ```reduce``` צריך להיות מיובא מכיוון שהוא נמצא במודול ```functools```. בואו נבין טוב יותר איך הן עובדות, נתחיל עם ```map```.

#### Map
לפונקציה ```map()``` בפייתון יש את התחביר הבא:

```map(func, *iterables)```

כאשר ```func``` היא הפונקציה עליה כל אלמנט ב-```iterables``` (כפי שמספרם) יוחל. שימו לב לכוכבית (```*```) על ```iterables```? זה אומר שיכולים להיות כמה שיותר איטרטורים, כל עוד ל-```func``` יש בדיוק את מספר זה כארגומנטים נדרשים. לפני שנמשיך לדוגמה, חשוב שתשימו לב לנקודות הבאות:

1. בפייתון 2, פונקציית ```map()``` מחזירה רשימה. אולם בפייתון 3, הפונקציה מחזירה ```map object```, שהוא אובייקט גנרטור. כדי לקבל את התוצאה כרשימה, ניתן לקרוא לפונקציה המובנית ```list()``` על אובייקט המפה. כלומר, ```list(map(func, *iterables))```
2. מספר הארגומנטים ל-```func``` חייב להיות מספר ה-```iterables``` שמצוינים. 

בואו נראה איך הכללים האלה מתבטאים בדוגמאות הבאות.

נניח שיש לי רשימה (```iterable```) של שמות חיות מחמד אהובים שלי, כולם באותיות קטנות ואני צריך אותם באותיות גדולות. באופן מסורתי, בתכנות פייתון רגיל, הייתי עושה משהו כזה:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

שייצר את הפלט ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

עם פונקציות ```map()```, זה לא רק קל יותר, אלא גם גמיש הרבה יותר. אני פשוט עושה כך:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

מה שייצר את אותה תוצאה. שימו לב שבהגדרת תחביר ה-```map()``` הנ"ל, ```func``` במקרה זה היא ```str.upper``` ו-```iterables``` היא רשימת ה-```my_pets``` -- רק איטרטור אחד. גם שימו לב שלא קראנו לפונקציה ```str.upper``` (לעשות כך: ```str.upper()```), כי פונקציית המפה עושה זאת עבורנו על כל אלמנט ברשימת ה-```my_pets```.

מה שיותר חשוב לציין הוא שהפונקציה ```str.upper``` דורשת בגדר ההגדרה שלה רק **ארגומנט אחד**, ולכן העברנו לה רק **איטרטור אחד**. לכן, _אם הפונקציה שאתה מעביר דורשת שניים, או שלושה, או n ארגומנטים_, אז _עליך להעביר לה שניים, שלושה או n איטרטורים_. בואו נבהיר זאת עם דוגמה נוספת.

נניח שיש לי רשימת שטחי מעגלים שחישבתי איפשהו, כל אחד ב-חמש ספרות אחרי הנקודה. ואני צריך לעגל כל אלמנט ברשימה לכמות הספרות על פי מקום האלמנט, כלומר שעלי לעגל את האלמנט הראשון ברשימה לספרה אחת אחרי הנקודה, האלמנט השני לשתי ספרות אחרי הנקודה, האלמנט השלישי לשלוש ספרות אחרי הנקודה, וכן הלאה. עם ```map()``` זה פשוט. בואו נראה איך.

Python כבר נותן לנו את הפונקציה המובנית ```round()``` שלוקחת שני ארגומנטים -- המספר לעיגול ומספר הספרות אחרי הנקודה לעיגול אליו. לכן, מכיוון שהפונקציה דורשת **שני** ארגומנטים, עלינו להעביר לה **שני** איטרטורים.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

ראו את היופי ב-```map()```? האם אתם מדמיינים את הגמישות שזה מאפשר?

הפונקציה ```range(1, 7)``` פועלת כארגומנט שני לפונקציה ```round``` (מספר הספרות הנדרשות אחרי הנקודה בכל איטרציה). כך ש-```map``` איטרטה על ```circle_areas```, ובאיטרציה הראשונה האלמנט הראשון של ```circle_areas```, ```3.56773``` מועבר יחד עם האלמנט הראשון של ```range(1,7)```, ```1``` ל-```round```, מה שהופך אותה ל-```round(3.56773, 1)```. במהלך האיטרציה השנייה, האלמנט השני של ```circle_areas```, ```5.57668``` עם האלמנט השני של ```range(1,7)```, ```2``` מועבר ל-```round``` מה שהופך זאת ל-```round(5.57668, 2)```. זה קורה עד שמגיעים לסוף רשימת ה-```circle_areas```.

אני בטוח שאתה שואל את עצמך: "מה אם אעביר איטרטור קצר או ארוך יותר מהאיטרטור הראשון? כלומר, מה אם אעביר ```range(1, 3)``` או ```range(1, 9999)``` כאיטרטור שני בפונקציה". והתשובה פשוטה: שום דבר! או.קיי, זה לא נכון. "שום דבר" קורה במובן שפונקציית ה-```map()``` לא תזרוק אף חריגה, היא פשוט תעבור על האלמנטים עד שלא יכולה למצוא ארגומנט שני לפונקציה, ואז פשוט עוצרת ומחזירה את התוצאה.

אז, לדוגמה, אם תבדוק ```result = list(map(round, circle_areas, range(1, 3)))```, לא תקבל אף שגיאה גם אם אורך ה-```circle_areas``` ואורך ה-```range(1, 3)``` שונים. במקום זאת, זה מה שפייתון עושה: היא לוקחת את האלמנט הראשון של ```circle_areas``` ואת האלמנט הראשון של ```range(1,3)``` ומעבירה אותם ל-```round```. ```round``` מעריכה אותו ואז שומרת את התוצאה. ואז היא ממשיכה לאיטרציה השנייה, האלמנט השני של ```circle_areas``` והאלמנט השני של ```range(1,3)```, ```round``` שומרת שוב. כעת, באיטרציה השלישית (ל-```circle_areas``` יש אלמנט שלישי), פייתון לוקחת את האלמנט השלישי של ```circle_areas``` ואז מנסה לקחת את האלמנט השלישי של ```range(1,3)``` אך כיוון שה-```range(1,3)``` אין לו אלמנט שלישי, זה עוצר ומחזיר את התוצאה, שבמקרה זה תהיה פשוט ```[3.6, 5.58]```.

קדימה, נסה את זה.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

אותו דבר קורה אם ```circle_areas``` קטן מאורך האיטרטור השני. פייתון פשוט עוצרת כשלא יכולה למצוא את האלמנט הבא באחד מהאיטרטורים.

כדי לחזק את הידע שלנו על פונקציית ה-```map()```, אנחנו עומדים להשתמש בה כדי לממש את הפונקציה ```zip()``` שלנו. הפונקציה ```zip()``` היא פונקציה שלוקחת מספר איטרטורים ואז יוצרת טופל המכיל כל אחד מהאלמנטים באיטרטורים. כמו ```map()```, בפייתון 3, זה מחזיר אובייקט גנרטור, שניתן בקלות להמיר לרשימה על ידי קריאה לפונקציה המובנית ```list``` עליה. השתמשו בסשן המפרשן הבא כדי לקבל אחיזה על ```zip()``` לפני שניצור אותו עם ```map()```.

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

כבונוס, האם אתה יכול לנחש מה יקרה בסשן הבא אם ```my_strings``` ו-```my_numbers``` לא יהיו באותו אורך? לא? נסה את זה! שנה את האורך של אחד מהם.

ממשיכים לפונקציה ```zip()``` שלנו!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

תראו את זה! יש לנו את אותה התוצאה כמו ```zip```.

גם שמתם לב שלא אפילו הייתי צריך ליצור פונקציה בשיטה הסטנדרטית ```def my_function()```? זה עד כמה גמישה ```map()```, ופייתון בכלליות, זה! פשוט השתמשתי בפונקציה ```lambda```. זה לא אומר ששימוש בשיטת הגדרת פונקציה סטנדרטית (של ```def function_name()```) לא מותר, זה עדיין מותר. פשוט העדפתי לכתוב פחות קוד (להיות "פייתונאי").

זה הכל על ```map```. ממשיכים ל-```filter()```

#### Filter
בעוד ש-```map()``` מעבירה כל אלמנט באיטרטור דרך פונקציה ומחזירה את התוצאה של כל האלמנטים שעברו דרך הפונקציה, ```filter()```, קודם כל, דורשת שהפונקציה תחזיר ערכי בוליאניים (אמת או שקר), ולאחר מכן מעבירה כל אלמנט באיטרטור דרך הפונקציה, "מסננת" את אלה שמחזירים שקר. יש לה את התחביר הבא:

```filter(func, iterable)```

הנקודות הבאות צריכות לצוין לגבי ```filter()```:

1. בניגוד ל-```map()```, נדרש רק איטרטור אחד.
2. ארגומנט ```func``` נדרש להחזיר סוג בוליאני. אם לא, ```filter``` פשוט תחזיר את האיטרטור שהועבר לה. גם, מאחר שצריך רק איטרטור אחד, זה מרומז ש-```func``` חייבת לקבל רק ארגומנט אחד.
3. ```filter``` מעבירה כל אלמנט באיטרטור דרך ```func``` ומחזירה **רק** את אלה שמעריכים לאמת. אני מתכוון, זה ממש שם בשם -- "פילטר".

בואו נראה כמה דוגמאות

הבאה היא רשימה (```iterable```) של הציונים של 10 תלמידים במבחן כימיה. בואו נסנן את אלה שעברו בציון גבוה מ-75... באמצעות ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

הדוגמה הבאה תהיה גלאי פלינדרומים. "פלינדרום" הוא מילה, ביטוי, או רצף שקוראים אותו אותו דבר מהסוף להתחלה. בואו נסנן את המילים שהן פלינדרומים מתוך טופל (```iterable```) של פלינדרומים חשודים.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

מה שאמור להחזיר את הפלט ```['madam', 'anutforajaroftuna']```.

מסודר, נכון? ולבסוף, ```reduce()```

#### Reduce
```reduce``` מחילה פונקציה **שני ארגומנטים** מצטברית על האלמנטים של איטרטור, באופן אופציונלי מתחילה בארגומנט התחלתי. יש לה את התחביר הבא:

```reduce(func, iterable[, initial])```

כאשר ```func``` היא הפונקציה שעליה כל אלמנט באיטרטור מופעל מצטברית, ו-```initial``` הוא הערך האופציונלי שמוצב לפני האלמנטים של האיטרטור בחישוב, ומשום כך משמש כברירת מחדל כשאין אלמנטים באיטרטור. הטעודות הבאות צריכות לציין לגבי ```reduce()```:
1. ```func``` דורשת שני ארגומנטים, הראשון מהם הוא האלמנט הראשון באיטרטור (אם ```initial``` לא מסופק) והאלמנט השני באיטרטור. אם ```initial``` מסופק, אז זה הופך לארגומנט הראשון ל-```func``` והאלמנט הראשון באיטרטור הופך לאלמנט השני.
2. ```reduce``` "מצמצם" (אני יודע, סלחו לי) את האיטרטור לערך אחד.

כרגיל, בואו נראה כמה דוגמאות.

בואו ניצור גרסה משלנו לפונקציה המובנית ```sum()``` של פייתון. הפונקציה ```sum()``` מחזירה את סכום כל הפריטים באיטרטור שהועבר אליו.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

התוצאה, כפי שתצפה היא ```68```.

אז, מה קרה?

כרגיל, הכל עניין של איטרציות: ```reduce``` לוקחת את האלמנט הראשון והשני ב-```numbers``` ומעבירה אותם בהתאמה ל-```custom_sum```. ```custom_sum``` מחשבת את הסכום שלהם ומחזירה אותו ל-```reduce```. ```reduce``` ואז לוקחת את התוצאה הזו ומחילה אותה כאלמנט ראשון ל-```custom_sum``` ולוקחת את האלמנט הבא (שלישי) ב-```numbers``` כאלמנט שני ל-```custom_sum```. זה עושה זאת ללא הפסקה (מצטברית) עד ש-```numbers``` מתמצה.

בואו נראה מה קורה כאשר אני משתמש בערך ההתחלתי האופציונלי.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

התוצאה, כפי שתצפה, היא ```78``` כי ```reduce```, בהתחלה, משתמש במשתנה ```10``` כארגומנט ראשון ל-```custom_sum```.

זה הכל על מפה, פילטר, וצמצום בפייתון. נסו את התרגילים למטה על מנת לעזור לאמת את ההבנה שלכם של כל פונקציה.

#### תרגיל
בתרגיל זה, תשתמשו בכל אחת מהפונקציות ```map```, ```filter```, ו-```reduce``` כדי לתקן קוד שבור.