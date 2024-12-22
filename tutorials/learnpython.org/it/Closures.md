Un Closures è un oggetto funzione che ricorda i valori negli ambiti circostanti anche se non sono presenti in memoria. Procediamo passo dopo passo.

Innanzitutto, una **Funzione Annidata** è una funzione definita all'interno di un'altra funzione. È molto importante notare che le funzioni annidate possono accedere alle variabili dell'ambito circostante. Tuttavia, almeno in Python, sono solo in lettura. Tuttavia, si può utilizzare esplicitamente la parola chiave "nonlocal" con queste variabili per modificarle.

Ad esempio:

    def transmit_to_space(message):
        "Questa è la funzione circostante"
        def data_transmitter():
            "La funzione annidata"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Messaggio di prova"))

Questo funziona bene poiché la funzione 'data_transmitter' può accedere al 'message'. Per dimostrare l'uso della parola chiave "nonlocal", consideriamo questo:

    def print_msg(number):
        def printer():
            "Qui stiamo usando la parola chiave nonlocal"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Senza la parola chiave nonlocal, l'output sarebbe "3 9"; tuttavia, con il suo utilizzo, otteniamo "3 3", cioè il valore della variabile "number" viene modificato.

Ora, che ne dici di restituire l'oggetto funzione anziché chiamare la funzione annidata all'interno. (Ricorda che anche le funzioni sono oggetti. (È Python.))

    def transmit_to_space(message):
        "Questa è la funzione circostante"
        def data_transmitter():
            "La funzione annidata"
            print(message)
        return data_transmitter

E chiamiamo la funzione nel seguente modo:

      def transmit_to_space(message):
        "Questa è la funzione circostante"
        def data_transmitter():
            "La funzione annidata"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Brucia il Sole!")
  	  fun2()

Anche se l'esecuzione di "transmit_to_space()" è stata completata, il messaggio è stato comunque preservato. Questa tecnica con cui i dati sono legati a un certo codice anche dopo la fine di quelle altre funzioni originali si chiama closures in Python.

VANTAGGIO: I Closures possono evitare l'uso di variabili globali e forniscono una forma di nascondimento dei dati. (Ad esempio, quando ci sono pochi metodi in una classe, usare i closures invece).

Inoltre, i Decorator in Python usano ampiamente i closures.

Esercizio
--------

Crea un ciclo annidato e una closure in Python per creare funzioni che ottengano più funzioni di moltiplicazione usando i closures. Cioè, usando i closures, si potrebbero creare funzioni per creare funzioni multiply_with_5() o multiply_with_4() usando i closures.