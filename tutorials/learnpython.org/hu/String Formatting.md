A Python a C-stílusú karakterlánc formázást használja új, formázott karakterláncok létrehozására. A "%" operátor segítségével formázhatunk egy halmaz változót, amely egy "tuple"-ben (fix méretű lista) van zárva, a formátum karakterlánccal együtt, ami normál szöveget és "argumentum specifikálókat" tartalmaz, speciális szimbólumokat, mint a "%s" és "%d".

Tegyük fel, hogy van egy "name" nevű változód, amely a felhasználónevedet tartalmazza, és szeretnél egy üdvözlő szöveget kinyomtatni a felhasználónak.

    # Ez kiírja: "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Két vagy több argumentum specifikáló használatához használj tuple-t (zárójeleket):

    # Ez kiírja: "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Bármely objektum, amely nem karakterlánc, formázható a %s operátorral is. Az objektum "repr" metódusa által visszaadott karakterlánc formázott lesz, mint karakterlánc. Például:

    # Ez kiírja: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Itt van néhány alapvető argumentum specifikáló, amelyeket érdemes ismerni:

`%s - Karakterlánc (vagy bármely objektum, amelynek van karakterlánc reprezentációja, mint a számok)`

`%d - Egészszámok`

`%f - Lebegőpontos számok`

`%.<számjegyek száma>f - Lebegőpontos számok fix mennyiségű számjeggyel a pont jobb oldalán.`

`%x/%X - Egészszámok hexadecimális ábrázolásban (kisbetű/nagybetű)`

Exercise
--------

Olyan formátum karakterláncot kell írnod, amely az alábbi szintaxissal nyomtatja ki az adatokat:
    `Hello John Doe. Your current balance is $53.44.`