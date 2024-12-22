Je kunt gedeeltelijke functies in Python maken door de functie `partial` uit de `functools` bibliotheek te gebruiken.

Gedeeltelijke functies staan toe om een functie met x parameters af te leiden naar een functie met minder parameters en vaste waarden ingesteld voor de meer beperkte functie.

Benodigde import:

    from functools import partial

Deze code zal 8 retourneren.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # maak een nieuwe functie die vermenigvuldigt met 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Een belangrijke opmerking: de standaardwaarden zullen beginnen met het vervangen van variabelen vanaf links. De 2 zal x vervangen. y zal gelijk zijn aan 4 wanneer dbl(4) wordt aangeroepen. Het maakt in dit voorbeeld geen verschil, maar wel in het onderstaande voorbeeld.

Oefening
--------
Bewerk de gegeven functie door `partial()` aan te roepen en de eerste drie variabelen in `func()` te vervangen. Print vervolgens met de nieuwe gedeeltelijke functie met slechts één invoervariabele zodat de uitvoer 60 is.