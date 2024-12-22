Python folosește logica booleană pentru a evalua condițiile. Valorile booleene True și False sunt returnate atunci când o expresie este comparată sau evaluată. De exemplu:

x = 2
print(x == 2) # prints out True
print(x == 3) # prints out False
print(x < 3) # prints out True

Observați că atribuirea de variabile se face folosind un singur operator egal "=", în timp ce comparația între două variabile se face folosind operatorul dublu egal "==". Operatorul "diferență" este marcat ca "!=".

### Operatorii booleani

Operatorii booleani "and" și "or" permit construirea de expresii booleene complexe, de exemplu:

name = "John"
age = 23
if name == "John" and age == 23:
    print("Your name is John, and you are also 23 years old.")

if name == "John" or name == "Rick":
    print("Your name is either John or Rick.")

### Operatorul "in"

Operatorul "in" poate fi folosit pentru a verifica dacă un obiect specificat există într-un container de obiecte iterabile, cum ar fi o listă:

name = "John"
if name in ["John", "Rick"]:
    print("Your name is either John or Rick.")

Python folosește indentarea pentru a defini blocurile de cod, în loc de acolade. Indentarea standard în Python este de 4 spații, deși taburile și orice altă dimensiune a spațiului vor funcționa, atâta timp cât este consecventă. Observați că blocurile de cod nu au nevoie de nicio terminare.

Iată un exemplu de utilizare a instrucțiunii "if" în Python folosind blocuri de cod:

statement = False
another_statement = True
if statement is True:
    # do something
    pass
elif another_statement is True: # else if
    # do something else
    pass
else:
    # do another thing
    pass

De exemplu:

x = 2
if x == 2:
    print("x equals two!")
else:
    print("x does not equal to two.")

O instrucțiune este evaluată ca adevărată dacă unul dintre următoarele este corect:
1. Variabila booleană "True" este dată sau calculată folosind o expresie, cum ar fi o comparație aritmetică.
2. Un obiect care nu este considerat "gol" este transmis.

Iată câteva exemple de obiecte care sunt considerate ca fiind goale:
1. Un șir de caractere gol: ""
2. O listă goală: []
3. Numărul zero: 0
4. Variabila booleană falsă: False

### Operatorul 'is'

Spre deosebire de operatorul dublu egal "==", operatorul "is" nu compară valorile variabilelor, ci însăși instanțele. De exemplu:

x = [1,2,3]
y = [1,2,3]
print(x == y) # Prints out True
print(x is y) # Prints out False

### Operatorul "not"

Utilizarea "not" înainte de o expresie booleană o inversează:

print(not False) # Prints out True
print((not False) == (False)) # Prints out False

Exercițiu
--------

Schimbați variabilele din prima secțiune, astfel încât fiecare instrucțiune "if" să se rezolve ca True.