Python bruger C-stil strengformatering til at skabe nye, formaterede strenge. "%" operatoren anvendes til at formatere et sæt af variabler indkapslet i en "tuple" (en liste af fast størrelse), sammen med en formatstreng, der indeholder almindelig tekst sammen med "argument specifikatorer", specielle symboler som "%s" og "%d".

Lad os sige, du har en variabel kaldet "name" med dit brugernavn i, og du vil gerne udskrive en hilsen til den bruger.

    # Dette udskriver "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

For at bruge to eller flere argument specifikatorer, brug en tuple (parenteser):

    # Dette udskriver "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Enhver objekt, der ikke er en streng, kan også formateres ved hjælp af %s operatoren. Strengen, der returneres fra "repr" metoden af det objekt, bliver formateret som strengen. For eksempel:

    # Dette udskriver: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Her er nogle basale argument specifikatorer, du bør kende til:

`%s - String (eller et hvert objekt med en strengrepræsentation, som tal)`

`%d - Hele tal`

`%f - Flydende kommatals tal`

`%.<antal cifre>f - Flydende kommatal med et fast antal cifre til højre for punktet.`

`%x/%X - Hele tal i hex repræsentation (små bogstaver/store bogstaver)`

Øvelse
--------

Du skal skrive en formatstreng, der udskriver dataen ved hjælp af følgende syntaks:
    `Hello John Doe. Your current balance is $53.44.`