Invoer nemen en uitvoer tonen op de gewenste manier speelt een belangrijke rol in interactieve codering. Dus laten we ons concentreren op invoer en uitvoer van verschillende gegevenstypen.

###raw_input()
Dit wordt gebruikt om invoer te nemen zolang het einde van de regel niet is bereikt. Let op dat er geen spaties mogen zijn. Het nemen van invoer eindigt met een nieuw regelteken en indien er spaties zijn in de invoerregel resulteert dit in een fout.

    # Print de ontvangen invoer van stdin
    astring=raw_input() # geef hallo als invoer
    print raw_input()

Nadat de invoer is genomen kunnen we deze converteren naar het vereiste gegevenstype met behulp van functies zoals int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input())
    print decimalnum

###input()
Dit wordt vooral gebruikt om gehele getallen in te voeren. Het voordeel van input() boven raw_input() kan worden verduidelijkt met het volgende voorbeeld.

    #geef 2*2 als invoer
    a=input()
    b=raw_input() #merk op dat int(raw_input()) resulteert in een fout
    print a #drukt 4 af
    print b #drukt 2*2 af

###hoe twee of meer gegevenstypen invoeren vanaf een enkele regel gescheiden door spaties?
Hier maken we gebruik van split() en map() functies.

    #geef twee gehele getallen in de eerste regel en meer dan twee gehele getallen in de derde regel
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    voor elk in array:
        sum = sum + int(each)
    print(a, b, sum)  # drukt de eerste twee gehele getallen van de eerste regel en de som van gehele getallen van de tweede regel af

###Uitvoer formatteren
Je hebt misschien al opgemerkt dat print statement automatisch een nieuwe regel invoegt. Het gebruik van een komma zoals in de bovenstaande code drukt de waarden in een enkele regel gescheiden door een spatie af. Het sys module biedt verschillende functies voor uitvoer formatteren, maar hier leren we hoe we basiskennis van formatteren kunnen gebruiken om op onze gewenste manier uitvoer te geven. Laten we een paar voorbeelden bekijken om uitvoer formatteren te leren.

    a = 5
    b = 0.63
    c = "hallo"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

De output moet zelfverklarend zijn.

Oefening
--------

Schrijf een programma dat de gebruiker vraagt om hun naam, leeftijd en land in te voeren. Het programma moet vervolgens een bericht afdrukken dat deze informatie in een zin bevat. Het programma moet bevatten:

1. Een naam invoeren met `raw_input()`.
2. Een leeftijd invoeren met `input()` en deze converteren naar een geheel getal.
3. Een landnaam invoeren met `raw_input()`.
4. De uitvoer formatteren om een zin te tonen die de naam, leeftijd en het land bevat.

Het programma moet invoerafhandeling en het formatteren van strings in Python demonstreren.