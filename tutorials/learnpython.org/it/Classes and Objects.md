Oggetti sono un'incapsulazione di variabili e funzioni in un'unica entità. Gli oggetti ottengono le loro variabili e funzioni dalle classi. Le classi sono essenzialmente un modello per creare i tuoi oggetti.

Una classe molto semplice potrebbe apparire in questo modo:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Spiegheremo perché devi includere quel "self" come parametro un po' più avanti. Prima, per assegnare la classe (modello) sopra a un oggetto faremmo quanto segue:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Ora la variabile "myobjectx" contiene un oggetto della classe "MyClass" che contiene la variabile e la funzione definite all'interno della classe chiamata "MyClass".

### Accessing Object Variables

Per accedere alla variabile all'interno del nuovo oggetto creato "myobjectx" faremmo quanto segue:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Quindi, per esempio, quanto segue stamperebbe la stringa "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Puoi creare più oggetti diversi che sono della stessa classe (hanno le stesse variabili e funzioni definite). Tuttavia, ogni oggetto contiene copie indipendenti delle variabili definite nella classe. Per esempio, se dovessimo definire un altro oggetto con la classe "MyClass" e poi cambiare la stringa nella variabile sopra:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Poi stampare entrambi i valori
    print(myobjectx.variable)
    print(myobjecty.variable)

### Accessing Object Functions

Per accedere a una funzione all'interno di un oggetto si utilizza una notazione simile a quella per accedere a una variabile:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Quanto sopra stamperebbe il messaggio, "This is a message inside the class."

### __init__()

La funzione `__init__()`, è una funzione speciale chiamata quando la classe viene inizializzata.
È usata per assegnare valori in una classe.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Stampa '7'
    
Esercizio
--------

Abbiamo una classe definita per i veicoli. Crea due nuovi veicoli chiamati car1 e car2.
Imposta car1 come una decappottabile rossa che vale $60,000.00 con un nome di Fer,
e car2 come un furgone blu chiamato Jump che vale $10,000.00.