Elke functie in Python ontvangt een vooraf vastgesteld aantal argumenten, als deze normaal wordt gedeclareerd, zoals dit:

Het is mogelijk om functies te declareren die een variabel aantal argumenten ontvangen, met de volgende syntaxis:

De variabele "therest" is een lijst van variabelen, die alle argumenten ontvangt die aan de "foo"-functie zijn gegeven na de eerste 3 argumenten. Dus het aanroepen van `foo(1, 2, 3, 4, 5)` zal het volgende afdrukken:

Het is ook mogelijk om functies argumenten te sturen op basis van sleutelwoorden, zodat de volgorde van het argument niet uitmaakt, met behulp van de volgende syntaxis. De volgende code geeft de volgende uitvoer: 
```De som is: 6
    Resultaat: 1```

De "bar"-functie ontvangt 3 argumenten. Als er een extra "action"-argument wordt ontvangen, dat instrueert om de getallen op te tellen, dan wordt de som afgedrukt. Alternatief weet de functie ook dat het het eerste argument moet retourneren, als de waarde van de "number"-parameter, doorgegeven aan de functie, gelijk is aan "first".

Exercise
--------

Vul de `foo` en `bar` functies in zodat ze een variabele hoeveelheid argumenten kunnen ontvangen (3 of meer)
De `foo` functie moet het aantal extra ontvangen argumenten retourneren.
De `bar` moet `True` retourneren als het argument met het sleutelwoord `magicnumber` de waarde 7 heeft, en `False` anders.