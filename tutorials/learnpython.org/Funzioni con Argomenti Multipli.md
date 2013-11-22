Tutorial
--------

Ogni funzione in Python riceve un predefinito numero di argumenti, se dichiarati normalmente, come queste:

    def myfunction(first, second, third):
        # farò qualcosa con questi tre argomenti
        ...

Ora dichiariamo una funzione che riceve un numero variabile di argomenti,ma usando la seguente sintassi:

    def foo(first, second, third, *therest):
        print "Primo: %s" % first
        print "Secondo: %s" % second
        print "Terzo: %s" % third
        print "E tutto il resto... %s" % therest

La variabile "therest"  è una lista di variabili, che  ricevono tutti gli argomenti che sono stati passati alla funzione "foo" dopo i primi tre<br> 
argomenti. Per tanto chiamando foo(1,2,3,4,5) la stampa in uscita sarà:

    Primo: 1
    Secondo: 2
    Terzo: 3
    E tutto il resto... [4, 5]

E 'anche possibile inviare a funzioni argomenti  tramite parola  chiave, in tal modo  l'ordine dell'argomento non è importante,ma <br>
si utilizza la seguente sintassi: 

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print "la Somma degli argomenti è: %d" % (first + second + third)

        if options.get("return") == "first":
            return first

    ...

    risultati = bar(1, 2, 3, action = "sum", return = "first")
    print "Risultati: %d" % risultati

Il codice precedente provoca il seguente risultato:

    la Somma degli argomenti è: 6
    Risultati: 1

La funzione "bar" riceve 3 argomenti. Se l'argomento aggiuntivo "action" viene  ricevuto, e tratta della somma dei numeri, allora la somma viene<br> stampata. Alternativamente, La function conosce anche il primo argomento che deve restituire ,nel caso che l'argomento "return" sia ricevuto come istruzione

### Esercizio:

Completare  le funzioni  "foo" e "bar" in modo che possano ricevere una quantità variabile come argomento. 
La funzione "foo" deve stampare la quantità di un argomento ricevuto  extra. 
La funzione "bar" deve restituire "True" se l'argomento con parola chiave  "magicnumber" vale 7. Se è cosi , restituisce True. SE no,restituisce False.

Tutorial Code
-------------

# Scrivi la funzione prototipo e implementala
def foo(a, b, c):
    pass

def bar(a, b, c):
    pass


# Verifica del Codice
if foo(1,2,3,4) == 1:
    print "Buono."
if foo(1,2,3,4,5) == 2:
    print "Meglior."
if bar(1,2,3,magicnumber = 6) == False:
    print "Grande."
if bar(1,2,3,magicnumber = 7) == True:
    print "Impressionante!"


Expected Output
---------------
Buono.
Migliore.
Grande.
Impressionante!

Solution
--------
