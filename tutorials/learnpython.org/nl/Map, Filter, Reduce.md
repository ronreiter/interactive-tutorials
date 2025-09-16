Map, Filter en Reduce zijn paradigmata van functioneel programmeren. Ze stellen de programmeur (jij) in staat om eenvoudiger en kortere code te schrijven, zonder zich noodzakelijkerwijs druk te hoeven maken over ingewikkelde zaken zoals lussen en vertakkingen.

In wezen stellen deze drie functies je in staat om een functie toe te passen op een aantal iterables, in één keer. ```map``` en ```filter``` zijn ingebouwd in Python (in de ```__builtins__``` module) en behoeven geen import. ```reduce``` daarentegen moet geïmporteerd worden omdat het zich in de ```functools``` module bevindt. Laten we een beter begrip krijgen van hoe ze allemaal werken, te beginnen met ```map```.

#### Map
De ```map()``` functie in Python heeft de volgende syntaxis:

```map(func, *iterables)```

Waarbij ```func``` de functie is waarop elk element in ```iterables``` (hoeveel ze ook zijn) zal worden toegepast. Merk je de asterisk(```*```) op bij ```iterables```? Dit betekent dat er zoveel iterables als mogelijk kunnen zijn, zolang ```func``` dat exacte aantal als benodigde invoerargumenten heeft. Voordat we doorgaan naar een voorbeeld, is het belangrijk dat je het volgende opmerkt:

1. In Python 2 retourneert de ```map()``` functie een lijst. In Python 3 daarentegen, retourneert de functie een ```map object``` dat een generator object is. Om het resultaat als lijst te krijgen, kan de ingebouwde ```list()``` functie worden aangeroepen op het map object. i.e. ```list(map(func, *iterables))```
2. Het aantal argumenten voor ```func``` moet gelijk zijn aan het aantal vermelde ```iterables```.

Laten we eens kijken hoe deze regels zich uitspelen met de volgende voorbeelden.

Stel je hebt een lijst (```iterable```) van mijn favoriete huisdiernamen, allemaal in kleine letters, en ik moet ze in hoofdletters krijgen. Traditioneel, in normale Python-stijl, zou ik zoiets doen:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Wat dan zou resulteren in ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Met ```map()``` functies is het niet alleen eenvoudiger, maar ook veel flexibeler. Ik doe simpelweg dit:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Wat ook hetzelfde resultaat zou geven. Merk op dat met behulp van de gedefinieerde ```map()``` syntaxis hierboven, ```func``` in dit geval ```str.upper``` is en ```iterables``` de ```my_pets``` lijst is -- slechts één iterable. Merk ook op dat we de ```str.upper``` functie niet hebben aangeroepen (door dit te doen: ```str.upper()```), aangezien de map functie dat voor ons doet op _elk element in de ```my_pets``` lijst_.

Wat nog belangrijker is om te noteren, is dat de ```str.upper``` functie volgens de definitie slechts **één** argument vereist en daarom hebben we slechts **één** iterable doorgegeven. Dus, als _de functie die je doorgeeft twee, drie of n argumenten vereist_, dan _moet je twee, drie of n iterables doorgeven_. Laat me dit verduidelijken met een ander voorbeeld.

Stel dat ik een lijst heb van cirkeloppervlakten die ik ergens heb berekend, allemaal tot vijf decimalen. En ik moet elk element in de lijst afronden tot zijn positiedecimalen, wat betekent dat ik het eerste element in de lijst moet afronden tot één decimaal, het tweede element in de lijst tot twee decimalen, het derde element in de lijst tot drie decimalen, enzovoort. Met ```map()``` is dit een eitje. Laten we eens kijken hoe.

Python zegent ons al met de ingesloten functie ```round()``` die twee argumenten neemt -- het getal om af te ronden en het aantal decimalen om het getal op af te ronden. Dus, aangezien de functie **twee** argumenten vereist, moeten we **twee** iterables doorgeven.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Zie je de schoonheid van ```map()```? Kun je de flexibiliteit voorstellen die dit oproept?

