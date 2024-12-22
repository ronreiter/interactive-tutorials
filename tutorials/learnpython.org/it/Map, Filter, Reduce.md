Map, Filter e Reduce sono paradigmi della programmazione funzionale. Consentono al programmatore (a te) di scrivere codice più semplice e breve, senza necessariamente dover preoccuparsi di complessità come cicli e ramificazioni.

Fondamentalmente, queste tre funzioni ti permettono di applicare una funzione su un numero di iterabili, in un colpo solo. ```map``` e ```filter``` sono integrati in Python (nel modulo ```__builtins__```) e non richiedono importazione. ```reduce```, invece, deve essere importato in quanto si trova nel modulo ```functools```. Cerchiamo di capire meglio come funzionano, iniziando con ```map```.

#### Map
La funzione ```map()``` in Python ha la seguente sintassi:

```map(func, *iterables)```

Dove ```func``` è la funzione su cui verrà applicato ciascun elemento in ```iterables``` (quanti sono). Noti l'asterisco (```*```) su ```iterables```? Significa che possono esserci tanti iterabili quanti ne sono necessari, a condizione che ```func``` abbia esattamente quel numero di argomenti di input richiesti. Prima di passare a un esempio, è importante notare i seguenti punti:

1. In Python 2, la funzione ```map()``` restituisce una lista. In Python 3, tuttavia, la funzione restituisce un ```oggetto map``` che è un oggetto generatore. Per ottenere il risultato come lista, può essere chiamata la funzione integrata ```list()``` sull'oggetto map. i.e. ```list(map(func, *iterables))```
2. Il numero di argomenti per ```func``` deve essere il numero di ```iterables``` elencati.

Vediamo come queste regole si applicano con i seguenti esempi.

Supponiamo di avere una lista (```iterable```) dei miei nomi di animali domestici preferiti, tutti in minuscolo, e li voglio in maiuscolo. Tradizionalmente, in stile python normale, farei qualcosa del genere:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Che produrrebbe quindi ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Con le funzioni ```map()```, non è solo più facile, ma è anche molto più flessibile. Faccio semplicemente così:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Che produrrebbe lo stesso risultato. Nota che utilizzando la sintassi ```map()``` definita sopra, ```func``` in questo caso è ```str.upper``` e ```iterables``` è la lista ```my_pets``` -- solo un iterabile. Nota anche che non abbiamo chiamato la funzione ```str.upper``` (facendo questo: ```str.upper()```), poiché la funzione map lo fa per noi su _ogni elemento nella lista ```my_pets```_.

Ancora più importante da notare è che la funzione ```str.upper``` richiede solo **un** argomento per definizione e quindi abbiamo passato solo **un** iterabile. Quindi, _se la funzione che stai passando richiede due, tre o n argomenti_, allora _devi passare due, tre o n iterabili ad essa_. Lasciami chiarire con un altro esempio.

Supponiamo di avere una lista di aree di cerchi che ho calcolato da qualche parte, tutte con cinque cifre decimali. E devo arrotondare ciascun elemento della lista fino alla sua posizione decimale, il che significa che devo arrotondare il primo elemento della lista a un decimale, il secondo elemento della lista a due decimali, il terzo elemento della lista a tre decimali, ecc. Con ```map()``` questo è un gioco da ragazzi. Vediamo come.

Python ci benedice già con la funzione integrata ```round()``` che accetta due argomenti: il numero da arrotondare e il numero di decimali verso cui arrotondare il numero. Quindi, poiché la funzione richiede **due** argomenti, dobbiamo passare **due** iterabili.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Vedi la bellezza di ```map()```? Riesci a immaginare la flessibilità che evoca?

