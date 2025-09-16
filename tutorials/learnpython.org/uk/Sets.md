Sets — це списки без дублікатів. Наприклад, якщо ви хочете зібрати список слів, використаних у абзаці:

    print(set("my name is Eric and Eric is my name".split()))

Це виведе список, що містить "my", "name", "is", "Eric" і, нарешті, "and". Оскільки інші слова речення вже містяться в множині, вони не вставляться повторно.

Множини є потужним інструментом у Python, оскільки вони можуть обчислювати різниці та перетини між іншими множинами. Наприклад, уявімо, що у вас є списки учасників подій A та B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Щоб дізнатися, які учасники відвідали обидві події, можна використовувати метод "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Щоб дізнатися, які учасники відвідали лише одну з подій, скористайтесь методом "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Щоб дізнатися, які учасники відвідали лише одну подію, а не іншу, скористайтесь методом "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Щоб отримати список всіх учасників, використовуйте метод "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

У наступній вправі, використовуйте надані списки, щоб вивести множину, що містить усіх учасників з події A, які не відвідали подію B.