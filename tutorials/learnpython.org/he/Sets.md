```
Sets are lists with no duplicate entries. Let's say you want to collect a list of words used in a paragraph:
```

קבוצות הן רשימות ללא ערכים כפולים. נניח שברצונך לאסוף רשימת מילים המופיעות בפסקה:

```
print(set("my name is Eric and Eric is my name".split()))
```

הפלט יהיה רשימה המכילה את "my", "name", "is", "Eric", ולבסוף "and". מכיוון ששאר המשפט משתמש במילים שכבר קיימות בקבוצה, הן אינן מוכנסות פעמיים.

קבוצות הן כלי חזק בפייתון מכיוון שהן יכולות לחשב הבדלים וחיתוכים בין קבוצות אחרות. לדוגמה, נניח שיש לך רשימת משתתפים באירועים A ו-B:

```
a = set(["Jake", "John", "Eric"])
print(a)
b = set(["John", "Jill"])
print(b)
```

כדי לגלות אילו חברים השתתפו בשני האירועים, ניתן להשתמש בשיטת "intersection":

```
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.intersection(b))
print(b.intersection(a))
```

כדי לגלות אילו חברים השתתפו רק באחד מהאירועים, השתמש בשיטת "symmetric_difference":

```
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.symmetric_difference(b))
print(b.symmetric_difference(a))
```

כדי לגלות אילו חברים השתתפו רק באירוע אחד ולא באחר, השתמש בשיטת "difference":

```
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.difference(b))
print(b.difference(a))
```

כדי לקבל רשימה של כל המשתתפים, השתמש בשיטת "union":

```
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.union(b))
```

תרגיל
--------

כדי לתרגל, השתמש ברשימות הנתונות להדפיס קבוצה המכילה את כל המשתתפים מאירוע A שלא השתתפו באירוע B.