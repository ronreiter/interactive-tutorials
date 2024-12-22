# Lists are very similar to arrays. They can contain any type of variable, and they can contain as many variables as you wish. Lists can also be iterated over in a very simple manner. Here is an example of how to build a list.

רשימות דומות מאוד למערכים. הן יכולות להכיל כל סוג של משתנה, והן יכולות להכיל כמה משתנים שתרצה. ניתן גם לעבור על רשימות בצורה פשוטה מאוד. הנה דוגמה כיצד לבנות רשימה.

```python
mylist = []
mylist.append(1)
mylist.append(2)
mylist.append(3)
print(mylist[0]) # prints 1
print(mylist[1]) # prints 2
print(mylist[2]) # prints 3

# prints out 1,2,3
for x in mylist:
    print(x)
```

גישה לאינדקס שאינו קיים מחוללת חריגה (שגיאה).

```python
mylist = [1,2,3]
print(mylist[10])
```

Exercise
--------

בתרגיל זה, יהיה עליך להוסיף מספרים ומחרוזות לרשימות הנכונות תוך שימוש בשיטת הרשימה "append". עליך להוסיף את המספרים 1,2 ו-3 לרשימה "numbers", ואת המילים 'hello' ו-'world' למשתנה strings.

יהיה עליך גם למלא את המשתנה second_name עם השם השני ברשימת names, תוך שימוש באופרטור הסוגריים `[]`. שים לב שהאינדקס מבוסס על אפס, כך שאם אתה רוצה לגשת לאיבר השני ברשימה, האינדקס שלו יהיה 1.