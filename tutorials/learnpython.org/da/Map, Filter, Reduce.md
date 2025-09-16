Map, Filter, og Reduce er paradigmer inden for funktionel programmering. De gør det muligt for programmøren (dig) at skrive simplere, kortere kode uden nødvendigvis at skulle bekymre sig om detaljer som loops og forgreninger.

Essentielt tillader disse tre funktioner dig at anvende en funktion på en række iterables i ét tag. ```map``` og ```filter``` er indbyggede i Python (i modulet ```__builtins__```) og kræver ingen import. ```reduce``` skal dog importeres, da den befinder sig i modulet ```functools```. Lad os få en bedre forståelse af, hvordan de alle fungerer, startende med ```map```.

#### Map
Funktionen ```map()``` i Python har følgende syntaks:

```map(func, *iterables)```

Hvor ```func``` er den funktion, som hvert element i ```iterables``` (så mange som de er) vil blive anvendt på. Bemærk asterisket (```*```) på ```iterables```? Det betyder, at der kan være så mange iterables som muligt, så længe ```func``` har det præcise antal nødvendige inputargumenter. Før vi går videre til et eksempel, er det vigtigt, at du bemærker følgende:

1. I Python 2 returnerer funktionen ```map()``` en liste. I Python 3 returnerer funktionen derimod et ```map object```, som er et generator objekt. For at få resultatet som en liste kan den indbyggede funktion ```list()``` kaldes på map-objektet. Dvs. ```list(map(func, *iterables))```
2. Antallet af argumenter til ```func``` skal være antallet af opstillede ```iterables```.

Lad os se, hvordan disse regler spiller ud med følgende eksempler.

Lad os sige, at jeg har en liste (```iterable```) med mine yndlingskæledyrs navne, alle i små bogstaver, og jeg har brug for dem i store bogstaver. Traditionelt ville jeg på almindelig Python-vis gøre noget som dette:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Som derefter ville udskrive ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Med ```map()```-funktioner er det ikke kun nemmere, men det er også meget mere fleksibelt. Jeg vil simpelthen gøre dette:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Som også ville udskrive det samme resultat. Bemærk, at i henhold til den definerede ```map()```-syntaks ovenfor er ```func``` i dette tilfælde ```str.upper``` og ```iterables``` er listen ```my_pets``` -- kun en enkelt iterable. Bemærk også, at vi ikke kaldte funktionen ```str.upper``` (ved at gøre dette: ```str.upper()```), da map-funktionen gør det for os på _hvert element i listen ```my_pets```_.

Det er desuden vigtigt at bemærke, at funktionen ```str.upper``` per definition kun kræver **et** argument, og derfor sendte vi kun **en** iterable til den. Så hvis _funktionen, du passerer, kræver to, tre eller n argumenter_, skal _du give den to, tre eller n iterables_. Lad mig tydeliggøre dette med et andet eksempel.

Lad os sige, at jeg har en liste over cirkelarealer, som jeg har beregnet et sted, alle med fem decimaler. Og jeg skal runde hvert element i listen op til dets position decimaler, hvilket betyder, at jeg skal runde den første element i listen op til én decimal, det andet element i listen til to decimaler, det tredje element i listen til tre decimaler osv. Med ```map()``` er dette et stykke kage. Lad os se hvordan.

Python har allerede givet os den indbyggede funktion ```round()```, der tager to argumenter -- tallet, der skal rundes op, og antallet af decimaler, som tallet skal rundes op til. Da funktionen kræver **to** argumenter, er vi nødt til at give **to** iterables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Kan du se skønheden i ```map()```? Kan du forestille dig den fleksibilitet, dette giver?

Funktionen ```range(1, 7)``` fungerer som det andet argument til funktionen ```round``` (antallet af nødvendige decimaler per iteration). Så når ```map``` itererer gennem ```circle_areas```, under den første iteration sendes det første element af ```circle_areas```, ```3.56773```, sammen med det første element af ```range(1,7)```, ```1```, til ```round```, hvilket i realiteten bliver til ```round(3.56773, 1)```. Under den anden iteration sendes det andet element af ```circle_areas```, ```5.57668```, sammen med det andet element af ```range(1,7)```, ```2```, til ```round```, hvilket gør det til ```round(5.57668, 2)```. Dette fortsætter, indtil slutningen af listen ```circle_areas```.

Jeg er sikker på, du tænker: "Hvad hvis jeg sender en iterable, der er mindre eller større end længden på den første iterable? Det vil sige, hvad hvis jeg sender ```range(1, 3)``` eller ```range(1, 9999)``` som den anden iterable i ovenstående funktion". Og svaret er simpelt: intet! Okay, det er ikke helt sandt. "Intet" sker i den forstand, at funktionen ```map()``` ikke vil kaste en undtagelse, den vil blot iterere over elementerne, indtil den ikke kan finde et andet argument til funktionen, på hvilket tidspunkt den simpelthen stopper og returnerer resultatet.

Så, for eksempel, hvis du evaluerer ```result = list(map(round, circle_areas, range(1, 3)))```, vil du ikke få nogen fejl, selvom længden af ```circle_areas``` og længden af ```range(1, 3)``` adskiller sig. I stedet gør Python dette: Den tager det første element af ```circle_areas``` og det første element af ```range(1,3)``` og sender det til ```round```. ```round``` evaluerer det og gemmer resultatet. Derefter går den videre til anden iteration, andet element af ```circle_areas``` og andet element af ```range(1,3)```, ```round``` gemmer det igen. Nu, i tredje iteration (```circle_areas``` har et tredje element), tager Python det tredje element af ```circle_areas``` og prøver at tage det tredje element af ```range(1,3)```, men eftersom ```range(1,3)``` ikke har et tredje element, stopper Python simpelthen og returnerer resultatet, som i dette tilfælde blot vil være ```[3.6, 5.58]```. 

