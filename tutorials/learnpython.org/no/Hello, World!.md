Python er et veldig enkelt språk, og har en veldig rett frem syntaks. Det oppfordrer programmerere til å programmere uten boilerplate-kode (forberedt kode). Den enkleste instruksjonen i Python er "print"-instruksjonen - den skriver enkelt ut en linje (og inkluderer også en linjeskift, i motsetning til C).

Det er to hovedversjoner av Python, Python 2 og Python 3. Python 2 og 3 er ganske forskjellige. Denne veiledningen bruker Python 3, fordi den er mer semantisk korrekt og støtter nyere funksjoner.

For eksempel, en forskjell mellom Python 2 og 3 er `print`-utsagnet. I Python 2 er "print"-utsagnet ikke en funksjon, og blir derfor brukt uten parenteser. Men, i Python 3 er det en funksjon, og må brukes med parenteser.

For å skrive ut en streng i Python 3, skriver man bare:

    print("This line will be printed.")

### Innrykk

Python bruker innrykk for blokker, i stedet for krøllete klammer. Både tabulatorer og mellomrom støttes, men standard innrykk krever at standard Python-kode bruker fire mellomrom. For eksempel:

    x = 1
    if x == 1:
        # innrykket fire mellomrom
        print("x is 1.")

Øvelse
--------

Bruk "print"-funksjonen for å skrive ut linjen "Hello, World!".