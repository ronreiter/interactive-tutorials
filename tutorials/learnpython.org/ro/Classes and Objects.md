Obiectele sunt o încapsulare a variabilelor și funcțiilor într-o singură entitate. Obiectele își obțin variabilele și funcțiile din clase. Clasele sunt, în esență, un șablon pentru a crea obiectele tale.

O clasă de bază ar arăta cam așa:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Vom explica de ce trebuie să includem acel "self" ca parametru puțin mai târziu. Mai întâi, pentru a atribui clasa (șablonul) de mai sus unui obiect, ai proceda astfel:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Acum, variabila "myobjectx" deține un obiect al clasei "MyClass" care conține variabila și funcția definite în cadrul clasei numite "MyClass".

### Accesarea Variabilelor unui Obiect

Pentru a accesa variabila din cadrul noului obiect creat "myobjectx", ai proceda astfel:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Deci, de exemplu, mai jos ar afișa șirul "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Poți crea mai multe obiecte diferite care sunt ale aceleași clase(au aceleași variabile și funcții definite). Totuși, fiecare obiect conține copii independente ale variabilelor definite în clasă. De exemplu, dacă am defini un alt obiect cu clasa "MyClass" și apoi am schimba șirul în variabila de mai sus:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Apoi afișăm ambele valori
    print(myobjectx.variable)
    print(myobjecty.variable)


### Accesarea Funcțiilor unui Obiect

Pentru a accesa o funcție dintr-un obiect folosești o notație similară cu cea pentru accesarea unei variabile:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Cele de mai sus ar afișa mesajul, "This is a message inside the class."

### __init__()

Funcția `__init__()`, este o funcție specială care este apelată când clasa este inițiată. Este folosită pentru atribuirea de valori într-o clasă.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber())  # Afișează '7'
    
Exercițiu
--------

Avem o clasă definită pentru vehicule. Creează două vehicule noi, numite car1 și car2. Setați car1 să fie un decapotabil roșu în valoare de $60,000.00 cu numele Fer, și car2 să fie o camionetă albastră numită Jump în valoare de $10,000.00.