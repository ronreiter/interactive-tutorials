Python utilizza la formattazione delle stringhe in stile C per creare nuove stringhe formattate. L'operatore "%" è utilizzato per formattare un insieme di variabili racchiuse in un "tuple" (una lista di dimensione fissa), insieme a una stringa di formato, che contiene testo normale insieme a "specifier di argomenti", simboli speciali come "%s" e "%d".

Supponiamo che tu abbia una variabile chiamata "name" con il tuo nome utente e desideri stampare un saluto a quell'utente.

    # Questo stampa "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Per utilizzare due o più specifier di argomenti, usa un tuple (parentesi):

    # Questo stampa "John ha 23 anni."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Qualsiasi oggetto che non sia una stringa può essere formattato utilizzando anche l'operatore %s. La stringa restituita dal metodo "repr" di quell'oggetto è formattata come una stringa. Ad esempio:

    # Questo stampa: Una lista: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Ecco alcuni specifier di argomenti di base che dovresti conoscere:


`%s - Stringa (o qualsiasi oggetto con una rappresentazione a stringa, come i numeri)`

`%d - Numeri interi`

`%f - Numeri a virgola mobile`

`%.<numero di cifre>f - Numeri a virgola mobile con un numero fisso di cifre a destra del punto.`

`%x/%X - Numeri interi in rappresentazione esadecimale (minuscolo/maiuscolo)`


Exercise
--------

È necessario scrivere una stringa di formato che stampi i dati usando la seguente sintassi:
    `Hello John Doe. Your current balance is $53.44.`