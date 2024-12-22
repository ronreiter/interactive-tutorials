### Vad är funktioner?

Funktioner är ett bekvämt sätt att dela upp din kod i användbara block, vilket gör att vi kan organisera vår kod, göra den mer läsbar, återanvända den och spara tid. Funktioner är också ett nyckelsätt att definiera gränssnitt så att programmerare kan dela sin kod.

### Hur skriver man funktioner i Python?

Som vi har sett i tidigare handledningar använder Python block.

Ett block är ett kodområde skrivet i följande format:

    block_head:
        1st block line
        2nd block line
        ...

Där en block line är mer Python-kod (även ett annat block), och block head har följande format:
block_keyword block_name(argument1,argument2, ...)
Blocknyckelord du redan känner till är "if", "for" och "while".

Funktioner i python definieras med hjälp av blocknyckelordet "def", följt av funktionens namn som blockets namn.
Till exempel:

    def my_function():
        print("Hello From My Function!")


Funktioner kan också ta emot argument (variabler som skickas från anroparen till funktionen).
Till exempel:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Funktioner kan returnera ett värde till anroparen, med hjälp av nyckelordet 'return'.
Till exempel:

    def sum_two_numbers(a, b):
        return a + b

### Hur anropar man funktioner i Python?

Skriv helt enkelt funktionens namn följt av (), där eventuellt nödvändiga argument placeras inom parenteserna.
Till exempel, låt oss anropa funktionerna som skrevs ovan (i det tidigare exemplet):

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


Övning
--------

I denna övning kommer du att använda en befintlig funktion, och samtidigt lägga till din egen för att skapa ett fullt fungerande program.

1. Lägg till en funktion som heter `list_benefits()` som returnerar följande lista av strängar: "Mer organiserad kod", "Mer läsbar kod", "Enklare kodåteranvändning", "Låter programmerare dela och koppla samman kod"

2. Lägg till en funktion som heter `build_sentence(info)` som tar emot ett enda argument innehållande en sträng och returnerar en mening som börjar med den givna strängen och slutar med strängen " is a benefit of functions!"

3. Kör och se alla funktioner samverka!