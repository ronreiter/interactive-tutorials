Python gebruikt C-stijl tekenreeksopmaak om nieuwe, opgemaakte tekenreeksen te maken. De "%" operator wordt gebruikt om een set variabelen die zijn ingesloten in een "tuple" (een lijst met vaste grootte) op te maken, samen met een opmaakreeks die normale tekst bevat samen met "argument specificaties", speciale symbolen zoals "%s" en "%d".

Laten we zeggen dat je een variabele hebt genaamd "name" met je gebruikersnaam erin, en je wilt dan een begroeting aan die gebruiker tonen.

    # Dit print "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Om twee of meer argument specificaties te gebruiken, gebruik een tuple (haakjes):

    # Dit print "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Elk object dat geen tekenreeks is, kan ook worden opgemaakt met de %s operator. De tekenreeks die wordt geretourneerd door de "repr" methode van dat object wordt opgemaakt als de tekenreeks. Bijvoorbeeld:

    # Dit print: Een lijst: [1, 2, 3]
    mylist = [1,2,3]
    print("Een lijst: %s" % mylist)

Hier zijn enkele basis argument specificaties die je zou moeten kennen:


`%s - String (of elk object met een tekenreeksrepresentatie, zoals nummers)`

`%d - Gehele getallen`

`%f - Zwevende komma getallen`

`%.<aantal cijfers>f - Zwevende komma getallen met een vast aantal cijfers rechts van de punt.`

`%x/%X - Gehele getallen in hexadecimale representatie (lowercase/uppercase)`


Oefening
--------

Je moet een opmaakreeks schrijven die de gegevens afdrukt met de volgende syntax:
    `Hello John Doe. Your current balance is $53.44.`