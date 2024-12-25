Generatörer är väldigt enkla att implementera, men lite svåra att förstå.

Generatörer används för att skapa iteratorer, men på ett annat sätt. Generatörer är enkla funktioner som returnerar en itererbar uppsättning av objekt, ett i taget, på ett speciellt sätt.

När en iteration över en uppsättning objekt börjar med hjälp av for-satsen, körs generatören. När generatörens funktionskod når ett "yield"-uttalande, lämnar generatören tillbaka sin körning till for-loopen och returnerar ett nytt värde från uppsättningen. Generatörsfunktionen kan generera så många värden (möjligen oändligt) som den vill och ger varje i tur och ordning.

Här är ett enkelt exempel på en generatörsfunktion som returnerar 7 slumpmässiga heltal:

Denna funktion bestämmer själv hur de slumptal som ska genereras, och utför yield-uttalandena ett i taget, och pausar emellan för att ge körningen tillbaka till den huvudsakliga for-loopen.

Exercise
--------

Skriv en generatörsfunktion som returnerar Fibonacci-serien. De beräknas med följande formel: De två första numren i serien är alltid lika med 1, och varje efterföljande nummer som returneras är summan av de två senaste numren.
Tips: Kan du använda bara två variabler i generatörsfunktionen? Kom ihåg att tilldelningar kan göras samtidigt. Koden

kommer samtidigt att byta värdena på a och b.