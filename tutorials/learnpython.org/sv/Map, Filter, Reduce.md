Map, Filter och Reduce är paradigmer inom funktionell programmering. De tillåter programmeraren (du) att skriva enklare, kortare kod utan att nödvändigtvis behöva bry sig om detaljer som loopar och greningar.

I huvudsak tillåter dessa tre funktioner dig att tillämpa en funktion på ett antal iterables, i ett enda svep. ```map``` och ```filter``` är inbyggda i Python (i ```__builtins__``` modulen) och kräver ingen importering. ```reduce``` däremot måste importeras eftersom den finns i ```functools``` modulen. Låt oss få en bättre förståelse för hur de fungerar, med start på ```map```.

#### Map
Funktionen ```map()``` i python har följande syntax:

```map(func, *iterables)```

Där ```func``` är funktionen som skall appliceras på varje element i ```iterables``` (så många som de är). Ser du asterisken (```*```) på ```iterables```? Det betyder att det kan finnas så många iterables som möjligt, så länge ```func``` har det exakta antalet som krävs som inmatningsargument. Innan vi går vidare till ett exempel är det viktigt att du noterar följande:

1. I Python 2 returnerar ```map()``` funktionen en lista. I Python 3, däremot, återger funktionen ett ```map object``` som är ett generatorobjekt. För att få resultatet som en lista kan den inbyggda funktionen ```list()``` anropas på map-objektet, dvs. ```list(map(func, *iterables))```
2. Antalet argument för ```func``` måste vara lika med antalet ```iterables``` som anges. 

Låt oss se hur dessa regler fungerar med följande exempel.

Anta att jag har en lista (```iterable```) av mina favoritdjur, alla i gemener och jag behöver dem i versaler. Traditionellt, i vanlig python-användning, skulle jag göra något sånt här:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Vilket skulle ge ut ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Med ```map()``` funktioner är det inte bara enklare, utan det är också mycket mer flexibelt. Jag gör helt enkelt detta:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Vilket också skulle ge samma resultat. Notera att med den definierade ```map()``` syntaxen ovan, är ```func``` i detta fallet ```str.upper``` och ```iterables``` är listan ```my_pets```, endast en iterable. Notera också att vi inte anropar funktionen ```str.upper``` (gör detta: ```str.upper()```), eftersom map-funktionen gör det åt oss på _varje element i listan ```my_pets```_.

Vad som är viktigt att notera är att funktionen ```str.upper``` kräver endast **ett** argument enligt definition och därför passade vi bara in **en** iterable till det. Så, _om funktionen du skickar kräver två, eller tre, eller n argument_, då _behöver du också skicka in två, tre eller n iterables till den_. Låt mig klargöra detta med ett annat exempel.

Anta att jag har en lista över cirkelområden som jag beräknade någonstans, alla med fem decimalers noggrannhet. Och jag behöver avrunda varje element i listan till sina egna positions decimalplatser, vilket innebär att jag måste avrunda det första elementet i listan till en decimal, det andra elementet i listan till två decimaler, det tredje elementet i listan till tre decimaler, etc. Med ```map()``` är detta en enkel match. Låt oss se hur.

Python välsignar oss redan med den inbyggda funktionen ```round()``` som tar två argument -- talet som ska avrundas och antalet decimalplatser som talet ska avrundas upp till. Så, eftersom funktionen kräver **två** argument, behöver vi skicka in **två** iterables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Ser du skönheten i ```map()```? Kan du föreställa dig vilken flexibilitet detta skapar?

Funktionen ```range(1, 7)``` fungerar som det andra argumentet till funktionen ```round``` (antalet önskade decimalplatser per iteration). Så när ```map``` itererar igenom ```circle_areas```, under den första iterationen överlämnas det första elementet i ```circle_areas```, ```3.56773``` tillsammans med det första elementet i ```range(1,7)```, ```1``` till ```round``` vilket gör det effektivt till ```round(3.56773, 1)```. Vid den andra iterationen överlämnas det andra elementet i ```circle_areas```, ```5.57668``` tillsammans med det andra elementet i ```range(1,7)```, ```2``` till ```round``` vilket gör det till ```round(5.57668, 2)```. Detta sker till slutet av listan ```circle_areas``` nås.

Jag antar att du undrar: "Vad händer om jag skickar in en iterable som är kortare eller längre än längden på den första iterablen? Det vill säga, vad händer om jag skickar in ```range(1, 3)``` eller ```range(1, 9999)``` som den andra iterablen i ovanstående funktion". Och svaret är enkelt: ingenting! Okej, det är inte sant. "Ingenting" händer i den meningen att funktionen ```map()``` inte kommer att ge något undantag, det kommer helt enkelt att iterera över elementen tills det inte kan hitta ett andra argument till funktionen, vid vilket tillfälle det helt enkelt stannar och returnerar resultatet.

Så, till exempel, om du utvärderar ```result = list(map(round, circle_areas, range(1, 3)))```, kommer du inte att få något fel även om längden på ```circle_areas``` och längden på ```range(1, 3)``` skiljer sig åt. Istället gör Python så här: Den tar det första elementet i ```circle_areas``` och det första elementet i ```range(1,3)``` och skickar det till ```round```. ```round``` utvärderar det och sparar resultatet. Sedan går den vidare till den andra iterationen, med det andra elementet i ```circle_areas``` och det andra elementet i ```range(1,3)```, sparar ```round``` det igen. Nu, i den tredje iterationen (```circle_areas``` har ett tredje element), tar Python det tredje elementet i ```circle_areas``` och försöker sedan ta det tredje elementet av ```range(1,3)``` men eftersom ```range(1,3)``` inte har ett tredje element, stannar Python helt enkelt och returnerar resultatet, vilket i detta fall skulle vara ```[3.6, 5.58]```.

