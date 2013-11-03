# Variabili e tipi
-------------------

Tutorial
--------

Python è un linguaggio completamente orientato agli oggetti, ma non "staticamente tipizzato".Non è necessario dichiarare le variabili prima di usarle ne tantomeno di dichiararne il tipo.Ciascuna variabile in Python è un oggetto, e quindi ogni oggetto supporta le seguenti bfunzioni:

**help(object)** - Mostra informazioni circa l'uso dell'oggetto

**dir(object)** - Mostra la struttura interna dell'oggetto - Tutti i metodi e tutti i membri
Questo tutorial e **_AMICO_**  andranno oltre ad alcune particolari variabili.

### Numeri
Python supporta due tipi di numeri - Gli interi e quelli in virgola mobile. (Supporta anche i numeri complessi, ma non non vengono spiegati in questo tutorial).

Per definire un intero, usiamo la seguente sintassi:

	myint = 7

Per  definire un numero in virgola mobile, potete usare una delle seguenti notazioni:

	myfloat = 7.0
	myfloat = float(7)

### Stringhe

Tuttociò che compare tra una coppia di virgolette semplici o doppie è una stringa.

	mystring = 'hello'
	mystring = "hello"

La differenza tra le due è semplice : Usando le doppie virgolette posso inserire l'apostrofo cosa questa che non potrei fare se avessi usato le virgolette semplici perché l'apostrofo non sarebbe stato considerato come tale ma semplicemenete un terminatore della stringa

        mystring = "Non preoccuparti dell'apostrofo"

Ci sono variazioni aggiuntive sulla definizione di stringhe che possono rendere più semplici l'inclusione di alcuni caratteri nelle stringhe.
Esempi il ritorno a capo o carriage returns o return o invio,la barra rovesciata e il carattere Unicode . Questi vanno oltre lo scopo di questo
tutorial, ma possiamo trovarne traccia qui [Python documentation](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial"). 

I semplici operatori posso essere applicati sia ai numeri che alle stringhe:

	one = 1
	two = 2
	three = one + two

	hello = "hello"
	world = "world"
	helloworld = hello + " " + world

La utilizzazione in contemporanea su numeri e stringhe non è supportata:

	# Questo non lavorerà!
	print one + two + hello


### Esercizio

L'obiettivo di questo of this exercise is to create a string, an integer, and a floating point number. The string should be named mystring and should contain the word "hello". The floating point number should be named myfloat and should contain the number 10, and the integer should be named myint and should contain the number 20. 

Tutorial Code
-------------
	# Scrivi il tuo codice qui
	
	
	# verifica del codice
	if mystring == "hello":
	    print "Stringa: %s" % mystring
	if isinstance(myfloat, float) and myfloat == 10.0:
	    print "Numero in virgola mobile: %d" % myfloat
	if isinstance(myint, int) and myint == 20:
	    print "Intero: %d" % myint

Expected Output
---------------
	Stringa: hello
	Numero in virgola mobile: 10
	Intero: 20
