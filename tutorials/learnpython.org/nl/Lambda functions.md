Normaal gesproken definiëren we een functie met behulp van het sleutelwoord def ergens in de code en roepen we het aan wanneer we het nodig hebben.

Instead of defining the function ergens en het aan te roepen, kunnen we gebruikmaken van python's lambda-functies, die inline-functies zijn die op dezelfde plek worden gedefinieerd waar we ze gebruiken. Dus we hoeven geen functie ergens te declareren en de code opnieuw te bezoeken voor slechts een eenmalig gebruik.

Ze hoeven geen naam te hebben, vandaar dat ze ook wel anonieme functies worden genoemd. We definiëren een lambda-functie met behulp van het sleutelwoord lambda.

Dus het bovenstaande somvoorbeeld met een lambda-functie zou zijn,

Hier wijzen we de lambda-functie toe aan de variabele **sum**, en bij het geven van de argumenten, namelijk a en b, werkt het als een normale functie.



Exercise
--------
Schrijf een programma met behulp van lambda-functies om te controleren of een getal in de gegeven lijst oneven is. Print "True" als het getal oneven is of "False" als dat niet het geval is voor elk element.