La funzione ```range(1, 7)``` funge da secondo argomento per la funzione ```round``` (il numero di decimali richiesti per iterazione). Quindi mentre ```map``` scorre ```circle_areas```, durante la prima iterazione, il primo elemento di ```circle_areas```, ```3.56773``` viene passato insieme al primo elemento di ```range(1,7)```, ```1``` a ```round```, facendolo diventare effettivamente ```round(3.56773, 1)```. Durante la seconda iterazione, il secondo elemento di ```circle_areas```, ```5.57668``` insieme al secondo elemento di ```range(1,7)```, ```2``` viene passato a ```round``` facendolo tradurre in ```round(5.57668, 2)```. Questo accade fino al termine della lista ```circle_areas```.

Sono sicuro che ti stai chiedendo: "Cosa succede se passo un iterabile inferiore o superiore alla lunghezza del primo iterabile? Cioè, cosa succede se passo ```range(1, 3)``` o ```range(1, 9999)``` come secondo iterabile nella funzione sopra". E la risposta è semplice: niente! Ok, non è vero. Non succede "niente" nel senso che la funzione ```map()``` non solleva alcuna eccezione, semplicemente itera sugli elementi fino a quando non può trovare un secondo argomento per la funzione, a quel punto semplicemente si ferma e restituisce il risultato.

Quindi, ad esempio, se valuti ```result = list(map(round, circle_areas, range(1, 3)))```, non otterrai alcun errore anche se la lunghezza di ```circle_areas``` e la lunghezza di ```range(1, 3)``` differiscono. Invece, questo è ciò che fa Python: Prende il primo elemento di ```circle_areas``` e il primo elemento di ```range(1,3)``` e lo passa a ```round```. ```round``` lo valuta quindi salva il risultato. Poi passa alla seconda iterazione, secondo elemento di ```circle_areas``` e secondo elemento di ```range(1,3)```, ```round``` lo salva di nuovo. Ora, nella terza iterazione (```circle_areas``` ha un terzo elemento), Python prende il terzo elemento di ```circle_areas``` e poi cerca di prendere il terzo elemento di ```range(1,3)```, ma poiché ```range(1,3)``` non ha un terzo elemento, Python semplicemente si ferma e restituisce il risultato, che in questo caso sarebbe semplicemente ```[3.6, 5.58]```. 

Avanti, provaci.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

La stessa cosa accade se ```circle_areas``` è inferiore alla lunghezza del secondo iterabile. Python semplicemente si ferma quando non riesce a trovare il prossimo elemento in uno degli iterabili. 

Per consolidare la nostra conoscenza della funzione ```map()```, la useremo per implementare la nostra funzione personalizzata ```zip()```. La funzione ```zip()``` è una funzione che accetta un numero di iterabili e poi crea una tupla contenente ciascuno degli elementi negli iterabili. Come ```map()```, in Python 3, restituisce un oggetto generatore, che può essere facilmente convertito in una lista chiamando la funzione integrata ```list``` su di esso. Usa la sessione dell'interprete qui sotto per avere una presa su ```zip()``` prima di crearne uno nostro con ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Come bonus, riesci a indovinare cosa succederebbe nella sessione sopra se ```my_strings``` e ```my_numbers``` non avessero la stessa lunghezza? No? provaci! Cambia la lunghezza di uno di loro.

Passiamo alla nostra funzione personalizzata ```zip()```!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Guarda quello! Abbiamo lo stesso risultato di ```zip```.

Hai anche notato che non ho nemmeno bisogno di creare una funzione utilizzando il modo standard ```def my_function()```? Ecco quanto è flessibile ```map()```, e Python in generale! Ho semplicemente usato una funzione ```lambda```. Questo non vuol dire che usare il metodo di definizione della funzione standard (di ```def function_name()```) non sia consentito, lo è ancora. Preferisco semplicemente scrivere meno codice (essere "Pythonic").

Questo è tutto sulla mappa. Passiamo a ```filter()```

