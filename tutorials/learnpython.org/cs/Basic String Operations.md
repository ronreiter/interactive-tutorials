Řetězce jsou kousky textu. Mohou být definovány jako cokoli mezi uvozovkami:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Jak vidíte, první věc, kterou jste se naučili, bylo tisk jednoduché věty. Tato věta byla v Pythonu uložena jako řetězec. Místo toho, abychom hned tiskli řetězce, prozkoumáme různé věci, které s nimi můžete dělat. Můžete také použít jednoduché uvozovky pro přiřazení řetězce. Budete ale mít problém, pokud hodnota, která má být přiřazena, samotná obsahuje jednoduché uvozovky. Například pro přiřazení řetězce v těchto závorkách (jednoduché uvozovky jsou ' ') potřebujete použít uvozovky dvojité, například takto:

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

To vytiskne 12, protože "Hello world!" má 12 znaků, včetně interpunkce a mezer.

    astring = "Hello world!"
    print(astring.index("o"))

To vytiskne 4, protože první výskyt písmene "o" je 4 znaky od prvního znaku. Všimněte si, že ve frázi jsou vlastně dvě písmena o - tato metoda rozpozná pouze první.

Ale proč nevytisklo 5? Není "o" pátým znakem v řetězci? Aby to bylo jednodušší, Python (a většina dalších programovacích jazyků) začíná od 0 místo 1. Takže index "o" je 4.

    astring = "Hello world!"
    print(astring.count("l"))

Pro ty z vás, kteří používají vtipné fonty, je to malé L, ne číslo jedna. Tohle počítá počet l v řetězci. Proto by to mělo vytisknout 3.

    astring = "Hello world!"
    print(astring[3:7])

To vytiskne výřez z řetězce, začínající na indexu 3 a končící na indexu 6. Ale proč 6 a ne 7? Opět, většina programovacích jazyků to dělá - ulehčuje to matematiku uvnitř závorek.

Pokud máte v závorkách jen jedno číslo, získáte jednotlivý znak na daném indexu. Pokud vynecháte první číslo, ale ponecháte dvojtečku, získáte výřez od začátku až k číslu, které jste ponechali. Pokud vynecháte druhé číslo, získáte výřez od prvního čísla až do konce.

Můžete dokonce do závorek vložit záporná čísla. Jsou to snadný způsob, jak začít na konci řetězce místo na začátku. Takže -3 znamená "3. znak od konce".

    astring = "Hello world!"
    print(astring[3:7:2])

To vytiskne znaky z řetězce od 3 do 7 při vynechání jednoho znaku. Toto je rozšířená syntaxe výřezu. Obecný tvar je [start:stop:krok].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Všimněte si, že oba vytisknou stejný výstup.

V jazyce C neexistuje funkce jako strrev pro otočení řetězce. Ale s výše uvedeným typem syntaxe výřezu můžete snadno otočit řetězec, například takto:

    astring = "Hello world!"
    print(astring[::-1])

Toto:

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Tato vytvářejí nový řetězec se všemi písmeny převedenými na velká a malá písmena, v uvedeném pořadí.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Toto se používá k určení, zda řetězec začíná něčím nebo končí něčím, v uvedeném pořadí. První vytiskne True, protože řetězec začíná "Hello". Druhé vytiskne False, protože řetězec určitě nekončí "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Toto rozděluje řetězec na hromadu řetězců seskupených dohromady v seznamu. Protože tento příklad se rozděluje podle mezery, první položka v seznamu bude "Hello" a druhá bude "world!".

Cvičení
--------

Zkuste opravit kód tak, aby vytiskl správné informace změnou řetězce.