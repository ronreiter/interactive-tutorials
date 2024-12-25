Sets olyan listák, melyekben nincsenek duplikált bejegyzések. Tegyük fel, hogy össze szeretnél gyűjteni egy listát a bekezdésben szereplő szavakról:

    print(set("my name is Eric and Eric is my name".split()))

Ez egy listát fog kiírni, amely tartalmazza a "my", "name", "is", "Eric" és végül "and" szavakat. Mivel a mondat többi része olyan szavakat használ, amelyek már benne vannak a halmazban, ezek nem kerülnek kétszer bele.

A halmazok erőteljes eszközt jelentenek a Pythonban, mivel képesek kiszámítani a különbségeket és metszeteket más halmazokkal. Például, tegyük fel, hogy van egy listád az A és B eseményeken résztvevőkről:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Ahhoz, hogy megtudd, mely tagok vettek részt mindkét eseményen, használhatod a "intersection" metódust:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Ahhoz, hogy megtudd, mely tagok vettek részt csak az egyik eseményen, használd a "symmetric_difference" metódust:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Ahhoz, hogy megtudd, mely tagok vettek részt csak az egyik és nem a másik eseményen, használd a "difference" metódust:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Ahhoz, hogy megkapj egy listát az összes résztvevőről, használd az "union" metódust:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Az alábbi feladatban használd a megadott listákat, hogy kiírj egy halmazt, amely az A esemény minden résztvevőjét tartalmazza, akik nem vettek részt a B eseményen.