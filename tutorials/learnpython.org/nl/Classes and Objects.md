Objects zijn een kapsel van variabelen en functies binnen één enkele entiteit. Objecten halen hun variabelen en functies uit klassen. Klassen zijn in wezen een sjabloon om objecten te maken.

Een heel basisklasse zou er als volgt uitzien:

We zullen later uitleggen waarom je "self" als parameter moet opnemen. Eerst, om de bovenstaande klasse (sjabloon) aan een object toe te wijzen, zou je het volgende doen:

Nu bevat de variabele "myobjectx" een object van de klasse "MyClass" dat de variabele en de functie bevat die zijn gedefinieerd binnen de klasse genaamd "MyClass".

### Toegang tot Objectvariabelen

Om toegang te krijgen tot de variabele binnen het nieuw gemaakte object "myobjectx" zou je het volgende doen:

Dus bijvoorbeeld, het onderstaande zou de string "blah" als uitvoer hebben:

Je kunt meerdere verschillende objecten maken die van dezelfde klasse zijn (dezelfde gedefinieerde variabelen en functies hebben). Elk object bevat echter onafhankelijke kopieën van de variabelen die in de klasse zijn gedefinieerd. Bijvoorbeeld, als we een ander object met de "MyClass" klasse zouden definiëren en vervolgens de string in de variabele hierboven veranderen:

### Toegang tot Objectfuncties

Om toegang te krijgen tot een functie binnen een object, gebruik je een notatie die lijkt op het benaderen van een variabele:

Bovenstaande zou het bericht afdrukken: "This is a message inside the class."

### __init__()

De `__init__()` functie is een speciale functie die wordt aangeroepen wanneer de klasse wordt geïnitialiseerd. Het wordt gebruikt voor het toewijzen van waarden in een klasse.

    
Oefening
--------

We hebben een klasse gedefinieerd voor voertuigen. Maak twee nieuwe voertuigen genaamd car1 en car2. Stel dat car1 een rode cabriolet is ter waarde van $60.000,00 met de naam Fer, en car2 een blauwe bestelwagen is genaamd Jump ter waarde van $10.000,00.