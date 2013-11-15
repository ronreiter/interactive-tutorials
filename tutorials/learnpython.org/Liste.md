Tutorial
--------

Le liste sono un insieme di variabili contenute tra 2 parentesi quadre. Possono contenere variabili diverse  anche  per tipo per esempio possono<br>
contenere tutti i tipi di numeri le stringhe e le liste medesime . Si avete capito bene ecco un esempio **a** = [ 1,2,"alto","cane",2.0] oppure
questa **b** = ["sei","bello",a,23,12.15] è una lista. Come vedete  la lista **b* contiene anche la lista **a**-<br>
Per poter distinguere nell'ambito di una lista **a** una variabile da un'altra  assegnamo a ciascuna variabile un indice numerico intero partendo da 0<br>
Esempio Avremo così della lista **a**    a[0] che individua il primo elemento della lista, a[1] il secondo elemento e cosi via fino a dare un indice anche all'ultimo elemento. Usiamo questa sintassi  per creare una lista alla quale diamo nome mylist


	Creazione della lista mylist  priva di elemente spesso si dice lista vuota una lista priva di elementi.
        mylist = []             
        Per poter assegnare elementi ad una stringa vuota facciamo ricorso alla funzione append() che usiamo cosi la notazione esatta e<br>  
        la seguente:
	
        mylist.append(1)    # ora la lista mylist  ha un elemento che potremmo evidenziare così mylist[1]

        **questo codice** indica la volontà di aggiungere ancora degli elementi [ in questo caso numerici esattamente 2 e 3
	mylist.append(2)
	mylist.append(3)
        
        **questo codice**  ci mostra come vedere l'elemento indicato dal numero compreso tra le parentesi quadre
	print mylist[0] # prints out 1
	print mylist[1] # prints out 2
	print mylist[2] # prints out 3

	# prints out 1,2,3   questo dovrebbe essere il risultato che apparirebbe sul riquadro di destra se avessimo preparato il riquadro<br>
        di sinistra con il codice precedente

Parliamo ora di come si può visionare tutto il contenuto di una lista usando un ciclo detto anche una iterazione

	for x in mylist:
	    print x

Il tentativo di accedere  ad un indice che non esiste  crea un  errore o meglio solleva una eccezione. Vederemo inseguito come gestirle

	mylist = [1,2,3]  # questa lista ha 3 elementi e quindi
	print mylist[10]  # chiedere di poter accedere all'elemento di indice 10 solleva una eccezione

### Esercizio:

Create una lista alla quale diamo nome "numbers" che deve contenere i nunmeri  1, 2, e 3 (in questo ordine).
Create una lista alla quale diamo nome "strings" che deve contenere "hello" e "world" (in questo ordine).

Proviamo a far uso della funzione append()per completare l'esercizio

Tutorial Code
-------------

	# Modifica questo codice
	numbers = []     # creiamo la lista 
	strings = []     # creiamo la lista
        Inseriamo qua il codice per completare le liste come richiesto dall'esercizio

	#Verifichiamo il codice
	print numbers    # dovremmo vedere il risultato della nostra lista numbers
	print strings    #  dovremmo vedere il risultato della nostra lista strings

Questo è il risultato del nostro esercizio: Ovviamente se avete prepararto il quadro di sinistra vedrete i risultati su quello di destra

Expected Output
---------------
	[1, 2, 3]
	['hello', 'world']