Innholdet som skal oversettes:

Map, Filter og Reduce er paradigmer innen funksjonell programmering. De lar programmereren (deg) skrive enklere og kortere kode, uten nødvendigvis å måtte bry seg om detaljer som løkker og grener.

I hovedsak lar disse tre funksjonene deg anvende en funksjon på en rekke iterable objekter, i ett sveip. ```map``` og ```filter``` er innebygde i Python (i ```__builtins__```-modulen) og krever ingen import. ```reduce```, derimot, må importeres da den ligger i ```functools```-modulen. La oss få en bedre forståelse av hvordan de alle fungerer, med start i ```map```.

#### Map
```map()```-funksjonen i Python har følgende syntaks:

```map(func, *iterables)```

Hvor ```func``` er funksjonen som hver element i ```iterables``` (så mange som de er) ville bli anvendt på. Merker du asterisken (```*```) på ```iterables```? Det betyr at det kan være så mange iterables som mulig, så langt ```func``` har det eksakte nummeret som kreves som inputargumenter. Før vi går videre til et eksempel, er det viktig at du merker deg følgende:

1. I Python 2 returnerer ```map()```-funksjonen en liste. I Python 3, derimot, returnerer funksjonen et ```map-objekt``` som er et generatorobjekt. For å få resultatet som en liste, kan den innebygde funksjonen ```list()``` kalles på map-objektet, dvs. ```list(map(func, *iterables))```.
2. Antallet argumenter til ```func``` må være antallet ```iterables``` oppført.

La oss se hvordan disse reglene utspiller seg med følgende eksempler.

Si at jeg har en liste (```iterable```) av mine favoritt kjæledyrs navn, alle i små bokstaver og jeg trenger dem i store bokstaver. Tradisjonelt, i vanlig Python, ville jeg gjort noe slikt:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Som da ville gi ut ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Med ```map()```-funksjoner er det ikke bare lettere, men det er også mye mer fleksibelt. Jeg gjør simpelthen dette:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Som også vil gi samme resultat. Merk at når vi bruker den definerte ```map()```-syntaksen ovenfor, er ```func``` i dette tilfellet ```str.upper``` og ```iterables``` er listen ```my_pets``` -- bare én iterable. Også merk at vi ikke kaller ```str.upper```-funksjonen (ved å gjøre dette: ```str.upper()```) da map-funksjonen gjør det for oss på _hvert element i ```my_pets```-listen_.

Det som er viktig å merke seg, er at ```str.upper```-funksjonen krever kun **ett** argument per definisjon, og derfor sendte vi kun **en** iterable til den. Så, _hvis funksjonen du sender inn krever to eller tre, eller n argumenter_, må _du sende inn to, tre eller n iterables til den_. La meg klargjøre dette med et annet eksempel.

Si at jeg har en liste med sirkelareal som jeg beregnet et sted, alle med fem desimaler. Og jeg trenger å runde hvert element i listen opp til sin posisjon desimalplass, noe som betyr at jeg må runde første element i listen til én desimalplass, andre element i listen til to desimalplasser, tredje element i listen til tre desimalplasser, osv. Med ```map()``` er dette enkelt. La oss se hvordan.

Python gir oss allerede den innebygde funksjonen ```round()``` som tar to argumenter -- tallet som skal rundes opp og antallet desimalplasser å runde tallet opp til. Så, siden funksjonen krever **to** argumenter, må vi sende inn **to** iterables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Ser du skjønnheten i ```map()```? Kan du forestille deg fleksibiliteten dette fremkaller?

Funksjonen ```range(1, 7)``` fungerer som det andre argumentet til ```round```-funksjonen (antallet nødvendige desimalplasser per iterasjon). Så mens ```map``` itererer gjennom ```circle_areas```, under første iterasjon blir første element av ```circle_areas```, ```3.56773```, sendt sammen med første element av ```range(1,7)```, ```1``` til ```round```, som gjør det effektivt til ```round(3.56773, 1)```. Under den andre iterasjonen blir det andre elementet av ```circle_areas```, ```5.57668```, sendt sammen med det andre elementet av ```range(1,7)```, ```2``` til ```round```, som gjør det til ```round(5.57668, 2)```. Dette skjer til slutten av listen ```circle_areas``` er nådd.

Jeg er sikker på at du lurer på: "Hva om jeg sender inn en iterable som er mindre eller større enn lengden på den første iterable? Altså, hva om jeg sender ```range(1, 3)``` eller ```range(1, 9999)``` som den andre iterable i funksjonen ovenfor". Og svaret er enkelt: INGENTING! Ok, det er ikke sant. Det skjer "ingenting" i den forstand at ```map()```-funksjonen ikke vil kaste noen unntak, den vil enkelt iterere over elementene til den ikke finner et argument nummer to til funksjonen, på hvilket punkt den rett og slett stopper og returnerer resultatet.

Så, for eksempel, hvis du evaluerer ```result = list(map(round, circle_areas, range(1, 3)))```, vil du ikke få noen feil selv om lengden på ```circle_areas``` og lengden på ```range(1, 3)``` er forskjellige. I stedet gjør Python dette: Den tar det første elementet av ```circle_areas``` og det første elementet av ```range(1,3)``` og sender det til ```round```. ```round``` evaluerer det så lagrer resultatet. Deretter går den videre til den andre iterasjonen, det andre elementet av ```circle_areas``` og det andre elementet av ```range(1,3)```, ```round``` lagrer det igjen. Nå, i tredje iterasjon (```circle_areas``` har et tredje element), tar Python det tredje elementet av ```circle_areas``` og forsøker så å ta det tredje elementet av ```range(1,3)``` men siden det ikke finnes et tredje element i ```range(1,3)```, stopper Python ganske enkelt og gir tilbake resultatet, som i dette tilfellet ville være ```[3.6, 5.58]```.

