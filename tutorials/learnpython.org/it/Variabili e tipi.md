Tutorial
--------

Python è un linguaggio completamente orientato agli oggetti, ma non "staticamente tipizzato". Non è necessario dichiarare le variabili prima di usarle ne tantomeno di dichiararne il tipo. Ciascuna variabile in Python è un oggetto, e quindi ogni oggetto supporta le seguenti bfunzioni:

**help(object)** - Mostra informazioni circa l'uso dell'oggetto

**dir(object)** - Mostra la struttura interna dell'oggetto - Tutti i metodi e tutti i membri

### Numeri
Python supporta due tipi di numeri - Gli interi e quelli in virgola mobile. (Supporta anche i numeri complessi, ma non non vengono spiegati in questo tutorial).

Per definire un intero, usiamo la seguente sintassi:

    myint = 7

Per  definire un numero in virgola mobile, potete usare una delle seguenti notazioni:

    myfloat = 7.0
    myfloat = float(7)

### Stringhe

Tutto ciò che compare tra una coppia di virgolette semplici o doppie è una stringa.

    mystring = 'hello'
    mystring = "hello"

La differenza tra le due è semplice: Usando le doppie virgolette posso inserire l'apostrofo cosa questa che non potrei fare se avessi usato le virgolette semplici perché l'apostrofo non sarebbe stato considerato come tale ma semplicemenete un terminatore della stringa

        mystring = "Non preoccuparti dell'apostrofo"

Ci sono variazioni aggiuntive sulla definizione di stringhe che possono rendere più semplici l'inclusione di alcuni caratteri nelle stringhe.
Esempi il ritorno a capo o carriage returns o return o invio,la barra rovesciata o altri caratteri unicode. Questi vanno oltre lo scopo di questo
tutorial. Si possono ottenere approfondimenti seguendo questo link [Python documentation](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial"). 

I semplici operatori posso essere applicati sia ai numeri che alle stringhe:

    one = 1
    two = 2
    three = one + two

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world

Non è possibile utilizzare operatori tra numeri e stringhe:

    # Questo non funzionerà!
    print one + two + hello


Esercizio
--------

L'obiettivo di questo esercizio è di creare una stringa, un intero ed un numero a virgola mobile. La stringa deve essere chiamata "mystring" e contenere la parola "ciao". Il numero a virgola mobile deve essere invece chiamato "myfloat" e deve contenere il numero 10 e infine l'intero deve essere chiamato "myint" e deve contenere il numero 20. 

Tutorial Code
-------------
# Scrivi il tuo codice qui
mystring = None
myfloat = None
myint = None

# verifica del codice
if mystring == "ciao":
    print "Stringa: %s" % mystring
if isinstance(myfloat, float) and myfloat == 10.0:
    print "Numero in virgola mobile: %d" % myfloat
if isinstance(myint, int) and myint == 20:
    print "Intero: %d" % myint

Expected Output
---------------
Stringa: ciao
Numero in virgola mobile: 10
Intero: 20

Solution
--------