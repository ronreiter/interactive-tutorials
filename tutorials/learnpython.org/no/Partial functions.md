Du kan lage delvise funksjoner i Python ved å bruke del-funksjonen fra functools-biblioteket.

Delvise funksjoner lar en avlede en funksjon med x parametere til en funksjon med færre parametere og faste verdier satt for den mer begrensede funksjonen.

Importer det som trengs:

    from functools import partial

Denne koden vil returnere 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

En viktig merknad: standardverdiene vil begynne å erstatte variabler fra venstre. 2 erstatter x. y vil være lik 4 når dbl(4) kalles. Det gjør ingen forskjell i dette eksemplet, men det gjør det i eksemplet nedenfor.

Exercise
--------
Rediger funksjonen ved å kalle partial() og erstatte de første tre variablene i func(). Deretter skriver du ut med den nye delvise funksjonen ved å bruke bare én inputvariabel slik at utdataene tilsvarer 60.