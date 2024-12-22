I decoratori ti permettono di fare semplici modifiche agli oggetti richiamabili come [funzioni](http://www.learnpython.org/en/Functions ""), [metodi o classi](http://www.learnpython.org/en/Classes%20and%20Objects ""). In questo tutorial ci occuperemo delle funzioni. La sintassi

    @decorator
    def functions(arg):
        return "value"

è equivalente a:

    def function(arg):
        return "value"
    function = decorator(function) # questo passa la funzione al decoratore e la riassegna alla funzione

Come avrai visto, un decoratore è solo un'altra funzione che prende una funzione e ne restituisce una. Ad esempio, potresti fare questo:

    def repeater(old_function):
        def new_function(*args, **kwds): # Vedi learnpython.org/en/Multiple%20Function%20Arguments per come funzionano *args e **kwds
            old_function(*args, **kwds) # eseguiamo la vecchia funzione
            old_function(*args, **kwds) # lo facciamo due volte
        return new_function # dobbiamo restituire la new_function, altrimenti non verrebbe riassegnata al valore

Questo farebbe ripetere una funzione due volte.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Puoi anche far cambiare l'output

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # modifica il valore di ritorno
        return new_function

cambiare l'input

    def double_Ii(old_function):
        def new_function(arg): # funziona solo se la vecchia funzione ha un argomento
            return old_function(arg * 2) # modifica l'argomento passato
        return new_function

e fare controlli.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Questo provoca un errore, il che è meglio che fare la cosa sbagliata
            old_function(arg)
        return new_function

Diciamo che vuoi moltiplicare l'output per una quantità variabile. Potresti definire il decoratore e usarlo come segue:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # restituisce il nuovo generatore
    
    # Utilizzo
    @multiply(3) # multiply non è un generatore, ma multiply(3) lo è
    def return_num(num):
        return num
        
    # Ora return_num è decorato e riassegnato a se stesso
    return_num(5) # dovrebbe restituire 15

Puoi fare qualsiasi cosa con la vecchia funzione, persino ignorarla completamente! I decoratori avanzati possono anche manipolare la stringa di documentazione e il numero di argomenti.
Per alcuni decoratori fantasiosi, vai su <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Esercizio
--------
Crea una fabbrica di decoratori che restituisce un decoratore che decora funzioni con un argomento. La fabbrica dovrebbe prendere un argomento, un tipo, e poi restituire un decoratore che fa in modo che la funzione controlli se l'input è del tipo corretto. Se è sbagliato, dovrebbe stampare("Bad Type") (In realtà, dovrebbe sollevare un errore, ma il sollevamento di errori non è in questo tutorial). Usare isinstance(object, type_of_object) o type(object) potrebbe aiutare.