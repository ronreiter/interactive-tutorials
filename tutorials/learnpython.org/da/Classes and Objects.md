Objects er en indkapsling af variabler og funktioner i en enkelt enhed. Objekter får deres variabler og funktioner fra klasser. Klasser er i det væsentlige en skabelon til at skabe dine objekter.

En meget basal klasse ville se sådan ud:

Vi forklarer senere, hvorfor du skal inkludere "self" som en parameter. Først, for at tildele ovenstående klasse (skabelon) til et objekt, ville du gøre følgende:

Nu indeholder variablen "myobjectx" et objekt af klassen "MyClass", der indeholder den variable og den funktion, der er defineret inden for klassen kaldet "MyClass".

### Adgang til Objektvariabler

For at få adgang til variablen inde i det nyskabte objekt "myobjectx" ville du gøre følgende:

Så for eksempel vil det nedenstående udskrive strengen "blah":

Du kan skabe flere forskellige objekter, der er af samme klasse (har de samme variabler og funktioner defineret). Men hver objekt indeholder uafhængige kopier af de variabler, der er defineret i klassen. For eksempel, hvis vi skulle definere et andet objekt med klassen "MyClass" og derefter ændre strengen i variablen ovenfor:

### Adgang til Objektfunktioner

For at få adgang til en funktion inde i et objekt bruger du notation, der ligner den, du bruger til at få adgang til en variabel:

Det ovenstående ville udskrive beskeden, "This is a message inside the class."

### __init__()

Funktionen `__init__()`, er en speciel funktion, der kaldes, når klassen bliver initieret. Den bruges til at tildele værdier i en klasse.

Øvelse
--------

Vi har en klasse defineret for køretøjer. Opret to nye køretøjer kaldet car1 og car2. Sæt car1 til at være en rød cabriolet værd $60,000.00 med navnet Fer, og car2 til at være en blå varevogn ved navn Jump værd $10,000.00.