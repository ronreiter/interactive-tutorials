Python fornisce librerie JSON integrate per codificare e decodificare JSON.

In Python 2.5, si utilizza il modulo simplejson, mentre in Python 2.7 si utilizza il modulo json. Poiché questo interprete utilizza Python 2.7, utilizzeremo json.

Per utilizzare il modulo json, deve essere prima importato:

    import json

Esistono due formati base per i dati JSON. O in una stringa o nella struttura dati oggetto. La struttura dati oggetto, in Python, consiste in liste e dizionari annidati l'uno nell'altro. La struttura dati oggetto consente di utilizzare i metodi Python (per liste e dizionari) per aggiungere, elencare, cercare e rimuovere elementi dalla struttura dati. Il formato Stringa è principalmente utilizzato per trasferire i dati in un altro programma o caricarli in una struttura dati.

Per caricare JSON indietro in una struttura dati, utilizzare il metodo "loads". Questo metodo prende una stringa e la trasforma nuovamente nella struttura dati json:

    import json 
    print(json.loads(json_string))

Per codificare una struttura dati in JSON, utilizzare il metodo "dumps". Questo metodo prende un oggetto e restituisce una stringa:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python supporta un metodo proprietario di serializzazione dei dati di Python chiamato pickle (e un'alternativa più veloce chiamata cPickle).

Puoi usarlo esattamente nello stesso modo.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

L'obiettivo di questo esercizio è stampare la stringa JSON con la coppia chiave-valore "Me": 800 aggiunta ad essa.

Exercise--------