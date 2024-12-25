Hver funksjon i Python mottar et forhåndsdefinert antall argumenter, hvis den er deklarert normalt, slik:

    def myfunction(first, second, third):
        # gjør noe med de 3 variablene
        ...

Det er mulig å deklarere funksjoner som mottar et variabelt antall argumenter, ved å bruke følgende syntaks:

    def foo(first, second, third, *therest):
        print("Første: %s" % first)
        print("Andre: %s" % second)
        print("Tredje: %s" % third)
        print("Og resten... %s" % list(therest))

Variabelen "therest" er en liste over variabler som mottar alle argumentene som ble gitt til "foo"-funksjonen etter de første 3 argumentene. Så å kalle `foo(1, 2, 3, 4, 5)` vil skrive ut:

    def foo(first, second, third, *therest):
        print("Første: %s" %(first))
        print("Andre: %s" %(second))
        print("Tredje: %s" %(third))
        print("Og resten... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

Det er også mulig å sende funksjonsargumenter ved bruk av nøkkelord, slik at rekkefølgen på argumentene ikke har betydning, ved å bruke følgende syntaks. Følgende kode gir følgende utdata: 
```Summen er: 6
    Resultat: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("Summen er: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Resultat: %d" %(result))

Funksjonen "bar" mottar 3 argumenter. Hvis et ytterligere "action"-argument mottas, og det instruerer å summere tallene, blir summen skrevet ut. Alternativt vet funksjonen at den må returnere det første argumentet, hvis verdien av "number"-parameteren, som sendes inn i funksjonen, er lik "first".

Exercise
--------

Fyll inn funksjonene `foo` og `bar` slik at de kan motta et variabelt antall argumenter (3 eller flere)
Funksjonen `foo` må returnere antall ekstra argumenter mottatt.
`bar` må returnere `True` hvis argumentet med nøkkelordet `magicnumber` er verdt 7, og `False` ellers.