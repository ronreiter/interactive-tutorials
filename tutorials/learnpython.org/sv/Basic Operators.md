Detta avsnitt förklarar hur man använder grundläggande operatorer i Python.

### Aritmetiska Operatorer

Precis som i andra programmeringsspråk kan tilläggs-, subtraktions-, multiplikations- och divisionsoperatorerna användas med siffror.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Försök att förutsäga vad svaret kommer att bli. Följer Python prioriteringsreglerna?

En annan tillgänglig operator är moduloperatorn (%) som returnerar resten av heltalsdivisionen. dividend % divisor = rest.

    remainder = 11 % 3
    print(remainder)

Att använda två multiplikationssymboler skapar en potensrelation.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Använda Operatorer med Strängar

Python stödjer sammanfogning av strängar med hjälp av plustecknet:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python stödjer också multiplikation av strängar för att bilda en sträng med en upprepande sekvens:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Använda Operatorer med Listor

Listor kan sammanfogas med hjälp av plustecknet:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Precis som med strängar stödjer Python bildandet av nya listor med en upprepande sekvens med hjälp av multiplikationsoperatorn:

    print([1,2,3] * 3)

Övning
--------

Målet med denna övning är att skapa två listor kallade `x_list` och `y_list`,
som innehåller 10 instanser av variablerna `x` och `y`, respektive.
Du måste också skapa en lista kallad `big_list`, som innehåller
variablerna `x` och `y`, 10 gånger vardera, genom att sammanfoga de två listor du har skapat.