#### Filter
Mentre ```map()``` passa ogni elemento nell'iterabile attraverso una funzione e restituisce il risultato di tutti gli elementi che sono passati attraverso la funzione, ```filter()```, innanzitutto, richiede che la funzione restituisca valori booleani (vero o falso) e poi passa ciascun elemento nell'iterabile attraverso la funzione, "filtrando" via quelli che sono falsi. Ha la seguente sintassi:

```filter(func, iterable)```

I seguenti punti devono essere notati riguardo a ```filter()```:

1. A differenza di ```map()```, è richiesto solo un iterabile.
2. L'argomento ```func``` è richiesto per restituire un tipo booleano. Se non lo fa, ```filter``` restituisce semplicemente l'```iterable``` passato ad esso. Inoltre, poiché è richiesto un solo iterabile, è implicito che ```func``` deve prendere solo un argomento.
3. ```filter``` passa ciascun elemento nell'iterabile attraverso ```func``` e restituisce **solo** quelli che valutano come veri. Voglio dire, è proprio lì nel nome: un "filtro".

Vediamo alcuni esempi

Quella che segue è una lista (```iterable```) dei voti di 10 studenti in un esame di Chimica. Filtriamo quelli che hanno superato con voti superiori a 75...usando ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Il prossimo esempio sarà un rilevatore di palindromi. Un "palindromo" è una parola, una frase o una sequenza che legge lo stesso indietro come in avanti. Filtriamo le parole che sono palindromi da una tupla (```iterable```) di sospetti palindromi.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Che dovrebbe produrre ```['madam', 'anutforajaroftuna']```.

Davvero carino, no? Infine, ```reduce()```

#### Reduce
```reduce``` applica una funzione **di due argomenti** in modo cumulativo agli elementi di un iterabile, opzionalmente iniziando con un argomento iniziale. Ha la seguente sintassi:

```reduce(func, iterable[, initial])```

Dove ```func``` è la funzione su cui ciascun elemento nell'```iterable``` viene applicato in modo cumulativo, e ```initial``` è il valore opzionale che viene posizionato prima degli elementi dell'iterabile nel calcolo, e serve come valore predefinito quando l'iterabile è vuoto. I seguenti punti devono essere notati riguardo a ```reduce()```:
1. ```func``` richiede due argomenti, il primo dei quali è il primo elemento nell'```iterable``` (se ```initial``` non è fornito) e il secondo elemento nell'```iterable```. Se ```initial``` è fornito, diventa il primo argomento di ```func``` e il primo elemento nell'```iterable``` diventa il secondo elemento.
2. ```reduce``` "riduce" (lo so, perdonami) ```iterable``` in un unico valore.

Come al solito, vediamo alcuni esempi.

Creiamo la nostra versione della funzione integrata ```sum()``` di Python. La funzione ```sum()``` restituisce la somma di tutti gli elementi dell'iterable passato ad essa.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

Il risultato, come ci si aspetta, è ```68```.

Quindi, cosa è successo?

Come al solito, tutto riguarda le iterazioni: ```reduce``` prende il primo e il secondo elemento in ```numbers``` e li passa rispettivamente a ```custom_sum```. ```custom_sum``` computa la loro somma e la restituisce a ```reduce```. ```reduce``` prende quindi quel risultato e lo applica come primo elemento a ```custom_sum``` e prende il prossimo elemento (terzo) in ```numbers``` come secondo elemento a ```custom_sum```. Questo avviene in modo continuo (cumulativo) fino a quando ```numbers``` non viene esaurito.

Vediamo cosa succede quando uso il valore opzionale ```initial```.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Il risultato, come ci si aspetta, è ```78``` perché ```reduce```, inizialmente, usa ```10``` come primo argomento per ```custom_sum```.

Questo è tutto sui Map, Reduce e Filter di Python. Prova gli esercizi qui sotto per verificare la tua comprensione di ciascuna funzione.

Exercise
--------
In questo esercizio, utilizzerai ciascuno di ```map```, ```filter```, e ```reduce``` per correggere il codice rotto.