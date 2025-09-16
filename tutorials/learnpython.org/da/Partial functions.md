Du kan oprette delvise funktioner i python ved at bruge partial-funktionen fra functools-biblioteket.

Delvise funktioner gør det muligt at skabe en funktion med x parametre til en funktion med færre parametre og faste værdier sat for den mere begrænsede funktion.

Nødvendig import:

    from functools import partial

Denne kode vil returnere 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # opretter en ny funktion, der multiplicerer med 2
    dbl = partial(multiply, 2)
    print(dbl(4))

En vigtig note: standardværdierne starter med at erstatte variabler fra venstre. 2 vil erstatte x. y vil være lig med 4, når dbl(4) kaldes. Det gør ingen forskel i dette eksempel, men det gør det i eksemplet nedenfor.

Øvelse
------
Rediger den givne funktion ved at kalde partial() og erstatte de første tre variabler i func().  Print derefter med den nye delvise funktion ved kun at bruge én inputvariabel, så output bliver 60.