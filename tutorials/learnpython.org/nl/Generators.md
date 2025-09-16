Generators zijn heel eenvoudig te implementeren, maar een beetje moeilijk te begrijpen.

Generators worden gebruikt om iterators te maken, maar met een andere benadering. Generators zijn eenvoudige functies die een iterabele reeks items op een speciale manier één voor één opleveren.

Wanneer een iteratie over een reeks items begint met behulp van de for-verklaring, wordt de generator uitgevoerd. Zodra de functiecode van de generator een "yield"-verklaring bereikt, levert de generator zijn uitvoering terug aan de for-lus en geeft een nieuwe waarde uit de reeks terug. De generatorfunctie kan zoveel waarden (mogelijk oneindig) genereren als zij wil, waarbij zij elk op zijn beurt levert.

Hier is een eenvoudig voorbeeld van een generatorfunctie die 7 willekeurige gehele getallen retourneert:

Deze functie beslist zelfstandig hoe de willekeurige getallen moeten worden gegenereerd en voert de yield-verklaringen één voor één uit, waarbij hij telkens pauzeert om de uitvoering terug te geven aan de hoofd-for-lus.

Exercise
--------

Schrijf een generatorfunctie die de Fibonacci-reeks retourneert. Ze worden berekend met de volgende formule: De eerste twee getallen van de reeks zijn altijd gelijk aan 1, en elk opeenvolgend geretourneerd getal is de som van de laatste twee getallen. Hint: Kun je slechts twee variabelen in de generatorfunctie gebruiken? Vergeet niet dat toewijzingen gelijktijdig kunnen worden gedaan. De code

zal gelijktijdig de waarden van a en b wisselen.