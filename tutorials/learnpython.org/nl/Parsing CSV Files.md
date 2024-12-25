### Wat is CSV?
CSV staat voor 'Comma Separated Values'. Het CSV-formaat is het meest gebruikelijke import- en exportformaat voor databases en spreadsheets. Een CSV-bestand is een eenvoudig tekstbestand dat een lijst met gegevens bevat. Ze gebruiken meestal het komma (,) karakter om gegevens te scheiden, maar gebruiken soms andere karakters zoals puntkomma's of tabs.

Voorbeeld CSV-gegevens:

...
kolomnaam 1, kolomnaam 2, kolomnaam 3
gegevens eerste rij 1, gegevens eerste rij 2, gegevens eerste rij 3
gegevens tweede rij 1, gegevens tweede rij 2, gegevens tweede rij 3
...

### CSV-module in Python
Hoewel Python de ingebouwde functie open() heeft om te werken met CSV-bestanden of andere platte tekstbestanden, is er een speciale csv-module die klassen implementeert om gegevens in CSV-formaat te lezen en te schrijven, wat het werken met CSV-bestanden veel eenvoudiger maakt.

### CSV-module belangrijke functies

### Hoe gebruik je de csv-module?
importeer eerst de csv-module in je Python-programma.

writer en reader functies stellen je in staat om de gegevens in een CSV-bestand te bewerken, te wijzigen en te transformeren.

Hoe lees je een CSV-bestand :-

Om gegevens uit CSV-bestanden te lezen, gebruiken we de reader functie om een reader object te genereren.

Voorbeeld:

Hier openen we eerst het CSV-bestand in LEESmodus en noemen we het bestand als csvfile. We gebruiken een contextmanager om het bestand te openen zodat we ons geen zorgen hoeven te maken over het sluiten van het bestand. De csv.reader functie neemt het bestandsobject als invoer en retourneert een iterabel object. We slaan het iterabele object op als csvreader.

Zoals we weten, is csvreader een iterabel object en daarom kunnen we het itereren met behulp van een for-lus:

voorbeeld 1:

Bovenstaande code zal alle rijen die we uit het CSV-bestand lezen afdrukken. Merk op dat we het bestand openen met 'r' modus wanneer het al bestaat.

Wat is de volgende stap?

cvreader is een iterabel object. Daarom retourneert de .next() methode de huidige rij en verplaatst de iterator naar de volgende rij.

voorbeeld 2:

In voorbeeld 1 zou je alle rijen op de console zien afgedrukt samen met de header. In voorbeeld 2 leest de .next() methode de header in het veldenobject en verplaatst de iterator naar de volgende rij en daarom worden alle rijen afgedrukt behalve de header.

Hoe schrijf je in een CSV-bestand-

Om in een CSV-bestand te schrijven, biedt de csv-module de csv.writer functie. Om gegevens te schrijven openen we eerst het CSV-bestand in SCHRIJFmodus('w'). Het bestandsobject wordt csvfile genoemd. We slaan het csv.writer object op als csvwriter.

Voorbeeld:
#declareer header
velden = ['kolom1', 'kolom2', 'kolom3']

#declareer rijen
rows = [["foo", "bar", "spam"],
       ["oof", "rab", "maps"],
       ["writerow", "isn't", "writerows"]]

filename = "university_records.csv"

In het bovenstaande voorbeeld zal de writerow() functie een enkele rij schrijven die een veldenobject is, terwijl de writerows() methode de gehele lijst van hierboven gedefinieerde rijen in het CSV-bestand zal schrijven.

Laten we nu een stap verder gaan. Lees de inhoud van een CSV-bestand en schrijf het in een ander CSV-bestand.

Voorbeeld:

Hier openen we 'newfilename.csv' in 'W'-modus als f2 en openen we 'mycsvfile.csv' in 'r'-modus als f1. We maken gebruik van .next(), .reader(),.writer(), .writerow() functies van de csv-module. Met behulp van .next() verplaatsen we de reader pointer en met behulp van csvwriter.writerow() schrijven we binnenkomende rijen één voor één.

### DictReader en DictWriter klassen in Python

Hieronder staan twee belangrijke klassen in Python om CSV-bestanden te lezen en te schrijven.

csv.Dictwriter klasse
csv.DictReader klasse

De DictReader en DictWriter zijn klassen beschikbaar in Python voor het lezen en schrijven naar CSV. Hoewel ze vergelijkbaar zijn met de reader- en writer-functies, gebruiken deze klassen woordenboekobjecten om te lezen en te schrijven naar CSV-bestanden.

DictReader:

Het creëert een object dat de gelezen informatie omzet in een woordenboek waarvan de sleutels worden gegeven door de parameter veldnamen. Deze parameter is optioneel, maar wanneer deze niet in het bestand is gespecificeerd, worden de gegevens van de eerste rij de sleutels van het woordenboek.

Voorbeeld csv(info.csv)

.....
voornaam, achternaam
foo, bar
foo1, bar1
.....

Voorbeeld:

DictWriter:

De csv.DictWriter klasse werkt als een reguliere schrijver maar zet Python woordenboeken om in CSV-rijen. De veldnamen parameter is een reeks sleutels die de volgorde identificeren waarin waarden in het woordenboek worden weergegeven naar de writerow() methode die worden geschreven naar het CSV-bestand. De klasse is gedefinieerd als csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Voorbeeld:

Oefening
--------

In deze oefening ga je werken met CSV-gegevens. Je taak is om een Python-programma te maken dat gegevens leest uit een CSV-bestand en deze naar een ander CSV-bestand schrijft, waarbij ervoor wordt gezorgd dat alleen rijen worden opgenomen in het uitvoerbestand waar de waarde in de eerste kolom groter is dan 50.