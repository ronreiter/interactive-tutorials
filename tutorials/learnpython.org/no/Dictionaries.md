En ordbok er en datatype som ligner på lister, men fungerer med nøkler og verdier i stedet for indekser. Hver verdi lagret i en ordbok kan nås ved å bruke en nøkkel, som kan være hvilken som helst type objekt (en streng, et tall, en liste, osv.) i stedet for å bruke dens indeks for å adressere den.

For eksempel, en database med telefonnumre kan lagres ved å bruke en ordbok slik som dette:

Alternativt kan en ordbok initialiseres med de samme verdiene i følgende notasjon:

### Iterating over dictionaries

Ordbøker kan itereres over, akkurat som en liste. Men en ordbok, i motsetning til en liste, holder ikke orden på verdiene som er lagret i den. For å iterere over nøkkel-verdipar, bruk følgende syntaks:

### Removing a value

For å fjerne en spesifisert indeks, bruk en av følgende notasjoner:

eller:

Exercise
--------

Legg til "Jake" i telefonboken med telefonnummer 938273443, og fjern Jill fra telefonboken.