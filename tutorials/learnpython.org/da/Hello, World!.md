Python er et meget enkelt sprog og har en meget ligetil syntaks. Det opfordrer programmører til at programmere uden overflødig (forberedt) kode. Den simpleste anvisning i Python er "print" anvisningen - den udskriver blot en linje (og inkluderer også en ny linje, i modsætning til i C).

Der er to store Python-versioner, Python 2 og Python 3. Python 2 og 3 er ret forskellige. Denne tutorial bruger Python 3, fordi det er mere semantisk korrekt og understøtter nyere funktioner.

For eksempel er en forskel mellem Python 2 og 3 `print`-udsagnet. I Python 2 er "print"-udsagnet ikke en funktion, og derfor anvendes det uden parenteser. Men i Python 3 er det en funktion og skal derfor anvendes med parenteser.

For at udskrive en streng i Python 3, skal du blot skrive:

    print("This line will be printed.")

### Indrykning

Python bruger indrykning for blokke i stedet for tuborgklammer. Både tabulatorer og mellemrum er understøttet, men standardindrykning kræver, at standard Python-kode bruger fire mellemrum. For eksempel:

    x = 1
    if x == 1:
        # indrykket fire mellemrum
        print("x is 1.")

Øvelse
--------

Brug "print" funktionen til at udskrive linjen "Hello, World!".