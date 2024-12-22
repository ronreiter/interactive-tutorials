Python bruker boolsk logikk for å evaluere betingelser. De boolske verdiene True og False returneres når et uttrykk sammenlignes eller evalueres. For eksempel:

Merk at variabeltilordning gjøres ved hjelp av en enkelt lik-operatør "=", mens sammenligning mellom to variabler gjøres ved hjelp av dobbel lik-operatør "==". "Ikke lik"-operatøren angis som "!=".

### Boolske operatører

De boolske operatørene "and" og "or" gjør det mulig å bygge komplekse boolske uttrykk, for eksempel:

### Operatøren "in"

Operatøren "in" kan brukes til å sjekke om et spesifisert objekt finnes i en iterabel objektbeholder, som en liste:

Python bruker innrykk for å definere kodeblokker, i stedet for klammer. Standardinnrykk i Python er 4 mellomrom, selv om faner og andre mellomromsstørrelser vil fungere, så lenge det er konsistent. Merk at kodeblokker ikke trenger noen avslutning.

Her er et eksempel på bruk av Pythons "if"-setning med kodeblokker:

For eksempel:

En setning evalueres som sann hvis én av følgende er korrekt:
1. Den boolske variabelen "True" er gitt, eller beregnet ved hjelp av et uttrykk, som en aritmetisk sammenligning.
2. Et objekt som ikke regnes som "tomt" blir gitt.

Her er noen eksempler på objekter som regnes som tomme:
1. En tom streng: ""
2. En tom liste: []
3. Tallet null: 0
4. Den falske boolske variabelen: False

### Operatøren 'is'

I motsetning til dobbel lik-operatøren "==", samsvarer ikke "is"-operatøren verdiene til variablene, men instansene selv. For eksempel:

### Operatøren "not"

Ved å bruke "not" før et boolsk uttrykk inverteres det:

Exercise
--------

Endre variablene i den første delen, slik at hver if-setning evalueres som True.