Python používá formátování řetězců ve stylu C k vytváření nových, formátovaných řetězců. Operátor "%" se používá k formátování množiny proměnných, uzavřených v "n-tici" (seznam s pevnou velikostí), společně s formátovacím řetězcem, který obsahuje normální text spolu s "specifikátory argumentů", speciálními symboly jako "%s" a "%d".

Řekněme, že máte proměnnou s názvem "name" se svým uživatelským jménem a chcete uživateli vypsat pozdrav.

    # Toto vytiskne "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Pro použití dvou nebo více specifikátorů argumentů použijte n-tici (závorky):

    # Toto vytiskne "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Jakýkoliv objekt, který není řetězec, lze také formátovat pomocí operátoru %s. Řetězec, který vrací metoda "repr" tohoto objektu, je formátován jako řetězec. Například:

    # Toto vytiskne: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Zde jsou některé základní specifikátory argumentů, které byste měli znát:


`%s - Řetězec (nebo jakýkoli objekt s řetězcovou reprezentací, jako jsou čísla)`

`%d - Celá čísla`

`%f - Čísla s plovoucí desetinnou čárkou`

`%.<počet číslic>f - Čísla s plovoucí desetinnou čárkou s pevným počtem číslic napravo od tečky.`

`%x/%X - Celá čísla v šestnáctkové reprezentaci (malé/velké písmena)`


Cvičení
--------

Budete muset napsat formátovací řetězec, který vytiskne data pomocí následující syntaxe:
    `Hello John Doe. Your current balance is $53.44.`