De ```range(1, 7)``` functie fungeert als het tweede argument voor de ```round``` functie (het aantal vereiste decimalen per iteratie). Dus als ```map``` door ```circle_areas``` iterereert, wordt tijdens de eerste iteratie, het eerste element van ```circle_areas```, ```3.56773``` samen met het eerste element van ```range(1,7)```, ```1``` doorgegeven aan ```round```, waardoor het effectief wordt ```round(3.56773, 1)```. Tijdens de tweede iteratie, wordt het tweede element van ```circle_areas```, ```5.57668``` samen met het tweede element van ```range(1,7)```, ```2``` doorgegeven aan ```round``` waardoor het wordt vertaald naar ```round(5.57668, 2)```. Dit gebeurt totdat het einde van de ```circle_areas``` lijst is bereikt.

Ik weet zeker dat je je afvraagt: "Wat als ik een iterable doorgeef die korter of langer is dan de lengte van de eerste iterable? Dat wil zeggen, wat als ik ```range(1, 3)``` of ```range(1, 9999)``` doorgeef als de tweede iterable in de bovenstaande functie". En het antwoord is simpel: niets! Oké, dat is niet helemaal waar. "Niets" gebeurt in de zin dat de ```map()``` functie geen uitzondering zal opleveren, het zal eenvoudigweg de elementen itereren totdat het geen tweede argument meer kan vinden voor de functie, op dat moment stopt het gewoon en retourneert het resultaat.

Als je bijvoorbeeld ```result = list(map(round, circle_areas, range(1, 3)))``` evalueert, krijg je geen fout zelfs als de lengte van ```circle_areas``` en de lengte van ```range(1, 3)``` verschillen. In plaats daarvan doet Python dit: het neemt het eerste element van ```circle_areas``` en het eerste element van ```range(1,3)``` en geeft het door aan ```round```. ```round``` evalueert het en slaat het resultaat op. Vervolgens gaat het verder met de tweede iteratie, het tweede element van ```circle_areas``` en het tweede element van ```range(1,3)```, ```round``` slaat het weer op. Nu, in de derde iteratie (```circle_areas``` heeft een derde element), neemt Python het derde element van ```circle_areas``` en probeert dan het derde element van ```range(1,3)``` te nemen, maar aangezien ```range(1,3)``` geen derde element heeft, stopt Python eenvoudig en retourneert het resultaat, dat in dit geval simpelweg zou zijn ```[3.6, 5.58]```.

Ga je gang, probeer het.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

Hetzelfde gebeurt als ```circle_areas``` korter is dan de tweede iterable. Python stopt gewoon wanneer het het volgende element in een van de iterables niet kan vinden.

Om onze kennis van de ```map()``` functie te consolideren, gaan we het gebruiken om onze eigen custom ```zip()``` functie te implementeren. De ```zip()``` functie is een functie die een aantal iterables neemt en vervolgens een tuple creëert die elk van de elementen in de iterables bevat. Net als ```map()```, retourneert het in Python 3 een generator object, dat eenvoudig kan worden omgezet in een lijst door de ingebouwde ```list``` functie erop aan te roepen. Gebruik de onderstaande interpretatiesessie om een goed begrip van ```zip()``` te krijgen voordat we de onze creëren met ```map()```.

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Als bonus, kun je raden wat er zou gebeuren in de bovenstaande sessie als ```my_strings``` en ```my_numbers``` niet van dezelfde lengte zijn? Nee? probeer het! Wijzig de lengte van een van hen.

Op naar onze eigen custom ```zip()``` functie!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Kijk eens aan! We hebben hetzelfde resultaat als ```zip```.

Mocht je ook opmerken dat ik niet eens een functie hoefde te creëren met de ```def my_function()``` standaard manier? Dat is hoe flexibel ```map()```, en Python in het algemeen, is! Ik gebruikte gewoon een ```lambda``` functie. Dit is niet om te zeggen dat het gebruik van de standaard functiedefiniërende methode (van ```def function_name()```) niet toegestaan is, dat is nog steeds het geval. Ik gaf er gewoon de voorkeur aan om minder code te schrijven (wees "Pythonic").

Dat is alles over map. Naar ```filter()```

