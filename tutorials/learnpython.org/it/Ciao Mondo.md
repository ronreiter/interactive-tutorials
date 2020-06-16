Tutorial
--------

Python è un linguaggio di programmazione relativamente semplice soprattutto grazie alla sua sintassi. La prima istruzione che andremo a vedere è "print" che, come si può immaginare, non fa altro che stampare una riga di testo sullo schermo.

Python è disponibile in due versioni principali, Python 2 e Python 3. Ci sono non poche differenze tra le due versioni e anche se Python 3 è semanticamente migliore noi useremo la versione 2 in quanto è ancora maggiormente utilizzata e supportata.

Per esempio, l'istruzione "print" che abbiamo appena introdotto è diversa tra Python 2 e Python 3. Nella versione 2  "print" non è una funzione e perciò si usa senza parentesi. Al contrario, in Python 3 "print" è una funzione e come tutte le altre funzioni i parametri devono essere passati utilizzando le parentesi.

Come già detto noi utilizzeremo Python 2, quindi per utilizzare dobbiamo semplicemente scrivere:

print "Questo testo sarà stampato"

### Indentazione

Differentemente da molti altri linguaggi (come Java o C++) Python per definire dei blocchi di codice fa uso dell'indentazione invece che delle parentesi graffe. Per indentare si possono utilizzare sia tabulazioni che spazi anche se lo standard prevede l'utilizzo di quattro spazi. Per esempio:

    x = 1
    if x == 1:
        # indentato con quattro spazi
        print "x is 1."

Esercizio
--------

Usa il comando print per stampare "Ciao Mondo!"

Tutorial Code
-------------

print "Arrivederci Mondo!"

Expected Output
---------------

Ciao Mondo!

Solution
--------

print "Ciao Mondo!"     