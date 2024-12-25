Python è un linguaggio molto semplice, e ha una sintassi molto diretta.
Incoraggia i programmatori a programmare senza codice di base (pronto).
La direttiva più semplice in Python è la direttiva "print" -
che semplicemente stampa una linea (e include anche un a capo, a differenza del C).

Ci sono due principali versioni di Python, Python 2 e Python 3. Python 2 e 3 sono piuttosto diversi.
Questo tutorial utilizza Python 3, perché è semanticamente più corretto e supporta funzionalità più recenti.

Ad esempio, una differenza tra Python 2 e 3 è l'istruzione `print`.
In Python 2, l'istruzione "print" non è una funzione, e quindi viene
invocata senza parentesi. Tuttavia, in Python 3, è una funzione e deve essere invocata
con le parentesi.

Per stampare una stringa in Python 3, basta scrivere:

    print("This line will be printed.")

### Indentazione

Python utilizza l'indentazione per i blocchi, invece delle parentesi graffe. Sono supportati sia i tab che gli spazi, ma l'indentazione standard
richiede che il codice Python standard utilizzi quattro spazi. Ad esempio:

    x = 1
    if x == 1:
        # indented four spaces
        print("x is 1.")

Esercizio
--------

Usa la funzione "print" per stampare la linea "Hello, World!".