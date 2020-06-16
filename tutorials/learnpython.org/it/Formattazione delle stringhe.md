Tutorial
--------

Python usa lo stile C per formattare le stringhe. L'operatore "%" è usato per formattare un gruppo di variabili racchiuse in  "tuple" (una lista di valori di grandezza prefissata), insieme ad una stringa per la definizione del formato, che contiene del normale testo insieme a "specifici argomenti", cioè simboli speciali come  "%s" and "%d".

Poniamo di avere una variabile "name" che contiene il nome utente e vogliamo stampare un messaggio di benvenuto.

    # Stamperà "Hello, John!"
    name = "John"
    print "Hello, %s!" % name

Per usare due o più argomenti, usare una tupla (con i valori racchiusi fra parentesi)

    # Stamperà "John is 23 years old."
    name = "John"
    age = 23
    print "%s is %d years old." % (name, age)

Qualsiasi oggetto che non è una stringa può essere formattato usando l'operatore "%s". La stringa che verrà restituita dal metodo "repr" dell'oggetto verrà formattata come stringa. Per esempio:

    # This prints out: A list: [1, 2, 3]
    mylist = [1,2,3]
    print "A list: %s" % mylist

Di seguito alcuni indicatori di formato per alcuni tipi di dati basilari:

    %s - Stringa (o qualsiasi oggetto che possa essere rappresentato con una stringa, ad esempio numeri)
    %d - Interi
    %f - Numeri reali/virgola mobile
    %.<number of digits>f - Numeri in vigola mobile con un un numero fisso di cifre decimali.
    %x/%X - Rappresentazione esadecimale di numeri interi (minuscolo/maiuscolo)

Exercise
--------

Definire una stringa di formato che stampi i dati con la seguente sintassi:
    Hello John Doe. Your current balance is 53.44$.

Tutorial Code
-------------

data = ("John", "Doe", 53.44)
format_string = "Hello."

print format_string % data

Expected Output
---------------

Hello John Doe. Your current balance is 53.44$.

Solution
--------
