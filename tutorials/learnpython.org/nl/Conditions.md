Python gebruikt booleaanse logica om voorwaarden te evalueren. De booleaanse waarden True en False worden geretourneerd wanneer een expressie wordt vergeleken of geëvalueerd. Bijvoorbeeld:

x = 2
print(x == 2) # drukt True af
print(x == 3) # drukt False af
print(x < 3) # drukt True af

Merk op dat variabele toewijzing wordt gedaan met behulp van een enkele gelijkheidsteken "=", terwijl vergelijking tussen twee variabelen wordt gedaan met behulp van het dubbele gelijkheidsteken "==". De "niet gelijk" operator is gemarkeerd als "!=".

### Booleaanse operatoren

De booleaanse operatoren "and" en "or" stellen je in staat complexe booleaanse expressies te bouwen, bijvoorbeeld:

name = "John"
age = 23
if name == "John" and age == 23:
    print("Je naam is John en je bent ook 23 jaar oud.")

if name == "John" or name == "Rick":
    print("Je naam is ofwel John of Rick.")

### De "in" operator

De "in" operator kan worden gebruikt om te controleren of een gespecificeerd object bestaat binnen een iterabel objectcontainer, zoals een lijst:

name = "John"
if name in ["John", "Rick"]:
    print("Je naam is ofwel John of Rick.")

Python gebruikt inspringing om codeblokken te definiëren, in plaats van accolades. De standaard Python-inspringing is 4 spaties, alhoewel tabs en elke andere spatiegrootte werken, zolang het consistent is. Merk op dat codeblokken geen beëindiging nodig hebben.

Hier is een voorbeeld van het gebruik van Python's "if" statement met behulp van codeblokken:

statement = False
another_statement = True
if statement is True:
    # doe iets
    pass
elif another_statement is True: # else if
    # doe iets anders
    pass
else:
    # doe iets anders
    pass

Bijvoorbeeld:

x = 2
if x == 2:
    print("x is gelijk aan twee!")
else:
    print("x is niet gelijk aan twee.")

Een statement wordt geëvalueerd als waar als een van de volgende correct is:
1. De booleaanse variabele "True" is gegeven of berekend met behulp van een expressie, zoals een wiskundige vergelijking.
2. Een object dat niet als "leeg" wordt beschouwd, wordt doorgegeven.

Hier zijn enkele voorbeelden van objecten die als leeg worden beschouwd:
1. Een lege tekenreeks: ""
2. Een lege lijst: []
3. Het getal nul: 0
4. De valse booleaanse variabele: False

### De 'is' operator

In tegenstelling tot de dubbele gelijkheidsoperator "==", matcht de "is" operator niet de waarden van de variabelen, maar de instanties zelf. Bijvoorbeeld:

x = [1,2,3]
y = [1,2,3]
print(x == y) # Drukt True af
print(x is y) # Drukt False af

### De "not" operator

Het gebruik van "not" voor een booleaanse expressie keert deze om:

print(not False) # Drukt True af
print((not False) == (False)) # Drukt False af

Oefening
--------

Wijzig de variabelen in het eerste gedeelte, zodat elke if-verklaring als True wordt opgelost.