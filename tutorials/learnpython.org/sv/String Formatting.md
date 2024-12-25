Python använder C-stil strängformatering för att skapa nya, formaterade strängar. Operatören "%" används för att formatera en uppsättning variabler inneslutna i en "tuple" (en lista av fast storlek), tillsammans med en formatsträng, som innehåller normal text tillsammans med "argument-specifiers", speciella symboler som "%s" och "%d".

Låt oss säga att du har en variabel som heter "name" med ditt användarnamn i, och du vill sedan skriva ut en hälsning till den användaren.

    # Detta skriver ut "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

För att använda två eller fler argument-specifiers, använd en tuple (parenteser):

    # Detta skriver ut "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Vilket objekt som helst som inte är en sträng kan formateras med operatören %s också. Strängen som returneras från "repr"-metoden för det objektet formateras som strängen. Till exempel:

    # Detta skriver ut: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Här är några grundläggande argument-specifiers du bör känna till:

`%s - Sträng (eller vilket objekt som helst med en strängrepresentation, som nummer)`

`%d - Heltal`

`%f - Flyttal`

`%.<antal siffror>f - Flyttal med ett fast antal siffror till höger om punkten.`

`%x/%X - Heltal i hex-representation (gemener/versaler)`

Övning
--------

Du kommer behöva skriva en formatsträng som skriver ut datan med följande syntax:
    `Hello John Doe. Your current balance is $53.44.`