#### Filter
Terwijl ```map()``` elk element in de iterable door een functie laat gaan en het resultaat van alle elementen teruggeeft nadat ze door de functie zijn gegaan, vereist ```filter()``` allereerst dat de functie booleaanse waarden retourneert (waar of onwaar) en vervolgens elk element in de iterable door de functie laat gaan, waarbij de elementen die onwaar zijn worden "gefilterd". Het heeft de volgende syntaxis:

```filter(func, iterable)```

De volgende punten zijn belangrijk met betrekking tot ```filter()```:

1. In tegenstelling tot ```map()``` is slechts één iterable vereist.
2. Het ```func``` argument moet een booleaanse waarde retourneren. Als dat niet het geval is, retourneert ```filter``` simpelweg de ```iterable``` die aan haar wordt doorgegeven. Aangezien slechts één iterable noodzakelijk is, is het impliciet dat ```func``` maar één argument mag innemen.
3. ```filter``` zorgt ervoor dat elk element in de iterable door ```func``` gaat en retourneert **alleen** degene die evalueren tot waar. Het staat namelijk in de naam – een "filter".

Laten we een paar voorbeelden zien.

Hieronder is een lijst (```iterable```) van de scores van 10 studenten in een scheikunde-examen. Laten we degenen filteren die zijn geslaagd met scores meer dan 75... met behulp van ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Het volgende voorbeeld zal een palindroom detector zijn. Een "palindroom" is een woord, zin, of reeks die hetzelfde leest van achter naar voren als van voren naar achteren. Laten we woorden filteren die palindromen zijn uit een tuple (```iterable```) van vermoedelijke palindromen.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Wat zou moeten leiden tot de uitvoer ```['madam', 'anutforajaroftuna']```.

Best net hè? Tot slot, ```reduce()```

#### Reduce
```reduce``` past een functie **van twee argumenten** cumulatief toe op de elementen van een iterable, optioneel beginnend met een initieel argument. Het heeft de volgende syntaxis:

```reduce(func, iterable[, initial])```

Waarbij ```func``` de functie is waarop elk element in de ```iterable``` cumulatief wordt toegepast, en ```initial``` de optionele waarde is die wordt geplaatst voor de elementen van de iterable in de berekening, en dient als een standaard wanneer de iterable leeg is. Het volgende moet worden opgemerkt over ```reduce()```:
1. ```func``` vereist twee argumenten, waarvan de eerste het eerste element in ```iterable``` is (als ```initial``` niet wordt meegegeven) en het tweede element in ```iterable```. Als ```initial``` wordt meegegeven, dan wordt het het eerste argument naar ```func``` en het eerste element in ```iterable``` het tweede element.
2. ```reduce``` "reduceert" (ik weet het, vergeef me) ```iterable``` tot een enkele waarde.

Zoals gebruikelijk, laten we een paar voorbeelden bekijken.

Laten we onze eigen versie van Python's ingebouwde ```sum()``` functie maken. De ```sum()``` functie retourneert de som van alle items in de iterable die eraan wordt doorgegeven.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)


Het resultaat, zoals je zou verwachten, is ```68```.

Dus, wat is er gebeurd?

Zoals altijd draait het allemaal om iteraties: ```reduce``` neemt de eerste en tweede elementen in ```numbers``` en geeft ze in die volgorde door aan ```custom_sum```. ```custom_sum``` berekent hun som en retourneert deze aan ```reduce```. ```reduce``` neemt vervolgens dat resultaat en gebruikt het als het eerste argument voor ```custom_sum``` en neemt het volgende element (derde) in ```numbers``` als het tweede element voor ```custom_sum```. Het doet dit continu (cumulatief) totdat ```numbers``` is uitgeput.

Laten we kijken wat er gebeurt wanneer ik de optionele ```initial```-waarde gebruik.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)


Het resultaat, zoals je zou verwachten, is ```78``` omdat ```reduce``` aanvankelijk ```10``` gebruikt als het eerste argument voor ```custom_sum```.

Dat is alles over de Map, Reduce en Filter van Python. Probeer de onderstaande oefeningen uit om je begrip van elke functie te verifiëren.

Oefening
--------
In deze oefening ga je elk van ```map```, ```filter``` en ```reduce``` gebruiken om kapotte code te repareren.