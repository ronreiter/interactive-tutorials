Hver funktion i Python modtager et foruddefineret antal argumenter, hvis de er erklæret normalt, som dette:

    def myfunction(first, second, third):
        # gør noget med de 3 variabler
        ...

Det er muligt at erklære funktioner, der modtager et variabelt antal argumenter, ved at bruge følgende syntaks:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

Variablen "therest" er en liste over variabler, der modtager alle argumenter, der blev givet til "foo" funktionen efter de første 3 argumenter. Så at kalde `foo(1, 2, 3, 4, 5)` vil udskrive:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))

    foo(1, 2, 3, 4, 5)

Det er også muligt at sende funktionsargumenter ved hjælp af nøgleord, så rækkefølgen af argumenterne ikke er vigtig, ved at bruge følgende syntaks. Følgende kode giver følgende output:
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))


"Bar"-funktionen modtager 3 argumenter. Hvis et yderligere "action"-argument modtages, og det instruerer om at summere tallene, så udskrives summaen. Alternativt ved funktionen også, at den skal returnere det første argument, hvis værdien af "number" parametret, der blev sendt ind i funktionen, er lig med "first".

Exercise
--------

Udfyld funktionerne `foo` og `bar`, så de kan modtage et variabelt antal argumenter (3 eller flere). Funktion `foo` skal returnere antallet af ekstra modtagne argumenter. `Bar` skal returnere `True`, hvis argumentet med nøgleordet `magicnumber` er 7, og `False` ellers.