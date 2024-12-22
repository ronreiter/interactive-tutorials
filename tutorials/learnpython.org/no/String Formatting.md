Python bruker C-stil strengformatering for å lage nye, formaterte strenger. "%" operatøren brukes til å formatere et sett av variabler omsluttet i en "tuple" (en liste med fast størrelse), sammen med en formatstreng, som inneholder vanlig tekst sammen med "argumentspesifikatorer", spesielle symboler som "%s" og "%d".

La oss si at du har en variabel kalt "name" med ditt brukernavn i den, og du ønsker å skrive ut en hilsen til den brukeren.

    # Dette skriver ut "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

For å bruke to eller flere argumentspesifikatorer, bruk en tuple (parenteser):

    # Dette skriver ut "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Ethvert objekt som ikke er en streng kan også formateres ved hjelp av %s operatøren. Strengen som returneres fra "repr" metoden til det objektet, formateres som strengen. For eksempel:

    # Dette skriver ut: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Her er noen grunnleggende argumentspesifikatorer du bør kjenne til:


`%s - String (eller ethvert objekt med en strengrepresentasjon, som tall)`

`%d - Heltall`

`%f - Flyttall`

`%.<antall sifre>f - Flyttall med et fast antall sifre til høyre for punktumet.`

`%x/%X - Heltall i heksadesimal representasjon (små bokstaver/store bokstaver)`


Exercise
--------

Du må skrive en formatstreng som skriver ut dataene ved å bruke følgende syntaks:
    `Hello John Doe. Your current balance is $53.44.`