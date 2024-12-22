Du kan skapa partial-funktioner i Python genom att använda partial-funktionen från functools-biblioteket.

Partial-funktioner gör det möjligt att härleda en funktion med x parametrar till en funktion med färre parametrar och fasta värden inställda för den mer begränsade funktionen.

Nödvändig import:

    from functools import partial

Denna kod kommer att returnera 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # skapa en ny funktion som multiplicerar med 2
    dbl = partial(multiply, 2)
    print(dbl(4))

En viktig notering: standardvärdena börjar ersätta variabler från vänster. 2 kommer att ersätta x. y kommer att vara lika med 4 när dbl(4) kallas. Det gör ingen skillnad i detta exempel, men det gör det i exemplet nedan.

Övning
------
Redigera den tillhandahållna funktionen genom att kalla partial() och ersätta de första tre variablerna i func(). Skriv sedan ut med den nya partial-funktionen genom att endast använda en indatavariabel så att resultatet blir 60.