Gå vidare, prova det.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)


Samma sak händer om ```circle_areas``` är kortare än längden på den andra iterablen. Python slutar helt enkelt när den inte kan hitta nästa element i en av iterablarna. 

För att bekräfta vår kunskap om funktionen ```map()``` ska vi använda den för att implementera vår egen anpassade ```zip()``` funktion. Funktionen ```zip()``` är en funktion som tar ett antal iterables och sedan skapar en tuple som innehåller varje element i iterablarna. Liksom ```map()```, returnerar den i Python 3 ett generatorobjekt, som enkelt kan konverteras till en lista genom att anropa den inbyggda funktionen ```list``` på den. Använd tolkexemplet nedan för att få grepp om ```zip()``` innan vi skapar vår egen med ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Som en bonus kan du gissa vad som skulle hända i sessionen ovan om ```my_strings``` och ```my_numbers``` inte har samma längd? Nej? prova det! Ändra längden på en av dem.

Till vår egen anpassade ```zip()``` funktion!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Titta på det! Vi har samma resultat som ```zip```. 

Har du också märkt att jag inte ens behövde skapa en funktion med hjälp av ```def my_function()``` standardmetoden? Det är hur flexibel ```map()```, och Python i allmänhet, är! Jag använde helt enkelt en ```lambda``` funktion. Detta betyder inte att användningen av standardmetoden för att definiera funktioner (av ```def function_name()```) inte är tillåten, det är det fortfarande. Jag föredrog helt enkelt att skriva mindre kod (vara "Pythonic").

Det var allt om map. Till ```filter()```

#### Filter
Medan ```map()``` skickar varje element i iterablen genom en funktion och returnerar resultatet av alla element som har passerat genom funktionen, kräver ```filter()``` först och främst att funktionen returnerar booleska värden (true eller false) och skickar sedan varje element i iterablen genom funktionen, "filtrerar bort" de som är falska. Det har följande syntax:

```filter(func, iterable)```

Följande punkter bör noteras beträffande ```filter()```:

1. Till skillnad från ```map()``` krävs endast en iterable.
2. Argumentet ```func``` är kravet på att returnera en boolesk typ. Om det inte gör det, returnerar ```filter``` helt enkelt det ```iterable``` som skickas till det. Eftersom endast en iterable krävs är det underförstått att ```func``` bara kan ta ett argument.
3. ```filter``` skickar varje element i iterablen genom ```func``` och returnerar **endast** de som utvärderas till sanna. Jag menar, det står där i namnet -- ett "filter".

Låt oss se några exempel

Följande är en lista (```iterable```) över resultaten från 10 elever i ett kemi-test. Låt oss filtrera ut de som klarade med resultat över 75...using ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Nästa exempel blir en palindromdetektor. En "palindrom" är ett ord, en fras eller en sekvens som läses samma bakåt som framåt. Låt oss filtrera ut ord som är palindromer från en tuple (```iterable```) av misstänkta palindromer.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Vilket bör ge ut ```['madam', 'anutforajaroftuna']```. 

Ganska snyggt va? Slutligen, ```reduce()```

#### Reduce
```reduce``` tillämpar en funktion **av två argument** kumulativt på elementen i en iterable, eventuellt med start med ett initialt argument. Den har följande syntax:

```reduce(func, iterable[, initial])```

Där ```func``` är funktionen på vilken varje element i ```iterable``` får tillämpas kumulativt, och ```initial``` är det valfria värdet som placeras före elementen i iterablen i beräkningen, och fungerar som standard när iterablen är tom. Följande bör noteras om ```reduce()```:
1. ```func``` kräver två argument, den första av dem är det första elementet i ```iterable``` (om ```initial``` inte anges) och det andra elementet i ```iterable```. Om ```initial``` anges, så blir den första argumentet till ```func``` och det första elementet i ```iterable``` blir det andra elementet.
2. ```reduce``` "reducerar" (jag vet, förlåt mig) ```iterable``` till ett enda värde. 

Som vanligt, låt oss se några exempel.

Låt oss skapa vår egen version av Pythons inbyggda funktion ```sum()```. Funktionen ```sum()``` returnerar summan av alla element i iterablen som skickas till den.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)


Resultatet, som du förväntar dig, är ```68```.

Så, vad hände?

Som vanligt handlar det om iterationer: ```reduce``` tar det första och andra elementet i ```numbers``` och skickar dem till ```custom_sum``` respektive. ```custom_sum``` beräknar deras summa och returnerar det till ```reduce```. ```reduce``` tar sedan det resultatet och tillämpar det som det första argumentet i ```custom_sum``` och tar nästa element (det tredje) i ```numbers``` som det andra elementet i ```custom_sum```. Det gör detta kontinuerligt (kumulativt) tills ```numbers``` är uttömda. 

Låt oss se vad som händer när jag använder det valfria ```initial``` värdet.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)


Resultatet, som du förväntar dig, är ```78``` eftersom ```reduce```, initialt, använder ```10``` som det första argumentet till ```custom_sum```.


Det var allt om Pythons Map, Reduce och Filter. Prova på nedanstående övningar för att hjälpa dig förstå varje funktion.

Övning
--------
I denna övning kommer du att använda var och en av ```map```, ```filter``` och ```reduce``` för att fixa trasig kod.