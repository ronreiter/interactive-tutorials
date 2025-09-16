Quando programmi, gli errori accadono. È solo un dato di fatto. Forse l'utente ha fornito input errati. Forse una risorsa di rete non era disponibile. Forse il programma ha esaurito la memoria. Oppure il programmatore potrebbe aver commesso un errore!

La soluzione di Python agli errori sono le eccezioni. Potresti aver già visto un'eccezione prima.

    print(a)
    
    #errore
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Ops! Hai dimenticato di assegnare un valore alla variabile 'a'.

Ma a volte non vuoi che le eccezioni fermino completamente il programma. Potresti voler fare qualcosa di speciale quando viene sollevata un'eccezione. Questo viene fatto in un blocco *try/except*.

Ecco un esempio banale: supponiamo che tu stia iterando su una lista. Devi iterare su 20 numeri, ma la lista è composta da input dell'utente e potrebbe non avere 20 numeri. Dopo aver raggiunto la fine della lista, vuoi che il resto dei numeri venga interpretato come uno 0. Ecco come potresti fare:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Raised when accessing a non-existing index of a list
                do_stuff_with_number(0)
    
    catch_this()

Ecco, non è stato troppo difficile! Puoi farlo con qualsiasi eccezione. Per maggiori dettagli sulla gestione delle eccezioni, non guardare oltre i [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Exercise
--------

Gestisci tutte le eccezioni! Ripensa alle lezioni precedenti per restituire il cognome dell'attore.