Bare prøv det.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

Det samme skjer hvis ```circle_areas``` er kortere enn lengden på den andre iterable. Python stopper enkelt når den ikke kan finne det neste elementet i en av iterablene.

For å konsolidere vår kunnskap om ```map()```-funksjonen, skal vi bruke den til å implementere vår egen custom ```zip()```-funksjon. ```zip()```-funksjonen tar et antall iterable objekter og deretter skaper en tuple som inneholder hvert av elementene i de iterable objektene. Akkurat som ```map()```, i Python 3, returnerer den et generatorobjekt, som enkelt kan konverteres til en liste ved å kalle den innebygde ```list```-funksjonen på den. Bruk tolkeøkten nedenfor for å få grep om ```zip()``` før vi lager vår egen med ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Som en bonus, kan du gjette hva som ville skje i økten ovenfor hvis ```my_strings``` og ```my_numbers``` ikke er av samme lengde? Ingen anelse? Prøv det! Endre lengden på en av dem.

Nå over til vår egen custom ```zip()```-funksjon!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Bare se på det! Vi har samme resultat som ```zip```.

La du også merke til at jeg ikke engang trengte å lage en funksjon ved å bruke den standard måten ```def my_function()```? Så fleksibel er ```map()```, og Python generelt! Jeg brukte simpelthen en ```lambda```-funksjon. Dette betyr ikke at bruk av den standard funksjonsdefinisjonsmetoden (med ```def function_name()```) ikke er tillatt, det er det fortsatt. Jeg foretrakk bare å skrive mindre kode (være "Pythonic").

Det er alt om map. Så videre til ```filter()```

#### Filter
Mens ```map()``` sender hver element i iterable objektet gjennom en funksjon og returnerer resultatet av alle elementer som har passert gjennom funksjonen, krever ```filter()```, først og fremst, at funksjonen returnerer boolske verdier (sant eller usant) og sender deretter hver element i iterable objektet gjennom funksjonen, som "filtererer" bort de som er usanne. Den har følgende syntaks:

```filter(func, iterable)```

Følgende punkter bør noteres med hensyn til ```filter()```:

1. I motsetning til ```map()```, kreves det bare én iterable.
2. ```func```-argumentet må returnere en boolsk type. Hvis det ikke gjør det, returnerer ```filter``` enkelt den ```iterable``` som er gitt til det. Også, siden det bare kreves én iterable, er det implisitt at ```func``` kun må ta ett argument.
3. ```filter``` sender hver element i iterable gjennom ```func``` og returnerer **kun** de som evaluerer til sant. Jeg mener, det ligger rett der i navnet -- en "filter".

La oss se noen eksempler

Følgende er en liste (```iterable```) over poengene til 10 studenter i en kjemieksamen. La oss filtrere ut de som besto med poeng over 75... ved å bruke ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Det neste eksempelet vil være en palindrome-detektor. En "palindrome" er et ord, en frase eller en sekvens som leses likt baklengs som forlengs. La oss filtrere ut ord som er palindromer fra en tuple (```iterable```) av mistenkte palindromer.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Som skal gi ut ```['madam', 'anutforajaroftuna']```.

Ganske kult, ikke sant? Til slutt, ```reduce()```

#### Reduce
```reduce``` anvender en funksjon **med to argumenter** kumulativt på elementene i en iterable, eventuelt starter med et initialt argument. Den har følgende syntaks:

```reduce(func, iterable[, initial])```

Hvor ```func``` er funksjonen som hvert element i ```iterable``` får anvendt kumulativt, og ```initial``` er den valgfrie verdien som blir plassert foran elementene i iterable i beregningen, og fungerer som en standard når iterable er tom. Følgende bør noteres om ```reduce()```:
1. ```func``` krever to argumenter, der det første er det første elementet i ```iterable``` (hvis ikke ```initial``` er gitt) og det andre elementet i ```iterable```. Hvis ```initial``` er gitt, blir det det første argumentet til ```func``` og det første elementet i ```iterable``` blir det andre elementet.
2. ```reduce``` "reduserer" (jeg vet, tilgi meg) ```iterable``` til en enkelt verdi.

Som vanlig, la oss se noen eksempler.

La oss lage vår egen versjon av Pythons innebygde ```sum()```-funksjon. ```sum()```-funksjonen returnerer summen av alle elementene i iterable som er gitt til den.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

Resultatet, som forventet, er ```68```.

Så, hva skjedde?

Som vanlig, det handler om iterasjoner: ```reduce``` tar det første og det andre elementet i ```numbers``` og gir dem til ```custom_sum``` henholdsvis. ```custom_sum``` beregner deres sum og returnerer det til ```reduce```. ```reduce``` tar deretter det resultatet og bruker det som første element til ```custom_sum``` og tar det neste elementet (tredje) i ```numbers``` som det andre elementet til ```custom_sum```. Det gjør dette fortløpende (kumulativt) til ```numbers``` er oppbrukt.

La oss se hva som skjer når jeg bruker den valgfrie ```initial```-verdien.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Resultatet, som forventet, er ```78``` fordi ```reduce``` opprinnelig bruker ```10``` som første argument til ```custom_sum```.

Det er alt om Python's Map, Reduce og Filter. Prøv ut følgende øvelser for å hjelpe deg med å bekrefte din forståelse av hver funksjon.

Øvelse
------
I denne øvelsen vil du bruke hver av ```map```, ```filter```, og ```reduce``` for å fikse ødelagt kode.