Gå videre, prøv det.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)


Det samme sker, hvis ```circle_areas``` er kortere end længden på den anden iterable. Python stopper simpelthen, når den ikke kan finde næste element i en af iterablesne. 

For at konsolidere vores viden om funktionen ```map()``` vil vi bruge den til at implementere vores egen brugerdefinerede ```zip()```-funktion. Funktionen ```zip()``` er en funktion, der tager et antal iterables og derefter skaber en tuple, der indeholder hvert af elementerne i iterablesne. Ligesom ```map()``` returnerer den i Python 3 et generator objekt, som nemt kan konverteres til en liste ved at kalde den indbyggede funktion ```list``` på det. Brug nedenstående interpreter-session for at få et greb om ```zip()```, før vi laver vores med ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Som en bonus, kan du gætte, hvad der ville ske i ovenstående session, hvis ```my_strings``` og ```my_numbers``` ikke er af samme længde? Nej? Prøv det! Ændr længden på en af dem.

Til vores egen brugerdefinerede ```zip()```-funktion!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Se bare på det! Vi har det samme resultat som ```zip```. 

Har du også lagt mærke til, at jeg ikke engang behøvede at oprette en funktion ved hjælp af standardmetoden ```def my_function()```? Det er hvor fleksibel ```map()```, og Python generelt, er! Jeg brugte simpelthen en ```lambda```-funktion. Dette er ikke for at sige, at brugen af ​​den standard funktionelle definition metode (af ```def function_name()```) ikke, stadig er tilladt stadigt er. Jeg foretrak simpelthen at skrive mindre kode (være "Pythonic").

Det er alt om map. Videre til ```filter()```

#### Filter
Mens ```map()``` sender hvert element i iterablen gennem en funktion og returnerer resultatet af alle elementer, der passerede gennem funktionen, kræver ```filter()``` først, at funktionen returnerer boolske værdier (sandt eller falsk) og sender derefter hvert element i iterablen gennem funktionen og "filtrerer" dem, der er falske, væk. Den har følgende syntaks:

```filter(func, iterable)```

Følgende punkter skal bemærkes vedrørende ```filter()```:

1. I modsætning til ```map()``` kræves kun én iterable.
2. Argumentet ```func``` kræves at returnere en boolsk type. Hvis det ikke gør det, returnerer ```filter``` simpelthen den ```iterable```, der blev givet til det. Da kun én iterable er nødvendig, er det implicit, at ```func``` kun kan tage et argument.
3. ```filter``` sender hvert element i iterablen gennem ```func``` og returnerer kun dem, der evalueres til sandt. Jeg mener, det står lige der i navnet -- en "filter".

Lad os se nogle eksempler

Følgende er en liste (```iterable```) af karakterer for 10 studerende i en kemi-eksamen. Lad os filtrere dem ud, der bestod med en score på mere end 75 ved hjælp af ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Det næste eksempel bliver en palindrome detektor. En "palindrom" er et ord, en frase eller en sekvens, der læses ens bagfra som forfra. Lad os filtrere ord, der er palindromer, fra en tuple (```iterable```) af mistænkte palindromer.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Som skulle udskrive ```['madam', 'anutforajaroftuna']```. 

Ret sejt, ikke? Til sidst, ```reduce()```

#### Reduce
```reduce``` anvender en funktion **af to argumenter** kumulativt på elementerne i en iterable, eventuelt startende med et initialt argument. Den har følgende syntaks:

```reduce(func, iterable[, initial])```

Hvor ```func``` er den funktion, som hvert element i ```iterable``` får anvendt kumulativt på, og ```initial``` er den valgfrie værdi, der placeres før elementerne i iterablen i beregningen, og fungerer som en standard, når iterablen er tom. Følgende skal bemærkes om ```reduce()```:
1. ```func``` kræver to argumenter, hvoraf det første er det første element i ```iterable``` (hvis ```initial``` ikke er angivet) og det andet element i ```iterable```. Hvis ```initial``` er angivet, bliver det det første argument til ```func``` og det første element i ```iterable``` bliver det andet element.
2. ```reduce``` "reducerer" (jeg ved, tilgiv mig) ```iterable``` til en enkelt værdi. 

Som sædvanligt, lad os se nogle eksempler.

Lad os lave vores egen version af Pythons indbyggede funktion ```sum()```. Funktionen ```sum()``` returnerer summen af alle elementerne i den iterable, der gives til den.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)


Resultatet, som du sikkert forventer, er ```68```.

Så, hvad skete der?

Som sædvanligt handler det om iterationer: ```reduce``` tager de første og andet element i ```numbers``` og sender dem til ```custom_sum``` henholdsvis. ```custom_sum``` beregner deres sum og returnerer det til ```reduce```. ```reduce``` tager derefter det resultat og anvender det som det første element til ```custom_sum``` og tager det næste element (tredje) i ```numbers``` som det andet element til ```custom_sum```. Den gør dette kontinuerligt (kumulativt), indtil ```numbers``` er udtømt. 

Lad os se, hvad der sker, når jeg bruger den valgfrie ```initial``` værdi.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)


Resultatet, som du vil forvente, er ```78```, fordi ```reduce``` oprindeligt bruger ```10``` som det første argument til ```custom_sum```.


Det er alt om Pythons Map, Filter og Reduce. Prøv nedenstående øvelser for at hjælpe med at sikre din forståelse af hver funktion.

Øvelse
--------
I denne øvelse vil du bruge hver af ```map```, ```filter```, og ```reduce``` til at rette ødelagt kode.